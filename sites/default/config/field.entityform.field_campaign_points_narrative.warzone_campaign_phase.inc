<?php
/**
 * @file
 * field.entityform.field_campaign_points_narrative.warzone_campaign_phase.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
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
            'field_data_field_campaign_points_narrative' => array(
              'value' => 'field_campaign_points_narrative_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_campaign_points_narrative' => array(
              'value' => 'field_campaign_points_narrative_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_campaign_points_narrative',
    'type' => 'number_integer',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
    ),
    'label' => 'Campaign Points',
    'required' => 0,
    'settings' => array(
      'max' => 5,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
    'field_name' => 'field_campaign_points_narrative',
    'entity_type' => 'entityform',
    'bundle' => 'warzone_campaign_phase',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
