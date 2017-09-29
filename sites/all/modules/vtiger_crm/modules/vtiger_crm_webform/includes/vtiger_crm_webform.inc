<?php
/**
 * @file
 * Custom functions for vtiger_webform.
 */

/**
 * Mapping settings form.
 *
 * @see vtiger_webform_mapping_form_validate()
 * @see vtiger_webform_mapping_form_submit()
 */
function vtiger_crm_webform_mapping_form($form, &$form_state, $node) {
  form_load_include($form_state, 'inc', 'vtiger_crm', 'includes/vtiger_crm.options');

  $vtiger_modules = vtiger_crm_get_vtiger_modules_options();
  $vtiger_module = !empty($form_state['values']['vtiger_module']) ? $form_state['values']['vtiger_module'] : 'Leads';

  $vtiger_users = vtiger_crm_get_users_options();
  if (!count($vtiger_users)) {
    drupal_set_message(t('No Vtiger users were found. You should
    <a href="/admin/config/services/vtiger/sync">make a full sync first.</a>'), 'warning');
    return $form;
  }

  $form_state['storage']['nid'] = $node->nid;

  $existing_mapping = db_query('SELECT vwm.enabled, vwm.assigned_user_id, vwm.mappings FROM {vtiger_crm_webform_mapping} vwm
    WHERE vwm.nid = :nid', array(':nid' => $node->nid))->fetchAssoc();
  if ($existing_mapping) {
    $enabled = $existing_mapping['enabled'];
    $assigned_user_id = $existing_mapping['assigned_user_id'];
    $existing_mappings = unserialize($existing_mapping['mappings']);
  }

  $form['#prefix'] = '<div id="webform-field-mappings-form">';
  $form['#suffix'] = '</div>';

  $form['enabled'] = array(
    '#title' => t('Enabled'),
    '#description' => t('Uncheck if you want to turn off the transfer of
        this webform\'s submissions to Vtiger CRM.'),
    '#type' => 'checkbox',
    '#default_value' => isset($enabled) ? $enabled : 1,
  );

  $form['vtiger_module'] = array(
    '#type' => 'select',
    '#title' => t('Vtiger module'),
    '#description' => t("The Vtiger module webform's values will be mapped to."),
    '#options' => $vtiger_modules,
    '#default_value' => $vtiger_module,
    '#required' => TRUE,
    '#ajax' => array(
      'callback' => 'vtiger_crm_webform_mapping_form_ajax',
      'wrapper' => 'webform-field-mappings-form',
      'effect' => 'fade',
    ),
  );

  $form['assigned_to'] = array(
    '#type' => 'select',
    '#title' => t('Assigned to'),
    '#description' => t("Select a Vtiger user the created entity will be mapped to."),
    '#options' => $vtiger_users,
    '#default_value' => isset($assigned_user_id) ? $assigned_user_id : '19x1',
    '#required' => TRUE,
  );

  $required_fields = vtiger_crm_module_get_fields($vtiger_module, TRUE);
  // Unset assigned_user_id from required since we ask it in a separate input.
  unset ($required_fields['assigned_user_id']);
  $form_state['storage']['vtiger_required_fields'] = array_keys($required_fields);

  $form['mappings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Field mappings'),
    '#tree' => TRUE,
    '#description' => t('Set up mapping between your webform and a Vtiger module.
       Note that Vtiger has required fields, and for a proper transfer all of
       them should be filled, so you might want to set the corresponding webform
       fields required as well. <br/>For %vtiger_module required fields are the
       following: ', array('%vtiger_module' => $vtiger_module)) .
      theme('item_list', array('items' => $required_fields)) . t('If you do not map them, default
      values from <a href="/admin/config/services/vtiger">the Vtiger main
      configuration page</a> will be used. <br/>Make sure that you have values
      for all the required fields, because otherwise your request will fail.'),
  );

  $components = $node->webform['components'];
  foreach ($components as $component) {

    // Skip non-value components.
    if (in_array($component['type'], array('markup', 'pagebreak', 'grid'))) {
      continue;
    }
    $cid = $component['cid'];
    $cname = $component['name'];
    $form['mappings'][$cid]['component'] = array(
      '#markup' => '<b>' . $cname . '</b>',
    );
    $form['mappings'][$cid]['vtiger_field'] = array(
      '#type' => 'select',
      '#options' => vtiger_crm_get_vtiger_module_fields_options($vtiger_module),
      '#empty_option' => t('- None -'),
      '#default_value' => isset($existing_mappings[$cid]) ? $existing_mappings[$cid] : '',
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save mapping'),
    '#weight' => 228,
  );

  return $form;
}

/**
 * Ajax callback: reload Vtiger fields when module is changed.
 */
function vtiger_crm_webform_mapping_form_ajax($form, $form_state) {
  return $form;
}

/**
 * Validation callback: check for duplicates and if required fields are filled.
 */
function vtiger_crm_webform_mapping_form_validate($form, $form_state) {
  $required_fields = $form_state['storage']['vtiger_required_fields'];
  $submitted_mappings = $form_state['values']['mappings'];
  $submitted_mappings_values = array();
  foreach ($submitted_mappings as $cid => $mapping) {
    if (empty($mapping['vtiger_field'])) {
      unset($form_state['values']['mappings'][$cid]);
      continue;
    }
    $submitted_mappings_values[] = $mapping['vtiger_field'];
  }

  $unfilled_required = array_diff($required_fields, $submitted_mappings_values);
  if (count($unfilled_required)) {
    form_set_error('', t('Mappings for some fields that are required by Vtiger are not selected.'));
  }

  if ($submitted_mappings_values !== array_unique($submitted_mappings_values)) {
    form_set_error('', t('You have used one or more Vtiger fields twice.'));
  }

}

/**
 * Submit callback: save mapping to the database.
 */
function vtiger_crm_webform_mapping_form_submit($form, $form_state) {
  $submitted_mappings = $form_state['values']['mappings'];
  $cleared_mappings = array();
  foreach ($submitted_mappings as $cid => $mapping) {
    if (empty($mapping['vtiger_field'])) {
      continue;
    }
    $cleared_mappings[$cid] = $mapping['vtiger_field'];
  }
  $nid = $form_state['storage']['nid'];
  $enabled = (int) $form_state['values']['enabled'];
  $vtiger_module = $form_state['values']['vtiger_module'];
  $assigned_user_id = $form_state['values']['assigned_to'];
  // Saving mapping to the DB.
  $inserted = vtiger_crm_webform_save_mapping($cleared_mappings, $assigned_user_id, $nid, $vtiger_module, $enabled);
  if ($inserted) {
    drupal_set_message(t('Mappings has been successfully saved!'));
  }
  if ($inserted === 0) {
    drupal_set_message(t('Nothing has been changed.'));
  }
}

/**
 * Get a mapping array by node ID.
 *
 * @param int $nid
 *   The ID of the webform node to get mappings of.
 *
 * @return array
 *   Array of the mappings.
 */
function vtiger_crm_webform_get_mapping($nid) {
  $mapping = db_query('SELECT * FROM {vtiger_crm_webform_mapping} vwm
    WHERE vwm.nid = :nid', array(':nid' => $nid))
    ->fetchAssoc();
  if ($mapping) {
    return $mapping;
  }
  return FALSE;
}

/**
 * Save mappings by node ID.
 *
 * @param array $mapping
 *   Array of the modified mappings to save.
 * @param int $nid
 *   ID of the webform node to save mapping for.
 * @param string $vtiger_module
 *   Vtiger module to be mapped. If false, this field will not be updated.
 * @param bool $enabled
 *   Whether the transferring is enabled for the current webform.
 *
 * @return int
 *   The result of update.
 */
function vtiger_crm_webform_save_mapping($mapping, $assigned_user_id, $nid, $vtiger_module = FALSE, $enabled = TRUE) {
  $mapping = serialize($mapping);
  // Check if mapping already exists.
  $exists = db_query('SELECT * FROM {vtiger_crm_webform_mapping} WHERE nid = :nid',
    array(':nid' => $nid))->fetchField();
  // If mapping already exists.
  if ($exists) {
    $updates = array(
      'mappings' => $mapping,
      'assigned_user_id' => $assigned_user_id,
      'enabled' => $enabled,
    );
    if ($vtiger_module) {
      $updates['vtiger_module'] = $vtiger_module;
    }
    $inserted = db_update('vtiger_crm_webform_mapping')
      ->condition('nid', $nid, '=')
      ->fields($updates)
      ->execute();
  }
  // If creating a new mapping. $vtiger_module is required in this case.
  else {
    $inserted = db_insert('vtiger_crm_webform_mapping')
      ->fields(array(
        'nid',
        'assigned_user_id',
        'vtiger_module',
        'enabled',
        'mappings'
      ))
      ->values(array(
        $nid,
        $assigned_user_id,
        $vtiger_module,
        $enabled,
        $mapping
      ))
      ->execute();
  }
  return $inserted;
}

/**
 * Delete a mapping record by node ID.
 *
 * @param int $nid
 *   The webform node ID mapping of which will be deleted.
 *
 * @return bool
 *   Operation success indicator.
 */
function vtiger_crm_webform_delete_mapping($nid) {
  $deleted = db_delete('vtiger_crm_webform_mapping')
    ->condition('nid', $nid, '=')
    ->execute();
  return $deleted;
}

/**
 * Sends a webform submission to Vtiger according to the preconfigured rules.
 *
 * @param array $submission
 *   Webform submission input.
 */
function vtiger_crm_webform_submission_to_vtiger($submission) {
  $node = node_load($submission['nid']);
  $mapping = db_query('SELECT vwm.enabled, vwm.assigned_user_id, vwm.vtiger_module, vwm.mappings
    FROM {vtiger_crm_webform_mapping} vwm
    WHERE vwm.nid = :nid', array(':nid' => $node->nid))->fetchAssoc();
  if ($mapping && $mapping['enabled']) {
    $vtiger_module = $mapping['vtiger_module'];
    $mapping_fields = unserialize($mapping['mappings']);
    $element = array();
    $element['assigned_user_id'] = $mapping['assigned_user_id'];
    foreach ($mapping_fields as $cid => $field) {
      $type = $node->webform['components'][$cid]['type'];
      // For file type, we'll take a human-readable file name instead of fid.
      if ($type === 'file') {
        $file = file_load($submission->data[$cid][0]);
        $element[$field] = $file->filename;
      }
      else {
        $element[$field] = $submission->data[$cid][0];
      }
    }
    $vtiger_api = new VtigerCrmApi();
    $vtiger_api->create($element, $vtiger_module);
  }
}
