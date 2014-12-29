<?php
/**
 * @file
 * war_zones.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function war_zones_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function war_zones_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function war_zones_default_entityform_type() {
  $items = array();
  $items['score_card'] = entity_import('entityform_type', '{
    "type" : "score_card",
    "label" : "Score Card",
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
      "form_status" : "ENTITYFORM_CLOSED",
      "roles" : { "2" : "2", "1" : 0, "3" : 0, "7" : 0, "9" : 0, "8" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['war_zone_grant_achievement'] = entity_import('entityform_type', '{
    "type" : "war_zone_grant_achievement",
    "label" : "War Zone: Grant Achievement",
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
      "redirect_path" : "[current-page:url:relative]",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_default_message_type().
 */
function war_zones_default_message_type() {
  $items = array();
  $items['stream_a_warzone_has_begun'] = entity_import('message_type', '{
    "name" : "stream_a_warzone_has_begun",
    "description" : "Stream: A Warzone has begun",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E battle has commenced.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_a_warzone_has_ended'] = entity_import('message_type', '{
    "name" : "stream_a_warzone_has_ended",
    "description" : "Stream: A Warzone has ended",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E battle has ended.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_new_war_zone'] = entity_import('message_type', '{
    "name" : "stream_new_war_zone",
    "description" : "Stream: New War Zone",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E created a new [message:field-stream-node-ref:content-type:name], \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_player_cancels_registration_for_warzone'] = entity_import('message_type', '{
    "name" : "stream_player_cancels_registration_for_warzone",
    "description" : "Stream: Player cancels registration for Warzone",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E has withdrawn from \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_player_registers_for_warzone'] = entity_import('message_type', '{
    "name" : "stream_player_registers_for_warzone",
    "description" : "Stream: Player registers for Warzone",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E has committed forces to \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function war_zones_node_info() {
  $items = array(
    'league' => array(
      'name' => t('League 2.0'),
      'base' => 'node_content',
      'description' => t('The totally revised IToysoldiers league system. Includes Journeyman 2015 leagues. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'narrative_campaign' => array(
      'name' => t('Narrative Campaign'),
      'base' => 'node_content',
      'description' => t('Create a narrative campaign on iToysoldiers.  Publish the rules, scenarios, time line, maps, etc.  Once you have this page in place you can link it to War Zone to keep track of the battles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'narrative_campaign_instance' => array(
      'name' => t('Narrative Campaign Instance'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'special_event' => array(
      'name' => t('Special Event'),
      'base' => 'node_content',
      'description' => t('Create a <em>Special Event</em> to use iToysoldiers features with an event that doesn\'t quite line up with the structured events offered on the site. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'war_zone_tournament' => array(
      'name' => t('Tournament'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function war_zones_default_rules_link() {
  $items = array();
  $items['war_zone_all_open_registration'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Open War Zone",
      "link_type" : "confirm",
      "bundles" : {
        "league" : "league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 1,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This starts the war zone and opens up registration. It cannot be undone. "
    },
    "name" : "war_zone_all_open_registration",
    "label" : "War Zone: All: Open Registration",
    "path" : "wz-open",
    "entity_type" : "node"
  }');
  $items['wz_complete'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Complete War Zone",
      "link_type" : "confirm",
      "bundles" : {
        "league" : "league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 1,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will finish the war zone and finalize scores. It cannot be undone. "
    },
    "name" : "wz_complete",
    "label" : "War Zone: All: Complete",
    "path" : "wz_complete",
    "entity_type" : "node"
  }');
  $items['wz_start'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Start War Zone",
      "link_type" : "confirm",
      "bundles" : {
        "league" : "league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 1,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This cannot be undone"
    },
    "name" : "wz_start",
    "label" : "War Zone: All: Start",
    "path" : "wz_start",
    "entity_type" : "node"
  }');
  return $items;
}
