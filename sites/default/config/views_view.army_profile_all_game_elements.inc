<?php
/**
 * @file
 * views_view.army_profile_all_game_elements.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'army_profile_all_game_elements';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Army Profile: All: Game Elements';
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
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Field: Your Army (field_your_army) */
$handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_your_army_tid']['break_phrase'] = TRUE;
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
);
