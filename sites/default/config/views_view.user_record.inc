<?php
/**
 * @file
 * views_view.user_record.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'user_record';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'User Record';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Battle results';
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
  'field_victory' => 'field_victory',
  'field_draw' => 'field_draw',
  'field_defeat' => 'field_defeat',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
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
);
/* Field: SUM(Field: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
/* Field: SUM(Field: Draw) */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
/* Field: SUM(Field: Defeat) */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
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

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['argument_input'] = array(
  'uid' => array(
    'type' => 'context',
    'context' => 'entity:comment.author',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Author uid',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'computed_field',
  3 => 'views_content',
);
