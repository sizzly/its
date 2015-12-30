<?php
/**
 * @file
 * field.profile2.field_website.ironmonger.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
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
            'field_data_field_website' => array(
              'url' => 'field_website_url',
              'title' => 'field_website_title',
              'attributes' => 'field_website_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_website' => array(
              'url' => 'field_website_url',
              'title' => 'field_website_title',
              'attributes' => 'field_website_attributes',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_website',
    'type' => 'link_field',
    'module' => 'link',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'url' => array(
        'type' => 'varchar',
        'length' => 2048,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'title' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'attributes' => array(
        'type' => 'text',
        'size' => 'medium',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Organization Website',
    'widget' => array(
      'weight' => '4',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'validate_url' => 1,
      'url' => 0,
      'title' => 'none',
      'title_value' => '',
      'title_maxlength' => '128',
      'enable_tokens' => 0,
      'display' => array(
        'url_cutoff' => '80',
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => '',
        'class' => '',
        'configurable_title' => 0,
        'title' => '',
      ),
      'rel_remove' => 'default',
      'user_register_form' => FALSE,
      'title_label_use_field_label' => FALSE,
      'absolute_url' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'link_default',
        'settings' => array(),
        'module' => 'link',
        'weight' => 1,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_website',
    'entity_type' => 'profile2',
    'bundle' => 'ironmonger',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'link',
);
