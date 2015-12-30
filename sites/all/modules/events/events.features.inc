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
if ($module == 'field_group' && $api == 'field_group') {
    return array('version' => 1);
  }
}

/**
 * Implements hook_views_api().
 */
function events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function events_default_entityform_type() {
  $items = array();
  $items['status_event_create_event'] = entity_import('entityform_type', '{
    "type" : "status_event_create_event",
    "label" : "Status: Event: Create event",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0, "3" : 0, "7" : 0, "9" : 0, "8" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
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
