<?php
/**
 * @file
 * field.node.field_points_per_army.listcrit.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
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
            'field_data_field_points_per_army' => array(
              'value' => 'field_points_per_army_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_points_per_army' => array(
              'value' => 'field_points_per_army_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_points_per_army',
    'type' => 'number_integer',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'default_value' => NULL,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '6',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '10',
        'settings' => array(),
      ),
    ),
    'label' => 'Points',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => '4',
    ),
    'field_name' => 'field_points_per_army',
    'entity_type' => 'node',
    'bundle' => 'listcrit',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.listcrit' => 'content_type.listcrit',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
