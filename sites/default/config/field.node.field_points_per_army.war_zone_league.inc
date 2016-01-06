<?php
/**
 * @file
 * field.node.field_points_per_army.war_zone_league.inc
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
    'label' => 'Points per army',
    'widget' => array(
      'weight' => '4',
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
        'type' => 'hidden',
        'weight' => '18',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '11',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '<em>Points per army</em> reflects the point limit imposed on lists for armies participating in the league.',
    'default_value' => NULL,
    'field_name' => 'field_points_per_army',
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
  1 => 'number',
);
