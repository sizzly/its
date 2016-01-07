<?php
/**
 * @file
 * field.message.field_reply_form.stream_player_earns_an_achievement.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'bundle' => 'status_comments',
      'access' => '-1',
      'display' => '-1',
      'form' => '-1',
      'allow_reply' => '-1',
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
            'field_data_field_reply_form' => array(
              'access' => 'field_reply_form_access',
              'display' => 'field_reply_form_display',
              'form' => 'field_reply_form_form',
              'allow_reply' => 'field_reply_form_allow_reply',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_reply_form' => array(
              'access' => 'field_reply_form_access',
              'display' => 'field_reply_form_display',
              'form' => 'field_reply_form_form',
              'allow_reply' => 'field_reply_form_allow_reply',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_reply_form',
    'type' => 'reply',
    'module' => 'reply',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'access' => array(
        'description' => '-1 - global, 0 - disabled, 1 - read, 2 - write',
        'type' => 'int',
        'size' => 'tiny',
        'length' => 1,
        'not null' => TRUE,
      ),
      'display' => array(
        'description' => '-1 - global, 1 - flat list, 2 - threaded list',
        'type' => 'int',
        'size' => 'tiny',
        'length' => 1,
        'not null' => TRUE,
      ),
      'form' => array(
        'description' => 'Position of the reply form. -1 - global, 1 - on the same page, 2 - on custom page.',
        'type' => 'int',
        'size' => 'tiny',
        'length' => 1,
        'not null' => TRUE,
        'default' => '1',
      ),
      'allow_reply' => array(
        'description' => 'Allow replying on replies. -1 global, 0 - deny, 1 - allow.',
        'type' => 'int',
        'size' => 'tiny',
        'length' => 1,
        'not null' => TRUE,
        'default' => '1',
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Reply',
    'widget' => array(
      'weight' => '6',
      'type' => 'reply',
      'module' => 'reply',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'access' => '-1',
      'display' => '-1',
      'form' => '-1',
      'allow_reply' => '-1',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'reply_default',
        'settings' => array(),
        'module' => 'reply',
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
    'field_name' => 'field_reply_form',
    'entity_type' => 'message',
    'bundle' => 'stream_player_earns_an_achievement',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'reply',
);
