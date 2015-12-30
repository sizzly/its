<?php
/**
 * @file
 * field.profile2.field_profile_location.main.inc
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
              'collect' => '0',
              'default' => '',
              'weight' => '4',
            ),
            'additional' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '6',
            ),
            'city' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '8',
            ),
            'province' => array(
              'collect' => '1',
              'widget' => 'autocomplete',
              'default' => '',
              'weight' => '10',
            ),
            'postal_code' => array(
              'collect' => '0',
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
            'locpick' => 'locpick',
            'map_link' => 'map_link',
            'coords' => 'coords',
            'name' => 0,
            'street' => 0,
            'additional' => 0,
            'city' => 0,
            'province' => 0,
            'postal_code' => 0,
            'country' => 0,
            'province_name' => 0,
            'country_name' => 0,
          ),
        ),
      ),
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'profile2_private' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_profile_location' => array(
              'lid' => 'field_profile_location_lid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_profile_location' => array(
              'lid' => 'field_profile_location_lid',
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
    'field_name' => 'field_profile_location',
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
    'default_value' => NULL,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 4,
      ),
    ),
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 5,
    ),
    'field_name' => 'field_profile_location',
    'entity_type' => 'profile2',
    'bundle' => 'main',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'location_cck',
);
