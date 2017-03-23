<?php
/**
 * @file
 * battle_reports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function battle_reports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "dfp" && $api == "default_dfp_tags") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function battle_reports_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function battle_reports_flag_default_flags() {
  $flags = array();
  // Exported flag: "Acknowledge Battle".
  $flags['acknowledge_battle'] = array(
    'content_type' => 'node',
    'title' => 'Acknowledge Battle',
    'global' => 1,
    'types' => array(
      0 => 'game_results',
    ),
    'flag_short' => 'Acknowledge Battle',
    'flag_long' => 'Clicking indicates that you were the opponent in this battle. ',
    'flag_message' => 'Acknowledged',
    'unflag_short' => 'Disavow',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Acknowledged. ',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => 2,
        1 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 1,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure?',
    'unflag_confirmation' => 'Are you sure?',
    'module' => 'battle_reports',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Meta Complete".
  $flags['meta_complete'] = array(
    'content_type' => 'node',
    'title' => 'Meta Complete',
    'global' => 1,
    'types' => array(
      0 => 'game_results',
      1 => 'location',
      2 => 'game_result_system_',
      3 => 'war_zone_league',
    ),
    'flag_short' => 'Mark Complete',
    'flag_long' => 'All available meta data entered',
    'flag_message' => 'Completed',
    'unflag_short' => 'Complete',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Completed',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => 'own',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure?',
    'unflag_confirmation' => 'This battle will be removed from you Incomplete Meta list.',
    'module' => 'battle_reports',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function battle_reports_node_info() {
  $items = array(
    'game_result_system_' => array(
      'name' => t('Game Result (System)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'game_results' => array(
      'name' => t('Battle Results'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('This is the Battle Results submission page.  The more information you can enter about your battle the better.  A number of achievements and stats are based upon the results of this submission.  Don\'t worry, you can always come back and fill it out with details later.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
