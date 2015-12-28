<?php
/**
 * @file
 * views_view.dashboard_all_content_stats.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'dashboard_all_content_stats';
$view->description = 'Content stat panels for player dashboards.';
$view->tag = 'Dashboard 2.0';
$view->base_table = 'node';
$view->human_name = 'Dashboard: All: Content Stats';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Content Stats';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'No stats yet, check back later.';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content statistics: Total views */
$handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
/* Field: Content statistics: Views this month */
$handler->display->display_options['fields']['monthcount']['id'] = 'monthcount';
$handler->display->display_options['fields']['monthcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['monthcount']['field'] = 'monthcount';
/* Field: Content statistics: Views this week */
$handler->display->display_options['fields']['weekcount']['id'] = 'weekcount';
$handler->display->display_options['fields']['weekcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['weekcount']['field'] = 'weekcount';
/* Field: Content statistics: Views this year */
$handler->display->display_options['fields']['yearcount']['id'] = 'yearcount';
$handler->display->display_options['fields']['yearcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['yearcount']['field'] = 'yearcount';
/* Field: Content statistics: Views today */
$handler->display->display_options['fields']['daycount']['id'] = 'daycount';
$handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
$handler->display->display_options['fields']['daycount']['field'] = 'daycount';
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['exception']['value'] = '';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
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

/* Display: All Time Summary */
$handler = $view->new_display('panel_pane', 'All Time Summary', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Summary';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content statistics: Views today */
$handler->display->display_options['fields']['daycount']['id'] = 'daycount';
$handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
$handler->display->display_options['fields']['daycount']['field'] = 'daycount';
$handler->display->display_options['fields']['daycount']['group_type'] = 'sum';
/* Field: Content statistics: Views this week */
$handler->display->display_options['fields']['weekcount']['id'] = 'weekcount';
$handler->display->display_options['fields']['weekcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['weekcount']['field'] = 'weekcount';
$handler->display->display_options['fields']['weekcount']['group_type'] = 'sum';
/* Field: Content statistics: Views this month */
$handler->display->display_options['fields']['monthcount']['id'] = 'monthcount';
$handler->display->display_options['fields']['monthcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['monthcount']['field'] = 'monthcount';
$handler->display->display_options['fields']['monthcount']['group_type'] = 'sum';
/* Field: Content statistics: Views this year */
$handler->display->display_options['fields']['yearcount']['id'] = 'yearcount';
$handler->display->display_options['fields']['yearcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['yearcount']['field'] = 'yearcount';
$handler->display->display_options['fields']['yearcount']['group_type'] = 'sum';
/* Field: Content statistics: Total views */
$handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['group_type'] = 'sum';
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: All Time */
$handler = $view->new_display('panel_pane', 'All Time', 'panel_pane_2');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'totalcount' => 'totalcount',
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
  'totalcount' => array(
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content statistics: Total views */
$handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content statistics: Total views */
$handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
$handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Month */
$handler = $view->new_display('panel_pane', 'Month', 'panel_pane_3');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'totalcount' => 'totalcount',
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
  'totalcount' => array(
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content statistics: Views this month */
$handler->display->display_options['fields']['monthcount']['id'] = 'monthcount';
$handler->display->display_options['fields']['monthcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['monthcount']['field'] = 'monthcount';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content statistics: Views this month */
$handler->display->display_options['sorts']['monthcount']['id'] = 'monthcount';
$handler->display->display_options['sorts']['monthcount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['monthcount']['field'] = 'monthcount';
$handler->display->display_options['sorts']['monthcount']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content statistics: Views this month */
$handler->display->display_options['filters']['monthcount']['id'] = 'monthcount';
$handler->display->display_options['filters']['monthcount']['table'] = 'node_counter';
$handler->display->display_options['filters']['monthcount']['field'] = 'monthcount';
$handler->display->display_options['filters']['monthcount']['operator'] = '>';
$handler->display->display_options['filters']['monthcount']['value']['value'] = '0';
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: This Week */
$handler = $view->new_display('panel_pane', 'This Week', 'panel_pane_4');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'totalcount' => 'totalcount',
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
  'totalcount' => array(
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content statistics: Views this week */
$handler->display->display_options['fields']['weekcount']['id'] = 'weekcount';
$handler->display->display_options['fields']['weekcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['weekcount']['field'] = 'weekcount';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content statistics: Views this week */
$handler->display->display_options['sorts']['weekcount']['id'] = 'weekcount';
$handler->display->display_options['sorts']['weekcount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['weekcount']['field'] = 'weekcount';
$handler->display->display_options['sorts']['weekcount']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content statistics: Views this week */
$handler->display->display_options['filters']['weekcount']['id'] = 'weekcount';
$handler->display->display_options['filters']['weekcount']['table'] = 'node_counter';
$handler->display->display_options['filters']['weekcount']['field'] = 'weekcount';
$handler->display->display_options['filters']['weekcount']['operator'] = '>';
$handler->display->display_options['filters']['weekcount']['value']['value'] = '0';
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Today */
$handler = $view->new_display('panel_pane', 'Today', 'panel_pane_5');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'totalcount' => 'totalcount',
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
  'totalcount' => array(
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content statistics: Views today */
$handler->display->display_options['fields']['daycount']['id'] = 'daycount';
$handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
$handler->display->display_options['fields']['daycount']['field'] = 'daycount';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content statistics: Views today */
$handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
$handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
$handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content statistics: Views today */
$handler->display->display_options['filters']['daycount']['id'] = 'daycount';
$handler->display->display_options['filters']['daycount']['table'] = 'node_counter';
$handler->display->display_options['filters']['daycount']['field'] = 'daycount';
$handler->display->display_options['filters']['daycount']['operator'] = '>';
$handler->display->display_options['filters']['daycount']['value']['value'] = '0';
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Year */
$handler = $view->new_display('panel_pane', 'Year', 'panel_pane_6');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'totalcount' => 'totalcount',
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
  'totalcount' => array(
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content statistics: Views this year */
$handler->display->display_options['fields']['yearcount']['id'] = 'yearcount';
$handler->display->display_options['fields']['yearcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['yearcount']['field'] = 'yearcount';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content statistics: Views this year */
$handler->display->display_options['sorts']['yearcount']['id'] = 'yearcount';
$handler->display->display_options['sorts']['yearcount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['yearcount']['field'] = 'yearcount';
$handler->display->display_options['sorts']['yearcount']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content statistics: Views this year */
$handler->display->display_options['filters']['yearcount']['id'] = 'yearcount';
$handler->display->display_options['filters']['yearcount']['table'] = 'node_counter';
$handler->display->display_options['filters']['yearcount']['field'] = 'yearcount';
$handler->display->display_options['filters']['yearcount']['operator'] = '>';
$handler->display->display_options['filters']['yearcount']['value']['value'] = '0';
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Dashboard Block */
$handler = $view->new_display('block', 'Dashboard Block', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Content Stats';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content statistics: Total views */
$handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['group_type'] = 'sum';
/* Field: Content statistics: Views this month */
$handler->display->display_options['fields']['monthcount']['id'] = 'monthcount';
$handler->display->display_options['fields']['monthcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['monthcount']['field'] = 'monthcount';
$handler->display->display_options['fields']['monthcount']['group_type'] = 'sum';
/* Field: Content statistics: Views this week */
$handler->display->display_options['fields']['weekcount']['id'] = 'weekcount';
$handler->display->display_options['fields']['weekcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['weekcount']['field'] = 'weekcount';
$handler->display->display_options['fields']['weekcount']['group_type'] = 'sum';
/* Field: Content statistics: Views this year */
$handler->display->display_options['fields']['yearcount']['id'] = 'yearcount';
$handler->display->display_options['fields']['yearcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['yearcount']['field'] = 'yearcount';
$handler->display->display_options['fields']['yearcount']['group_type'] = 'sum';
/* Field: Content statistics: Views today */
$handler->display->display_options['fields']['daycount']['id'] = 'daycount';
$handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
$handler->display->display_options['fields']['daycount']['field'] = 'daycount';
$handler->display->display_options['fields']['daycount']['group_type'] = 'sum';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'totalcount' => 'totalcount',
  'monthcount' => 'monthcount',
  'weekcount' => 'weekcount',
  'yearcount' => 'yearcount',
  'daycount' => 'daycount',
);
$handler->display->display_options['style_options']['default'] = 'daycount';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'totalcount' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'monthcount' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'weekcount' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'yearcount' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'daycount' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'dashboard/content_stats';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Content Stats';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
);
