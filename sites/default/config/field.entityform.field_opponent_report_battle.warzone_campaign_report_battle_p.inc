<?php
/**
 * @file
 * field.entityform.field_opponent_report_battle.warzone_campaign_report_battle_p.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
      'target_type' => 'node_registration',
      'handler' => 'views',
      'handler_settings' => array(
        'view' => array(
          'view_name' => 'war_zone_all_registrations',
          'display_name' => 'entityreference_1',
          'args' => array(),
        ),
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_opponent_report_battle' => array(
              'target_id' => 'field_opponent_report_battle_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_opponent_report_battle' => array(
              'target_id' => 'field_opponent_report_battle_target_id',
            ),
          ),
        ),
      ),
    ),
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
    'field_name' => 'field_opponent_report_battle',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
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
        'weight' => 14,
      ),
    ),
    'label' => 'Opponent',
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
      'weight' => 6,
    ),
    'field_name' => 'field_opponent_report_battle',
    'entity_type' => 'entityform',
    'bundle' => 'warzone_campaign_report_battle_p',
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
