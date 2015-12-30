<?php
/**
 * @file
 * views_view.swiss_tourney_challenge_management.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'swiss_tourney_challenge_management';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Swiss Tourney: Challenge Management';
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_state_challenge']['id'] = 'field_state_challenge';
$handler->display->display_options['fields']['field_state_challenge']['table'] = 'field_data_field_state_challenge';
$handler->display->display_options['fields']['field_state_challenge']['field'] = 'field_state_challenge';
$handler->display->display_options['fields']['field_state_challenge']['label'] = 'State';
/* Field: Content: Opponent */
$handler->display->display_options['fields']['field_opponent']['id'] = 'field_opponent';
$handler->display->display_options['fields']['field_opponent']['table'] = 'field_data_field_opponent';
$handler->display->display_options['fields']['field_opponent']['field'] = 'field_opponent';
$handler->display->display_options['fields']['field_opponent']['type'] = 'entityreference_entity_id';
$handler->display->display_options['fields']['field_opponent']['settings'] = array(
  'link' => 0,
);
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_player_1_challenge']['id'] = 'field_player_1_challenge';
$handler->display->display_options['fields']['field_player_1_challenge']['table'] = 'field_data_field_player_1_challenge';
$handler->display->display_options['fields']['field_player_1_challenge']['field'] = 'field_player_1_challenge';
$handler->display->display_options['fields']['field_player_1_challenge']['label'] = 'Player 1';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
/* Contextual filter: Field: Event (field_event_link) */
$handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
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
  'challenge' => 'challenge',
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_state_challenge_value']['id'] = 'field_state_challenge_value';
$handler->display->display_options['filters']['field_state_challenge_value']['table'] = 'field_data_field_state_challenge';
$handler->display->display_options['filters']['field_state_challenge_value']['field'] = 'field_state_challenge_value';
$handler->display->display_options['filters']['field_state_challenge_value']['operator'] = 'or';
$handler->display->display_options['filters']['field_state_challenge_value']['value'] = array(
  5 => '5',
);

/* Display: Swiss Tourney: Incomplete Challenges */
$handler = $view->new_display('views_rules', 'Swiss Tourney: Incomplete Challenges', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['rules_parameter'] = array(
  'field_event_link_target_id' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Content: Event (field_event_link)',
    'name' => 'field_event_link_target_id',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'title' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => 'node',
    'label' => 'Content: Title',
    'name' => 'title',
  ),
  'field_state_challenge' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'State',
    'name' => 'field_state_challenge',
  ),
  'field_opponent' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'user',
    'label' => 'Player 2',
    'name' => 'field_player_2_challenge',
  ),
  'field_player_1_challenge' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'user',
    'label' => 'Player 1',
    'name' => 'field_player_1_challenge',
  ),
  'nid' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'node',
    'label' => 'Nid',
    'name' => 'challenge_nid',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'entityreference',
);
