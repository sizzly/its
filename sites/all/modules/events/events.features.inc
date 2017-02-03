<?php
/**
 * @file
 * events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_flag_default_flags().
 */
function events_flag_default_flags() {
  $flags = array();
  // Exported flag: "Event: All: Going".
  $flags['event_all_going'] = array(
    'content_type' => 'node',
    'title' => 'Event: All: Going',
    'global' => 0,
    'types' => array(
      0 => 'event',
    ),
    'flag_short' => 'Going',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Recant',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'events',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Event: All: Interested".
  $flags['event_all_interested'] = array(
    'content_type' => 'node',
    'title' => 'Event: All: Interested',
    'global' => 0,
    'types' => array(
      0 => 'event',
    ),
    'flag_short' => 'Interested',
    'flag_long' => '',
    'flag_message' => 'Interested',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'events',
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
function events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Let the gaming world know about your miniature wargaming <em>Event</em>. This is a simple calendar entry and is perfect for open game days, regular events, and the like.'),
      'has_title' => '1',
      'title_label' => t('Event Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function events_default_rules_link() {
  $items = array();
  $items['war_zone_all_cancel_event'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Cancel",
      "link_type" : "confirm",
      "bundles" : { "event" : "event" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will cancel the event. It cannot be undone"
    },
    "name" : "war_zone_all_cancel_event",
    "label" : "War Zone: All: Cancel Event",
    "path" : "war_zone_all_cancel_event",
    "entity_type" : "node"
  }');
  return $items;
}
