<?php
/**
 * @file
 * field.node.field_event_date.war_zone_league.inc
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
    'label' => 'Date',
    'widget' => array(
      'weight' => '14',
      'type' => 'date_popup',
      'module' => 'date',
      'active' => 1,
      'settings' => array(
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'year_range' => '-1:+3',
        'increment' => '15',
        'label_position' => 'above',
        'text_parts' => array(),
        'repeat_collapsed' => 1,
        'display_all_day' => 0,
      ),
    ),
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value_code' => '+14 days',
      'default_value2' => 'blank',
      'default_value_code2' => '+30 days',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '8',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'inline',
        'type' => 'hidden',
        'weight' => '15',
        'settings' => array(),
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_event_date',
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
  1 => 'date',
);
