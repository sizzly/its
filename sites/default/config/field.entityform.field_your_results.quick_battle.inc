<?php
/**
 * @file
 * field.entityform.field_your_results.quick_battle.inc
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
    'label' => 'Your Results',
    'widget' => array(
      'weight' => '2',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '1',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_your_results',
    'entity_type' => 'entityform',
    'bundle' => 'quick_battle',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
