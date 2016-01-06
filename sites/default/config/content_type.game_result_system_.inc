<?php
/**
 * @file
 * content_type.game_result_system_.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'game_result_system_',
  'name' => 'Game Result (System)',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.game_result_system_' => 'field.node.body.game_result_system_',
  'field.node.field_game_date.game_result_system_' => 'field.node.field_game_date.game_result_system_',
  'field.node.field_opponent.game_result_system_' => 'field.node.field_opponent.game_result_system_',
  'field.node.field_images.game_result_system_' => 'field.node.field_images.game_result_system_',
  'field.node.field_your_results.game_result_system_' => 'field.node.field_your_results.game_result_system_',
  'field.node.field_mission.game_result_system_' => 'field.node.field_mission.game_result_system_',
  'field.node.field_opponent_s_army.game_result_system_' => 'field.node.field_opponent_s_army.game_result_system_',
  'field.node.field_your_army.game_result_system_' => 'field.node.field_your_army.game_result_system_',
  'field.node.field_game_reference.game_result_system_' => 'field.node.field_game_reference.game_result_system_',
  'field.node.field_victory.game_result_system_' => 'field.node.field_victory.game_result_system_',
  'field.node.field_draw.game_result_system_' => 'field.node.field_draw.game_result_system_',
  'field.node.field_defeat.game_result_system_' => 'field.node.field_defeat.game_result_system_',
  'field.node.field_location.game_result_system_' => 'field.node.field_location.game_result_system_',
  'field.node.field_event_link.game_result_system_' => 'field.node.field_event_link.game_result_system_',
  'field.node.field_points_per_army.game_result_system_' => 'field.node.field_points_per_army.game_result_system_',
  'field.node.field_batteresult_commander.game_result_system_' => 'field.node.field_batteresult_commander.game_result_system_',
  'field.node.field_battle_most_valuable_unit.game_result_system_' => 'field.node.field_battle_most_valuable_unit.game_result_system_',
  'field.node.field_battle_deployment.game_result_system_' => 'field.node.field_battle_deployment.game_result_system_',
  'field.node.field_battle_mission_rules.game_result_system_' => 'field.node.field_battle_mission_rules.game_result_system_',
  'field.node.field_your_commander_survival.game_result_system_' => 'field.node.field_your_commander_survival.game_result_system_',
  'field.node.field_enemy_commander_survival.game_result_system_' => 'field.node.field_enemy_commander_survival.game_result_system_',
  'field.node.field_battleresult_enemy_command.game_result_system_' => 'field.node.field_battleresult_enemy_command.game_result_system_',
  'field.node.field_image.game_result_system_' => 'field.node.field_image.game_result_system_',
  'permission.create_game_result_system__content' => 'permission.create_game_result_system__content',
  'permission.edit_own_game_result_system__content' => 'permission.edit_own_game_result_system__content',
  'permission.edit_any_game_result_system__content' => 'permission.edit_any_game_result_system__content',
  'permission.delete_own_game_result_system__content' => 'permission.delete_own_game_result_system__content',
  'permission.delete_any_game_result_system__content' => 'permission.delete_any_game_result_system__content',
);

$modules = array(
  0 => 'node',
);
