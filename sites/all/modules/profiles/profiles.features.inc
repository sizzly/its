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
 * Implements hook_default_profile2_type().
 */
function profiles_default_profile2_type() {
  $items = array();
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
