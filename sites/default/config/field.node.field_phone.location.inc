<?php
/**
 * @file
 * field.node.field_phone.location.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '30',
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
            'field_data_field_phone' => array(
              'value' => 'field_phone_value',
              'format' => 'field_phone_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_phone' => array(
              'value' => 'field_phone_value',
              'format' => 'field_phone_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_name' => 'field_phone',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '30',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
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
        'type' => 'text_default',
        'weight' => '9',
        'settings' => array(),
        'module' => 'text',
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
    ),
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => '6',
    ),
    'field_name' => 'field_phone',
    'entity_type' => 'node',
    'bundle' => 'location',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.location' => 'content_type.location',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
