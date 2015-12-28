<?php
/**
 * @file
 * field.node.field_status.war_zone_league.inc
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
        0 => 'Setup',
        3 => 'Sign Up',
        5 => 'In Progress',
        10 => 'Complete',
        15 => 'Archived',
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
            'field_data_field_status' => array(
              'value' => 'field_status_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_status' => array(
              'value' => 'field_status_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_status',
    'type' => 'list_text',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Status',
    'widget' => array(
      'weight' => '8',
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
        'type' => 'hidden',
        'weight' => '10',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'inline',
        'type' => 'hidden',
        'weight' => '16',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      0 => array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_status',
    'entity_type' => 'node',
    'bundle' => 'war_zone_league',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.war_zone_league' => 'content_type.war_zone_league',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
