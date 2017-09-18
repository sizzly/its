<?php

/**
 * @file
 * Vtiger settings form.
 */

/**
 * Vtiger settings form.
 */
function vtiger_crm_settings($form, $form_state) {

  $form['authentication'] = array(
    '#type' => 'fieldset',
    '#title' => t('Vtiger credentials'),
    '#collapsible' => FALSE,
  );

  $form['authentication']['vtiger_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
    '#description' => t('Username to use when interacting with Vtiger.'),
    '#default_value' => variable_get('vtiger_crm_username'),
    '#required' => TRUE,
  );

  $form['authentication']['vtiger_webservice_access_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Webservice Access Key'),
    '#description' => t('Webservice access key that can be found on your Vtiger profile page.'),
    '#default_value' => variable_get('vtiger_crm_webservice_access_key'),
    '#required' => TRUE,
  );

  $form['authentication']['vtiger_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Vtiger URL'),
    '#description' => t('URL of your Vtiger installation. Trailing slash will be stripped.'),
    '#default_value' => variable_get('vtiger_crm_url'),
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
  );

  return $form;
}

/**
 * Validate callback.
 *
 * Validates whether it is possible to interact with Vtiger using provided
 * credentials.
 */
function vtiger_crm_settings_validate($form, &$form_state) {
  $username = $form_state['values']['vtiger_username'];
  $webservice_access_key = $form_state['values']['vtiger_webservice_access_key'];
  $url = $form_state['values']['vtiger_url'];

  if (!valid_url($url, TRUE)) {
    form_set_error('vtiger_url', t('Please provide a valid URL.'));
  }
  // Check if it possible to connect with these credentials.
  if (substr($url, -1) === '/') {
    $form_state['values']['vtiger_url'] = substr($url, 0, -1);
  }
  $vtiger_api = new VtigerCrmApi();

  $successful_check = $vtiger_api->testLogin($username, $webservice_access_key, $url);
  if (!$successful_check) {
    form_set_error('', t('Could not initialize a session using your credentials. Check them and try again'));
  }
}

/**
 * Submit callback: save settings.
 */
function vtiger_crm_settings_submit($form, &$form_state) {
  variable_set('vtiger_crm_username', $form_state['values']['vtiger_username']);
  variable_set('vtiger_crm_webservice_access_key', $form_state['values']['vtiger_webservice_access_key']);
  variable_set('vtiger_crm_url', $form_state['values']['vtiger_url']);

  vtiger_crm_users_update();
  vtiger_crm_modules_update();
  drupal_set_message(t('A Vtiger session has been successfully initialized! The
    <a href="/admin/config/services/vtiger/sync">list of Vtiger entities and fields</a>
    has been updated.'));
}

/**
 * Page callback: Synchronization admin page.
 */
function vtiger_crm_synchronization($form, $form_state) {

  $form['description'] = array(
    '#markup' => '<p>' . t('The table below represents all Vtiger modules available for
     interaction. Every time you add or remove fields or entities to Vtiger
     CRM and want it to be available in Drupal, you need to make a
     synchronization by pushing the following button (it might take some time).') . '</p>' .
     '<p>' . t('Required fields of each entity are highlighted.') . '</p>',
  );

  $form['update_modules'] = array(
    '#type' => 'submit',
    '#value' => t('Update Vtiger modules'),
  );

  $output = '<h3>' . t('Vtiger CRM users') . '</h3>';

  $vtiger_users = vtiger_crm_get_users_options();
  if (count($vtiger_users)) {
    $output .= theme('item_list', array('items' => $vtiger_users));
  } else {
    $output .= '<p>' . t('Could not find Vtiger users stored locally. Press the
        button above to update with Vtiger') .
      '</p>';
  }

  $vtiger_modules = vtiger_crm_module_get_info(NULL, FALSE);

  if ($vtiger_modules) {
    $rows = array();
    foreach ($vtiger_modules as $module) {
      $label = $module->label;
      $name = $module->name;
      $creatable = !empty($module->createable) ? t('Yes') : t('No');
      $updateable = !empty($module->updateable) ? t('Yes') : t('No');
      $deleteable = !empty($module->deleteable) ? t('Yes') : t('No');
      $retrieveable = !empty($module->retrieveable) ? t('Yes') : t('No');
      $fields = unserialize($module->fields);
      $fields_formatted = '';
      foreach ($fields as $key => $field) {
        if ($field['mandatory']) {
          $fields_formatted[$key] = '<b>' . $field['label'] . '</b>';
          $fields_formatted[$key] .= '<span style="color:red">*</span>';
        }
        else {
          $fields_formatted[$key] = $field['label'];
        }
      }
      $fields_string = implode(', ', $fields_formatted);
      $id_prefix = $module->idPrefix;
      $is_entity = !empty($module->isEntity) ? t('Yes') : t('No');
      $label_fields = $module->labelFields;
      $rows[]['data'] = array(
        $label,
        $name,
        $creatable,
        $updateable,
        $deleteable,
        $retrieveable,
        $fields_string,
        $id_prefix,
        $is_entity,
        $label_fields,
      );
    }

    $headers = array(
      t('Label'),
      t('Name'),
      t('Createable'),
      t('Updateable'),
      t('Deletable'),
      t('Retrievable'),
      t('Fields'),
      t('ID prefix'),
      t('Is entity'),
      t('Label fields'),
    );
    $output .= '<h3>' . t('Vtiger CRM modules, their fields and properties') . '</h3>';
    $output .= theme('table', array('header' => $headers, 'rows' => $rows));
  }
  else {
    $output = '<b>' . t('No module information found in the database. Make a synchronization by pushing the button above.') . '</b>';
  }

  $form['vtiger_modules'] = array(
    '#prefix' => '<div id="vtiger-modules-table">',
    '#suffix' => '</div>',
    '#markup' => $output,
  );

  return $form;
}

/**
 * Updates local module scheme from Vtiger.
 */
function vtiger_crm_synchronization_submit() {
  vtiger_crm_users_update();
  $updated = vtiger_crm_modules_update();
  if ($updated) {
    drupal_set_message(t('The Vtiger modules information has been successfully updated!'));
  }
  else {
    drupal_set_message(t('Could not updated Vtiger modules information. Check your !settings or try again later.',
      array('!settings' => l(t('settings'), '/admin/config/services/vtiger'))), 'error');
  }
}
