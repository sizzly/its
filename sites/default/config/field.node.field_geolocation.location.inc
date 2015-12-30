<?php
/**
 * @file
 * field.node.field_geolocation.location.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(
      'lat' => array(
        0 => 'lat',
      ),
      'lon' => array(
        0 => 'lon',
      ),
      'top' => array(
        0 => 'top',
      ),
      'bottom' => array(
        0 => 'bottom',
      ),
      'left' => array(
        0 => 'left',
      ),
      'right' => array(
        0 => 'right',
      ),
      'geohash' => array(
        0 => 'geohash',
      ),
      'centroid' => array(
        0 => 'lat',
        1 => 'lon',
      ),
      'bbox' => array(
        0 => 'top',
        1 => 'bottom',
        2 => 'left',
        3 => 'right',
      ),
    ),
    'settings' => array(
      'backend' => 'default',
      'profile2_private' => FALSE,
      'srid' => '4326',
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
            'field_data_field_geolocation' => array(
              'geom' => 'field_geolocation_geom',
              'geo_type' => 'field_geolocation_geo_type',
              'lat' => 'field_geolocation_lat',
              'lon' => 'field_geolocation_lon',
              'left' => 'field_geolocation_left',
              'top' => 'field_geolocation_top',
              'right' => 'field_geolocation_right',
              'bottom' => 'field_geolocation_bottom',
              'geohash' => 'field_geolocation_geohash',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_geolocation' => array(
              'geom' => 'field_geolocation_geom',
              'geo_type' => 'field_geolocation_geo_type',
              'lat' => 'field_geolocation_lat',
              'lon' => 'field_geolocation_lon',
              'left' => 'field_geolocation_left',
              'top' => 'field_geolocation_top',
              'right' => 'field_geolocation_right',
              'bottom' => 'field_geolocation_bottom',
              'geohash' => 'field_geolocation_geohash',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_geolocation',
    'type' => 'geofield',
    'module' => 'geofield',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'geom' => array(
        'type' => 'blob',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'geo_type' => array(
        'type' => 'varchar',
        'default' => '',
        'length' => 64,
      ),
      'lat' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'lon' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'left' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'top' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'right' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'bottom' => array(
        'type' => 'numeric',
        'precision' => 18,
        'scale' => 12,
        'not null' => FALSE,
      ),
      'geohash' => array(
        'type' => 'varchar',
        'length' => 16,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'default_value' => array(),
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '1',
        'settings' => array(),
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
        'weight' => '3',
        'settings' => array(),
      ),
    ),
    'label' => 'Geolocation',
    'required' => 0,
    'settings' => array(
      'local_solr' => array(
        'enabled' => FALSE,
        'lat_field' => 'lat',
        'lng_field' => 'lng',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'weight' => '9',
      'type' => 'geocoder',
      'module' => 'geocoder',
      'active' => 1,
      'settings' => array(
        'geocoder_field' => 'field_address_battlefield',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'geometry_type' => 'point',
            'all_results' => 0,
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
        'delta_handling' => 'default',
      ),
    ),
    'field_name' => 'field_geolocation',
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
  1 => 'geofield',
  2 => 'geocoder',
);
