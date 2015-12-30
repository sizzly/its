<?php
/**
 * @file
 * field.node.field_supported_games.gaming_club.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'armies',
          'parent' => '0',
          'depth' => '1',
        ),
      ),
      'profile2_private' => FALSE,
      'options_list_callback' => 'content_taxonomy_allowed_values',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_supported_games' => array(
              'tid' => 'field_supported_games_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_supported_games' => array(
              'tid' => 'field_supported_games_tid',
            ),
          ),
        ),
      ),
    ),
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
    'field_name' => 'field_supported_games',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '3',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
    ),
    'label' => 'Supported Games',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '6',
    ),
    'field_name' => 'field_supported_games',
    'entity_type' => 'node',
    'bundle' => 'gaming_club',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.gaming_club' => 'content_type.gaming_club',
  'vocabulary.armies' => 'vocabulary.armies',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
