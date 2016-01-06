<?php
/**
 * @file
 * views_view.war_zone_all_player_final_scores.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_all_player_final_scores';
$view->description = 'Displays the scoring table for a war zone.';
$view->tag = 'War Zones 4.1';
$view->base_table = 'entityform';
$view->human_name = 'War Zone: All: Player Final Scores';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Ranking';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_register_real_name' => 'field_register_real_name',
  'field_victory_points_sc' => 'field_victory_points_sc',
  'field_sportsmanship_sc' => 'field_sportsmanship_sc',
  'field_comp_sc' => 'field_comp_sc',
  'field_painting_sc' => 'field_painting_sc',
  'field_victory' => 'field_victory',
  'field_defeat' => 'field_defeat',
  'field_draw' => 'field_draw',
  'name' => 'field_register_real_name',
);
$handler->display->display_options['style_options']['default'] = 'field_victory';
$handler->display->display_options['style_options']['info'] = array(
  'field_register_real_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br>',
    'empty_column' => 0,
  ),
  'field_victory_points_sc' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_sportsmanship_sc' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_comp_sc' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_painting_sc' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_victory' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
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
  'field_draw' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 'striped',
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['required'] = TRUE;
/* Relationship: Field: Army (field_register_army) */
$handler->display->display_options['relationships']['field_register_army_tid']['id'] = 'field_register_army_tid';
$handler->display->display_options['relationships']['field_register_army_tid']['table'] = 'field_data_field_register_army';
$handler->display->display_options['relationships']['field_register_army_tid']['field'] = 'field_register_army_tid';
$handler->display->display_options['relationships']['field_register_army_tid']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_register_army_tid']['label'] = 'player_army';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
$handler->display->display_options['fields']['field_register_real_name']['element_type'] = 'strong';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_victory_points_sc']['id'] = 'field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['table'] = 'field_data_field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['field'] = 'field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory_points_sc']['label'] = 'VP';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['group_type'] = 'sum';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['group_type'] = 'sum';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['group_type'] = 'sum';
/* Field: SUM(Content: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
/* Field: SUM(Content: Defeat) */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
/* Field: SUM(Content: Draw) */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_register_army_tid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Sort criterion: SUM(Content: Victory (field_victory)) */
$handler->display->display_options['sorts']['field_victory_value']['id'] = 'field_victory_value';
$handler->display->display_options['sorts']['field_victory_value']['table'] = 'field_data_field_victory';
$handler->display->display_options['sorts']['field_victory_value']['field'] = 'field_victory_value';
$handler->display->display_options['sorts']['field_victory_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_victory_value']['order'] = 'DESC';
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['field_victory_points_sc_value']['id'] = 'field_victory_points_sc_value';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['table'] = 'field_data_field_victory_points_sc';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['field'] = 'field_victory_points_sc_value';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['order'] = 'DESC';
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['field_army_points_sc_value']['id'] = 'field_army_points_sc_value';
$handler->display->display_options['sorts']['field_army_points_sc_value']['table'] = 'field_data_field_army_points_sc';
$handler->display->display_options['sorts']['field_army_points_sc_value']['field'] = 'field_army_points_sc_value';
$handler->display->display_options['sorts']['field_army_points_sc_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_army_points_sc_value']['order'] = 'DESC';
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['id'] = 'field_strength_of_schedule_sc_value';
$handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['table'] = 'field_data_field_strength_of_schedule_sc';
$handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['field'] = 'field_strength_of_schedule_sc_value';
$handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_event_link_target_id';
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

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'entityform',
  2 => 'text',
  3 => 'computed_field',
  4 => 'views_content',
);
