<?php
/**
 * @file
 * field.node.field_model_count.models.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_model_count' => array(
              'value' => 'field_model_count_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_model_count' => array(
              'value' => 'field_model_count_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_model_count',
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
    'label' => 'Model Count',
    'widget' => array(
      'weight' => '5',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'number_integer',
        'settings' => array(
          'thousand_separator' => ' ',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_model_count',
    'entity_type' => 'node',
    'bundle' => 'models',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.models' => 'content_type.models',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
