<?php
/**
 * @file
 * field.node.field_address_battlefield.location.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'location_settings' => array(
        'form' => array(
          'fields' => array(
            'name' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '2',
            ),
            'street' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '4',
            ),
            'additional' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '6',
            ),
            'city' => array(
              'collect' => '2',
              'default' => '',
              'weight' => '8',
            ),
            'province' => array(
              'collect' => '2',
              'widget' => 'autocomplete',
              'default' => '',
              'weight' => '10',
            ),
            'postal_code' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '12',
            ),
            'country' => array(
              'collect' => '1',
              'default' => 'ca',
              'weight' => '14',
            ),
            'locpick' => array(
              'collect' => '0',
              'weight' => '20',
            ),
          ),
        ),
        'display' => array(
          'hide' => array(
            'name' => 0,
            'street' => 0,
            'additional' => 0,
            'city' => 0,
            'province' => 0,
            'postal_code' => 0,
            'country' => 0,
            'locpick' => 0,
            'province_name' => 0,
            'country_name' => 0,
            'map_link' => 0,
            'coords' => 0,
          ),
        ),
      ),
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
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
            'field_data_field_address_battlefield' => array(
              'lid' => 'field_address_battlefield_lid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_address_battlefield' => array(
              'lid' => 'field_address_battlefield_lid',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'field_name' => 'field_address_battlefield',
    'type' => 'location',
    'module' => 'location_cck',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'lid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Address',
    'widget' => array(
      'weight' => '4',
      'type' => 'location',
      'module' => 'location_cck',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'location_default',
        'weight' => '10',
        'settings' => array(),
        'module' => 'location_cck',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'location_default',
        'weight' => '4',
        'settings' => array(),
        'module' => 'location_cck',
      ),
      'ical' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_address_battlefield',
    'entity_type' => 'node',
    'bundle' => 'location',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.location' => 'content_type.location',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'location_cck',
);
