<?php
/**
 * @file
 * field.entityform.field_date_and_time.status_event_create_event.inc
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
        'hour' => 'hour',
        'minute' => 'minute',
        'year' => 'year',
        'second' => 0,
      ),
      'tz_handling' => 'user',
      'timezone_db' => 'UTC',
      'cache_enabled' => 0,
      'cache_count' => '4',
      'repeat' => '0',
      'profile2_private' => FALSE,
      'todate' => 'optional',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_date_and_time' => array(
              'value' => 'field_date_and_time_value',
              'value2' => 'field_date_and_time_value2',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_date_and_time' => array(
              'value' => 'field_date_and_time_value',
              'value2' => 'field_date_and_time_value2',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_date_and_time',
    'type' => 'datetime',
    'module' => 'date',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'datetime',
        'mysql_type' => 'datetime',
        'pgsql_type' => 'timestamp without time zone',
        'sqlite_type' => 'varchar',
        'sqlsrv_type' => 'smalldatetime',
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => TRUE,
      ),
      'value2' => array(
        'type' => 'datetime',
        'mysql_type' => 'datetime',
        'pgsql_type' => 'timestamp without time zone',
        'sqlite_type' => 'varchar',
        'sqlsrv_type' => 'smalldatetime',
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Date and Time',
    'widget' => array(
      'weight' => '5',
      'type' => 'date_popup',
      'module' => 'date',
      'active' => 1,
      'settings' => array(
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'year_range' => '-0:+2',
        'increment' => '15',
        'label_position' => 'above',
        'text_parts' => array(),
        'display_all_day' => 1,
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
      ),
    ),
    'settings' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
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
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_date_and_time',
    'entity_type' => 'entityform',
    'bundle' => 'status_event_create_event',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'date',
);
