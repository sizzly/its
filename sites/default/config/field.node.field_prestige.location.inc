<?php
/**
 * @file
 * field.node.field_prestige.location.inc
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
            'field_data_field_prestige' => array(
              'radioactivity_energy' => 'field_prestige_radioactivity_energy',
              'radioactivity_timestamp' => 'field_prestige_radioactivity_timestamp',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_prestige' => array(
              'radioactivity_energy' => 'field_prestige_radioactivity_energy',
              'radioactivity_timestamp' => 'field_prestige_radioactivity_timestamp',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'energy' => array(
        0 => 'radioactivity_energy',
      ),
    ),
    'field_name' => 'field_prestige',
    'type' => 'radioactivity',
    'module' => 'radioactivity',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'radioactivity_energy' => array(
        'type' => 'float',
        'not null' => FALSE,
      ),
      'radioactivity_timestamp' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Prestige',
    'widget' => array(
      'weight' => '17',
      'type' => 'radioactivity_basic_widget',
      'module' => 'radioactivity',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'profile' => 'prestige',
      'history' => 0,
      'history_limit' => '8',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'radioactivity_combo_formatter',
        'settings' => array(
          'energy' => 10,
          'type' => 'none',
          'accuracy' => '100',
        ),
        'module' => 'radioactivity',
        'weight' => 12,
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
      'ical' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => '0',
        'radioactivity_timestamp' => '1450625822',
      ),
    ),
    'field_name' => 'field_prestige',
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
  1 => 'radioactivity',
);
