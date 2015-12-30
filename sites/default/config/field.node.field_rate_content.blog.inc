<?php
/**
 * @file
 * field.node.field_rate_content.blog.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
      'votingapi_tag' => 'vote',
      'vud_widget' => 'updown',
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
            'field_data_field_rate_content' => array(
              'vud_widget' => 'field_rate_content_vud_widget',
              'votingapi_tag' => 'field_rate_content_votingapi_tag',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_rate_content' => array(
              'vud_widget' => 'field_rate_content_vud_widget',
              'votingapi_tag' => 'field_rate_content_votingapi_tag',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_rate_content',
    'type' => 'vud_field',
    'module' => 'vud_field',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'vud_widget' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'votingapi_tag' => array(
        'type' => 'varchar',
        'length' => 64,
        'not null' => TRUE,
        'default' => 'vote',
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Rate List',
    'widget' => array(
      'weight' => '15',
      'type' => 'vud_field_default_widget',
      'module' => 'vud_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'vud_widget' => 'thumbs',
      'votingapi_tag' => 'thumbs',
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
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '15',
        'settings' => array(),
      ),
      'rss' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '10',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      0 => array(
        'vud_widget' => 'updown',
        'votingapi_tag' => 'vote',
      ),
    ),
    'field_name' => 'field_rate_content',
    'entity_type' => 'node',
    'bundle' => 'blog',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.blog' => 'content_type.blog',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'vud_field',
);
