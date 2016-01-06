<?php
/**
 * @file
 * views_view.achievements_v2_rules.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'achievements_v2_rules';
$view->description = 'Rules for testing achievements';
$view->tag = 'Rules, Achievements';
$view->base_table = 'node';
$view->human_name = 'Achievements: V2: Rules';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Relation: Achievement (node → relation) */
$handler->display->display_options['relationships']['relation_base_left_achievement']['id'] = 'relation_base_left_achievement';
$handler->display->display_options['relationships']['relation_base_left_achievement']['table'] = 'node';
$handler->display->display_options['relationships']['relation_base_left_achievement']['field'] = 'relation_base_left_achievement';
$handler->display->display_options['relationships']['relation_base_left_achievement']['r_index'] = '-1';
$handler->display->display_options['relationships']['relation_base_left_achievement']['entity_deduplication_left'] = 0;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['relationship'] = 'relation_base_left_achievement';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
/* Contextual filter: Relation: Achievement Player (field_achievement_player) */
$handler->display->display_options['arguments']['field_achievement_player_target_id']['id'] = 'field_achievement_player_target_id';
$handler->display->display_options['arguments']['field_achievement_player_target_id']['table'] = 'field_data_field_achievement_player';
$handler->display->display_options['arguments']['field_achievement_player_target_id']['field'] = 'field_achievement_player_target_id';
$handler->display->display_options['arguments']['field_achievement_player_target_id']['relationship'] = 'relation_base_left_achievement';
$handler->display->display_options['arguments']['field_achievement_player_target_id']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_achievement_player_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_achievement_player_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_achievement_player_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_achievement_player_target_id']['summary_options']['items_per_page'] = '25';
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
  'achievement' => 'achievement',
);

/* Display: Player Achievement List */
$handler = $view->new_display('views_rules', 'Player Achievement List', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'field_achievement_player_target_id' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => '(Achievement) Relation: Achievement Player (field_achievement_player)',
    'name' => 'field_achievement_player_target_id',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'rid' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Achievement) Rid',
    'name' => 'rid',
  ),
  'nid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Nid',
    'name' => 'nid',
  ),
);

/* Display: Day in History */
$handler = $view->new_display('views_rules', 'Day in History', 'views_rules_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
$handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['label'] = '';
$handler->display->display_options['fields']['field_game_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_game_date']['settings'] = array(
  'format_type' => 'month_and_date',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Broken/missing handler */
$handler->display->display_options['arguments']['field_achievement_slug_value']['id'] = 'field_achievement_slug_value';
$handler->display->display_options['arguments']['field_achievement_slug_value']['table'] = 'field_data_field_achievement_slug';
$handler->display->display_options['arguments']['field_achievement_slug_value']['field'] = 'field_achievement_slug_value';
$handler->display->display_options['arguments']['field_achievement_slug_value']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_achievement_slug_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_achievement_slug_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_achievement_slug_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_achievement_slug_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'achievement' => 'achievement',
);
$handler->display->display_options['rules_parameter'] = array(
  'field_achievement_slug_value' => array(
    'enabled' => 1,
    'type' => 'text',
    'label' => 'Content: slug (field_achievement_slug)',
    'name' => 'field_achievement_slug_value',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'nid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Nid',
    'name' => 'nid',
  ),
  'field_game_date' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => 'text',
    'label' => 'Content: Date',
    'name' => 'field_game_date',
  ),
);

/* Display: Day in History outer */
$handler = $view->new_display('views_rules', 'Day in History outer', 'views_rules_3');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
$handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['label'] = '';
$handler->display->display_options['fields']['field_game_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_game_date']['settings'] = array(
  'format_type' => 'month_and_date',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Content: Nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'nid' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Nid',
    'name' => 'nid',
  ),
  'field_game_date' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'Content: Date',
    'name' => 'field_game_date',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'date',
);
