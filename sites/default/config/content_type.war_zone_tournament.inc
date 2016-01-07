<?php
/**
 * @file
 * content_type.war_zone_tournament.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'war_zone_tournament',
  'name' => 'Tournament',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.war_zone_tournament' => 'field.node.body.war_zone_tournament',
  'field.node.field_game_warzone.war_zone_tournament' => 'field.node.field_game_warzone.war_zone_tournament',
  'field.node.field_points_per_army.war_zone_tournament' => 'field.node.field_points_per_army.war_zone_tournament',
  'field.node.field_campaign_badge.war_zone_tournament' => 'field.node.field_campaign_badge.war_zone_tournament',
  'field.node.field_event_date_warzone.war_zone_tournament' => 'field.node.field_event_date_warzone.war_zone_tournament',
  'field.node.field_location.war_zone_tournament' => 'field.node.field_location.war_zone_tournament',
  'field.node.field_slots_warzone.war_zone_tournament' => 'field.node.field_slots_warzone.war_zone_tournament',
  'field.node.field_tournament_type.war_zone_tournament' => 'field.node.field_tournament_type.war_zone_tournament',
  'field.node.field_status.war_zone_tournament' => 'field.node.field_status.war_zone_tournament',
  'field.node.field_tournament_missions.war_zone_tournament' => 'field.node.field_tournament_missions.war_zone_tournament',
  'field.node.field_event_type.war_zone_tournament' => 'field.node.field_event_type.war_zone_tournament',
  'field.node.field_event_date.war_zone_tournament' => 'field.node.field_event_date.war_zone_tournament',
  'field.node.field_website.war_zone_tournament' => 'field.node.field_website.war_zone_tournament',
  'field.node.field_registration_deadline.war_zone_tournament' => 'field.node.field_registration_deadline.war_zone_tournament',
  'field.node.field_warzone_round.war_zone_tournament' => 'field.node.field_warzone_round.war_zone_tournament',
  'field.node.field_entry_fee.war_zone_tournament' => 'field.node.field_entry_fee.war_zone_tournament',
  'field.node.field_radioactivity.war_zone_tournament' => 'field.node.field_radioactivity.war_zone_tournament',
  'permission.create_war_zone_tournament_content' => 'permission.create_war_zone_tournament_content',
  'permission.edit_own_war_zone_tournament_content' => 'permission.edit_own_war_zone_tournament_content',
  'permission.edit_any_war_zone_tournament_content' => 'permission.edit_any_war_zone_tournament_content',
  'permission.delete_own_war_zone_tournament_content' => 'permission.delete_own_war_zone_tournament_content',
  'permission.delete_any_war_zone_tournament_content' => 'permission.delete_any_war_zone_tournament_content',
);

$modules = array(
  0 => 'node',
);
