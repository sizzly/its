<?php
/**
 * @file
 * field.entityform.field_player_achivement_reg.war_zone_grant_achievement.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(
      'node_registration' => array(
        'table' => 'node_registration',
        'columns' => array(
          'target_id' => 'registration_id',
        ),
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'war_zone_all_registrations',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node_registration',
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
            'field_data_field_player_achivement_reg' => array(
              'target_id' => 'field_player_achivement_reg_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_player_achivement_reg' => array(
              'target_id' => 'field_player_achivement_reg_target_id',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_player_achivement_reg',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'target_id' => array(
        'description' => 'The id of the target entity.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'default_value' => NULL,
    'default_value_function' => '',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
    ),
    'label' => 'Player',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
    'field_name' => 'field_player_achivement_reg',
    'entity_type' => 'entityform',
    'bundle' => 'war_zone_grant_achievement',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'entityreference',
  2 => 'options',
);
