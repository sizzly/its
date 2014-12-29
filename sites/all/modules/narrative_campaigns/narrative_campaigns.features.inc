<?php
/**
 * @file
 * narrative_campaigns.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function narrative_campaigns_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function narrative_campaigns_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function narrative_campaigns_default_entityform_type() {
  $items = array();
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
    "label" : "War Zone: Campaign: Report Battle reg req",
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
function narrative_campaigns_flag_default_flags() {
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
    'module' => 'narrative_campaigns',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_default_rules_link().
 */
function narrative_campaigns_default_rules_link() {
  $items = array();
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
