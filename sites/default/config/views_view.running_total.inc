<?php
/**
 * @file
 * views_view.running_total.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'running_total';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Running Total';
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
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'created' => 'created',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['precision'] = '0';
$handler->display->display_options['fields']['expression']['expression'] = '[expression] + [nid]';
/* Field: Content: Date */
$handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
$handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['settings'] = array(
  'format_type' => 'uc_store',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
/* Sort criterion: Content: Date (field_game_date) */
$handler->display->display_options['sorts']['field_game_date_value']['id'] = 'field_game_date_value';
$handler->display->display_options['sorts']['field_game_date_value']['table'] = 'field_data_field_game_date';
$handler->display->display_options['sorts']['field_game_date_value']['field'] = 'field_game_date_value';
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
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'date',
);
