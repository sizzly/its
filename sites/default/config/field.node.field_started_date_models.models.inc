<?php
/**
 * @file
 * field.node.field_started_date_models.models.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'granularity' => array(
        'month' => 'month',
        'day' => 'day',
        'year' => 'year',
        'hour' => 0,
        'minute' => 0,
        'second' => 0,
      ),
      'tz_handling' => 'none',
      'timezone_db' => '',
      'cache_enabled' => 0,
      'cache_count' => '4',
      'repeat' => '0',
      'profile2_private' => FALSE,
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_started_date_models' => array(
              'value' => 'field_started_date_models_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_started_date_models' => array(
              'value' => 'field_started_date_models_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_started_date_models',
    'type' => 'datestamp',
    'module' => 'date',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Started Date',
    'widget' => array(
      'weight' => '7',
      'type' => 'date_popup',
      'module' => 'date',
      'active' => 1,
      'settings' => array(
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'year_range' => '-3:+0',
        'increment' => '15',
        'label_position' => 'above',
        'text_parts' => array(),
        'display_all_day' => 0,
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
      ),
    ),
    'settings' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'date_default',
        'settings' => array(
          'format_type' => 'long',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'fromto' => 'both',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'module' => 'date',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '6',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_started_date_models',
    'entity_type' => 'node',
    'bundle' => 'models',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.models' => 'content_type.models',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'date',
);
