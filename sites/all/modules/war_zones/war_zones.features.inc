<?php
/**
 * @file
 * war_zones.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function war_zones_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
  $items['war_zone_all_generate_article'] = entity_import('entityform_type', '{
    "type" : "war_zone_all_generate_article",
    "label" : "War Zone: All: Generate Article",
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
  $items['war_zone_all_register_anonymous_'] = entity_import('entityform_type', '{
    "type" : "war_zone_all_register_anonymous_",
    "label" : "War Zone: All: Register Anonymous Player",
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
      "roles" : { "2" : "2", "3" : "3", "7" : "7", "9" : "9", "8" : "8", "1" : 0 },
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
 * Implements hook_flag_default_flags().
 */
function war_zones_flag_default_flags() {
  $flags = array();
  // Exported flag: "Indicates if a player has paid the registration fee.".
  $flags['paid'] = array(
    'content_type' => 'node_registration',
    'title' => 'Indicates if a player has paid the registration fee.',
    'global' => 1,
    'types' => array(
      0 => 'war_zone_league',
      1 => 'war_zone_tournament',
    ),
    'flag_short' => 'Unpaid',
    'flag_long' => '',
    'flag_message' => 'Paid',
    'unflag_short' => 'Paid',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
        1 => 7,
        2 => 9,
        3 => 8,
      ),
      'unflag' => array(
        0 => 3,
        1 => 7,
        2 => 9,
        3 => 8,
      ),
    ),
    'weight' => 0,
    'show_on_entity' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'module' => 'war_zones',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

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
  $items['war_zone_all_anonymous_actions'] = entity_import('message_type', '{
    "name" : "war_zone_all_anonymous_actions",
    "description" : "War Zone: All: Anonymous Actions",
    "argument_keys" : [ "!messtxt" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "!messtxt",
          "format" : "pure_html",
          "safe_value" : "!messtxt"
        }
      ]
    }
  }');
  $items['war_zone_all_new_round_message'] = entity_import('message_type', '{
    "name" : "war_zone_all_new_round_message",
    "description" : "War Zone: All: New Round Message",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "A new round has begun for \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
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
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Create an <em>Event</em> to use iToysoldiers features with an event that doesn\'t quite line up with the structured events offered on the site. Perfect for club days, meetings, seminars, and competitive play events that aren\'t being managed through iToysoldiers.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'war_zone_league' => array(
      'name' => t('League'),
      'base' => 'node_content',
      'description' => t('Manage a competitive league for your players.  IToysoldiers handles all the registration, calculations, scheduling, and pairings. Swiss Style and Casual league mechanics are supported.  '),
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
  $items['war_zone_all_generate_comp'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Create Comp Scorecards",
      "link_type" : "confirm",
      "bundles" : {
        "war_zone_league" : "war_zone_league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will generate the composition scorecards for this war zone."
    },
    "name" : "war_zone_all_generate_comp",
    "label" : "War Zone: All: Generate Comp Scorecards",
    "path" : "war_zone_all_generate_comp",
    "entity_type" : "node"
  }');
  $items['war_zone_all_generate_painting_s'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Create Painting Scorecards",
      "link_type" : "confirm",
      "bundles" : {
        "league" : "league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will generate the painting scorecards for this war zone."
    },
    "name" : "war_zone_all_generate_painting_s",
    "label" : "War Zone: All: Generate Painting Scorecards",
    "path" : "war_zone_all_generate_painting_s",
    "entity_type" : "node"
  }');
  $items['war_zone_all_open_registration'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Open War Zone",
      "link_type" : "confirm",
      "bundles" : {
        "war_zone_league" : "war_zone_league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This starts the war zone and opens up registration. It cannot be undone. "
    },
    "name" : "war_zone_all_open_registration",
    "label" : "War Zone: All: Open Registration",
    "path" : "wz-open",
    "entity_type" : "node"
  }');
  $items['war_zone_tournament_next_round'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Start Next Round",
      "link_type" : "confirm",
      "bundles" : { "war_zone_tournament" : "war_zone_tournament" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "You will start a new round and generate matches. This cannot be undone."
    },
    "name" : "war_zone_tournament_next_round",
    "label" : "War Zone: Tournament: Next Round",
    "path" : "war_zone_tournament_next_round",
    "entity_type" : "node"
  }');
  $items['wz_complete'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Complete War Zone",
      "link_type" : "confirm",
      "bundles" : {
        "war_zone_league" : "war_zone_league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
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
        "war_zone_league" : "war_zone_league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
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
