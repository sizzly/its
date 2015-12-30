<?php
/**
 * @file
 * field.node.field_registration_deadline.war_zone_tournament.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'profile2_private' => FALSE,
      'repeat' => 0,
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
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
            'field_data_field_registration_deadline' => array(
              'value' => 'field_registration_deadline_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_registration_deadline' => array(
              'value' => 'field_registration_deadline_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_registration_deadline',
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
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
    ),
    'label' => 'Registration Deadline',
    'required' => 0,
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => '12',
    ),
    'field_name' => 'field_registration_deadline',
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
  1 => 'date',
);
