<?php
/**
 * @file
 * field.node.field_your_results.game_results.inc
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
        5 => 'Victory',
        3 => 'Draw',
        1 => 'Defeat',
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
            'field_data_field_your_results' => array(
              'value' => 'field_your_results_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_your_results' => array(
              'value' => 'field_your_results_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_your_results',
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
    'default_value' => NULL,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '25',
        'settings' => array(),
      ),
    ),
    'label' => 'Your Results',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => '29',
    ),
    'field_name' => 'field_your_results',
    'entity_type' => 'node',
    'bundle' => 'game_results',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.game_results' => 'content_type.game_results',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
