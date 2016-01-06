<?php
/**
 * @file
 * entityform_type.score_card.inc
 */

$api = '2.0.0';

$data = entity_import('entityform_type', '{
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

$dependencies = array();

$optional = array(
  'field.entityform.field_your_results.score_card' => 'field.entityform.field_your_results.score_card',
  'field.entityform.field_victory_points_sc.score_card' => 'field.entityform.field_victory_points_sc.score_card',
  'field.entityform.field_army_points_sc.score_card' => 'field.entityform.field_army_points_sc.score_card',
  'field.entityform.field_event_link.score_card' => 'field.entityform.field_event_link.score_card',
  'field.entityform.field_round_sc.score_card' => 'field.entityform.field_round_sc.score_card',
  'field.entityform.field_display_sc.score_card' => 'field.entityform.field_display_sc.score_card',
  'field.entityform.field_defeat.score_card' => 'field.entityform.field_defeat.score_card',
  'field.entityform.field_draw.score_card' => 'field.entityform.field_draw.score_card',
  'field.entityform.field_victory.score_card' => 'field.entityform.field_victory.score_card',
  'field.entityform.field_state_sc.score_card' => 'field.entityform.field_state_sc.score_card',
  'field.entityform.field_sportsmanship_sc.score_card' => 'field.entityform.field_sportsmanship_sc.score_card',
  'field.entityform.field_additional_points_sc.score_card' => 'field.entityform.field_additional_points_sc.score_card',
  'field.entityform.field_aggregate_score_sc.score_card' => 'field.entityform.field_aggregate_score_sc.score_card',
  'field.entityform.field_comp_sc.score_card' => 'field.entityform.field_comp_sc.score_card',
  'field.entityform.field_explanation_sc.score_card' => 'field.entityform.field_explanation_sc.score_card',
  'field.entityform.field_opponent_reg_sc.score_card' => 'field.entityform.field_opponent_reg_sc.score_card',
  'field.entityform.field_painting_sc.score_card' => 'field.entityform.field_painting_sc.score_card',
  'field.entityform.field_phase_sc.score_card' => 'field.entityform.field_phase_sc.score_card',
  'field.entityform.field_registration_sc.score_card' => 'field.entityform.field_registration_sc.score_card',
  'field.entityform.field_strength_of_schedule_sc.score_card' => 'field.entityform.field_strength_of_schedule_sc.score_card',
  'field.entityform.field_score_card_type.score_card' => 'field.entityform.field_score_card_type.score_card',
  'field.entityform.field_player_sc.score_card' => 'field.entityform.field_player_sc.score_card',
  'field.entityform.field_opponent_sc.score_card' => 'field.entityform.field_opponent_sc.score_card',
  'field.entityform.field_battle_points_sc.score_card' => 'field.entityform.field_battle_points_sc.score_card',
);

$modules = array(
  0 => 'entity',
  1 => 'entityform',
);
