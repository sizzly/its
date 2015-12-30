<?php
/**
 * @file
 * entityform_type.warzone_campaign_factions.inc
 */

$api = '2.0.0';

$data = entity_import('entityform_type', '{
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

$dependencies = array();

$optional = array(
  'field.entityform.field_event_link.warzone_campaign_factions' => 'field.entityform.field_event_link.warzone_campaign_factions',
  'field.entityform.field_image.warzone_campaign_factions' => 'field.entityform.field_image.warzone_campaign_factions',
  'field.entityform.field_mechanics_text.warzone_campaign_factions' => 'field.entityform.field_mechanics_text.warzone_campaign_factions',
  'field.entityform.field_narrative_text.warzone_campaign_factions' => 'field.entityform.field_narrative_text.warzone_campaign_factions',
  'field.entityform.field_title_chronicle.warzone_campaign_factions' => 'field.entityform.field_title_chronicle.warzone_campaign_factions',
);

$modules = array(
  0 => 'entity',
  1 => 'entityform',
);
