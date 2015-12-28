<?php
/**
 * @file
 * views_view.war_zone_all_in_progress_score.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_all_in_progress_score';
$view->description = 'Generates a table of ranks. Does NOT use registrations so no good for tournaments.';
$view->tag = 'War Zones 4.1, Deprecate';
$view->base_table = 'entityform';
$view->human_name = 'War Zone: All: In Progress Score';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Current Rankings';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'entityform_id' => 'entityform_id',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'entityform_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['label'] = 'Player Registration';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['required'] = TRUE;
/* Relationship: Node registration: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'field_registration_sc_target_id';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Player';
/* Field: SUM(Field: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = 'W';
$handler->display->display_options['fields']['field_victory']['empty'] = '0';
/* Field: SUM(Field: Defeat) */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_defeat']['label'] = 'L';
$handler->display->display_options['fields']['field_defeat']['empty'] = '0';
/* Field: SUM(Field: Draw) */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_draw']['label'] = 'D';
/* Field: SUM(Entityform Submission: Additional Points) */
$handler->display->display_options['fields']['field_additional_points_sc']['id'] = 'field_additional_points_sc';
$handler->display->display_options['fields']['field_additional_points_sc']['table'] = 'field_data_field_additional_points_sc';
$handler->display->display_options['fields']['field_additional_points_sc']['field'] = 'field_additional_points_sc';
$handler->display->display_options['fields']['field_additional_points_sc']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_additional_points_sc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_additional_points_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: SUM(Entityform Submission: Battle Points) */
$handler->display->display_options['fields']['field_battle_points_sc']['id'] = 'field_battle_points_sc';
$handler->display->display_options['fields']['field_battle_points_sc']['table'] = 'field_data_field_battle_points_sc';
$handler->display->display_options['fields']['field_battle_points_sc']['field'] = 'field_battle_points_sc';
$handler->display->display_options['fields']['field_battle_points_sc']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_battle_points_sc']['exclude'] = TRUE;
/* Field: SUM(Entityform Submission: Comp) */
$handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_comp_sc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_comp_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: SUM(Entityform Submission: Painting) */
$handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_painting_sc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_painting_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: SUM(Entityform Submission: Sportsmanship) */
$handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_sportsmanship_sc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: SUM(Entityform Submission: Aggregate Score) */
$handler->display->display_options['fields']['field_aggregate_score_sc']['id'] = 'field_aggregate_score_sc';
$handler->display->display_options['fields']['field_aggregate_score_sc']['table'] = 'field_data_field_aggregate_score_sc';
$handler->display->display_options['fields']['field_aggregate_score_sc']['field'] = 'field_aggregate_score_sc';
$handler->display->display_options['fields']['field_aggregate_score_sc']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_aggregate_score_sc']['label'] = 'Total Score';
$handler->display->display_options['fields']['field_aggregate_score_sc']['empty'] = '0';
/* Sort criterion: SUM(Entityform Submission: Aggregate Score (field_aggregate_score_sc)) */
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['id'] = 'field_aggregate_score_sc_value';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['table'] = 'field_data_field_aggregate_score_sc';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['field'] = 'field_aggregate_score_sc_value';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['order'] = 'DESC';
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);

/* Display: Simple Ranks */
$handler = $view->new_display('panel_pane', 'Simple Ranks', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'entityform',
  2 => 'computed_field',
  3 => 'number',
  4 => 'views_content',
);
