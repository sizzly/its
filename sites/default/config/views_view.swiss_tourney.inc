<?php
/**
 * @file
 * views_view.swiss_tourney.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'swiss_tourney';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'relation';
$view->human_name = 'Swiss Tourney';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
/* Field: Relation: Player */
$handler->display->display_options['fields']['field_player_wzscore']['id'] = 'field_player_wzscore';
$handler->display->display_options['fields']['field_player_wzscore']['table'] = 'field_data_field_player_wzscore';
$handler->display->display_options['fields']['field_player_wzscore']['field'] = 'field_player_wzscore';
$handler->display->display_options['fields']['field_player_wzscore']['label'] = '';
$handler->display->display_options['fields']['field_player_wzscore']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_player_wzscore']['type'] = 'entityreference_entity_id';
$handler->display->display_options['fields']['field_player_wzscore']['settings'] = array(
  'link' => 0,
);
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = '';
$handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
/* Field: Relation: Score */
$handler->display->display_options['fields']['field_warzone_score']['id'] = 'field_warzone_score';
$handler->display->display_options['fields']['field_warzone_score']['table'] = 'field_data_field_warzone_score';
$handler->display->display_options['fields']['field_warzone_score']['field'] = 'field_warzone_score';
$handler->display->display_options['fields']['field_warzone_score']['label'] = '';
$handler->display->display_options['fields']['field_warzone_score']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_warzone_score']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Contextual filter: Relation: endpoints (endpoints:entity_id) */
$handler->display->display_options['arguments']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
$handler->display->display_options['arguments']['endpoints_entity_id']['table'] = 'field_data_endpoints';
$handler->display->display_options['arguments']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
$handler->display->display_options['arguments']['endpoints_entity_id']['default_action'] = 'not found';
$handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['endpoints_entity_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['endpoints_entity_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['endpoints_entity_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['endpoints_entity_id']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['endpoints_entity_id']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['endpoints_entity_id']['validate_options']['types'] = array(
  'warmachine_tournament' => 'warmachine_tournament',
);
/* Filter criterion: Relation: Relation type */
$handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['table'] = 'relation';
$handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['value'] = array(
  'warzone_score' => 'warzone_score',
);

/* Display: Next Round */
$handler = $view->new_display('views_rules', 'Next Round', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'endpoints_entity_id' => array(
    'enabled' => 1,
    'type' => 'node',
    'label' => 'Relation: endpoints (endpoints:entity_id)',
    'name' => 'endpoints_entity_id',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'rid' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Rid',
    'name' => 'rid',
  ),
  'field_player_wzscore' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'user',
    'label' => 'Relation: Player',
    'name' => 'field_player_wzscore',
  ),
  'counter' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => 'Global: View result counter',
    'name' => 'counter',
  ),
  'field_warzone_score' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Relation: Score',
    'name' => 'field_warzone_score',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'relation',
  2 => 'entityreference',
  3 => 'number',
);
