<?php
/**
 * @file
 * events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_ctools_plugin_api($module = NULL, $api = NULL) {
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
function events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Let the gaming world know about your miniature wargaming <em>Event</em>. This is a simple calendar entry and is perfect for open game days, regular events, and the like.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Give your event a title and an optional description.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
