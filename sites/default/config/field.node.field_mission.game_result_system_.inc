<?php
/**
 * @file
 * field.node.field_mission.game_result_system_.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(
      'tid' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'tid' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'missions',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
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
            'field_data_field_mission' => array(
              'tid' => 'field_mission_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_mission' => array(
              'tid' => 'field_mission_tid',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_mission',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'tid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
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
        'weight' => 6,
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
        'weight' => '16',
        'settings' => array(),
      ),
    ),
    'label' => 'Mission',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
    'field_name' => 'field_mission',
    'entity_type' => 'node',
    'bundle' => 'game_result_system_',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.game_result_system_' => 'content_type.game_result_system_',
  'vocabulary.missions' => 'vocabulary.missions',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
);
