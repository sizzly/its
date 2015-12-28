<?php
/**
 * @file
 * field.node.field_rate_content.listcrit.inc
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
    'default_value' => array(
      0 => array(
        'vud_widget' => 'updown',
        'votingapi_tag' => 'vote',
      ),
    ),
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'default',
        'weight' => '4',
        'settings' => array(),
        'module' => 'vud_field',
      ),
    ),
    'label' => 'Rate List',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
      'votingapi_tag' => 'thumbs',
      'vud_widget' => 'thumbs',
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'vud_field',
      'settings' => array(),
      'type' => 'vud_field_default_widget',
      'weight' => '5',
    ),
    'field_name' => 'field_rate_content',
    'entity_type' => 'node',
    'bundle' => 'listcrit',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.listcrit' => 'content_type.listcrit',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'vud_field',
);
