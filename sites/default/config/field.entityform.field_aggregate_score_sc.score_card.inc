<?php
/**
 * @file
 * field.entityform.field_aggregate_score_sc.score_card.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
      'code' => '$entity_field[0][\'value\'] = array_pop(array_pop(field_get_items($entity_type, $entity, \'field_sportsmanship_sc\'))) + array_pop(array_pop(field_get_items($entity_type, $entity, \'field_painting_sc\'))) + array_pop(array_pop(field_get_items($entity_type, $entity, \'field_comp_sc\'))) + array_pop(array_pop(field_get_items($entity_type, $entity, \'field_additional_points_sc\')));',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'int',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'profile2_private' => FALSE,
      'store' => 1,
    ),
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_aggregate_score_sc' => array(
              'value' => 'field_aggregate_score_sc_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_aggregate_score_sc' => array(
              'value' => 'field_aggregate_score_sc_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_aggregate_score_sc',
    'type' => 'computed',
    'module' => 'computed_field',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => 0,
      ),
    ),
  ),
  'field_instance' => array(
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 27,
      ),
    ),
    'label' => 'Aggregate Score',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 19,
    ),
    'field_name' => 'field_aggregate_score_sc',
    'entity_type' => 'entityform',
    'bundle' => 'score_card',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'computed_field',
);
