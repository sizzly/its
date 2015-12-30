<?php
/**
 * @file
 * field.node.field_radioactivity.war_zone_tournament.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(
      'energy' => array(
        0 => 'radioactivity_energy',
      ),
    ),
    'settings' => array(
      'profile2_private' => FALSE,
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
            'field_data_field_radioactivity' => array(
              'radioactivity_energy' => 'field_radioactivity_radioactivity_energy',
              'radioactivity_timestamp' => 'field_radioactivity_radioactivity_timestamp',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_radioactivity' => array(
              'radioactivity_energy' => 'field_radioactivity_radioactivity_energy',
              'radioactivity_timestamp' => 'field_radioactivity_radioactivity_timestamp',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_radioactivity',
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
    'label' => 'Radioactivity',
    'widget' => array(
      'weight' => '18',
      'type' => 'radioactivity_basic_widget',
      'module' => 'radioactivity',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'profile' => 'default_daily',
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
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'radioactivity_combo_formatter',
        'weight' => '4',
        'settings' => array(
          'energy' => 10,
          'type' => 'none',
          'accuracy' => '100',
        ),
        'module' => 'radioactivity',
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => '100',
        'radioactivity_timestamp' => '1445267262',
      ),
    ),
    'field_name' => 'field_radioactivity',
    'entity_type' => 'node',
    'bundle' => 'war_zone_tournament',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.war_zone_tournament' => 'content_type.war_zone_tournament',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'radioactivity',
);
