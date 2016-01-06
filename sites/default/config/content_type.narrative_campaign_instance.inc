<?php
/**
 * @file
 * content_type.narrative_campaign_instance.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'narrative_campaign_instance',
  'name' => 'Narrative Campaign Instance',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.narrative_campaign_instance' => 'field.node.body.narrative_campaign_instance',
  'field.node.field_allow_sign_up_narrative.narrative_campaign_instance' => 'field.node.field_allow_sign_up_narrative.narrative_campaign_instance',
  'field.node.field_campaign_badge.narrative_campaign_instance' => 'field.node.field_campaign_badge.narrative_campaign_instance',
  'field.node.field_eligible_battles_narrative.narrative_campaign_instance' => 'field.node.field_eligible_battles_narrative.narrative_campaign_instance',
  'field.node.field_entry_fee.narrative_campaign_instance' => 'field.node.field_entry_fee.narrative_campaign_instance',
  'field.node.field_event_date.narrative_campaign_instance' => 'field.node.field_event_date.narrative_campaign_instance',
  'field.node.field_event_link.narrative_campaign_instance' => 'field.node.field_event_link.narrative_campaign_instance',
  'field.node.field_event_type.narrative_campaign_instance' => 'field.node.field_event_type.narrative_campaign_instance',
  'field.node.field_game_warzone.narrative_campaign_instance' => 'field.node.field_game_warzone.narrative_campaign_instance',
  'field.node.field_location.narrative_campaign_instance' => 'field.node.field_location.narrative_campaign_instance',
  'field.node.field_registration_deadline.narrative_campaign_instance' => 'field.node.field_registration_deadline.narrative_campaign_instance',
  'field.node.field_slots_warzone.narrative_campaign_instance' => 'field.node.field_slots_warzone.narrative_campaign_instance',
  'field.node.field_status.narrative_campaign_instance' => 'field.node.field_status.narrative_campaign_instance',
  'field.node.field_victor_narrative.narrative_campaign_instance' => 'field.node.field_victor_narrative.narrative_campaign_instance',
  'field.node.field_website.narrative_campaign_instance' => 'field.node.field_website.narrative_campaign_instance',
  'field.node.field_radioactivity.narrative_campaign_instance' => 'field.node.field_radioactivity.narrative_campaign_instance',
  'permission.create_narrative_campaign_instance_content' => 'permission.create_narrative_campaign_instance_content',
  'permission.edit_own_narrative_campaign_instance_content' => 'permission.edit_own_narrative_campaign_instance_content',
  'permission.edit_any_narrative_campaign_instance_content' => 'permission.edit_any_narrative_campaign_instance_content',
  'permission.delete_own_narrative_campaign_instance_content' => 'permission.delete_own_narrative_campaign_instance_content',
  'permission.delete_any_narrative_campaign_instance_content' => 'permission.delete_any_narrative_campaign_instance_content',
);

$modules = array(
  0 => 'node',
);
