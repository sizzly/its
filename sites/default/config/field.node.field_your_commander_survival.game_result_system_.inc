<?php
/**
 * @file
 * field.node.field_your_commander_survival.game_result_system_.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => 'Survived',
        1 => 'Slain',
      ),
      'allowed_values_function' => '',
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
            'field_data_field_your_commander_survival' => array(
              'value' => 'field_your_commander_survival_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_your_commander_survival' => array(
              'value' => 'field_your_commander_survival_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'field_name' => 'field_your_commander_survival',
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
    'label' => 'Your Commander Survival',
    'widget' => array(
      'type' => 'options_buttons',
      'weight' => '69',
      'settings' => array(),
      'module' => 'options',
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'settings' => array(),
        'module' => 'list',
        'weight' => 27,
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
      'ical' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'field_your_commander_survival',
    'entity_type' => 'node',
    'bundle' => 'game_result_system_',
    'deleted' => '0',
    'default_value' => NULL,
  ),
);

$dependencies = array(
  'content_type.game_result_system_' => 'content_type.game_result_system_',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
