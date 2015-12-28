<?php
/**
 * @file
 * battle_reports.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function battle_reports_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_game_results';
  $strongarm->value = '2';
  $export['comment_anonymous_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_game_result_system_';
  $strongarm->value = '0';
  $export['comment_anonymous_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_game_results';
  $strongarm->value = 1;
  $export['comment_default_mode_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_game_result_system_';
  $strongarm->value = 1;
  $export['comment_default_mode_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_game_results';
  $strongarm->value = '50';
  $export['comment_default_per_page_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_game_result_system_';
  $strongarm->value = '50';
  $export['comment_default_per_page_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_game_results';
  $strongarm->value = 0;
  $export['comment_form_location_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_game_result_system_';
  $strongarm->value = 0;
  $export['comment_form_location_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_game_results';
  $strongarm->value = '2';
  $export['comment_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_game_result_system_';
  $strongarm->value = '2';
  $export['comment_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_game_results';
  $strongarm->value = '1';
  $export['comment_preview_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_game_result_system_';
  $strongarm->value = '1';
  $export['comment_preview_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_game_results';
  $strongarm->value = 0;
  $export['comment_subject_field_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_game_result_system_';
  $strongarm->value = 0;
  $export['comment_subject_field_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_fields_game_results';
  $strongarm->value = array(
    0 => 'body',
    1 => 'field_images',
    2 => 'field_mission',
    3 => 'field_game_date',
    4 => 'field_your_army',
    5 => 'field_opponent_s_army',
    6 => 'field_your_results',
    7 => 'field_location',
    8 => 'field_points_per_army',
    9 => 'field_batteresult_commander',
    10 => 'field_battle_most_valuable_unit',
    11 => 'field_battle_deployment',
    12 => 'field_battle_mission_rules',
    13 => 'field_battle_my_vc',
    14 => 'field_your_commander_survival',
    15 => 'field_enemy_commander_survival',
    16 => 'field_battleresult_enemy_command',
  );
  $export['content_complete_fields_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_fields_game_result_system_';
  $strongarm->value = array(
    0 => 'body',
    1 => 'field_game_date',
    2 => 'field_images',
    3 => 'field_your_results',
    4 => 'field_mission',
    5 => 'field_opponent_s_army',
    6 => 'field_your_army',
    7 => 'field_location',
    8 => 'field_points_per_army',
    9 => 'field_batteresult_commander',
    10 => 'field_battle_most_valuable_unit',
    11 => 'field_battle_deployment',
    12 => 'field_battle_mission_rules',
    13 => 'field_your_commander_survival',
    14 => 'field_enemy_commander_survival',
    15 => 'field_battleresult_enemy_command',
  );
  $export['content_complete_fields_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_game_results';
  $strongarm->value = '1';
  $export['content_complete_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_game_result_system_';
  $strongarm->value = '1';
  $export['content_complete_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__game_results';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'metatags' => array(
          'weight' => '15',
        ),
        'xmlsitemap' => array(
          'weight' => '13',
        ),
        'badges' => array(
          'weight' => '18',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__game_result_system_';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '14',
        ),
        'metatags' => array(
          'weight' => '19',
        ),
        'xmlsitemap' => array(
          'weight' => '18',
        ),
        'badges' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_game_results';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_game_result_system_';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_game_results';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_game_result_system_';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_game_results';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_game_result_system_';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_game_results';
  $strongarm->value = '1';
  $export['node_preview_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_game_result_system_';
  $strongarm->value = '1';
  $export['node_preview_game_result_system_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_game_results';
  $strongarm->value = 0;
  $export['node_submitted_game_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_game_result_system_';
  $strongarm->value = 0;
  $export['node_submitted_game_result_system_'] = $strongarm;

  return $export;
}
