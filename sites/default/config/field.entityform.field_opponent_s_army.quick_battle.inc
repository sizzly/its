<?php
/**
 * @file
 * field.entityform.field_opponent_s_army.quick_battle.inc
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
          'depth' => '',
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
            'field_data_field_opponent_s_army' => array(
              'tid' => 'field_opponent_s_army_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_opponent_s_army' => array(
              'tid' => 'field_opponent_s_army_tid',
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
    'field_name' => 'field_opponent_s_army',
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
    'label' => 'Opponent\'s Army',
    'widget' => array(
      'weight' => '1',
      'type' => 'taxonomy_shs',
      'module' => 'shs',
      'active' => 1,
      'settings' => array(
        'shs' => array(
          'node_count' => 0,
          'create_new_terms' => 0,
          'create_new_levels' => 0,
          'force_deepest' => 1,
        ),
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_link',
        'weight' => '3',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_opponent_s_army',
    'entity_type' => 'entityform',
    'bundle' => 'quick_battle',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'vocabulary.armies' => 'vocabulary.armies',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'shs',
);
