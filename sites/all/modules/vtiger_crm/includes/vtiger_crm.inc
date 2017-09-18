<?php
/**
 * @file
 * Helping function for Vtiger API.
 */

/**
 * Updates locally stored Vtiger entity data with data received from Vtiger.
 */
function vtiger_crm_modules_update() {
  $vtiger_api = new VtigerCrmApi();
  $module_list = $vtiger_api->listtypes();
  if (!$module_list) {
    return FALSE;
  }
  $module_data = array();
  foreach ($module_list['types'] as $module) {
    $module_info = $vtiger_api->describe($module);
    if ($module_info && is_array($module_info)) {
      // Serialize field data to store it in one cell of the database table.
      $module_info['fields'] = serialize($module_info['fields']);
      $module_data[] = $module_info;
    }
    else {
      watchdog('vtiger', 'Could not load info about @module', array('@module' => $module));
      return FALSE;
    }
  }
  // Clear the table of the existing data and populate it with the fetched data.
  db_truncate('vtiger_crm_modules')->execute();
  $insert = db_insert('vtiger_crm_modules')
    ->fields(array(
        'label',
        'name',
        'createable',
        'updateable',
        'deleteable',
        'retrieveable',
        'fields',
        'idPrefix',
        'isEntity',
        'labelFields',
      )
    );
  // We convert all bool values to integers, otherwise we'd be thrown an error.
  $booleans = array(
    'createable',
    'updateable',
    'deleteable',
    'retrieveable',
    'isEntity',
  );
  foreach ($module_data as $module) {
    foreach ($booleans as $field) {
      $module[$field] = (int) $module[$field];
    }
    $insert->values($module);
  }
  $insert->execute();
  return TRUE;
}

/**
 * Retrieves information on the given vtiger module.
 *
 * @param string $module
 *   Get the vtiger type info array of type.
 * @param bool $is_entity
 *   Whether or not return entities only.
 *
 * @return mixed
 *   The Vtiger module, e.g. Leads, info of which will be returned, or NULL
 *   to return an array with info about all modules.
 */
function vtiger_crm_module_get_info($module = NULL, $is_entity = TRUE) {
  $query = db_select('vtiger_crm_modules', 'vt')
    ->fields('vt');
  if ($module) {
    $query->condition('vt.name', $module, '=');
  }
  if ($is_entity) {
    $query->condition('vt.isEntity', 1, '=');
  }
  $result = $query->execute()->fetchAllAssoc('name');
  return $result;
}

/**
 * Gets list of field of Vtiger module or for all modules if not specified.
 *
 * @param string $vtiger_module
 *   Vtiger module.
 * @param bool $required
 *   Whether only required fields should be returned.
 *
 * @return array
 *   Array of fields.
 */
function vtiger_crm_module_get_fields($vtiger_module = FALSE, $required = FALSE) {
  $vtiger_module_info = vtiger_crm_module_get_info($vtiger_module);
  $fields = array();
  foreach ($vtiger_module_info as $module_name => $module_info) {
    $module_fields = unserialize($module_info->fields);
    $return_fields = array();
    foreach ($module_fields as $raw_field) {
      // Leave only required fields if $required = TRUE.
      if ($required && !$raw_field['mandatory']) {
        continue;
      }
      $return_fields[$raw_field['name']] = $raw_field['label'];
    }
    $fields[$module_name] = $return_fields;
  }
  // Return fields for a certain module if module is set or return all fields.
  if ($vtiger_module && $fields[$vtiger_module]) {
    return $fields[$vtiger_module];
  }
  return $fields;
}

/**
 * Retrieves user list from Vtiger and saves them into a variable.
 */
function vtiger_crm_users_update() {
  $vtiger_api = new VtigerCrmApi();
  $users = $vtiger_api->query('SELECT * FROM Users;');
  if ($users && count($users)) {
    variable_set('vtiger_crm_users', $users);
  }
}

/**
 * Returns Vtiger users as options for FAPI.
 */
function vtiger_crm_get_users_options() {
  $users = variable_get('vtiger_crm_users', array());
  $options = array();
  foreach ($users as $user) {
    $options[$user['id']] = $user['user_name'] . ' (' .
      $user['first_name'] . ' ' . $user['last_name'] . ')';
  }
  return $options;
}
