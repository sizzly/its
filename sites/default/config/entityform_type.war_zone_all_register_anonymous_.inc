<?php
/**
 * @file
 * entityform_type.war_zone_all_register_anonymous_.inc
 */

$api = '2.0.0';

$data = entity_import('entityform_type', '{
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

$dependencies = array();

$optional = array(
  'field.entityform.field_event_link.war_zone_all_register_anonymous_' => 'field.entityform.field_event_link.war_zone_all_register_anonymous_',
  'field.entityform.field_player_email_registration.war_zone_all_register_anonymous_' => 'field.entityform.field_player_email_registration.war_zone_all_register_anonymous_',
  'field.entityform.field_register_army.war_zone_all_register_anonymous_' => 'field.entityform.field_register_army.war_zone_all_register_anonymous_',
  'field.entityform.field_register_real_name.war_zone_all_register_anonymous_' => 'field.entityform.field_register_real_name.war_zone_all_register_anonymous_',
);

$modules = array(
  0 => 'entity',
  1 => 'entityform',
);
