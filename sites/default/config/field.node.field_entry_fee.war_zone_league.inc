<?php
/**
 * @file
 * field.node.field_entry_fee.war_zone_league.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
      'decimal_separator' => '.',
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
            'field_data_field_entry_fee' => array(
              'value' => 'field_entry_fee_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_entry_fee' => array(
              'value' => 'field_entry_fee_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_entry_fee',
    'type' => 'number_float',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'float',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Entry Fee',
    'widget' => array(
      'weight' => '16',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
    ),
    'settings' => array(
      'min' => '',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'number_decimal',
        'settings' => array(
          'thousand_separator' => ' ',
          'decimal_separator' => '.',
          'scale' => 2,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '3',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_entry_fee',
    'entity_type' => 'node',
    'bundle' => 'war_zone_league',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.war_zone_league' => 'content_type.war_zone_league',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
