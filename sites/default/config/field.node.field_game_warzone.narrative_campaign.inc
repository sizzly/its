<?php
/**
 * @file
 * field.node.field_game_warzone.narrative_campaign.inc
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
          'vocabulary' => 'armies',
          'parent' => 0,
          'depth' => 1,
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
            'field_data_field_game_warzone' => array(
              'tid' => 'field_game_warzone_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_game_warzone' => array(
              'tid' => 'field_game_warzone_tid',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_game_warzone',
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'inline',
        'type' => 'hidden',
        'weight' => '3',
        'settings' => array(),
      ),
    ),
    'label' => 'Game',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
      ),
      'type' => 'options_select',
      'weight' => '5',
    ),
    'field_name' => 'field_game_warzone',
    'entity_type' => 'node',
    'bundle' => 'narrative_campaign',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.narrative_campaign' => 'content_type.narrative_campaign',
  'vocabulary.armies' => 'vocabulary.armies',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
