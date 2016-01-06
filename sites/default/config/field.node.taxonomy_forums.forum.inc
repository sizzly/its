<?php
/**
 * @file
 * field.node.taxonomy_forums.forum.inc
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
          'vocabulary' => 'forums',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
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
            'field_data_taxonomy_forums' => array(
              'tid' => 'taxonomy_forums_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_taxonomy_forums' => array(
              'tid' => 'taxonomy_forums_tid',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'taxonomy_forums',
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
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_link',
        'weight' => '0',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
    ),
    'label' => 'Forums',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => '31',
    ),
    'field_name' => 'taxonomy_forums',
    'entity_type' => 'node',
    'bundle' => 'forum',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.forum' => 'content_type.forum',
  'vocabulary.forums' => 'vocabulary.forums',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
