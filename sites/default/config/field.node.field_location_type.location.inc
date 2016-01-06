<?php
/**
 * @file
 * field.node.field_location_type.location.inc
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
          'vocabulary' => 'location_type',
          'parent' => '0',
        ),
      ),
      'profile2_private' => FALSE,
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
            'field_data_field_location_type' => array(
              'tid' => 'field_location_type_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_location_type' => array(
              'tid' => 'field_location_type_tid',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_location_type',
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
        'label' => 'hidden',
        'type' => 'taxonomy_term_reference_link',
        'weight' => '2',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
    ),
    'label' => 'Location type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => '2',
    ),
    'field_name' => 'field_location_type',
    'entity_type' => 'node',
    'bundle' => 'location',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.location' => 'content_type.location',
  'vocabulary.location_type' => 'vocabulary.location_type',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
