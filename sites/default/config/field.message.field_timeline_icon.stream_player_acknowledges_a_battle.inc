<?php
/**
 * @file
 * field.message.field_timeline_icon.stream_player_acknowledges_a_battle.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_timeline_icon' => array(
              'value' => 'field_timeline_icon_value',
              'format' => 'field_timeline_icon_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_timeline_icon' => array(
              'value' => 'field_timeline_icon_value',
              'format' => 'field_timeline_icon_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_name' => 'field_timeline_icon',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Timeline Icon',
    'widget' => array(
      'weight' => '6',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'settings' => array(),
        'module' => 'text',
        'weight' => 2,
      ),
      'message_notify_email_subject' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
      'message_notify_email_body' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      0 => array(
        'value' => 'fa-fire',
      ),
    ),
    'field_name' => 'field_timeline_icon',
    'entity_type' => 'message',
    'bundle' => 'stream_player_acknowledges_a_battle',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
