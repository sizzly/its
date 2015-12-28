<?php
/**
 * @file
 * field.entityform.field_draw.score_card.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
      'code' => 'if (array_pop(array_pop(field_get_items($entity_type, $entity, \'field_your_results\'))) == "3")
{
$entity_field[0][\'value\'] = "1";
}
else
{
$entity_field[0][\'value\'] = "0";
}',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 5,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
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
            'field_data_field_draw' => array(
              'value' => 'field_draw_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_draw' => array(
              'value' => 'field_draw_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_draw',
    'type' => 'computed',
    'module' => 'computed_field',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 5,
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
        'weight' => 25,
      ),
    ),
    'label' => 'Draw',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 17,
    ),
    'field_name' => 'field_draw',
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
