<?php
/**
 * @file
 * views_view.game_views.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'game_views';
$view->description = 'This displays the counts - By Game System, Army, etc. Needs to be redone.';
$view->tag = 'Stats 1.0, fix';
$view->base_table = 'node';
$view->human_name = 'Count of Battle Views';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Battles by System';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
$handler->display->display_options['style_options']['type'] = 'PieChart';
$handler->display->display_options['style_options']['width'] = '300';
$handler->display->display_options['style_options']['height'] = '175';
$handler->display->display_options['style_options']['isstacked'] = 0;
$handler->display->display_options['style_options']['pointsize'] = '0';
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['field_game_tid']['id'] = 'field_game_tid';
$handler->display->display_options['relationships']['field_game_tid']['table'] = 'field_data_field_game';
$handler->display->display_options['relationships']['field_game_tid']['field'] = 'field_game_tid';
$handler->display->display_options['relationships']['field_game_tid']['label'] = 'term from field_game';
$handler->display->display_options['relationships']['field_game_tid']['required'] = TRUE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_game']['id'] = 'field_game';
$handler->display->display_options['fields']['field_game']['table'] = 'field_data_field_game';
$handler->display->display_options['fields']['field_game']['field'] = 'field_game';
$handler->display->display_options['fields']['field_game']['label'] = 'Game';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'Count';
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

/* Display: Count of Games */
$handler = $view->new_display('panel_pane', 'Count of Games', 'panel_pane_1');

/* Display: Battles over time */
$handler = $view->new_display('panel_pane', 'Battles over time', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Battles over Time';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
$handler->display->display_options['style_options']['haxis_title'] = 'Month';
$handler->display->display_options['style_options']['vaxis_title'] = 'Battles';
$handler->display->display_options['style_options']['type'] = 'ColumnChart';
$handler->display->display_options['style_options']['width'] = '600';
$handler->display->display_options['style_options']['height'] = '400';
$handler->display->display_options['style_options']['isstacked'] = 0;
$handler->display->display_options['style_options']['pointsize'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Month';
$handler->display->display_options['fields']['created']['date_format'] = 'custom';
$handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m';
$handler->display->display_options['fields']['created']['timezone'] = 'America/New_York';
$handler->display->display_options['fields']['created']['format_date_sql'] = 1;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'Battles';
$handler->display->display_options['defaults']['sorts'] = FALSE;

/* Display: Battles by Army */
$handler = $view->new_display('panel_pane', 'Battles by Army', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Battles by Army';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
$handler->display->display_options['style_options']['type'] = 'PieChart';
$handler->display->display_options['style_options']['width'] = '294';
$handler->display->display_options['style_options']['height'] = '175';
$handler->display->display_options['style_options']['isstacked'] = 0;
$handler->display->display_options['style_options']['pointsize'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
$handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'Count';
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
  'game_result_system_' => 'game_result_system_',
  'game_results' => 'game_results',
);

/* Display: Battles by Army Page */
$handler = $view->new_display('page', 'Battles by Army Page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Battles by Army';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_game' => 'field_game',
  'nid' => 'nid',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_game' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'Count';
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
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_game_tid']['id'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['table'] = 'field_data_field_game';
$handler->display->display_options['filters']['field_game_tid']['field'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['operator'] = 'or';
$handler->display->display_options['filters']['field_game_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_game_tid']['expose']['operator_id'] = 'field_game_tid_op';
$handler->display->display_options['filters']['field_game_tid']['expose']['label'] = 'Game Filter';
$handler->display->display_options['filters']['field_game_tid']['expose']['operator'] = 'field_game_tid_op';
$handler->display->display_options['filters']['field_game_tid']['expose']['identifier'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_game_tid']['expose']['remember_roles'] = array(
  2 => '2',
  3 => '3',
  1 => 0,
);
$handler->display->display_options['path'] = 'stats/armies/battles-by-army';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'taxonomy',
);
