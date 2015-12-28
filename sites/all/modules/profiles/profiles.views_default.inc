<?php
/**
 * @file
 * profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'leaderboards_all_tables';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Leaderboards: All: Tables';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
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
    'counter' => 'counter',
    'name' => 'name',
    'points' => 'points',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
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
    'points' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Ranking';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Renown Panel */
  $handler = $view->new_display('panel_pane', 'Renown Panel', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Renown';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Ranking';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Userpoints: Current renown in category */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Userpoints: Current renown in category */
  $handler->display->display_options['sorts']['points']['id'] = 'points';
  $handler->display->display_options['sorts']['points']['table'] = 'userpoints';
  $handler->display->display_options['sorts']['points']['field'] = 'points';
  $handler->display->display_options['sorts']['points']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Userpoints: Points category */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'userpoints';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not in';
  $handler->display->display_options['filters']['tid']['value'] = array(
    894 => '894',
    1261 => '1261',
  );
  $handler->display->display_options['pane_category']['name'] = 'Leaderboards';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Achievement Point Panel */
  $handler = $view->new_display('panel_pane', 'Achievement Point Panel', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Achievement Points';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'name' => 'name',
    'field_achievement_points' => 'field_achievement_points',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
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
    'field_achievement_points' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Relation: Achievement (user → node) */
  $handler->display->display_options['relationships']['relation_achievement_node']['id'] = 'relation_achievement_node';
  $handler->display->display_options['relationships']['relation_achievement_node']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_achievement_node']['field'] = 'relation_achievement_node';
  $handler->display->display_options['relationships']['relation_achievement_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_achievement_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Ranking';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: SUM(Content: Achievement Points) */
  $handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['fields']['field_achievement_points']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_achievement_points']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: SUM(Content: Achievement Points (field_achievement_points)) */
  $handler->display->display_options['sorts']['field_achievement_points_value']['id'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['sorts']['field_achievement_points_value']['field'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['sorts']['field_achievement_points_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_achievement_points_value']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Leaderboards';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Renown Page */
  $handler = $view->new_display('page', 'Renown Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Renown Leaderboard';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Ranking';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Userpoints: Current renown in category */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = 'Renown';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Userpoints: Current renown in category */
  $handler->display->display_options['sorts']['points']['id'] = 'points';
  $handler->display->display_options['sorts']['points']['table'] = 'userpoints';
  $handler->display->display_options['sorts']['points']['field'] = 'points';
  $handler->display->display_options['sorts']['points']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Userpoints: Points category */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'userpoints';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not in';
  $handler->display->display_options['filters']['tid']['value'] = array(
    894 => '894',
    1261 => '1261',
  );
  $handler->display->display_options['path'] = 'community/leaderboards/renown';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Renown';
  $handler->display->display_options['menu']['description'] = 'All players ranked by renown';
  $handler->display->display_options['menu']['weight'] = '-49';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Achievement Point Page */
  $handler = $view->new_display('page', 'Achievement Point Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Achievement Points Leaderboard';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Relation: Achievement (user → node) */
  $handler->display->display_options['relationships']['relation_achievement_node']['id'] = 'relation_achievement_node';
  $handler->display->display_options['relationships']['relation_achievement_node']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_achievement_node']['field'] = 'relation_achievement_node';
  $handler->display->display_options['relationships']['relation_achievement_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_achievement_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Ranking';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: SUM(Content: Achievement Points) */
  $handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['fields']['field_achievement_points']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: SUM(Content: Achievement Points (field_achievement_points)) */
  $handler->display->display_options['sorts']['field_achievement_points_value']['id'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['sorts']['field_achievement_points_value']['field'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['sorts']['field_achievement_points_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_achievement_points_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'community/leaderboards/achievement-points';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Achievement Points';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Average Battle Score Panel */
  $handler = $view->new_display('panel_pane', 'Average Battle Score Panel', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average Battle Score';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'name' => 'name',
    'field_your_results' => 'field_your_results',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
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
    'field_your_results' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Ranking';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: AVG(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
  /* Filter criterion: COUNT(Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '5';
  $handler->display->display_options['pane_category']['name'] = 'Leaderboards';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Average Battle Score Page */
  $handler = $view->new_display('page', 'Average Battle Score Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average Battle Score Leaderboard';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Ranking';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'Average Battle Score';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: AVG(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '5';
  $handler->display->display_options['path'] = 'community/leaderboards/average-battle-score';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Average Battle Score';
  $handler->display->display_options['menu']['description'] = 'All players ranked by average battle score';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['leaderboards_all_tables'] = $view;

  $view = new view();
  $view->name = 'profiles_all_page_layout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Profiles: All: Page Layout';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page Header */
  $handler = $view->new_display('panel_pane', 'Page Header', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Relationship: Flags: follow */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_avatar';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['ops']['alter']['text'] = '<div class="seperator"></div>
<div class="btn-group btn-group-xs">
  <span class="btn btn-default">[ops]</span>
  <span class="btn btn-default"><a href="/messages/new/!1?destination=user/!1">PM</a></span>
</div>';
  $handler->display->display_options['fields']['ops']['element_type'] = 'span';
  $handler->display->display_options['fields']['ops']['element_class'] = 'btn btn-success btn-xs m-bottom-sm';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['ops']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['ops']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_profile_location_lid';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<a href="[field_website-url]" class="social-connect tooltip-test rss-hover pull-left m-right-xs" data-toggle="tooltip" data-placement="bottom" data-original-title="[field_website-title]">
  <i class="fa fa-link"></i>
</a>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Profile: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_facebook']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['alter']['text'] = '<a href="[field_facebook]" class="social-connect tooltip-test facebook-hover pull-left m-right-xs" data-toggle="tooltip" data-placement="bottom" data-original-title="Facebook">
  <i class="fa fa-facebook"></i>
</a>';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook']['type'] = 'link_plain';
  /* Field: Profile: Pinterest */
  $handler->display->display_options['fields']['field_pinterest']['id'] = 'field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['table'] = 'field_data_field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['field'] = 'field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_pinterest']['label'] = '';
  $handler->display->display_options['fields']['field_pinterest']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pinterest']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pinterest']['alter']['text'] = '<a href="[field_pinterest]" class="social-connect tooltip-test pinterest-hover pull-left m-right-xs" data-toggle="tooltip" data-placement="bottom" data-original-title="Pinterest">
  <i class="fa fa-pinterest"></i>
</a>';
  $handler->display->display_options['fields']['field_pinterest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pinterest']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pinterest']['type'] = 'link_plain';
  /* Field: Profile: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter]" class="social-connect tooltip-test twitter-hover pull-left m-right-xs" data-toggle="tooltip" data-placement="bottom" data-original-title="Twitter">
  <i class="fa fa-twitter"></i>
</a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter']['type'] = 'link_plain';
  /* Field: Profile: Location */
  $handler->display->display_options['fields']['field_profile_location']['id'] = 'field_profile_location';
  $handler->display->display_options['fields']['field_profile_location']['table'] = 'field_data_field_profile_location';
  $handler->display->display_options['fields']['field_profile_location']['field'] = 'field_profile_location';
  $handler->display->display_options['fields']['field_profile_location']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_location']['label'] = '';
  $handler->display->display_options['fields']['field_profile_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-5 col-sm-12 col-md-5 text-center">
  <span class="thumbnail">[picture]</span>
</div>
<div class="col-xs-7 col-sm-12 col-md-7">
  <strong>[field_profile_location]</strong>
  <small class="block text-muted">Member Since: [created]</small>
  [ops]
  <div class="seperator"></div>
  [field_facebook]
  [field_twitter]
  [field_pinterest]
  [field_website]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: About Me */
  $handler = $view->new_display('panel_pane', 'About Me', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Bio */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_bio']['label'] = 'About Me';
  $handler->display->display_options['fields']['field_bio']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bio']['element_class'] = 'panel-body';
  $handler->display->display_options['fields']['field_bio']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_bio']['element_label_class'] = 'panel-heading';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_bio']['element_wrapper_class'] = 'panel panel-default';
  $handler->display->display_options['fields']['field_bio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['hide_empty'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Blog Count */
  $handler = $view->new_display('panel_pane', 'Blog Count', 'panel_pane_3');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/blogs';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
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
    'blog' => 'blog',
  );

  /* Display: Gallery Count */
  $handler = $view->new_display('panel_pane', 'Gallery Count', 'panel_pane_4');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/galleries';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
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
    'gallery' => 'gallery',
  );

  /* Display: List Count */
  $handler = $view->new_display('panel_pane', 'List Count', 'panel_pane_5');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/army-lists';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
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
    'listcrit' => 'listcrit',
  );

  /* Display: Battle Count */
  $handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_6');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/blogs';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-stat3 bg-danger">
  <h2 class="m-top-none">[nid]</h2>
  <h5>battles</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-fire" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/!1/battles';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Renown */
  $handler = $view->new_display('panel_pane', 'Renown', 'panel_pane_7');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Userpoints: Current renown in category */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[points]</h2>
  <h5>Renown</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-flash" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'community/leaderboards';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Leaderboards';
  $handler->display->display_options['fields']['nothing']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Userpoints: Points category */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'userpoints';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not in';
  $handler->display->display_options['filters']['tid']['value'] = array(
    894 => '894',
    1261 => '1261',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Recent Actions */
  $handler = $view->new_display('panel_pane', 'Recent Actions', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Actions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="panel-body">
<h4>%1 has no recent actions</h4>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'pure_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Message */
  $handler->display->display_options['relationships']['message']['id'] = 'message';
  $handler->display->display_options['relationships']['message']['table'] = 'users';
  $handler->display->display_options['relationships']['message']['field'] = 'message';
  $handler->display->display_options['relationships']['message']['required'] = TRUE;
  $handler->display->display_options['relationships']['message']['bundle_types'] = array(
    'stream_player_comments_on_post' => 'stream_player_comments_on_post',
    'stream_player_posts_a_battle' => 'stream_player_posts_a_battle',
    'stream_player_posts_new_content' => 'stream_player_posts_new_content',
    'stream_player_likes_content' => 'stream_player_likes_content',
    'stream_player_earns_an_achievement' => 'stream_player_earns_an_achievement',
    'stream_new_war_zone' => 'stream_new_war_zone',
    'stream_player_acknowledges_a_battle' => 'stream_player_acknowledges_a_battle',
    'stream_narrative_army_event' => 'stream_narrative_army_event',
    'stream_player_rates_list' => 'stream_player_rates_list',
    'stream_call_to_battle' => 'stream_call_to_battle',
    'stream_player_registers_for_warzone' => 'stream_player_registers_for_warzone',
    'stream_player_cancels_registration_for_warzone' => 'stream_player_cancels_registration_for_warzone',
    'stream_a_warzone_has_begun' => 'stream_a_warzone_has_begun',
    'stream_a_warzone_has_ended' => 'stream_a_warzone_has_ended',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['relationship'] = 'message';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'message';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Popular Content */
  $handler = $view->new_display('panel_pane', 'Popular Content', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Popular Content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_images';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'avatar_small',
    'image_link' => 'content',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'avatar_small',
    'image_link' => 'content',
    'single_image_delta' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
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
    'blog' => 'blog',
    'gallery' => 'gallery',
    'game_result_system_' => 'game_result_system_',
    'listcrit' => 'listcrit',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Achievements */
  $handler = $view->new_display('panel_pane', 'Achievements', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Achievements';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Trophy Room';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'user/!1/trophies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'photo-stream';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Relation: Achievement (user → relation) */
  $handler->display->display_options['relationships']['relation_base_right_achievement']['id'] = 'relation_base_right_achievement';
  $handler->display->display_options['relationships']['relation_base_right_achievement']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_base_right_achievement']['field'] = 'relation_base_right_achievement';
  $handler->display->display_options['relationships']['relation_base_right_achievement']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_right_achievement']['entity_deduplication_left'] = 1;
  /* Relationship: Relation: Relation: Achievement (relation → node) */
  $handler->display->display_options['relationships']['relation_base_achievement_node']['id'] = 'relation_base_achievement_node';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['field'] = 'relation_base_achievement_node';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['relationship'] = 'relation_base_right_achievement';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_achievement_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="[title]">[field_image]</span>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Relation: Achievement Date (field_achievement_date) */
  $handler->display->display_options['sorts']['field_achievement_date_value']['id'] = 'field_achievement_date_value';
  $handler->display->display_options['sorts']['field_achievement_date_value']['table'] = 'field_data_field_achievement_date';
  $handler->display->display_options['sorts']['field_achievement_date_value']['field'] = 'field_achievement_date_value';
  $handler->display->display_options['sorts']['field_achievement_date_value']['relationship'] = 'relation_base_right_achievement';
  $handler->display->display_options['sorts']['field_achievement_date_value']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Level */
  $handler = $view->new_display('panel_pane', 'Level', 'panel_pane_11');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row clearfix';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User Badges: Badge */
  $handler->display->display_options['fields']['badge']['id'] = 'badge';
  $handler->display->display_options['fields']['badge']['table'] = 'user_badges_badges';
  $handler->display->display_options['fields']['badge']['field'] = 'badge';
  $handler->display->display_options['fields']['badge']['label'] = '';
  $handler->display->display_options['fields']['badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['badge']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['badge']['element_wrapper_class'] = 'col-xs-6 col-sm-12 col-md-6 pull-left';
  $handler->display->display_options['fields']['badge']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User Badges: Badge Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'user_badges_badges';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['value'] = 'level';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['profiles_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'profiles_all_registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_registration';
  $view->human_name = 'Profiles: All: Registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Campaign Badges';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'photo-stream';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Node registration: Event node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="[title]">[field_campaign_badge]</span>';
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Node registration: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';

  /* Display: Profile Page Campaign Badges */
  $handler = $view->new_display('panel_pane', 'Profile Page Campaign Badges', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Trophy Room';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'user/!1/trophies';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Trophy Room - Campaign Count */
  $handler = $view->new_display('panel_pane', 'Trophy Room - Campaign Count', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node registration: Event node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'Views panes';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Trophy Page Campaign Badges */
  $handler = $view->new_display('panel_pane', 'Trophy Page Campaign Badges', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="campaign-badges"></a>';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['profiles_all_registrations'] = $view;

  $view = new view();
  $view->name = 'profiles_all_trophy_room';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Profiles: All: Trophy Room';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Trophy Cards */
  $handler = $view->new_display('panel_pane', 'Trophy Cards', 'panel_pane_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Relation: Achievement (user → node) */
  $handler->display->display_options['relationships']['relation_achievement_node']['id'] = 'relation_achievement_node';
  $handler->display->display_options['relationships']['relation_achievement_node']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_achievement_node']['field'] = 'relation_achievement_node';
  $handler->display->display_options['relationships']['relation_achievement_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Userpoints: Current renown in category */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'profiles_all_registrations';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_2';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Achievement Points */
  $handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['fields']['field_achievement_points']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_achievement_points']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_points']['empty'] = '0';
  $handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[points]</h2>
  <h5>Renown</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-flash" aria-hidden="true"></span>
  </div>
</div>
</div>

<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[view]</h2>
  <h5>Campaign Badges</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-screenshot" aria-hidden="true"></span>
  </div>
</div>
</div>

<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-success">
  <h2 class="m-top-none">[nid]</h2>
  <h5>Achivements Earned</h5>
  <div class="stat-icon">
    <i class="fa fa-certificate fa-3x" aria-hidden="true"></i>
  </div>
</div>
</div>

<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-danger">
  <h2 class="m-top-none">[field_achievement_points]</h2>
  <h5>Achievement Points</h5>
  <div class="stat-icon">
    <i class="fa fa-signal fa-3x" aria-hidden="true"></i>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Userpoints: Points category */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'userpoints';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not in';
  $handler->display->display_options['filters']['tid']['value'] = array(
    894 => '894',
    1261 => '1261',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Medals */
  $handler = $view->new_display('panel_pane', 'Medals', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medals';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'photo-stream-lg';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="medals"></a>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="panel-body">
  <h4>%1 has not medals.</h4>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'pure_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User Badges: Badge Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'user_badges_badges';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = TRUE;
  /* Field: User Badges: Badge */
  $handler->display->display_options['fields']['badge']['id'] = 'badge';
  $handler->display->display_options['fields']['badge']['table'] = 'user_badges_badges';
  $handler->display->display_options['fields']['badge']['field'] = 'badge';
  $handler->display->display_options['fields']['badge']['label'] = '';
  $handler->display->display_options['fields']['badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['badge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['badge']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['badge']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User Badges: Badge Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'user_badges_badges';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Achievements */
  $handler = $view->new_display('panel_pane', 'Achievements', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Achievements';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="achievements"></a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Relation: Achievement (user → relation) */
  $handler->display->display_options['relationships']['relation_base_right_achievement']['id'] = 'relation_base_right_achievement';
  $handler->display->display_options['relationships']['relation_base_right_achievement']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_base_right_achievement']['field'] = 'relation_base_right_achievement';
  $handler->display->display_options['relationships']['relation_base_right_achievement']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_right_achievement']['entity_deduplication_left'] = 0;
  /* Relationship: Relation: Relation: Achievement (relation → node) */
  $handler->display->display_options['relationships']['relation_base_achievement_node']['id'] = 'relation_base_achievement_node';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['field'] = 'relation_base_achievement_node';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['relationship'] = 'relation_base_right_achievement';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_achievement_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['entity_deduplication_right'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Relation: Create Date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'relation';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'relation_base_right_achievement';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="Awarded"><i class="icon glyphicon glyphicon-time iconbuffer" aria-hidden="true" aria-hidden="true" ></i> [created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_achievement_category']['id'] = 'field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['field'] = 'field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_achievement_category']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_category']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  /* Field: Content: Achievement Points */
  $handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_achievement_points']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_points']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_points']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="Achievement Points"><i class="icon glyphicon glyphicon-signal" aria-hidden="true" aria-hidden="true" ></i> <span class="badge iconbuffer">[field_achievement_points-value]</span></span>';
  $handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Achievement Unique */
  $handler->display->display_options['fields']['field_achievement_unique']['id'] = 'field_achievement_unique';
  $handler->display->display_options['fields']['field_achievement_unique']['table'] = 'field_data_field_achievement_unique';
  $handler->display->display_options['fields']['field_achievement_unique']['field'] = 'field_achievement_unique';
  $handler->display->display_options['fields']['field_achievement_unique']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_achievement_unique']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_unique']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_unique']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_unique']['alter']['text'] = '<i class="icon glyphicon glyphicon-star-empty iconbuffer" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="Unique Achievement"></i>';
  $handler->display->display_options['fields']['field_achievement_unique']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_unique']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_unique']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_unique']['type'] = 'list_key';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
  <div class="pull-left">
    <span class="thumbnail">[field_image]</span>
  </div>
  <div class="media-body">
<div>
  <div class="pull-right"><strong>[field_achievement_category]</strong></div>
  <div><h4 class="media-heading">[title]</h4></div>
</div>

<div>
  <div>
    <strong>[field_short_description]</strong>
  </div>
  <div class="well well-sm">
    [field_achievement_points]
    [created]
    <span class="pull-right">[field_achievement_unique]</span>
  </div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Relation: Create Date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'relation';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'relation_base_right_achievement';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['profiles_all_trophy_room'] = $view;

  return $export;
}
