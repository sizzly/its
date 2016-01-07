<?php
/**
 * @file
 * content_type.war_zone_league.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'war_zone_league',
  'name' => 'League',
  'description' => 'Manage a competitive league for your players.  IToysoldiers handles all the registration, calculations, scheduling, and pairings. Swiss Style and Casual league mechanics are supported.  ',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.war_zone_league' => 'field.node.body.war_zone_league',
  'field.node.field_league_type.war_zone_league' => 'field.node.field_league_type.war_zone_league',
  'field.node.field_event_date.war_zone_league' => 'field.node.field_event_date.war_zone_league',
  'field.node.field_campaign_badge.war_zone_league' => 'field.node.field_campaign_badge.war_zone_league',
  'field.node.field_more_info_link.war_zone_league' => 'field.node.field_more_info_link.war_zone_league',
  'field.node.field_status.war_zone_league' => 'field.node.field_status.war_zone_league',
  'field.node.field_location.war_zone_league' => 'field.node.field_location.war_zone_league',
  'field.node.field_warzone_game.war_zone_league' => 'field.node.field_warzone_game.war_zone_league',
  'field.node.field_event_type.war_zone_league' => 'field.node.field_event_type.war_zone_league',
  'field.node.field_round_duration.war_zone_league' => 'field.node.field_round_duration.war_zone_league',
  'field.node.field_warzone_round.war_zone_league' => 'field.node.field_warzone_round.war_zone_league',
  'field.node.field_points_per_army.war_zone_league' => 'field.node.field_points_per_army.war_zone_league',
  'field.node.field_narrative_warzone.war_zone_league' => 'field.node.field_narrative_warzone.war_zone_league',
  'field.node.field_entry_fee.war_zone_league' => 'field.node.field_entry_fee.war_zone_league',
  'field.node.field_game_warzone.war_zone_league' => 'field.node.field_game_warzone.war_zone_league',
  'field.node.field_radioactivity.war_zone_league' => 'field.node.field_radioactivity.war_zone_league',
  'permission.create_war_zone_league_content' => 'permission.create_war_zone_league_content',
  'permission.edit_own_war_zone_league_content' => 'permission.edit_own_war_zone_league_content',
  'permission.edit_any_war_zone_league_content' => 'permission.edit_any_war_zone_league_content',
  'permission.delete_own_war_zone_league_content' => 'permission.delete_own_war_zone_league_content',
  'permission.delete_any_war_zone_league_content' => 'permission.delete_any_war_zone_league_content',
);

$modules = array(
  0 => 'node',
);
