<?php

/**
 * @file
 * Provides admin form and its handlers for the Vtiger Entity module.
 */

module_load_include('inc', 'vtiger_crm_entity', 'includes/vtiger_crm_entity');

/**
 * Page callback: Vtiger Entity Settings Page.
 */
function vtiger_crm_entity_settings() {

  $vtiger_users = vtiger_crm_get_users_options();
  if (!count($vtiger_users)) {
    drupal_set_message(t('No Vtiger users were found. You should
    <a href="/admin/config/services/vtiger/sync">make a full sync first.</a>'), 'warning');
    return '';
  }

  $output = array();
  $output['header1'] = array(
    '#type' => 'markup',
    '#markup' => '<h3>' . t('Existing mappings') . '</h3><p>' .
      t('The list of mappings that have already been set up.') . '</p>',
  );

  $existing_mappings_html = '';
  // Fetching existing mappings from the DB.
  $existing_mappings = db_query('SELECT * FROM {vtiger_crm_entity_mapping}')
    ->fetchAllAssoc('mid');
  if ($existing_mappings) {
    $rows = array();
    foreach ($existing_mappings as $mapping) {
      $rows[] = array(
        'data' => array(
          $mapping->mid,
          $mapping->drupal_entity,
          $mapping->drupal_entity_bundle,
          $mapping->vtiger_entity,
          l(t('Edit'), 'admin/config/services/vtiger/entity-mapping/' . $mapping->mid . '/edit',
            array('attributes' => array('style' => 'margin-right:.5em;'))) . ' ' .
          l(t('Delete'), 'admin/config/services/vtiger/entity-mapping/' . $mapping->mid . '/delete',
            array('attributes' => array('style' => 'margin-right:.5em;'))),
        ),
      );
    }
    $headers = array(
      t('ID'),
      t('Drupal entity'),
      t('Drupal entity bundle'),
      t('Vtiger module'),
      t('Operations')
    );
    $existing_mappings_html .= theme('table', array(
      'header' => $headers,
      'rows' => $rows,
      'attributes' => array('id' => 'vtiger-entity-new-mappings')
    ));
  }
  else {
    // If no mappings found, display a message.
    $existing_mappings_html = '<p><b>' . t('No existing mappings found. You can create a new one using the form below.') . '</b></p>';
  }
  $output['existing_mappings'] = array(
    '#prefix' => '<div id="existing-mapping-table" style="max-width:54em;margin-top:1em;">',
    '#suffix' => '</div>',
    '#markup' => $existing_mappings_html,
  );
  $output['header2'] = array(
    '#type' => 'markup',
    '#markup' => '<h3 style="margin-top:1.5em;">' . t('Create a new mapping') . '</h3>' .
      t('To create a new mapping, fill the form below.'),
  );
  // Get a new mapping form under a collapsible div (initially collapsed).
  $new_mapping_form = drupal_get_form('vtiger_crm_entity_mapping_form');
  $new_mapping_form_html = drupal_render($new_mapping_form);
  $output['new_mapping'] = array(
    '#markup' => $new_mapping_form_html,
  );
  return drupal_render($output);
}

/**
 * A new mapping creation form.
 *
 * @param int $mid
 *   Existing mapping ID if using form for editing.
 *
 * @see vtiger_crm_entity_mapping_form_validate
 * @see vtiger_crm_entity_mapping_form_form_submit
 */
function vtiger_crm_entity_mapping_form($form, &$form_state, $mid = NULL) {

  // Check for existing values.
  $existing = FALSE;
  if ($mid && is_numeric($mid) && $mid > 0) {
    $existing = vtiger_crm_entity_get_mapping_by_mid($mid);
    $form_state['storage']['mid'] = $mid;
    if (!$existing) {
      drupal_set_message(t('The mapping @num has not been found', array('@num' => $mid)), 'error');
      drupal_goto('admin/config/services/vtiger/entity-mapping');
    }
  }

  // Get basic variables.
  if ($existing) {
    $vtiger_user = !empty($form_state['values']['entity_mapping_base']['assigned_user_id']) ?
      $form_state['values']['entity_mapping_base']['assigned_user_id'] : $existing['assigned_user_id'];
    $entity_type = !empty($form_state['values']['entity_mapping_base']['drupal_entity_type']) ?
      $form_state['values']['entity_mapping_base']['drupal_entity_type'] : $existing['drupal_entity'];
    $bundle = !empty($form_state['values']['entity_mapping_base']['drupal_entity_bundle']) ?
      $form_state['values']['entity_mapping_base']['drupal_entity_bundle'] : $existing['drupal_entity_bundle'];
    $vtiger_module = !empty($form_state['values']['entity_mapping_base']['vtiger_module']) ?
      $form_state['values']['entity_mapping_base']['vtiger_module'] : $existing['vtiger_entity'];
    $existing_mappings = $existing['mappings'];
    $existing_drupal_fields = array_keys($existing_mappings);
    $existing_vtiger_fields = array_values($existing_mappings);
  }
  else {
    $vtiger_user = !empty($form_state['values']['entity_mapping_base']['assigned_user_id']) ?
      $form_state['values']['entity_mapping_base']['assigned_user_id'] : '19x1';
    $entity_type = !empty($form_state['values']['entity_mapping_base']['drupal_entity_type']) ?
      $form_state['values']['entity_mapping_base']['drupal_entity_type'] : 'user';
    $bundle = !empty($form_state['values']['entity_mapping_base']['drupal_entity_bundle']) ?
      $form_state['values']['entity_mapping_base']['drupal_entity_bundle'] : 'user';
    $vtiger_module = !empty($form_state['values']['entity_mapping_base']['vtiger_module']) ?
      $form_state['values']['entity_mapping_base']['vtiger_module'] : 'Leads';
  }

  // Load the file with functions that get options.
  form_load_include($form_state, 'inc', 'vtiger_crm', 'includes/vtiger_crm.options');

  $form['#prefix'] = '<div id="vtiger-entity-new-mapping">';
  $form['#suffix'] = '</div>';

  $form['entity_mapping_base'] = array(
    '#type' => 'fieldset',
    '#title' => 'Entity mapping basic settings',
    '#desription' => t('Specify entity type, bundle and Vtiger module between which the mapping is going to take place.'),
    '#tree' => TRUE,
    '#prefix' => '<div id="entity-mapping-base" class="clearfix">',
    '#suffix' => '</div>',
  );

  $form['entity_mapping_base']['assigned_user_id'] = array(
    '#type' => 'select',
    '#title' => t('Assigned to'),
    '#description' => t('Select a Vtiger CRM user to assign.'),
    '#options' => vtiger_crm_get_users_options(),
    '#default_value' => $vtiger_user,
    '#prefix' => '<div style="float:left;margin-right:2em;max-width:220px;">',
    '#suffix' => '</div>',
    '#required' => TRUE,
  );

  $form['entity_mapping_base']['drupal_entity_type'] = array(
    '#type' => 'select',
    '#title' => t('Drupal Entity type'),
    '#description' => t('One of available fieldable entities.'),
    '#options' => vtiger_crm_entity_get_fieldable_entities_options(),
    '#ajax' => array(
      'callback' => 'vtiger_crm_entity_create_entity_mapping_ajax',
      'wrapper' => 'vtiger-entity-new-mapping',
    ),
    '#prefix' => '<div style="float:left;margin-right:2em;max-width:220px;">',
    '#suffix' => '</div>',
    '#required' => TRUE,
    '#default_value' => $entity_type,
    '#disabled' => (bool) $existing,
  );

  $form['entity_mapping_base']['drupal_entity_bundle'] = array(
    '#type' => 'select',
    '#title' => t('Drupal Entity bundle'),
    '#description' => t('A bundle of the chosen entity.'),
    '#options' => vtiger_crm_entity_get_entity_bundle_options($entity_type),
    '#prefix' => '<div style="float:left;margin-right:2em;max-width:220px;">',
    '#suffix' => '</div>',
    '#required' => TRUE,
    '#default_value' => $bundle,
    '#ajax' => array(
      'callback' => 'vtiger_crm_entity_create_entity_mapping_ajax',
      'wrapper' => 'vtiger-entity-new-mapping',
    ),
    '#disabled' => (bool) $existing,
  );

  $form['entity_mapping_base']['vtiger_module'] = array(
    '#type' => 'select',
    '#title' => t('Vtiger module'),
    '#options' => vtiger_crm_get_vtiger_modules_options(),
    '#prefix' => '<div style="float:left;margin-right:2em;max-width:220px;">',
    '#suffix' => '</div>',
    '#required' => TRUE,
    '#default_value' => $vtiger_module,
    '#ajax' => array(
      'callback' => 'vtiger_crm_entity_create_entity_mapping_ajax',
      'wrapper' => 'vtiger-entity-new-mapping',
    ),
    '#disabled' => (bool) $existing,
  );

  $form['field_mapping'] = array(
    '#type' => 'fieldset',
    '#title' => t('Mapping Drupal entity values to Vtiger values'),
    '#tree' => TRUE,
    '#prefix' => '<div id="field-mapping" class="clearfix">',
    '#suffix' => '</div>',
  );

  // Set description about required fields if the vTyger module is chosen.
  if ($vtiger_module) {
    $required_fields = vtiger_crm_module_get_fields($vtiger_module, TRUE);
    // Unset assigned_user_id from required since we ask it in a separate input.
    unset ($required_fields['assigned_user_id']);
    $form_state['storage']['vtiger_required_fields'] = array_keys($required_fields);
    if (count($required_fields)) {
      $description = t('Every Vtiger module has its default fields.
      For @vtiger_module, they are the following: ', array('@vtiger_module' => $vtiger_module));
      $description .= theme('item_list', array('items' => $required_fields));
      $description .= t('If you do not map them, default values from
        <a href="/admin/config/services/vtiger">the Vtiger main configuration page</a>
        will be used. <br/>Make sure that the types of both Drupal and Vtiger entities
        fields are compatible with each other.');
      $form['field_mapping']['#description'] = $description;
    }
  }

  // Display 3 rows by default for new forms
  // Or more if the number already added.
  if (isset($form_state['storage']['mappings'])) {
    $mapping_lines = $form_state['storage']['mappings'];
  }
  elseif (!empty($existing_mappings)) {
    $mapping_lines = count($existing_mappings);
    $form_state['storage']['mappings'] = $mapping_lines;
  }
  else {
    $mapping_lines = 3;
  }

  $entity_fields = vtiger_crm_get_drupal_entity_properties_and_fields_options($entity_type, $bundle);
  $vtiger_fields = vtiger_crm_get_vtiger_module_fields_options($vtiger_module);

  for ($i = 0; $i < $mapping_lines; $i++) {
    $form['field_mapping']['table'][$i]['drupal_entity_field'] = array(
      '#type' => 'select',
      '#options' => $entity_fields,
      '#empty_option' => t('- Select -'),
      '#default_value' => !empty($existing_drupal_fields[$i]) ? $existing_drupal_fields[$i] : '',
    );

    $form['field_mapping']['table'][$i]['vtiger_entity_field'] = array(
      '#type' => 'select',
      '#options' => $vtiger_fields,
      '#empty_option' => t('- Select -'),
      '#default_value' => !empty($existing_vtiger_fields[$i]) ? $existing_vtiger_fields[$i] : '',
    );
  }

  // Link for adding.
  $form['field_mapping']['add_mapping'] = array(
    '#type' => 'button',
    '#value' => t('Add a mapping line'),
    '#ajax' => array(
      'callback' => 'vtiger_crm_entity_create_entity_mapping_ajax',
      'wrapper' => 'vtiger-entity-new-mapping',
    ),
    '#weight' => 5,
    '#prefix' => '<div class="clearfix">',
    '#attributes' => array('style' => 'float:left;margin-right:1em;'),
  );

  // Link for removal.
  $form['field_mapping']['remove_mapping'] = array(
    '#type' => 'button',
    '#value' => t('Remove the last mapping line'),
    '#ajax' => array(
      'callback' => 'vtiger_crm_entity_create_entity_mapping_ajax',
      'wrapper' => 'vtiger-entity-new-mapping',
    ),
    '#weight' => 6,
    '#suffix' => '</div>',
    '#attributes' => array('style' => 'float:left;margin-right:1em;'),
  );

  // Do not remove a line if only one of them left.
  if ($mapping_lines === 1) {
    $form['field_mapping']['remove_mapping']['#disabled'] = TRUE;
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save mapping'),
  );

  return $form;
}

/**
 * Ajax callback: reload the entire form.
 */
function vtiger_crm_entity_create_entity_mapping_ajax($form) {
  return $form;
}

/**
 * Form validate callback.
 */
function vtiger_crm_entity_mapping_form_validate($form, &$form_state) {
  $trigger_id = $form_state['triggering_element']['#id'];

  // Unset value of bundle if entity type changed to avoid inconsistencies.
  if (strpos($trigger_id, 'edit-entity-mapping-base-drupal-entity-type') === 0) {
    $form_state['values']['entity_mapping_base']['drupal_entity_bundle'] = FALSE;
  }

  if (strpos($trigger_id, 'add-mapping') > 0) {
    // Add mapping button pressed, add one more row.
    if (!empty($form_state['storage']['mappings'])) {
      $form_state['storage']['mappings']++;
    }
    else {
      $form_state['storage']['mappings'] = 4;
    }
  }

  if (strpos($trigger_id, 'remove-mapping') > 0) {
    // Remove mapping button pressed, remove the last row.
    if (!empty($form_state['storage']['mappings'])) {
      // If not first time change, decrement if more than 1.
      if ($form_state['storage']['mappings'] > 1) {
        $form_state['storage']['mappings']--;
      }
    }
    else {
      // If first time, set to 2 (initially there was 3).
      $form_state['storage']['mappings'] = 2;
    }
  }
  // Check if all required fields are present.
  if (strpos($trigger_id, 'edit-submit') === 0) {
    // Getting rid of duplicates.
    $submitted_mappings = $form_state['values']['field_mapping']['table'];
    $mapped_entity_fields = array();
    $mapped_vtiger_fields = array();
    // Remove incomplete pairs. Collect filled Vtiger fields for further check.
    foreach ($submitted_mappings as $key => $value) {
      if (empty($value['drupal_entity_field']) || empty($value['vtiger_entity_field'])) {
        unset($submitted_mappings[$key]);
        continue;
      }
      $mapped_entity_fields[] = $value['drupal_entity_field'];
      $mapped_vtiger_fields[] = $value['vtiger_entity_field'];
    }

    $required_fields = $form_state['storage']['vtiger_required_fields'];
    $unfilled_required = array_diff($required_fields, $mapped_vtiger_fields);
    if (count($unfilled_required)) {
      form_set_error('', t('Mappings for some fields that are required by Vtiger are not chosen.'));
    }

    // Checking if such mapping already exists for new mappings.
    if (empty($form_state['storage']['mid'])) {
      $mname = $form_state['values']['entity_mapping_base']['drupal_entity_type'] . '_' .
        $form_state['values']['entity_mapping_base']['drupal_entity_bundle'] . '_' .
        $form_state['values']['entity_mapping_base']['vtiger_module'];
      $existing = vtiger_crm_entity_get_mapping_by_mname($mname);
      if ($existing) {
        form_set_error('', t('The chosen Drupal entity is already mapped to the chosen Vtiger module. You can !link.',
            array('!link' => l(t('edit it here'), '/admin/config/services/vtiger/entity-mapping/' . $existing['mid'] . '/edit')))
        );
      }
    }

    if ($mapped_entity_fields !== array_unique($mapped_entity_fields)) {
      form_set_error('', t('You have used one or more Drupal Entity fields twice.'));
    }

    if ($mapped_vtiger_fields !== array_unique($mapped_vtiger_fields)) {
      form_set_error('', t('You have used one or more Vtiger fields twice.'));
    }
  }
}

/**
 * Form submit callback: rebuild form or save a mapping.
 */
function vtiger_crm_entity_mapping_form_submit(&$form, &$form_state) {
  $submitted_mappings = $form_state['values']['field_mapping']['table'];
  $formatted_mappings = array();
  foreach ($submitted_mappings as $value) {
    // Do not store a couple if either part is empty.
    if (empty($value['drupal_entity_field']) || empty($value['vtiger_entity_field'])) {
      continue;
    }
    $formatted_mappings[$value['drupal_entity_field']] = $value['vtiger_entity_field'];
  }
  $drupal_entity = $form_state['values']['entity_mapping_base']['drupal_entity_type'];
  $drupal_entity_bundle = $form_state['values']['entity_mapping_base']['drupal_entity_bundle'];
  $vtiger_entity = $form_state['values']['entity_mapping_base']['vtiger_module'];
  $assigned_user_id = $form_state['values']['entity_mapping_base']['assigned_user_id'];
  $mid = !empty($form_state['storage']['mid']) ? $form_state['storage']['mid'] : NULL;
  $saved = vtiger_crm_entity_save_mapping($drupal_entity, $drupal_entity_bundle,
    $vtiger_entity, $assigned_user_id, $formatted_mappings, $mid);
  if ($saved) {
    drupal_set_message(t('The mapping has been successfully saved!'));
  }
  else {
    drupal_set_message(t('Could not save your mapping to the database.'), 'error');
  }
}

/**
 * Form callback: deletion confirmation form.
 */
function vtiger_crm_entity_confirm_mid_delete($form, &$form_state, $mid) {
  $existing = vtiger_crm_entity_get_mapping_by_mid($mid);
  if (!$existing) {
    drupal_set_message(t('The mapping @num has not been found', array('@num' => $mid)), 'error');
    drupal_goto('admin/config/services/vtiger/entity-mapping');
  }

  $form = array();
  $form['mid'] = array(
    '#type' => 'value',
    '#value' => $mid,
  );

  $confirm_form = confirm_form(
    $form,
    t('Are you sure you want to delete this mapping?'),
    'admin/config/services/vtiger/entity-mapping',
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
  return $confirm_form;
}

/**
 * Deletion callback: delete selected mapping.
 */
function vtiger_crm_entity_confirm_mid_delete_submit($form, $form_state) {
  $mid = $form_state['values']['mid'];
  vtiger_crm_entity_delete_mapping_by_mid($mid);
  drupal_set_message(t('The mapping has been successfully deleted.'));
  drupal_goto('admin/config/services/vtiger/entity-mapping');
}
