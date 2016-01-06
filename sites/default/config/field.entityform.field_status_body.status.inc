<?php
/**
 * @file
 * field.entityform.field_status_body.status.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_status_body' => array(
              'value' => 'field_status_body_value',
              'format' => 'field_status_body_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_status_body' => array(
              'value' => 'field_status_body_value',
              'format' => 'field_status_body_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_name' => 'field_status_body',
    'type' => 'text_long',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Write something...',
    'widget' => array(
      'weight' => '1',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '2',
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_truncate_html' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
    ),
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_status_body',
    'entity_type' => 'entityform',
    'bundle' => 'status',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
