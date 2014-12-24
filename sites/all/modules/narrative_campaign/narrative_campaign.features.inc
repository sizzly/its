<?php
/**
 * @file
 * narrative_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function narrative_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
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
function narrative_campaign_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function narrative_campaign_default_entityform_type() {
  $items = array();
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
  $items['warzone_campaign_factions'] = entity_import('entityform_type', '{
    "type" : "warzone_campaign_factions",
    "label" : "Warzone: Campaign: Factions",
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
  $items['warzone_campaign_phase'] = entity_import('entityform_type', '{
    "type" : "warzone_campaign_phase",
    "label" : "Warzone: Campaign: Phase",
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
  $items['warzone_campaign_report_battle_p'] = entity_import('entityform_type', '{
    "type" : "warzone_campaign_report_battle_p",
    "label" : "Warzone: Campaign: Report Battle - Phase",
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
function narrative_campaign_flag_default_flags() {
  $flags = array();
  // Exported flag: "Enable Campaign".
  $flags['enable_campaign'] = array(
    'content_type' => 'node',
    'title' => 'Enable Campaign',
    'global' => 1,
    'types' => array(
      0 => 'narrative_campaign',
    ),
    'flag_short' => 'Enable',
    'flag_long' => 'Allow creation of new Campaign Instances',
    'flag_message' => 'Enabled',
    'unflag_short' => 'Disable',
    'unflag_long' => 'Suspend creation of new Campaign Instances',
    'unflag_message' => 'Disabled',
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
    'access_author' => 'own',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'narrative_campaign',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Glory".
  $flags['glory'] = array(
    'content_type' => 'node',
    'title' => 'Glory',
    'global' => 0,
    'types' => array(
      0 => 'army_profile',
      1 => 'article',
      2 => 'game_results',
      3 => 'blog',
      4 => 'club',
      5 => 'event',
      6 => 'gallery',
      7 => 'game_result_system_',
      8 => 'war_zone_league',
      9 => 'listcrit',
      10 => 'narrative_campaign',
      11 => 'narrative_campaign_instance',
      12 => 'special_event',
      13 => 'war_zone_tournament',
    ),
    'flag_short' => 'Salute',
    'flag_long' => 'Show the player that you offer tribute to their content',
    'flag_message' => 'Saluted',
    'unflag_short' => 'Recant',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Saluted',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'narrative_campaign',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Indicates if a player has paid the registration fee.".
  $flags['paid'] = array(
    'content_type' => 'node_registration',
    'title' => 'Indicates if a player has paid the registration fee.',
    'global' => 1,
    'types' => array(
      0 => 'war_zone_league',
      1 => 'narrative_campaign_instance',
      2 => 'special_event',
      3 => 'war_zone_tournament',
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
    'api_version' => 2,
    'module' => 'narrative_campaign',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function narrative_campaign_default_message_type() {
  $items = array();
  $items['campaign_reported_battle'] = entity_import('message_type', '{
    "name" : "campaign_reported_battle",
    "description" : "Campaign: Reported Battle",
    "argument_keys" : [ "!messtext" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [ { "value" : "!messtext\\r\\n", "format" : "php_code" } ] }
  }');
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
function narrative_campaign_node_info() {
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
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function narrative_campaign_default_rules_link() {
  $items = array();
  $items['complete_warzone'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Complete",
      "link_type" : "confirm",
      "bundles" : {
        "war_zone_league" : "war_zone_league",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will generate the final scores and move the War Zone to complete state.  This cannot be undone."
    },
    "name" : "complete_warzone",
    "label" : "War Zone: Complete",
    "path" : "complete_warzone",
    "entity_type" : "node"
  }');
  $items['league_management_withdraw'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Withdraw",
      "link_type" : "confirm",
      "bundles" : [],
      "entity_link" : false,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will take the player out of the league. No further matches will be generated. "
    },
    "name" : "league_management_withdraw",
    "label" : "League Management Withdraw",
    "path" : "league_management_withdraw",
    "entity_type" : "user"
  }');
  $items['war_zone_campaign_start'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Commence Battle",
      "link_type" : "confirm",
      "bundles" : { "narrative_campaign_instance" : "narrative_campaign_instance" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will start the campaign.  This cannot be undone."
    },
    "name" : "war_zone_campaign_start",
    "label" : "War Zone: Campaign: Start",
    "path" : "war_zone_campaign_start",
    "entity_type" : "node"
  }');
  $items['war_zone_open_league'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Open War Zone",
      "link_type" : "confirm",
      "bundles" : {
        "war_zone_league" : "war_zone_league",
        "league" : "league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This opens the War Zone for registration and disables some of the configuration options.  It cannot be undone."
    },
    "name" : "war_zone_open_league",
    "label" : "War Zone: Open War Zone",
    "path" : "war_zone_open",
    "entity_type" : "node"
  }');
  $items['warzone_award_achievement'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Award",
      "link_type" : "javascript",
      "bundles" : {
        "war_zone_league" : "war_zone_league",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : false
    },
    "name" : "warzone_award_achievement",
    "label" : "Warzone: Award Achievement",
    "path" : "award_achievement",
    "entity_type" : "node_registration"
  }');
  $items['warzone_campaign_close_and_score'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Close and Score",
      "link_type" : "token",
      "bundles" : { "campaign_phase_instance" : "campaign_phase_instance" },
      "entity_link" : 0
    },
    "name" : "warzone_campaign_close_and_score",
    "label" : "Warzone: Campaign: Close and Score Phase",
    "path" : "warzone_campaign_close_and_score",
    "entity_type" : "relation"
  }');
  $items['warzone_campaign_launch_instance'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Go On Campaign",
      "link_type" : "confirm",
      "bundles" : [],
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will launch an instance of the campaign."
    },
    "name" : "warzone_campaign_launch_instance",
    "label" : "Warzone: Campaign: Launch Instance",
    "path" : "warzone_campaign_launch_instance",
    "entity_type" : "node"
  }');
  $items['warzone_campaign_open_phase'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Commence Battle",
      "link_type" : "confirm",
      "bundles" : { "campaign_phase_instance" : "campaign_phase_instance" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will open a campaign phase for battle"
    },
    "name" : "warzone_campaign_open_phase",
    "label" : "Warzone: Campaign: Open Phase",
    "path" : "warzone_campaign_open_phase",
    "entity_type" : "relation"
  }');
  $items['warzone_campaign_skip_phase'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Skip",
      "link_type" : "confirm",
      "bundles" : { "campaign_phase_instance" : "campaign_phase_instance" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will skip this phase in the campaign."
    },
    "name" : "warzone_campaign_skip_phase",
    "label" : "Warzone: Campaign: Skip Phase",
    "path" : "warzone_campaign_skip_phase",
    "entity_type" : "relation"
  }');
  return $items;
}
