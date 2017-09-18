<?php

/**
 * @file
 * Functions to get options for FAPI.
 */

/**
 * Returns a list of fieldable entities to use in FAPI.
 */
function vtiger_crm_entity_get_fieldable_entities_options() {
  $entities = entity_get_info();
  $options = array();
  foreach ($entities as $entity_name => $entity) {
    if ($entity['fieldable']) {
      $options[$entity_name] = $entity['label'];
    }
  }
  return $options;
}

/**
 * Returns a list of bundles by Drupal entity type to use in FAPI.
 */
function vtiger_crm_entity_get_entity_bundle_options($entity_type) {
  $entity_info = entity_get_info($entity_type);
  $options = array();
  foreach ($entity_info['bundles'] as $bundle_name => $bundle) {
    $options[$bundle_name] = $bundle['label'];
  }
  if (empty($options)) {
    $options['none'] = t('- Does not have bundles -');
  }
  return $options;
}

/**
 * Returns a list of Vtiger modules to use in FAPI.
 */
function vtiger_crm_get_vtiger_modules_options() {
  $modules = vtiger_crm_module_get_info();
  $options = array();
  foreach ($modules as $module_name => $module_info) {
    $options[$module_name] = $module_info->label;
  }
  return $options;
}

/**
 * Returns a list of entity properties to use in FAPI.
 *
 * @param string $entity_type
 *   The type of the entity to get info of.
 * @param string $bundle
 *   The bundle of the entity to get info of.
 *
 * @return array
 *   The array of options.
 */
function vtiger_crm_get_drupal_entity_properties_and_fields_options($entity_type, $bundle = NULL) {
  $options = array();
  $properties_info = entity_get_property_info($entity_type);
  // Getting fields names for specific bundle (they'll go first).
  if ($bundle && !empty($properties_info['bundles'][$bundle])) {
    $options['Fields'] = array();
    foreach ($properties_info['bundles'][$bundle]['properties'] as $field_name => $field) {
      $options['Fields'][$field_name] = $field['label'];
    }
  }
  // Get property names for a given entity type.
  if (!empty($properties_info['properties'])) {
    $options['Properties'] = array();
    foreach ($properties_info['properties'] as $pr_id => $pr_info) {
      $options['Properties'][$pr_id] = $pr_info['label'];
    }
  }
  return $options;
}

/**
 * Returns a list of vtiger fields to use in FAPI.
 *
 * @param string $vtiger_module
 *   The name of the vtiger module
 *
 * @return array
 *   Vtiger fields.
 */
function vtiger_crm_get_vtiger_module_fields_options($vtiger_module) {
  $options = array();
  if (!$vtiger_module) {
    return $options;
  }
  $fields = vtiger_crm_module_get_fields($vtiger_module);
  foreach ($fields as $name => $label) {
    $options[$name] = $label;
  }
  return $options;
}
