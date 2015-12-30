<?php
/**
 * @file
 * field.node.field_blog_army.blog.inc
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
        ),
        1 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
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
            'field_data_field_blog_army' => array(
              'tid' => 'field_blog_army_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_blog_army' => array(
              'tid' => 'field_blog_army_tid',
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
    'field_name' => 'field_blog_army',
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
    'label' => 'Categories',
    'widget' => array(
      'weight' => '2',
      'type' => 'taxonomy_autocomplete',
      'module' => 'taxonomy',
      'active' => 0,
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'moderate',
        'size' => 60,
        'autocomplete_path' => 'taxonomy/autocomplete',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '6',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '4',
        'settings' => array(),
      ),
      'rss' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_rss_category',
        'weight' => '6',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_blog_army',
    'entity_type' => 'node',
    'bundle' => 'blog',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.blog' => 'content_type.blog',
  'vocabulary.armies' => 'vocabulary.armies',
  'vocabulary.tags' => 'vocabulary.tags',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
);
