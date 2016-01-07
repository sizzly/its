<?php
/**
 * @file
 * field.node.field_warzone_scheduling.special_event.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'settings' => array(
      'allowed_values' => array(
        0 => 'Automatic - Recommended',
        1 => 'Manual',
      ),
      'allowed_values_function' => '',
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
            'field_data_field_warzone_scheduling' => array(
              'value' => 'field_warzone_scheduling_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_warzone_scheduling' => array(
              'value' => 'field_warzone_scheduling_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_warzone_scheduling',
    'type' => 'list_integer',
    'module' => 'list',
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
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'description' => 'Toggle whether you\'d like iToysoldiers to automatically process the beginning and end of your War Zone using the start and end dates provided.  If you choose manual then you will need to start and end the war zone manually.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '8',
        'settings' => array(),
      ),
    ),
    'label' => 'Scheduling',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '22',
    ),
    'field_name' => 'field_warzone_scheduling',
    'entity_type' => 'node',
    'bundle' => 'special_event',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.special_event' => 'content_type.special_event',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
