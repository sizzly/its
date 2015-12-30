<?php
/**
 * @file
 * views_view.stats_page_v4.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'stats_page_v4';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Stats Page: V4';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_your_army' => 'field_your_army',
  'field_victory' => 'field_victory',
  'field_draw' => 'field_draw',
  'field_defeat' => 'field_defeat',
  'nid' => 'nid',
  'field_your_results' => 'field_your_results',
);
$handler->display->display_options['style_options']['default'] = 'nid';
$handler->display->display_options['style_options']['info'] = array(
  'field_your_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_victory' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_draw' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_defeat' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_your_results' => array(
    'sortable' => 0,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = 'Army Played';
/* Field: SUM(Content: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = 'Wins';
/* Field: SUM(Content: Draw) */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_draw']['label'] = 'Draws';
/* Field: SUM(Content: Defeat) */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_defeat']['label'] = 'Defeats';
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '# Battles';
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Your Army (field_your_army) */
$handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_your_army_tid']['group'] = 1;
$handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
/* Filter criterion: Field: Opponent&#039;s Army (field_opponent_s_army) */
$handler->display->display_options['filters']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['value'] = '';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['group'] = 1;
$handler->display->display_options['filters']['field_opponent_s_army_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_opponent_s_army_tid']['expose']['operator_id'] = 'field_opponent_s_army_tid_op';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['expose']['label'] = 'Opponent\'s Army';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['expose']['operator'] = 'field_opponent_s_army_tid_op';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['expose']['identifier'] = 'field_opponent_s_army_tid';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_opponent_s_army_tid']['type'] = 'textfield';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['vocabulary'] = 'armies';
/* Filter criterion: Field: Points per army (field_points_per_army) */
$handler->display->display_options['filters']['field_points_per_army_value']['id'] = 'field_points_per_army_value';
$handler->display->display_options['filters']['field_points_per_army_value']['table'] = 'field_data_field_points_per_army';
$handler->display->display_options['filters']['field_points_per_army_value']['field'] = 'field_points_per_army_value';
$handler->display->display_options['filters']['field_points_per_army_value']['group'] = 1;
$handler->display->display_options['filters']['field_points_per_army_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_points_per_army_value']['expose']['operator_id'] = 'field_points_per_army_value_op';
$handler->display->display_options['filters']['field_points_per_army_value']['expose']['label'] = 'Points';
$handler->display->display_options['filters']['field_points_per_army_value']['expose']['operator'] = 'field_points_per_army_value_op';
$handler->display->display_options['filters']['field_points_per_army_value']['expose']['identifier'] = 'field_points_per_army_value';
$handler->display->display_options['filters']['field_points_per_army_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
/* Filter criterion: Content: Mission (field_mission) */
$handler->display->display_options['filters']['field_mission_tid']['id'] = 'field_mission_tid';
$handler->display->display_options['filters']['field_mission_tid']['table'] = 'field_data_field_mission';
$handler->display->display_options['filters']['field_mission_tid']['field'] = 'field_mission_tid';
$handler->display->display_options['filters']['field_mission_tid']['value'] = '';
$handler->display->display_options['filters']['field_mission_tid']['group'] = 1;
$handler->display->display_options['filters']['field_mission_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mission_tid']['expose']['operator_id'] = 'field_mission_tid_op';
$handler->display->display_options['filters']['field_mission_tid']['expose']['label'] = 'Mission';
$handler->display->display_options['filters']['field_mission_tid']['expose']['operator'] = 'field_mission_tid_op';
$handler->display->display_options['filters']['field_mission_tid']['expose']['identifier'] = 'field_mission_tid';
$handler->display->display_options['filters']['field_mission_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_mission_tid']['vocabulary'] = 'missions';
/* Filter criterion: Content: Deployment (field_battle_deployment) */
$handler->display->display_options['filters']['field_battle_deployment_tid']['id'] = 'field_battle_deployment_tid';
$handler->display->display_options['filters']['field_battle_deployment_tid']['table'] = 'field_data_field_battle_deployment';
$handler->display->display_options['filters']['field_battle_deployment_tid']['field'] = 'field_battle_deployment_tid';
$handler->display->display_options['filters']['field_battle_deployment_tid']['value'] = '';
$handler->display->display_options['filters']['field_battle_deployment_tid']['group'] = 1;
$handler->display->display_options['filters']['field_battle_deployment_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['operator_id'] = 'field_battle_deployment_tid_op';
$handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['label'] = 'Deployment';
$handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['operator'] = 'field_battle_deployment_tid_op';
$handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['identifier'] = 'field_battle_deployment_tid';
$handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_battle_deployment_tid']['vocabulary'] = 'deployment';
/* Filter criterion: Content: Mission Rules in Effect (field_battle_mission_rules) */
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['id'] = 'field_battle_mission_rules_tid';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['table'] = 'field_data_field_battle_mission_rules';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['field'] = 'field_battle_mission_rules_tid';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['value'] = '';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['group'] = 1;
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['expose']['operator_id'] = 'field_battle_mission_rules_tid_op';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['expose']['label'] = 'Mission Rules';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['expose']['operator'] = 'field_battle_mission_rules_tid_op';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['expose']['identifier'] = 'field_battle_mission_rules_tid';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['vocabulary'] = 'scenario_special_rules';
/* Filter criterion: Content: My Victory Conditions met (field_battle_my_vc) */
$handler->display->display_options['filters']['field_battle_my_vc_tid']['id'] = 'field_battle_my_vc_tid';
$handler->display->display_options['filters']['field_battle_my_vc_tid']['table'] = 'field_data_field_battle_my_vc';
$handler->display->display_options['filters']['field_battle_my_vc_tid']['field'] = 'field_battle_my_vc_tid';
$handler->display->display_options['filters']['field_battle_my_vc_tid']['value'] = '';
$handler->display->display_options['filters']['field_battle_my_vc_tid']['group'] = 1;
$handler->display->display_options['filters']['field_battle_my_vc_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_battle_my_vc_tid']['expose']['operator_id'] = 'field_battle_my_vc_tid_op';
$handler->display->display_options['filters']['field_battle_my_vc_tid']['expose']['label'] = 'Victory Conditions Met';
$handler->display->display_options['filters']['field_battle_my_vc_tid']['expose']['operator'] = 'field_battle_my_vc_tid_op';
$handler->display->display_options['filters']['field_battle_my_vc_tid']['expose']['identifier'] = 'field_battle_my_vc_tid';
$handler->display->display_options['filters']['field_battle_my_vc_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_battle_my_vc_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_battle_my_vc_tid']['vocabulary'] = 'victory_conditions';
/* Filter criterion: Content: Your Allied Detatchment (field_allied_detatchment) */
$handler->display->display_options['filters']['field_allied_detatchment_tid']['id'] = 'field_allied_detatchment_tid';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['table'] = 'field_data_field_allied_detatchment';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['field'] = 'field_allied_detatchment_tid';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['value'] = '';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['group'] = 1;
$handler->display->display_options['filters']['field_allied_detatchment_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_allied_detatchment_tid']['expose']['operator_id'] = 'field_allied_detatchment_tid_op';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['expose']['label'] = 'Allied Detatchment (field_allied_detatchment)';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['expose']['operator'] = 'field_allied_detatchment_tid_op';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['expose']['identifier'] = 'field_allied_detatchment_tid';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_allied_detatchment_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_allied_detatchment_tid']['type'] = 'textfield';
$handler->display->display_options['filters']['field_allied_detatchment_tid']['vocabulary'] = 'armies';
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_your_commander_value']['id'] = 'field_your_commander_value';
$handler->display->display_options['filters']['field_your_commander_value']['table'] = 'field_data_field_your_commander';
$handler->display->display_options['filters']['field_your_commander_value']['field'] = 'field_your_commander_value';
$handler->display->display_options['filters']['field_your_commander_value']['operator'] = 'or';
$handler->display->display_options['filters']['field_your_commander_value']['value'] = array();
$handler->display->display_options['filters']['field_your_commander_value']['group'] = 1;
$handler->display->display_options['filters']['field_your_commander_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_your_commander_value']['expose']['operator_id'] = 'field_your_commander_value_op';
$handler->display->display_options['filters']['field_your_commander_value']['expose']['label'] = 'Your Commander';
$handler->display->display_options['filters']['field_your_commander_value']['expose']['operator'] = 'field_your_commander_value_op';
$handler->display->display_options['filters']['field_your_commander_value']['expose']['identifier'] = 'field_your_commander_value';
$handler->display->display_options['filters']['field_your_commander_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_enemy_commander_value']['id'] = 'field_enemy_commander_value';
$handler->display->display_options['filters']['field_enemy_commander_value']['table'] = 'field_data_field_enemy_commander';
$handler->display->display_options['filters']['field_enemy_commander_value']['field'] = 'field_enemy_commander_value';
$handler->display->display_options['filters']['field_enemy_commander_value']['operator'] = 'or';
$handler->display->display_options['filters']['field_enemy_commander_value']['value'] = array();
$handler->display->display_options['filters']['field_enemy_commander_value']['group'] = 1;
$handler->display->display_options['filters']['field_enemy_commander_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_enemy_commander_value']['expose']['operator_id'] = 'field_enemy_commander_value_op';
$handler->display->display_options['filters']['field_enemy_commander_value']['expose']['label'] = 'Enemy Commander';
$handler->display->display_options['filters']['field_enemy_commander_value']['expose']['operator'] = 'field_enemy_commander_value_op';
$handler->display->display_options['filters']['field_enemy_commander_value']['expose']['identifier'] = 'field_enemy_commander_value';
$handler->display->display_options['filters']['field_enemy_commander_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
/* Filter criterion: Content: Commander (field_batteresult_commander) */
$handler->display->display_options['filters']['field_batteresult_commander_tid']['id'] = 'field_batteresult_commander_tid';
$handler->display->display_options['filters']['field_batteresult_commander_tid']['table'] = 'field_data_field_batteresult_commander';
$handler->display->display_options['filters']['field_batteresult_commander_tid']['field'] = 'field_batteresult_commander_tid';
$handler->display->display_options['filters']['field_batteresult_commander_tid']['value'] = '';
$handler->display->display_options['filters']['field_batteresult_commander_tid']['group'] = 1;
$handler->display->display_options['filters']['field_batteresult_commander_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_batteresult_commander_tid']['expose']['operator_id'] = 'field_batteresult_commander_tid_op';
$handler->display->display_options['filters']['field_batteresult_commander_tid']['expose']['label'] = 'Commander';
$handler->display->display_options['filters']['field_batteresult_commander_tid']['expose']['operator'] = 'field_batteresult_commander_tid_op';
$handler->display->display_options['filters']['field_batteresult_commander_tid']['expose']['identifier'] = 'field_batteresult_commander_tid';
$handler->display->display_options['filters']['field_batteresult_commander_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_batteresult_commander_tid']['vocabulary'] = 'units';
/* Filter criterion: Content: Most Valuable Unit (field_battle_most_valuable_unit) */
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['id'] = 'field_battle_most_valuable_unit_tid';
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['table'] = 'field_data_field_battle_most_valuable_unit';
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['field'] = 'field_battle_most_valuable_unit_tid';
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['value'] = '';
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['group'] = 1;
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['expose']['operator_id'] = 'field_battle_most_valuable_unit_tid_op';
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['expose']['label'] = 'Most Valuable Unit';
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['expose']['operator'] = 'field_battle_most_valuable_unit_tid_op';
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['expose']['identifier'] = 'field_battle_most_valuable_unit_tid';
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_battle_most_valuable_unit_tid']['vocabulary'] = 'units';

/* Display: User Stats */
$handler = $view->new_display('panel_pane', 'User Stats', 'panel_pane_1');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['pane_category']['name'] = 'User';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'computed_field',
  4 => 'list',
  5 => 'views_content',
);
