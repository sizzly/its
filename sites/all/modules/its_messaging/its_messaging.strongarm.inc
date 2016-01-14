<?php
/**
 * @file
 * its_messaging.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function its_messaging_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__models_all_start_project';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__models_all_start_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__statuses_all_new_files';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__statuses_all_new_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__statuses_all_new_status';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__statuses_all_new_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_narrative_army_event';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__stream_narrative_army_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_player_acknowledges_a_battle';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__stream_player_acknowledges_a_battle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_player_comments_on_post';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__stream_player_comments_on_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_player_likes_content';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__stream_player_likes_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_player_posts_a_battle';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__stream_player_posts_a_battle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_player_posts_new_content';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__stream_player_posts_new_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_player_rates_list';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__stream_player_rates_list'] = $strongarm;

  return $export;
}
