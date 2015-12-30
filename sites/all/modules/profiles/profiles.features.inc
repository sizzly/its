<?php
/**
 * @file
 * profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function profiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function profiles_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow".
  $flags['follow'] = array(
    'content_type' => 'user',
    'title' => 'Follow',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => 'Add this players activities to your feed',
    'flag_message' => 'Following',
    'unflag_short' => 'Following',
    'unflag_long' => 'Remove this player from your feed.',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_entity' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_profile' => 0,
    'access_uid' => '',
    'api_version' => 2,
    'module' => 'profiles',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_default_profile2_type().
 */
function profiles_default_profile2_type() {
  $items = array();
  $items['ironmonger'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "ironmonger",
    "label" : "Ironmonger",
    "weight" : "9",
    "data" : { "registration" : 0 }
  }');
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Personal",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}
