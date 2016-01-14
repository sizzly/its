<?php
/**
 * @file
 * its_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function its_dashboard_views_default_views() {
  $export = array();

  $view = new view();
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
  $export['dashboard_all_content_stats'] = $view;

  $view = new view();
  $view->name = 'dashboard_armies';
  $view->description = 'The player\'s armies and actions';
  $view->tag = 'Dashboard';
  $view->base_table = 'profile';
  $view->human_name = 'Dashboard: Armies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Armies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'name' => 'name',
    'quick_battle_i_won' => 'quick_battle_i_won',
    'quick_battle_i_lost' => 'quick_battle_i_won',
    'quick_battle_draw' => 'quick_battle_i_won',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
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
    'quick_battle_i_won' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'quick_battle_i_lost' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'quick_battle_draw' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You haven\'t indicated any armies in your profile.  Add armies to your profile at http://itoysoldiers.com/user/!1/edit/main.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_armies_i_play_tid']['id'] = 'field_armies_i_play_tid';
  $handler->display->display_options['relationships']['field_armies_i_play_tid']['table'] = 'field_data_field_armies_i_play';
  $handler->display->display_options['relationships']['field_armies_i_play_tid']['field'] = 'field_armies_i_play_tid';
  $handler->display->display_options['relationships']['field_armies_i_play_tid']['label'] = 'term from field_armies_i_play';
  $handler->display->display_options['relationships']['field_armies_i_play_tid']['required'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_armies_i_play_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_armies_i_play_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Army';
  $handler->display->display_options['fields']['name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['quick_battle_i_won']['id'] = 'quick_battle_i_won';
  $handler->display->display_options['fields']['quick_battle_i_won']['table'] = 'views_entity_taxonomy_term';
  $handler->display->display_options['fields']['quick_battle_i_won']['field'] = 'quick_battle_i_won';
  $handler->display->display_options['fields']['quick_battle_i_won']['relationship'] = 'field_armies_i_play_tid';
  $handler->display->display_options['fields']['quick_battle_i_won']['label'] = 'Quick Battle Result';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['quick_battle_i_lost']['id'] = 'quick_battle_i_lost';
  $handler->display->display_options['fields']['quick_battle_i_lost']['table'] = 'views_entity_taxonomy_term';
  $handler->display->display_options['fields']['quick_battle_i_lost']['field'] = 'quick_battle_i_lost';
  $handler->display->display_options['fields']['quick_battle_i_lost']['relationship'] = 'field_armies_i_play_tid';
  $handler->display->display_options['fields']['quick_battle_i_lost']['label'] = 'Quick Battle: I Lost';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['quick_battle_draw']['id'] = 'quick_battle_draw';
  $handler->display->display_options['fields']['quick_battle_draw']['table'] = 'views_entity_taxonomy_term';
  $handler->display->display_options['fields']['quick_battle_draw']['field'] = 'quick_battle_draw';
  $handler->display->display_options['fields']['quick_battle_draw']['relationship'] = 'field_armies_i_play_tid';
  $handler->display->display_options['fields']['quick_battle_draw']['label'] = 'Quick Battle: Draw';
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main' => 'main',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Dashboard';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['dashboard_armies'] = $view;

  $view = new view();
  $view->name = 'dashboard_comment_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Dashboard: Comment Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = 'list-group';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_1' => 'name_1',
    'nothing' => 'nothing',
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'comment';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'commented on';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Comment: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'comment';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
if ($user->uid == $row->uid) {
   return TRUE;
} else {
   return FALSE;
}
';

  /* Display: Comments Page */
  $handler = $view->new_display('page', 'Comments Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Comments on your content';
  $handler->display->display_options['path'] = 'dashboard/comments';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Comments';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Comments Feed */
  $handler = $view->new_display('panel_pane', 'Comments Feed', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/dashboard/comments" class="btn btn-primary">All Comments</a>';

  /* Display: Reply Feed */
  $handler = $view->new_display('panel_pane', 'Reply Feed', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/dashboard/replies" class="btn btn-primary">All Replies</a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Comment: Parent comment */
  $handler->display->display_options['relationships']['pid']['id'] = 'pid';
  $handler->display->display_options['relationships']['pid']['table'] = 'comment';
  $handler->display->display_options['relationships']['pid']['field'] = 'pid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Comment: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'comment';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'pid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Reply Page */
  $handler = $view->new_display('page', 'Reply Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Replies to your comments';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Comment: Parent comment */
  $handler->display->display_options['relationships']['pid']['id'] = 'pid';
  $handler->display->display_options['relationships']['pid']['table'] = 'comment';
  $handler->display->display_options['relationships']['pid']['field'] = 'pid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'comment';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'replied to your comment on';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Comment: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'comment';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'pid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'dashboard/replies';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Replies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['dashboard_comment_feed'] = $view;

  $view = new view();
  $view->name = 'dashboard_mass_update';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard: Mass Update';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dashboard: Mass Update';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_your_army_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>You Have No Suitable Battles</h3>
You have no suitable battles to perform a mass update against.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['roles_fieldset'] = array(
    'roles' => array(
      'anonymous user' => 0,
      'authenticated user' => 0,
      'administrator' => 0,
      'verified' => 0,
      'Ironmonger' => 0,
      'System' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'game_results::field_batteresult_commander' => 'game_results::field_batteresult_commander',
        ),
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
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
  /* Filter criterion: Field: Your Army (field_your_army) */
  $handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_your_army_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator_id'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['label'] = 'Your Army';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['description'] = 'Filter battles by what army you played.';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['identifier'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';

  /* Display: Commander */
  $handler = $view->new_display('page', 'Commander', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mass Update: Commander';
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Filter criterion: Field: Your Army (field_your_army) */
  $handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_your_army_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator_id'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['label'] = 'Your Army';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['description'] = 'Filter battles by what army you played.';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['identifier'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
  /* Filter criterion: Content: Commander (field_batteresult_commander) */
  $handler->display->display_options['filters']['field_batteresult_commander_tid']['id'] = 'field_batteresult_commander_tid';
  $handler->display->display_options['filters']['field_batteresult_commander_tid']['table'] = 'field_data_field_batteresult_commander';
  $handler->display->display_options['filters']['field_batteresult_commander_tid']['field'] = 'field_batteresult_commander_tid';
  $handler->display->display_options['filters']['field_batteresult_commander_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_batteresult_commander_tid']['value'] = '';
  $handler->display->display_options['filters']['field_batteresult_commander_tid']['vocabulary'] = 'units';
  $handler->display->display_options['path'] = 'dashboard/update/commander';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Commander';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Points */
  $handler = $view->new_display('page', 'Points', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mass Update: Points Per Army';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'game_results::field_points_per_army' => 'game_results::field_points_per_army',
        ),
      ),
    ),
  );
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
  /* Filter criterion: Field: Your Army (field_your_army) */
  $handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_your_army_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator_id'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['label'] = 'Your Army';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['description'] = 'Filter battles by what army you played.';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['identifier'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
  /* Filter criterion: Field: Points per army (field_points_per_army) */
  $handler->display->display_options['filters']['field_points_per_army_value']['id'] = 'field_points_per_army_value';
  $handler->display->display_options['filters']['field_points_per_army_value']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['filters']['field_points_per_army_value']['field'] = 'field_points_per_army_value';
  $handler->display->display_options['filters']['field_points_per_army_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'dashboard/update/points';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Points';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Allies */
  $handler = $view->new_display('page', 'Allies', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mass Update: Allies';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'game_results::field_allied_detatchment' => 'game_results::field_allied_detatchment',
          'game_results::field_opponent_s_allied_detachme' => 'game_results::field_opponent_s_allied_detachme',
        ),
      ),
    ),
  );
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
  /* Filter criterion: Field: Your Army (field_your_army) */
  $handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_your_army_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator_id'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['label'] = 'Your Army';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['description'] = 'Filter battles by what army you played.';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['identifier'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
  $handler->display->display_options['path'] = 'dashboard/update/allies';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Allies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Mission Rules */
  $handler = $view->new_display('page', 'Mission Rules', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mass Update: Mission Rules';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'game_results::field_battle_mission_rules' => 'game_results::field_battle_mission_rules',
        ),
      ),
    ),
  );
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
  /* Filter criterion: Field: Your Army (field_your_army) */
  $handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_your_army_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator_id'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['label'] = 'Your Army';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['description'] = 'Filter battles by what army you played.';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['identifier'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
  /* Filter criterion: Content: Mission Rules in Effect (field_battle_mission_rules) */
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['id'] = 'field_battle_mission_rules_tid';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['table'] = 'field_data_field_battle_mission_rules';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['field'] = 'field_battle_mission_rules_tid';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['value'] = '';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['vocabulary'] = 'scenario_special_rules';
  $handler->display->display_options['path'] = 'dashboard/update/mission-rules';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Mission Rules';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Victory Conditions */
  $handler = $view->new_display('page', 'Victory Conditions', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mass Update: Mission Rules';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'game_results::field_battle_mission_rules' => 'game_results::field_battle_mission_rules',
        ),
      ),
    ),
  );
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
  /* Filter criterion: Field: Your Army (field_your_army) */
  $handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_your_army_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator_id'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['label'] = 'Your Army';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['description'] = 'Filter battles by what army you played.';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['identifier'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
  /* Filter criterion: Content: Mission Rules in Effect (field_battle_mission_rules) */
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['id'] = 'field_battle_mission_rules_tid';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['table'] = 'field_data_field_battle_mission_rules';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['field'] = 'field_battle_mission_rules_tid';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['value'] = '';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['vocabulary'] = 'scenario_special_rules';
  $handler->display->display_options['path'] = 'dashboard/update/allies';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Allies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Enemy Commander Page */
  $handler = $view->new_display('page', 'Enemy Commander Page', 'page_5');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="alert alert-danger" role="alert"><strong>Important!</strong>:  When performing mass updates of this type please make sure that you are using an existing Commander.  If you are unsure then please update one battle and once successful you can update multiple battles.</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['skip_batching'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify Enemy Commander',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'game_results::field_battleresult_enemy_command' => 'game_results::field_battleresult_enemy_command',
        ),
      ),
    ),
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Enemy Commander (field_battleresult_enemy_command) */
  $handler->display->display_options['filters']['field_battleresult_enemy_command_tid']['id'] = 'field_battleresult_enemy_command_tid';
  $handler->display->display_options['filters']['field_battleresult_enemy_command_tid']['table'] = 'field_data_field_battleresult_enemy_command';
  $handler->display->display_options['filters']['field_battleresult_enemy_command_tid']['field'] = 'field_battleresult_enemy_command_tid';
  $handler->display->display_options['filters']['field_battleresult_enemy_command_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_battleresult_enemy_command_tid']['value'] = '';
  $handler->display->display_options['filters']['field_battleresult_enemy_command_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_battleresult_enemy_command_tid']['vocabulary'] = 'units';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'filter by the title of your battles';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Field: Your Army (field_your_army) */
  $handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_your_army_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_your_army_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator_id'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['label'] = 'Your Army';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['description'] = 'Filter battles by what army you played.';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['operator'] = 'field_your_army_tid_op';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['identifier'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_your_army_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
  $handler->display->display_options['path'] = 'dashboard/update/enemy-commander';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Enemy Commander';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['dashboard_mass_update'] = $view;

  return $export;
}
