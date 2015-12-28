<?php
/**
 * @file
 * content_type.game_results.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'game_results',
  'name' => 'Battle Results',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => 'This is the Battle Results submission page.  The more information you can enter about your battle the better.  A number of achievements and stats are based upon the results of this submission.  Don\'t worry, you can always come back and fill it out with details later.',
);

$dependencies = array();

$optional = array(
  'field.node.body.game_results' => 'field.node.body.game_results',
  'field.node.field_images.game_results' => 'field.node.field_images.game_results',
  'field.node.field_mission.game_results' => 'field.node.field_mission.game_results',
  'field.node.field_game_date.game_results' => 'field.node.field_game_date.game_results',
  'field.node.field_your_army.game_results' => 'field.node.field_your_army.game_results',
  'field.node.field_opponent_s_army.game_results' => 'field.node.field_opponent_s_army.game_results',
  'field.node.field_your_results.game_results' => 'field.node.field_your_results.game_results',
  'field.node.field_opponent.game_results' => 'field.node.field_opponent.game_results',
  'field.node.field_victory.game_results' => 'field.node.field_victory.game_results',
  'field.node.field_draw.game_results' => 'field.node.field_draw.game_results',
  'field.node.field_defeat.game_results' => 'field.node.field_defeat.game_results',
  'field.node.field_location.game_results' => 'field.node.field_location.game_results',
  'field.node.field_event_link.game_results' => 'field.node.field_event_link.game_results',
  'field.node.field_opponent_s_name.game_results' => 'field.node.field_opponent_s_name.game_results',
  'field.node.field_game_reference.game_results' => 'field.node.field_game_reference.game_results',
  'field.node.field_points_per_army.game_results' => 'field.node.field_points_per_army.game_results',
  'field.node.field_batteresult_commander.game_results' => 'field.node.field_batteresult_commander.game_results',
  'field.node.field_battle_most_valuable_unit.game_results' => 'field.node.field_battle_most_valuable_unit.game_results',
  'field.node.field_battle_deployment.game_results' => 'field.node.field_battle_deployment.game_results',
  'field.node.field_battle_mission_rules.game_results' => 'field.node.field_battle_mission_rules.game_results',
  'field.node.field_battle_my_vc.game_results' => 'field.node.field_battle_my_vc.game_results',
  'field.node.field_image.game_results' => 'field.node.field_image.game_results',
  'field.node.field_allied_detatchment.game_results' => 'field.node.field_allied_detatchment.game_results',
  'field.node.field_opponent_s_allied_detachme.game_results' => 'field.node.field_opponent_s_allied_detachme.game_results',
  'field.node.field_your_commander_survival.game_results' => 'field.node.field_your_commander_survival.game_results',
  'field.node.field_enemy_commander_survival.game_results' => 'field.node.field_enemy_commander_survival.game_results',
  'field.node.field_battleresult_enemy_command.game_results' => 'field.node.field_battleresult_enemy_command.game_results',
  'field.node.field_radioactivity.game_results' => 'field.node.field_radioactivity.game_results',
  'permission.create_game_results_content' => 'permission.create_game_results_content',
  'permission.edit_own_game_results_content' => 'permission.edit_own_game_results_content',
  'permission.edit_any_game_results_content' => 'permission.edit_any_game_results_content',
  'permission.delete_own_game_results_content' => 'permission.delete_own_game_results_content',
  'permission.delete_any_game_results_content' => 'permission.delete_any_game_results_content',
);

$modules = array(
  0 => 'node',
);
