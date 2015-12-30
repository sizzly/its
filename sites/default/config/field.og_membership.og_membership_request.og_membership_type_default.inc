<?php
/**
 * @file
 * field.og_membership.og_membership_request.og_membership_type_default.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(
      0 => 'og_membership',
    ),
    'translatable' => '0',
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_og_membership_request' => array(
              'value' => 'og_membership_request_value',
              'format' => 'og_membership_request_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_og_membership_request' => array(
              'value' => 'og_membership_request_value',
              'format' => 'og_membership_request_format',
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
    'field_name' => 'og_membership_request',
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
    'label' => 'Request message',
    'description' => 'This is the text a user may send to the group administrators.',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'settings' => array(),
        'module' => 'text',
        'weight' => 0,
      ),
    ),
    'widget' => array(
      'type' => 'text_textarea',
      'settings' => array(
        'rows' => 5,
      ),
      'weight' => 0,
      'module' => 'text',
    ),
    'field_name' => 'og_membership_request',
    'entity_type' => 'og_membership',
    'bundle' => 'og_membership_type_default',
    'deleted' => '0',
    'default_value' => NULL,
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
