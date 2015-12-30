<?php
/**
 * @file
 * views_view.battle_stat_views.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'battle_stat_views';
$view->description = '';
$view->tag = 'player, fix';
$view->base_table = 'node';
$view->human_name = 'Player Battle Score';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Army Battle Scores';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'page_2';
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_your_results' => 'field_your_results',
  'name' => 'name',
);
$handler->display->display_options['style_options']['default'] = 'field_your_results';
$handler->display->display_options['style_options']['info'] = array(
  'field_your_results' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
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
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Player';
/* Field: SUM(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_your_results']['label'] = 'Battle Score';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
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
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = '!=';
$handler->display->display_options['filters']['name']['value'] = 'Unregistered Player';
$handler->display->display_options['filters']['name']['group'] = 1;
/* Filter criterion: Field: Your Army (field_your_army) */
$handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid']['value'] = array(
  32 => '32',
  49 => '49',
  51 => '51',
  53 => '53',
  54 => '54',
  52 => '52',
  50 => '50',
  2 => '2',
  19 => '19',
  3 => '3',
  5 => '5',
  21 => '21',
  4 => '4',
  23 => '23',
  24 => '24',
  25 => '25',
  17 => '17',
  18 => '18',
  20 => '20',
  22 => '22',
  26 => '26',
  27 => '27',
  28 => '28',
  55 => '55',
  56 => '56',
  57 => '57',
  58 => '58',
  59 => '59',
  60 => '60',
  61 => '61',
  62 => '62',
  63 => '63',
  64 => '64',
  65 => '65',
  66 => '66',
  67 => '67',
  68 => '68',
  69 => '69',
  70 => '70',
  42 => '42',
  46 => '46',
  43 => '43',
  45 => '45',
  48 => '48',
  47 => '47',
  44 => '44',
);
$handler->display->display_options['filters']['field_your_army_tid']['group'] = 1;
$handler->display->display_options['filters']['field_your_army_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
$handler->display->display_options['filters']['field_your_army_tid']['hierarchy'] = 1;
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_game_tid']['id'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['table'] = 'field_data_field_game';
$handler->display->display_options['filters']['field_game_tid']['field'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['operator'] = 'or';
$handler->display->display_options['filters']['field_game_tid']['group'] = 1;
$handler->display->display_options['filters']['field_game_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_game_tid']['expose']['operator_id'] = 'field_game_tid_op';
$handler->display->display_options['filters']['field_game_tid']['expose']['label'] = 'Game Filter';
$handler->display->display_options['filters']['field_game_tid']['expose']['operator'] = 'field_game_tid_op';
$handler->display->display_options['filters']['field_game_tid']['expose']['identifier'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_game_tid']['group_info']['label'] = 'Game (field_game)';
$handler->display->display_options['filters']['field_game_tid']['group_info']['identifier'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_game_tid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
/* Filter criterion: Field: Your Army (field_your_army) */
$handler->display->display_options['filters']['field_your_army_tid_1']['id'] = 'field_your_army_tid_1';
$handler->display->display_options['filters']['field_your_army_tid_1']['table'] = 'field_data_field_your_army';
$handler->display->display_options['filters']['field_your_army_tid_1']['field'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_your_army_tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['operator_id'] = 'field_your_army_tid_1_op';
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['label'] = 'Army Filter';
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['operator'] = 'field_your_army_tid_1_op';
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['identifier'] = 'field_your_army_tid_1';
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['remember_roles'] = array(
  2 => '2',
  3 => '3',
  1 => 0,
);
$handler->display->display_options['filters']['field_your_army_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_your_army_tid_1']['vocabulary'] = 'armies';
$handler->display->display_options['filters']['field_your_army_tid_1']['hierarchy'] = 1;

/* Display: Player battle stats */
$handler = $view->new_display('panel_pane', 'Player battle stats', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Player Battle Scores';
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = '!=';
$handler->display->display_options['filters']['name']['value'] = 'Unregistered Player';
/* Filter criterion: Field: Your Army (field_your_army) */
$handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid']['value'] = array(
  32 => '32',
  49 => '49',
  51 => '51',
  53 => '53',
  54 => '54',
  52 => '52',
  50 => '50',
  2 => '2',
  19 => '19',
  3 => '3',
  5 => '5',
  21 => '21',
  4 => '4',
  23 => '23',
  24 => '24',
  25 => '25',
  17 => '17',
  18 => '18',
  20 => '20',
  22 => '22',
  26 => '26',
  27 => '27',
  28 => '28',
  55 => '55',
  56 => '56',
  57 => '57',
  58 => '58',
  59 => '59',
  60 => '60',
  61 => '61',
  62 => '62',
  63 => '63',
  64 => '64',
  65 => '65',
  66 => '66',
  67 => '67',
  68 => '68',
  69 => '69',
  70 => '70',
  42 => '42',
  46 => '46',
  43 => '43',
  45 => '45',
  48 => '48',
  47 => '47',
  44 => '44',
);
$handler->display->display_options['filters']['field_your_army_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
$handler->display->display_options['filters']['field_your_army_tid']['hierarchy'] = 1;

/* Display: Player Battle Score */
$handler = $view->new_display('page', 'Player Battle Score', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Player Battle Scores';
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
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
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = '!=';
$handler->display->display_options['filters']['name']['value'] = 'Unregistered Player';
$handler->display->display_options['filters']['name']['group'] = 1;
/* Filter criterion: Field: Your Army (field_your_army) */
$handler->display->display_options['filters']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['filters']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid']['value'] = array(
  32 => '32',
  49 => '49',
  51 => '51',
  53 => '53',
  54 => '54',
  52 => '52',
  50 => '50',
  2 => '2',
  19 => '19',
  3 => '3',
  5 => '5',
  21 => '21',
  4 => '4',
  23 => '23',
  24 => '24',
  25 => '25',
  17 => '17',
  18 => '18',
  20 => '20',
  22 => '22',
  26 => '26',
  27 => '27',
  28 => '28',
  55 => '55',
  56 => '56',
  57 => '57',
  58 => '58',
  59 => '59',
  60 => '60',
  61 => '61',
  62 => '62',
  63 => '63',
  64 => '64',
  65 => '65',
  66 => '66',
  67 => '67',
  68 => '68',
  69 => '69',
  70 => '70',
  42 => '42',
  46 => '46',
  43 => '43',
  45 => '45',
  48 => '48',
  47 => '47',
  44 => '44',
);
$handler->display->display_options['filters']['field_your_army_tid']['group'] = 1;
$handler->display->display_options['filters']['field_your_army_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_your_army_tid']['vocabulary'] = 'armies';
$handler->display->display_options['filters']['field_your_army_tid']['hierarchy'] = 1;
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_game_tid']['id'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['table'] = 'field_data_field_game';
$handler->display->display_options['filters']['field_game_tid']['field'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['operator'] = 'or';
$handler->display->display_options['filters']['field_game_tid']['group'] = 1;
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
$handler->display->display_options['filters']['field_game_tid']['group_info']['label'] = 'Game (field_game)';
$handler->display->display_options['filters']['field_game_tid']['group_info']['identifier'] = 'field_game_tid';
$handler->display->display_options['filters']['field_game_tid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_game_tid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
/* Filter criterion: Field: Your Army (field_your_army) */
$handler->display->display_options['filters']['field_your_army_tid_1']['id'] = 'field_your_army_tid_1';
$handler->display->display_options['filters']['field_your_army_tid_1']['table'] = 'field_data_field_your_army';
$handler->display->display_options['filters']['field_your_army_tid_1']['field'] = 'field_your_army_tid';
$handler->display->display_options['filters']['field_your_army_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_your_army_tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['operator_id'] = 'field_your_army_tid_1_op';
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['label'] = 'Army Filter';
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['operator'] = 'field_your_army_tid_1_op';
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['identifier'] = 'field_your_army_tid_1';
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_your_army_tid_1']['expose']['remember_roles'] = array(
  2 => '2',
  3 => '3',
  1 => 0,
);
$handler->display->display_options['filters']['field_your_army_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_your_army_tid_1']['vocabulary'] = 'armies';
$handler->display->display_options['filters']['field_your_army_tid_1']['hierarchy'] = 1;
$handler->display->display_options['path'] = 'stats/player/battle-score';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Player Battle Score';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'list',
  3 => 'views_content',
);
