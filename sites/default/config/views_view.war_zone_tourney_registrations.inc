<?php
/**
 * @file
 * views_view.war_zone_tourney_registrations.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_tourney_registrations';
$view->description = 'Scoring rules for Tournaments';
$view->tag = 'War Zones 4.1, Rules';
$view->base_table = 'node_registration';
$view->human_name = 'War Zone: Tournament: Scoring Rules';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'email' => 'email',
  'registration_id' => 'registration_id',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'email' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'registration_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['id'] = 'reverse_field_registration_sc_entityform';
$handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['table'] = 'node_registration';
$handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['field'] = 'reverse_field_registration_sc_entityform';
/* Field: Node registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['id'] = 'field_aggregate_score_sc_value';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['table'] = 'field_data_field_aggregate_score_sc';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['field'] = 'field_aggregate_score_sc_value';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['relationship'] = 'reverse_field_registration_sc_entityform';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_aggregate_score_sc_value']['order'] = 'DESC';
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
/* Filter criterion: Node registration: Attended */
$handler->display->display_options['filters']['attended']['id'] = 'attended';
$handler->display->display_options['filters']['attended']['table'] = 'node_registration';
$handler->display->display_options['filters']['attended']['field'] = 'attended';
$handler->display->display_options['filters']['attended']['value'] = '1';

/* Display: Matches */
$handler = $view->new_display('views_rules', 'Matches', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Your Results (field_your_results) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'reverse_field_registration_sc_entityform';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['field_victory_points_sc_value']['id'] = 'field_victory_points_sc_value';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['table'] = 'field_data_field_victory_points_sc';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['field'] = 'field_victory_points_sc_value';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['relationship'] = 'reverse_field_registration_sc_entityform';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_victory_points_sc_value']['order'] = 'DESC';
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Node registration: Node nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'registration_id' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => 'Registration ID',
    'name' => 'registration_id',
  ),
  'field_register_real_name' => array(
    'enabled' => 0,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'Real Name',
    'name' => 'field_register_real_name',
  ),
  'uid' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'User uid',
    'name' => 'uid',
  ),
  'field_aggregate_score_sc' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Entityform Submission referencing Node registration from field_registration_sc) Aggregate Score',
    'name' => 'field_aggregate_score_sc',
  ),
);

/* Display: Opponent List */
$handler = $view->new_display('views_rules', 'Opponent List', 'views_rules_2');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['id'] = 'reverse_field_registration_sc_entityform';
$handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['table'] = 'node_registration';
$handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['field'] = 'reverse_field_registration_sc_entityform';
$handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_opponent_reg_sc']['id'] = 'field_opponent_reg_sc';
$handler->display->display_options['fields']['field_opponent_reg_sc']['table'] = 'field_data_field_opponent_reg_sc';
$handler->display->display_options['fields']['field_opponent_reg_sc']['field'] = 'field_opponent_reg_sc';
$handler->display->display_options['fields']['field_opponent_reg_sc']['relationship'] = 'reverse_field_registration_sc_entityform';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Node registration: Registration ID */
$handler->display->display_options['arguments']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['arguments']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['arguments']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['arguments']['registration_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['registration_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['registration_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['registration_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['rules_parameter'] = array(
  'registration_id' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Node registration: Registration ID',
    'name' => 'registration_id',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'registration_id' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Opponent ID',
    'name' => 'opponent_id',
  ),
  'field_opponent_reg_sc' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => '(Entityform Submission referencing Node registration from field_registration_sc) Opponent Registration',
    'name' => 'field_opponent_reg_sc',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node_registration',
);
