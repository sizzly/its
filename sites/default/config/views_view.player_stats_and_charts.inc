<?php
/**
 * @file
 * views_view.player_stats_and_charts.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'player_stats_and_charts';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Player Stats and Charts';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'country' => 'country',
  'name' => 'name',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'country' => array(
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
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'main' => 'main',
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Country Chart */
$handler = $view->new_display('panel_pane', 'Country Chart', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Country';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'country';
$handler->display->display_options['style_options']['data_fields'] = array(
  'name' => 'name',
  'country' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'country' => '#2f7ed8',
  'name' => '#0d233a',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'main' => 'main',
);
/* Relationship: Profile: Location (field_profile_location) */
$handler->display->display_options['relationships']['field_profile_location_lid']['id'] = 'field_profile_location_lid';
$handler->display->display_options['relationships']['field_profile_location_lid']['table'] = 'field_data_field_profile_location';
$handler->display->display_options['relationships']['field_profile_location_lid']['field'] = 'field_profile_location_lid';
$handler->display->display_options['relationships']['field_profile_location_lid']['relationship'] = 'profile';
$handler->display->display_options['relationships']['field_profile_location_lid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['relationship'] = 'field_profile_location_lid';
/* Field: COUNT(DISTINCT User: Name) */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;

/* Display: Game Chart */
$handler = $view->new_display('panel_pane', 'Game Chart', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Game';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_game';
$handler->display->display_options['style_options']['data_fields'] = array(
  'name' => 'name',
  'field_game' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_game' => '#2f7ed8',
  'name' => '#0d233a',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Content authored */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'users';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_game']['id'] = 'field_game';
$handler->display->display_options['fields']['field_game']['table'] = 'field_data_field_game';
$handler->display->display_options['fields']['field_game']['field'] = 'field_game';
$handler->display->display_options['fields']['field_game']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_game']['label'] = 'Game';
/* Field: COUNT(DISTINCT User: Name) */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'uid';
$handler->display->display_options['filters']['type']['value'] = array(
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_game_tid']['id'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['table'] = 'field_data_field_game';
$handler->display->display_options['filters']['field_game_tid']['field'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['relationship'] = 'uid';
$handler->display->display_options['filters']['field_game_tid']['operator'] = 'not empty';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'views_content',
);
