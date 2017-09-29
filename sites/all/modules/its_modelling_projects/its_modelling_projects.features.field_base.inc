<?php
/**
 * @file
 * its_modelling_projects.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function its_modelling_projects_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_completed_count'.
  $field_bases['field_completed_count'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_completed_count',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '//Get Battlefield
$count= 0;
if (isset($entity->field_completed_date_models[\'und\'][0][\'value\'])) {
  $count = $entity->field_model_count[\'und\'][0][\'value\'];
}
$entity_field[0][\'value\'] = "$count";',
      'database' => array(
        'data_default' => 0,
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'int',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => FALSE,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  return $field_bases;
}
