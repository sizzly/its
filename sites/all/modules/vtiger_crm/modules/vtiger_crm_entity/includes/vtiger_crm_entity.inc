<?php
/**
 * @file
 * Provides entity migration (from Drupal to Vtiger) functions.
 */

/**
 * Saves validated mapping to the database.
 *
 * @param string $drupal_entity
 *   Drupal entity type name.
 * @param string $drupal_entity_bundle
 *   Drupal entity bundle name.
 * @param string $vtiger_module
 *   Name of the Vtiger module.
 * @param array $mappings
 *   Array of mappings: drupal_field => vtiger_field.
 *
 * @return bool
 *   Whether insert or update was successful.
 */
function vtiger_crm_entity_save_mapping($drupal_entity, $drupal_entity_bundle, $vtiger_module, $assigned_user_id, $mappings, $mid = FALSE) {
  if (!$drupal_entity || !$drupal_entity_bundle || !$vtiger_module) {
    return FALSE;
  }
  // Serialize mappings if passed as array.
  if (is_array($mappings)) {
    $mappings = serialize($mappings);
  }
  if ($mid) {
    $update = db_update('vtiger_crm_entity_mapping')
      ->condition('mid', $mid, '=')
      ->fields(array(
          'drupal_entity' => $drupal_entity,
          'drupal_entity_bundle' => $drupal_entity_bundle,
          'assigned_user_id' => $assigned_user_id,
          'vtiger_entity' => $vtiger_module,
          'mappings' => $mappings,
        )
      );
    $inserted = $update->execute();
  }
  else {
    $mname = $drupal_entity . '_' . $drupal_entity_bundle . '_' . $vtiger_module;
    $insert = db_insert('vtiger_crm_entity_mapping');
    $insert->fields(array(
      'mname',
      'drupal_entity',
      'drupal_entity_bundle',
      'assigned_user_id',
      'vtiger_entity',
      'mappings',
    ));
    $insert->values(array(
      $mname,
      $drupal_entity,
      $drupal_entity_bundle,
      $assigned_user_id,
      $vtiger_module,
      $mappings,
    ));
    $inserted = $insert->execute();
  }
  // db_update returns 0 if 1 row is updated, so check if the return is numeric.
  if (is_numeric($inserted)) {
    return TRUE;
  }
  return FALSE;
}

/**
 * Get vtiger mapping record by mid.
 */
function vtiger_crm_entity_get_mapping_by_mid($mid) {
  $mapping = db_query('SELECT * FROM {vtiger_crm_entity_mapping}
      WHERE mid = :mid', array(':mid' => $mid))->fetchAssoc();
  if ($mapping) {
    $mapping['mappings'] = unserialize($mapping['mappings']);
  }
  return $mapping;
}

/**
 * Delete vtiger mapping record by mid.
 */
function vtiger_crm_entity_delete_mapping_by_mid($mid) {
  $deleted = db_delete('vtiger_crm_entity_mapping')
    ->condition('mid', $mid, '=')
    ->execute();
  if ($deleted) {
    return TRUE;
  }
  return FALSE;
}

/**
 * Get vtiger mapping record by machine name.
 */
function vtiger_crm_entity_get_mapping_by_mname($mname) {
  $mapping = db_query('SELECT * FROM {vtiger_crm_entity_mapping}
      WHERE mname = :mname', array(':mname' => $mname))->fetchAssoc();
  if ($mapping) {
    $mapping['mappings'] = unserialize($mapping['mappings']);
  }
  return $mapping;
}

/**
 * Saves Drupal entity to Vtiger CRM according to existing mapping.
 *
 * @param object $entity
 *   Drupal entity full loaded object.
 * @param string $vtiger_module
 *   Vtiger module to map to.
 *
 * @return bool
 *   Success of the operation.
 */
function vtiger_crm_entity_send_to_vtiger($entity_type, $entity, $vtiger_module) {

  // Try to load entity if entity ID is given.
  if (is_numeric($entity)) {
    $entity = entity_load_single($entity_type, $entity);
  }

  if (!$entity) {
    return FALSE;
  }

  $entity_wrapper = entity_metadata_wrapper($entity_type, $entity);
  $entity_bundle = $entity_wrapper->getBundle();

  // Fetch all mappings for given conditions.
  $mapping = db_query('SELECT vem.assigned_user_id, vem.mappings FROM {vtiger_crm_entity_mapping} vem
    WHERE drupal_entity = :drupal_entity AND drupal_entity_bundle = :drupal_entity_bundle
    AND vtiger_entity = :vtiger_entity', array(
    ':drupal_entity' => $entity_type,
    ':drupal_entity_bundle' => $entity_bundle,
    ':vtiger_entity' => $vtiger_module
  ))->fetchAssoc();

  // Return if no mappings were set up yet.
  if (empty($mapping['mappings'])) {
    watchdog('vtiger_entity', "Could not map %entity_type to %vtiger_module: no saved field mappings found.",
      array(
        '%entity_type' => $entity_type,
        '%vtiger_module' => $vtiger_module,
      ), WATCHDOG_ERROR);
    return FALSE;
  }

  // Create array of field - value.
  $element = array();
  $element['assigned_user_id'] = $mapping['assigned_user_id'];

  $vtiger_api = new VtigerCrmApi();
  $mapping = unserialize($mapping['mappings']);
  foreach ($mapping as $drupal_field => $vtiger_field) {
    $element[$vtiger_field] = $entity_wrapper->{$drupal_field}->value();
  }
  $created = $vtiger_api->create($element, $vtiger_module);
  if ($created) {
    return TRUE;
  }
}
