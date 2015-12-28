<?php
/**
 * @file
 * field.node.field_event_date.special_event.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
      'granularity' => array(
        'month' => 'month',
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'year' => 'year',
        'second' => 0,
      ),
      'tz_handling' => 'site',
      'timezone_db' => 'UTC',
      'cache_enabled' => 1,
      'cache_count' => '4',
      'repeat' => 1,
      'profile2_private' => FALSE,
      'todate' => 'optional',
      'enddate' => 1,
      'enddate_required' => 0,
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
            'field_data_field_event_date' => array(
              'value' => 'field_event_date_value',
              'value2' => 'field_event_date_value2',
              'rrule' => 'field_event_date_rrule',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_event_date' => array(
              'value' => 'field_event_date_value',
              'value2' => 'field_event_date_value2',
              'rrule' => 'field_event_date_rrule',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_event_date',
    'type' => 'datetime',
    'module' => 'date',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
      'rrule' => array(
        'type' => 'text',
        'not null' => FALSE,
        'sortable' => FALSE,
        'views' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '3',
        'settings' => array(),
      ),
    ),
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'repeat_collapsed' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => '16',
    ),
    'field_name' => 'field_event_date',
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
  1 => 'date',
);
