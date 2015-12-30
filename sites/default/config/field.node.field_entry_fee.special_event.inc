<?php
/**
 * @file
 * field.node.field_entry_fee.special_event.inc
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
    'default_value' => NULL,
    'description' => 'Whilst iToysoldiers doesn\'t collect the entry fee for events managed or listed on the site, it\'s important to let players know how much it costs to participate in your event.  If you leave this field blank the data sheet will show the event as free to enter.  ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '15',
        'settings' => array(),
      ),
    ),
    'label' => 'Entry Fee',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '0.00',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => '20',
    ),
    'field_name' => 'field_entry_fee',
    'entity_type' => 'node',
    'bundle' => 'special_event',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.special_event' => 'content_type.special_event',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
