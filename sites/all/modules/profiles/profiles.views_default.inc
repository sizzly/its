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
  $view->description = 'Generates all of the leaderboard displays.';
  $view->tag = 'Profiles 2.0';
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

  /* Display: Renown Landing Panel */
  $handler = $view->new_display('panel_pane', 'Renown Landing Panel', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Generates the stat block for renown';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Userpoints: Current renown in category) */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['group_type'] = 'sum';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['points']['alter']['text'] = '<div class="panel-stat3 bg-primary">
<h2 class="m2-top-none">[points]</h2>
<h5>Renown</h5>
<div class="stat-icon">
  <i class="fa fa-line-chart fa-3x"></i>
</div>
</div>';
  $handler->display->display_options['fields']['points']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['points']['alter']['path'] = '/wargaming-decorations/renown';
  $handler->display->display_options['fields']['points']['alter']['alt'] = 'Renown';
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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

  /* Display: Top Gaming Players */
  $handler = $view->new_display('panel_pane', 'Top Gaming Players', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Players';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'picture';
  $handler->display->display_options['style_options']['heading_field'] = 'name';
  $handler->display->display_options['style_options']['body_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_small';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: SUM(Content: Achievement Points (field_achievement_points)) */
  $handler->display->display_options['sorts']['field_achievement_points_value']['id'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['sorts']['field_achievement_points_value']['field'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['sorts']['field_achievement_points_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_achievement_points_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Category (field_achievement_category) */
  $handler->display->display_options['filters']['field_achievement_category_target_id']['id'] = 'field_achievement_category_target_id';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['field'] = 'field_achievement_category_target_id';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['value']['value'] = '549';
  $handler->display->display_options['pane_category']['name'] = 'Gaming';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Top Modelling Players */
  $handler = $view->new_display('panel_pane', 'Top Modelling Players', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Players';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'picture';
  $handler->display->display_options['style_options']['heading_field'] = 'name';
  $handler->display->display_options['style_options']['body_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: SUM(Content: Achievement Points (field_achievement_points)) */
  $handler->display->display_options['sorts']['field_achievement_points_value']['id'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['sorts']['field_achievement_points_value']['field'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['sorts']['field_achievement_points_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_achievement_points_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Category (field_achievement_category) */
  $handler->display->display_options['filters']['field_achievement_category_target_id']['id'] = 'field_achievement_category_target_id';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['field'] = 'field_achievement_category_target_id';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['relationship'] = 'relation_achievement_node';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['value']['value'] = '2134';
  $handler->display->display_options['pane_category']['name'] = 'Modelling';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Renown Panel */
  $handler = $view->new_display('panel_pane', 'Renown Panel', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Players';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'picture';
  $handler->display->display_options['style_options']['heading_field'] = 'name';
  $handler->display->display_options['style_options']['body_field'] = 'points';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['points']['suffix'] = ' Renown';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
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
  $handler->display->display_options['pane_category']['name'] = 'Community';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['leaderboards_all_tables'] = $view;

  $view = new view();
  $view->name = 'player_gaming_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Player: Gaming: Stats';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_opponent_s_army' => 'field_opponent_s_army',
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
    'field_opponent_s_army' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '# Battles';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Your Army (field_your_army) */
  $handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Points per Army Chart */
  $handler = $view->new_display('panel_pane', 'Points per Army Chart', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battle Score by Points Per Army';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_points_per_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_your_results' => 'field_your_results',
    'nid' => 'nid',
    'field_points_per_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_points_per_army' => '#2f7ed8',
    'field_your_results' => '#0d233a',
    'nid' => '#ff0000',
  );
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#2f7ed8',
    1 => '#0d233a',
    2 => '#8bbc21',
    3 => '#910000',
    4 => '#1aadce',
    5 => '#492970',
    6 => '#f28f43',
    7 => '#77a1e5',
    8 => '#c42525',
    9 => '#a6c96a',
    10 => '#aaeeee',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Points per army */
  $handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['empty'] = 'Classified';
  $handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '# Battles';
  $handler->display->display_options['pane_category']['name'] = 'Profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'user_edit_form.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Author uid',
    ),
    'null' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Global: Null',
    ),
    'null_1' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Global: Null',
    ),
    'field_your_army_tid' => array(
      'type' => 'panel',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Field: Your Army (field_your_army)',
    ),
  );
  $export['player_gaming_stats'] = $view;

  $view = new view();
  $view->name = 'profile_all_content_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile: All: Content Lists';
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
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'All Content: %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'achievement' => 'achievement',
    'remote_blog' => 'remote_blog',
    'webform' => 'webform',
  );

  /* Display: All Content */
  $handler = $view->new_display('page', 'All Content', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'achievement' => 'achievement',
    'remote_blog' => 'remote_blog',
    'webform' => 'webform',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'user/%/content';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Content';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Content';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Gallery Page */
  $handler = $view->new_display('page', 'Gallery Page', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1\'s Galleries';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'gallery' => 'gallery',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'user/%/community/galleries';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Galleries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Forum Page */
  $handler = $view->new_display('page', 'Forum Page', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1\'s Discussions';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'forum' => 'forum',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'user/%/community/discussions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Discussions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Blog Page */
  $handler = $view->new_display('page', 'Blog Page', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Blogs: %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'blog' => 'blog',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'user/%/community/blogs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Blogs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Blog Pane */
  $handler = $view->new_display('panel_pane', 'Blog Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog Posts';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Blog Posts';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_4';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'blog' => 'blog',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Gallery Pane */
  $handler = $view->new_display('panel_pane', 'Gallery Pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Galleries';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Galleries';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'gallery' => 'gallery',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Discussion Pane */
  $handler = $view->new_display('panel_pane', 'Discussion Pane', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Discussions';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Discussions';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'forum' => 'forum',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Army Profile Panel */
  $handler = $view->new_display('panel_pane', 'Army Profile Panel', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Army Profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'army_profile' => 'army_profile',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Battle Map */
  $handler = $view->new_display('panel_pane', 'Battle Map', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battlefield Map';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_geolocation';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '12';
  $handler->display->display_options['style_options']['icon']['iconUrl'] = '/sites/default/files/battlefield.png';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geolocation']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_geolocation']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['profile_all_content_lists'] = $view;

  $view = new view();
  $view->name = 'profile_all_media_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Profile: All: Media List';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File: User who uploaded */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['text'] = '<h3>[filename]</h3>
[field_description_image]';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_type'] = 'span';
  $handler->display->display_options['fields']['filename']['element_class'] = 'lead text-overflow';
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['filename']['element_wrapper_class'] = 'caption';
  /* Field: File: Description */
  $handler->display->display_options['fields']['field_description_image']['id'] = 'field_description_image';
  $handler->display->display_options['fields']['field_description_image']['table'] = 'field_data_field_description_image';
  $handler->display->display_options['fields']['field_description_image']['field'] = 'field_description_image';
  $handler->display->display_options['fields']['field_description_image']['label'] = '';
  $handler->display->display_options['fields']['field_description_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_description_image']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_description_image']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_description_image']['settings'] = array(
    'trim_link' => '1',
    'trim_length' => '125',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recon';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Media';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Media: %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'user/%/media';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Media';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;
  $export['profile_all_media_list'] = $view;

  $view = new view();
  $view->name = 'profile_all_models';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile: All: Models';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_army_models',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_army_models' => 'field_army_models',
    'field_model_count' => 'field_model_count',
    'field_unit_models' => 'field_unit_models',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_army_models' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_model_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_models' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Army */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_army_models']['empty'] = 'Classified';
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Unit */
  $handler->display->display_options['fields']['field_unit_models']['id'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['table'] = 'field_data_field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['field'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['empty'] = 'Classified';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
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
    'models' => 'models',
  );
  $export['profile_all_models'] = $view;

  $view = new view();
  $view->name = 'profile_gaming_content_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile: Gaming: Content Views';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Battles: %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
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

  /* Display: Battles page */
  $handler = $view->new_display('page', 'Battles page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'user/%/gaming/battles';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Battles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: ListCrit */
  $handler = $view->new_display('page', 'ListCrit', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Army Lists: %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'listcrit' => 'listcrit',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'user/%/gaming/listcrit';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Army Lists';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Armies Played */
  $handler = $view->new_display('panel_pane', 'Armies Played', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Armies Played';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'user/!1/gaming/stats/[tid]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['alter']['path'] = 'user/!1/gaming/stats/[field_your_army-tid]';
  $handler->display->display_options['fields']['field_your_army']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_your_army']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_army']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_your_army']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Recent Battles */
  $handler = $view->new_display('panel_pane', 'Recent Battles', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Battles';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Battles';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'field_your_army';
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
  $handler->display->display_options['empty']['area']['content'] = '<span class="lead">%1 has no battles</span>';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Recent Lists */
  $handler = $view->new_display('panel_pane', 'Recent Lists', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Army Lists';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Lists';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'field_your_army';
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
  $handler->display->display_options['empty']['area']['content'] = '<span class="lead">%1 has no army lists</span>';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'listcrit' => 'listcrit',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['profile_gaming_content_views'] = $view;

  $view = new view();
  $view->name = 'profile_modelling_content_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile: Modelling: Content Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Army */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  /* Field: Content: Unit */
  $handler->display->display_options['fields']['field_unit_models']['id'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['table'] = 'field_data_field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['field'] = 'field_unit_models';
  /* Field: Content: Model Count */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
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
    'models' => 'models',
  );

  /* Display: Master Collection Page */
  $handler = $view->new_display('page', 'Master Collection Page', 'page_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_army_models',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_army_models' => 'field_army_models',
    'field_unit_models' => 'field_unit_models',
    'field_model_count' => 'field_model_count',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_army_models' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_models' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_model_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'condensed' => 'condensed',
    'bordered' => 0,
    'hover' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Army */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['label'] = '';
  $handler->display->display_options['fields']['field_army_models']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_army_models']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_army_models']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_army_models']['empty'] = 'Other';
  $handler->display->display_options['fields']['field_army_models']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Unit */
  $handler->display->display_options['fields']['field_unit_models']['id'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['table'] = 'field_data_field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['field'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['empty'] = 'Classified';
  /* Field: Content: Model Count */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Completed_Count */
  $handler->display->display_options['fields']['field_completed_count']['id'] = 'field_completed_count';
  $handler->display->display_options['fields']['field_completed_count']['table'] = 'field_data_field_completed_count';
  $handler->display->display_options['fields']['field_completed_count']['field'] = 'field_completed_count';
  $handler->display->display_options['fields']['field_completed_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_completed_count']['label'] = 'Completed';
  $handler->display->display_options['fields']['field_completed_count']['empty'] = '0';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '% Complete';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_completed_count] / [field_model_count]) * 100';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1: Model Collection';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'models' => 'models',
  );
  /* Filter criterion: Content: Model Count (field_model_count) */
  $handler->display->display_options['filters']['field_model_count_value']['id'] = 'field_model_count_value';
  $handler->display->display_options['filters']['field_model_count_value']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['filters']['field_model_count_value']['field'] = 'field_model_count_value';
  $handler->display->display_options['filters']['field_model_count_value']['group_type'] = 'sum';
  $handler->display->display_options['filters']['field_model_count_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_model_count_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'user/%/modelling/collection';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Collection';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Model Collection Panel */
  $handler = $view->new_display('panel_pane', 'Model Collection Panel', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Model Collection';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Collection';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = '';
  $handler->display->display_options['style_options']['heading_field'] = 'field_army_models';
  $handler->display->display_options['style_options']['body_field'] = 'field_model_count';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Army */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['empty'] = 'Classified';
  /* Field: Content: Model Count */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Model Count (field_model_count) */
  $handler->display->display_options['sorts']['field_model_count_value']['id'] = 'field_model_count_value';
  $handler->display->display_options['sorts']['field_model_count_value']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['sorts']['field_model_count_value']['field'] = 'field_model_count_value';
  $handler->display->display_options['sorts']['field_model_count_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_model_count_value']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Image Stream Panel */
  $handler = $view->new_display('panel_pane', 'Image Stream Panel', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Modelling Recon';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Modelling Images';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'colorbox_node_style' => 'newsletter_square',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Images (field_images:fid) */
  $handler->display->display_options['sorts']['field_images_fid']['id'] = 'field_images_fid';
  $handler->display->display_options['sorts']['field_images_fid']['table'] = 'field_data_field_images';
  $handler->display->display_options['sorts']['field_images_fid']['field'] = 'field_images_fid';
  $handler->display->display_options['sorts']['field_images_fid']['order'] = 'DESC';
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
    'models' => 'models',
  );
  /* Filter criterion: Content: Images (field_images:fid) */
  $handler->display->display_options['filters']['field_images_fid']['id'] = 'field_images_fid';
  $handler->display->display_options['filters']['field_images_fid']['table'] = 'field_data_field_images';
  $handler->display->display_options['filters']['field_images_fid']['field'] = 'field_images_fid';
  $handler->display->display_options['filters']['field_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Image Stream Page */
  $handler = $view->new_display('page', 'Image Stream Page', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'colorbox_node_style' => 'newsletter_square',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Images (field_images:fid) */
  $handler->display->display_options['sorts']['field_images_fid']['id'] = 'field_images_fid';
  $handler->display->display_options['sorts']['field_images_fid']['table'] = 'field_data_field_images';
  $handler->display->display_options['sorts']['field_images_fid']['field'] = 'field_images_fid';
  $handler->display->display_options['sorts']['field_images_fid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid_1']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['title'] = '%1: Modelling Images';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
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
    'models' => 'models',
  );
  /* Filter criterion: Content: Images (field_images:fid) */
  $handler->display->display_options['filters']['field_images_fid']['id'] = 'field_images_fid';
  $handler->display->display_options['filters']['field_images_fid']['table'] = 'field_data_field_images';
  $handler->display->display_options['filters']['field_images_fid']['field'] = 'field_images_fid';
  $handler->display->display_options['filters']['field_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'user/%/modelling/images';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Image Stream';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Modelling Project Panel */
  $handler = $view->new_display('panel_pane', 'Modelling Project Panel', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Modeling Projects';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Projects';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'field_unit_models';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<span class="lead">%1 has no modelling projects</span>';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Army */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  /* Field: Content: Unit */
  $handler->display->display_options['fields']['field_unit_models']['id'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['table'] = 'field_data_field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['field'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Model Count */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Project Page */
  $handler = $view->new_display('page', 'Project Page', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid_1']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['title'] = '%1: Modelling Projects';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
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
    'models' => 'models',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'user/%/modelling/projects';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['profile_modelling_content_views'] = $view;

  $view = new view();
  $view->name = 'profile_stats_battle';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Profile: Stats: Battle';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );

  /* Display: Battle Count */
  $handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Battles over Time Data */
  $handler = $view->new_display('panel_pane', 'Battles over Time Data', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'uid';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'json';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[expression] + [nid]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[Date.parse("[created]"),[expression]],';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';

  /* Display: Armies Played */
  $handler = $view->new_display('panel_pane', 'Armies Played', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Armies Played';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_your_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_your_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_your_army' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#2f7ed8',
    1 => '#0d233a',
    2 => '#8bbc21',
    3 => '#910000',
    4 => '#1aadce',
    5 => '#492970',
    6 => '#f28f43',
    7 => '#77a1e5',
    8 => '#c42525',
    9 => '#a6c96a',
    10 => '#aaeeee',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '250';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_army']['label'] = 'Army Played';
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Opponent Faction ROC */
  $handler = $view->new_display('panel_pane', 'Opponent Faction ROC', 'panel_pane_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = 'Opponent Army';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_defeat] + [field_draw]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '2';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_victory] / [nid] * 100';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'False';
  $handler->display->display_options['fields']['expression_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '2';
  $handler->display->display_options['fields']['expression_2']['separator'] = '';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[expression] / [nid] *100';
  /* Field: Taxonomy term: Chart Color */
  $handler->display->display_options['fields']['field_chart_color']['id'] = 'field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['table'] = 'field_data_field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['field'] = 'field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_chart_color']['label'] = '';
  $handler->display->display_options['fields']['field_chart_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chart_color']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '{
            name: \'[field_opponent_s_army]\',
            color: \'rgba([field_chart_color], .5)\',
            data: [[[expression_2],[expression_1]]]

        },';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: AVG Battle Score */
  $handler = $view->new_display('panel_pane', 'AVG Battle Score', 'panel_pane_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Results Chart */
  $handler = $view->new_display('panel_pane', 'Results Chart', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battle Results';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_your_results';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_your_results' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_your_results' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#910000',
    1 => '#f28f43',
    2 => '#8bbc21',
    3 => '#910000',
    4 => '#1aadce',
    5 => '#492970',
    6 => '#f28f43',
    7 => '#77a1e5',
    8 => '#c42525',
    9 => '#a6c96a',
    10 => '#aaeeee',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '250';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Army Count */
  $handler = $view->new_display('panel_pane', 'Army Count', 'panel_pane_7');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Your Army) */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_army']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Opponent Army Count */
  $handler = $view->new_display('panel_pane', 'Opponent Army Count', 'panel_pane_8');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Opponent's Army) */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opponent_s_army']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Competitive Count */
  $handler = $view->new_display('panel_pane', 'Competitive Count', 'panel_pane_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'war_zone_league' => 'war_zone_league',
    'war_zone_tournament' => 'war_zone_tournament',
  );

  /* Display: Army Points */
  $handler = $view->new_display('panel_pane', 'Army Points', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Points per Army';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_points_per_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
    'field_points_per_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_points_per_army' => '#2f7ed8',
    'field_victory' => '#8bbc21',
    'field_defeat' => '#910000',
    'field_draw' => '#0d233a',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Points per army */
  $handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_points_per_army']['empty'] = 'Classified';
  $handler->display->display_options['fields']['field_points_per_army']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Most Played Opponent Army */
  $handler = $view->new_display('panel_pane', 'Most Played Opponent Army', 'panel_pane_11');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Most Frequent</h3>
</div>
<div class="panel-body">
[field_image]
<span class="lead">[field_opponent_s_army]</span>
</div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';

  /* Display: Most Effective Against */
  $handler = $view->new_display('panel_pane', 'Most Effective Against', 'panel_pane_12');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Bane</h3>
</div>
<div class="panel-body">
[field_image]
<span class="lead">[field_opponent_s_army]</span>
</div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: AVG(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';

  /* Display: Least Effective Against */
  $handler = $view->new_display('panel_pane', 'Least Effective Against', 'panel_pane_13');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Nemesis</h3>
</div>
<div class="panel-body">
[field_image]
<span class="lead">[field_opponent_s_army]</span>
</div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: AVG(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';

  /* Display: Battles over Time */
  $handler = $view->new_display('panel_pane', 'Battles over Time', 'panel_pane_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battles over Time';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<script>
jQuery(document).ready(function($) {
    $(\'#container_bot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'# Battles\'
            },
       min: 0
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Battles\',
            data: [
                <?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_2")); ?>
            ]
        }]
    });
});
</script>

<div id="container_bot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Opponent Factions */
  $handler = $view->new_display('panel_pane', 'Opponent Factions', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opponent Faction';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="row">
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_11"); ?>
</div>
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_12"); ?>
</div>
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_13"); ?>
</div>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Opponent's Army Factor */
  $handler = $view->new_display('panel_pane', 'Opponent\'s Army Factor', 'panel_pane_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opponent Army Impact';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<script>
jQuery(document).ready(function($) {
    $(\'#container_oa\').highcharts({
        chart: {
            type: \'scatter\',
            zoomType: \'xy\'
        },
        title: {
            text: null
        },
        credits: {
            enabled: false
        },
        xAxis: {
            title: {
                enabled: true,
                text: \'Defeat %\'
            },
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            max: 100,
            min: 0
        },
        yAxis: {
            max: 100,
            min: 0,
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            
            title: {
                text: \'Victory %\'
            }
        },
        legend: {
            layout: \'horizontal\',
            align: \'center\',
            verticalAlign: \'bottom\',

            floating: false,
            backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || \'#FFFFFF\',
            borderWidth: 1
        },
        plotOptions: {
            scatter: {
                marker: {
                    radius: 5,
                    states: {
                        hover: {
                            enabled: true,
                            lineColor: \'rgb(100,100,100)\'
                        }
                    }
                },
                states: {
                    hover: {
                        marker: {
                            enabled: false
                        }
                    }
                },
                tooltip: {
                    headerFormat: \'<b>{series.name}</b><br>\',
                    pointFormat: \'{point.y} % Victory<br>{point.x} % Defeat\'
                }
            }
        },
        series: [
            <?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_4")); ?> 
        ]
    });
});
</script>

<div id="container_oa" style="min-width: 310px; height: 400px; max-width: 800px; margin: 0 auto"></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Average Battle Score */
  $handler = $view->new_display('panel_pane', 'Average Battle Score', 'panel_pane_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average Battle Score';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<script src="/sites/all/libraries/highcharts/js/highcharts-more.js"></script>
<script src="/sites/all/libraries/highcharts/js/modules/solid-gauge.js"></script>
<script>
jQuery(document).ready(function($) {
    var gaugeOptions = {

        chart: {
            type: \'solidgauge\'
        },
        credits: {
            enabled: false
        },

        title: null,

        pane: {
            center: [\'50%\', \'85%\'],
            size: \'140%\',
            startAngle: -90,
            endAngle: 90,
            background: {
                innerRadius: \'60%\',
                outerRadius: \'100%\',
                shape: \'arc\'
            }
        },

        tooltip: {
            enabled: false
        },

        // the value axis
        yAxis: {
            stops: [
                [0.4, \'#DF5353\'], // red
                [0.7, \'#DDDF0D\'], // yellow
                [1.0, \'#55BF3B\'] // green
            ],
            lineWidth: 0,
            minorTickInterval: null,
            tickPixelInterval: 400,
            tickWidth: 0,
            title: {
                y: -70
            },
            labels: {
                y: 16
            }
        },

        plotOptions: {
            solidgauge: {
                dataLabels: {
                    y: 5,
                    borderWidth: 0,
                    useHTML: true
                }
            }
        }
    };

    // The speed gauge
    $(\'#container_avg\').highcharts(Highcharts.merge(gaugeOptions, {
        yAxis: {
            min: 0,
            max: 5,
            title: {
                text: null
            }
        },

        credits: {
            enabled: false
        },

        series: [{
            name: \'AVG Battle Score\',
            data: [<?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_5")); ?>],
            dataLabels: {
                format: \'<div style="text-align:center"><span style="font-size:25px;color:\' +
                    ((Highcharts.theme && Highcharts.theme.contrastTextColor) || \'black\') + \'">{y}</span>\'
            },
        }]
    }));
});
</script>
<div id="container_avg" style="width: 100%; height: 200px; margin: 0 auto"></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['profile_stats_battle'] = $view;

  $view = new view();
  $view->name = 'profile_stats_battle_faction';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Profile: Stats: Battle Faction';
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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Your Army (field_your_army) */
  $handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Battle Count */
  $handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Battles over Time Data */
  $handler = $view->new_display('panel_pane', 'Battles over Time Data', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'uid';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'json';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[expression] + [nid]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[Date.parse("[created]"),[expression]],';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';

  /* Display: Opponent Played */
  $handler = $view->new_display('panel_pane', 'Opponent Played', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opponent Faction';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_opponent_s_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_opponent_s_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_opponent_s_army' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#2f7ed8',
    1 => '#0d233a',
    2 => '#8bbc21',
    3 => '#910000',
    4 => '#1aadce',
    5 => '#492970',
    6 => '#f28f43',
    7 => '#77a1e5',
    8 => '#c42525',
    9 => '#a6c96a',
    10 => '#aaeeee',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '250';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = 'Opponent Army';
  $handler->display->display_options['fields']['field_opponent_s_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Opponent Faction ROC */
  $handler = $view->new_display('panel_pane', 'Opponent Faction ROC', 'panel_pane_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = 'Opponent Army';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_defeat] + [field_draw]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '2';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_victory] / [nid] * 100';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'False';
  $handler->display->display_options['fields']['expression_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '2';
  $handler->display->display_options['fields']['expression_2']['separator'] = '';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[expression] / [nid] *100';
  /* Field: Taxonomy term: Chart Color */
  $handler->display->display_options['fields']['field_chart_color']['id'] = 'field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['table'] = 'field_data_field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['field'] = 'field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_chart_color']['label'] = '';
  $handler->display->display_options['fields']['field_chart_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chart_color']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '{
            name: \'[field_opponent_s_army]\',
            color: \'rgba([field_chart_color], .5)\',
            data: [[[expression_2],[expression_1]]]

        },';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: AVG Battle Score */
  $handler = $view->new_display('panel_pane', 'AVG Battle Score', 'panel_pane_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Results Chart */
  $handler = $view->new_display('panel_pane', 'Results Chart', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battle Results';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_your_results';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_your_results' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_your_results' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#910000',
    1 => '#f28f43',
    2 => '#8bbc21',
    3 => '#910000',
    4 => '#1aadce',
    5 => '#492970',
    6 => '#f28f43',
    7 => '#77a1e5',
    8 => '#c42525',
    9 => '#a6c96a',
    10 => '#aaeeee',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '250';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Army Count */
  $handler = $view->new_display('panel_pane', 'Army Count', 'panel_pane_7');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Your Army) */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_army']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Opponent Army Count */
  $handler = $view->new_display('panel_pane', 'Opponent Army Count', 'panel_pane_8');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Opponent's Army) */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opponent_s_army']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Competitive Count */
  $handler = $view->new_display('panel_pane', 'Competitive Count', 'panel_pane_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'war_zone_league' => 'war_zone_league',
    'war_zone_tournament' => 'war_zone_tournament',
  );

  /* Display: Army Points */
  $handler = $view->new_display('panel_pane', 'Army Points', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Points per Army';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_points_per_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
    'field_points_per_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_points_per_army' => '#2f7ed8',
    'field_victory' => '#8bbc21',
    'field_defeat' => '#910000',
    'field_draw' => '#0d233a',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Points per army */
  $handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_points_per_army']['empty'] = 'Classified';
  $handler->display->display_options['fields']['field_points_per_army']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Most Played Opponent Army */
  $handler = $view->new_display('panel_pane', 'Most Played Opponent Army', 'panel_pane_11');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Most Frequent</h3>
</div>
<div class="panel-body">
[field_image]
<span class="lead">[field_opponent_s_army]</span>
</div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';

  /* Display: Most Effective Against */
  $handler = $view->new_display('panel_pane', 'Most Effective Against', 'panel_pane_12');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Bane</h3>
</div>
<div class="panel-body">
[field_image]
<span class="lead">[field_opponent_s_army]</span>
</div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: AVG(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';

  /* Display: Least Effective Against */
  $handler = $view->new_display('panel_pane', 'Least Effective Against', 'panel_pane_13');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Nemesis</h3>
</div>
<div class="panel-body">
[field_image]
<span class="lead">[field_opponent_s_army]</span>
</div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: AVG(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';

  /* Display: Battles over Time */
  $handler = $view->new_display('panel_pane', 'Battles over Time', 'panel_pane_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battles over Time';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<script>
jQuery(document).ready(function($) {
    $(\'#container_bot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'# Battles\'
            },
       min: 0
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Battles\',
            data: [
                <?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_2")); ?>
            ]
        }]
    });
});
</script>

<div id="container_bot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Opponent Factions */
  $handler = $view->new_display('panel_pane', 'Opponent Factions', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opponent Faction';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="row">
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_11"); ?>
</div>
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_12"); ?>
</div>
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_13"); ?>
</div>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Opponent's Army Factor */
  $handler = $view->new_display('panel_pane', 'Opponent\'s Army Factor', 'panel_pane_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opponent Army Impact';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<script>
jQuery(document).ready(function($) {
    $(\'#container_oa\').highcharts({
        chart: {
            type: \'scatter\',
            zoomType: \'xy\'
        },
        title: {
            text: null
        },
        credits: {
            enabled: false
        },
        xAxis: {
            title: {
                enabled: true,
                text: \'Defeat %\'
            },
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            max: 100,
            min: 0
        },
        yAxis: {
            max: 100,
            min: 0,
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            
            title: {
                text: \'Victory %\'
            }
        },
        legend: {
            layout: \'horizontal\',
            align: \'center\',
            verticalAlign: \'bottom\',

            floating: false,
            backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || \'#FFFFFF\',
            borderWidth: 1
        },
        plotOptions: {
            scatter: {
                marker: {
                    radius: 5,
                    states: {
                        hover: {
                            enabled: true,
                            lineColor: \'rgb(100,100,100)\'
                        }
                    }
                },
                states: {
                    hover: {
                        marker: {
                            enabled: false
                        }
                    }
                },
                tooltip: {
                    headerFormat: \'<b>{series.name}</b><br>\',
                    pointFormat: \'{point.y} % Victory<br>{point.x} % Defeat\'
                }
            }
        },
        series: [
            <?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_4")); ?> 
        ]
    });
});
</script>

<div id="container_oa" style="min-width: 310px; height: 400px; max-width: 800px; margin: 0 auto"></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Average Battle Score */
  $handler = $view->new_display('panel_pane', 'Average Battle Score', 'panel_pane_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average Battle Score';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<script src="/sites/all/libraries/highcharts/js/highcharts-more.js"></script>
<script src="/sites/all/libraries/highcharts/js/modules/solid-gauge.js"></script>
<script>
jQuery(document).ready(function($) {
    var gaugeOptions = {

        chart: {
            type: \'solidgauge\'
        },
        credits: {
            enabled: false
        },

        title: null,

        pane: {
            center: [\'50%\', \'85%\'],
            size: \'140%\',
            startAngle: -90,
            endAngle: 90,
            background: {
                innerRadius: \'60%\',
                outerRadius: \'100%\',
                shape: \'arc\'
            }
        },

        tooltip: {
            enabled: false
        },

        // the value axis
        yAxis: {
            stops: [
                [0.4, \'#DF5353\'], // red
                [0.7, \'#DDDF0D\'], // yellow
                [1.0, \'#55BF3B\'] // green
            ],
            lineWidth: 0,
            minorTickInterval: null,
            tickPixelInterval: 400,
            tickWidth: 0,
            title: {
                y: -70
            },
            labels: {
                y: 16
            }
        },

        plotOptions: {
            solidgauge: {
                dataLabels: {
                    y: 5,
                    borderWidth: 0,
                    useHTML: true
                }
            }
        }
    };

    // The speed gauge
    $(\'#container_avg\').highcharts(Highcharts.merge(gaugeOptions, {
        yAxis: {
            min: 0,
            max: 5,
            title: {
                text: null
            }
        },

        credits: {
            enabled: false
        },

        series: [{
            name: \'AVG Battle Score\',
            data: [<?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_5")); ?>],
            dataLabels: {
                format: \'<div style="text-align:center"><span style="font-size:25px;color:\' +
                    ((Highcharts.theme && Highcharts.theme.contrastTextColor) || \'black\') + \'">{y}</span>\'
            },
        }]
    }));
});
</script>
<div id="container_avg" style="width: 100%; height: 200px; margin: 0 auto"></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Aggregate Stats */
  $handler = $view->new_display('panel_pane', 'Aggregate Stats', 'panel_pane_18');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Advanced Filters';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_opponent_s_army' => 'field_opponent_s_army',
    'nid' => 'nid',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
    'field_victory' => 'field_victory',
    'field_your_results' => 'field_your_results',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_opponent_s_army' => array(
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
    'field_defeat' => array(
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
    'field_victory' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '# Battles';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'Avg. Battle Score';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Advanced Stat Page */
  $handler = $view->new_display('page', 'Advanced Stat Page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Additional Filters',
      'secondary_collapse_override' => '2',
    ),
    'field_mission_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_location_nid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_battle_deployment_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_points_per_army_value' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_game_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
        'datepicker_options' => '',
      ),
    ),
    'field_your_commander_survival_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_enemy_commander_survival_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_opponent_s_army' => 'field_opponent_s_army',
    'nid' => 'nid',
    'field_victory' => 'field_victory',
    'field_draw' => 'field_draw',
    'field_defeat' => 'field_defeat',
    'field_your_results' => 'field_your_results',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_opponent_s_army' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_victory' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_draw' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_defeat' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="lead">No battles match the criteria provided.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'pure_html';
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
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'uid';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '# Battles';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Your Army (field_your_army) */
  $handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_your_army_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_your_army_tid']['title'] = '%1 %2 Advanced Stats';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_your_army_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_your_army_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_your_army_tid']['validate_options']['vocabularies'] = array(
    'armies' => 'armies',
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mission (field_mission) */
  $handler->display->display_options['filters']['field_mission_tid']['id'] = 'field_mission_tid';
  $handler->display->display_options['filters']['field_mission_tid']['table'] = 'field_data_field_mission';
  $handler->display->display_options['filters']['field_mission_tid']['field'] = 'field_mission_tid';
  $handler->display->display_options['filters']['field_mission_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_mission_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_mission_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mission_tid']['expose']['operator_id'] = 'field_mission_tid_op';
  $handler->display->display_options['filters']['field_mission_tid']['expose']['label'] = 'Mission';
  $handler->display->display_options['filters']['field_mission_tid']['expose']['operator'] = 'field_mission_tid_op';
  $handler->display->display_options['filters']['field_mission_tid']['expose']['identifier'] = 'field_mission_tid';
  $handler->display->display_options['filters']['field_mission_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_mission_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_mission_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mission_tid']['vocabulary'] = 'missions';
  /* Filter criterion: Field: Battlefield (field_location) */
  $handler->display->display_options['filters']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_location_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_nid']['expose']['operator_id'] = 'field_location_nid_op';
  $handler->display->display_options['filters']['field_location_nid']['expose']['label'] = 'Battlefield';
  $handler->display->display_options['filters']['field_location_nid']['expose']['operator'] = 'field_location_nid_op';
  $handler->display->display_options['filters']['field_location_nid']['expose']['identifier'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Deployment (field_battle_deployment) */
  $handler->display->display_options['filters']['field_battle_deployment_tid']['id'] = 'field_battle_deployment_tid';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['table'] = 'field_data_field_battle_deployment';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['field'] = 'field_battle_deployment_tid';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_battle_deployment_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['operator_id'] = 'field_battle_deployment_tid_op';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['label'] = 'Deployment';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['operator'] = 'field_battle_deployment_tid_op';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['identifier'] = 'field_battle_deployment_tid';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_battle_deployment_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_battle_deployment_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_battle_deployment_tid']['vocabulary'] = 'deployment';
  /* Filter criterion: Content: Your Commander Survival (field_your_commander_survival) */
  $handler->display->display_options['filters']['field_your_commander_survival_value']['id'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['field'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['group'] = 1;
  $handler->display->display_options['filters']['field_your_commander_survival_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_your_commander_survival_value']['expose']['operator_id'] = 'field_your_commander_survival_value_op';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['expose']['label'] = 'Your Commander Survival';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['expose']['operator'] = 'field_your_commander_survival_value_op';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['expose']['identifier'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Enemy Commander Survival (field_enemy_commander_survival) */
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['id'] = 'field_enemy_commander_survival_value';
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['table'] = 'field_data_field_enemy_commander_survival';
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['field'] = 'field_enemy_commander_survival_value';
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['group'] = 1;
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['expose']['operator_id'] = 'field_enemy_commander_survival_value_op';
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['expose']['label'] = 'Enemy Commander Survival';
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['expose']['operator'] = 'field_enemy_commander_survival_value_op';
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['expose']['identifier'] = 'field_enemy_commander_survival_value';
  $handler->display->display_options['filters']['field_enemy_commander_survival_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = '# Battles';
  $handler->display->display_options['filters']['nid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Field: Points per army (field_points_per_army) */
  $handler->display->display_options['filters']['field_points_per_army_value']['id'] = 'field_points_per_army_value';
  $handler->display->display_options['filters']['field_points_per_army_value']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['filters']['field_points_per_army_value']['field'] = 'field_points_per_army_value';
  $handler->display->display_options['filters']['field_points_per_army_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_points_per_army_value']['group'] = 1;
  $handler->display->display_options['filters']['field_points_per_army_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_points_per_army_value']['expose']['operator_id'] = 'field_points_per_army_value_op';
  $handler->display->display_options['filters']['field_points_per_army_value']['expose']['label'] = 'Points per army';
  $handler->display->display_options['filters']['field_points_per_army_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_points_per_army_value']['expose']['operator'] = 'field_points_per_army_value_op';
  $handler->display->display_options['filters']['field_points_per_army_value']['expose']['identifier'] = 'field_points_per_army_value';
  $handler->display->display_options['filters']['field_points_per_army_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Date (field_game_date) */
  $handler->display->display_options['filters']['field_game_date_value']['id'] = 'field_game_date_value';
  $handler->display->display_options['filters']['field_game_date_value']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['filters']['field_game_date_value']['field'] = 'field_game_date_value';
  $handler->display->display_options['filters']['field_game_date_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_game_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_game_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_game_date_value']['expose']['operator_id'] = 'field_game_date_value_op';
  $handler->display->display_options['filters']['field_game_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_game_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_game_date_value']['expose']['operator'] = 'field_game_date_value_op';
  $handler->display->display_options['filters']['field_game_date_value']['expose']['identifier'] = 'field_game_date_value';
  $handler->display->display_options['filters']['field_game_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_game_date_value']['year_range'] = '-10:+0';
  $handler->display->display_options['path'] = 'user/%/gaming/stats/%/advanced';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Advanced Stats';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;
  $export['profile_stats_battle_faction'] = $view;

  $view = new view();
  $view->name = 'profile_stats_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Profile: Stats: Content';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
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
    'army_profile' => 'army_profile',
    'blog' => 'blog',
    'gallery' => 'gallery',
    'listcrit' => 'listcrit',
    'models' => 'models',
  );

  /* Display: Content Count */
  $handler = $view->new_display('panel_pane', 'Content Count', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Content over Time Data */
  $handler = $view->new_display('panel_pane', 'Content over Time Data', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'uid';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'json';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[expression] + [nid]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[Date.parse("[created]"),[expression]],';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';

  /* Display: Content Type */
  $handler = $view->new_display('panel_pane', 'Content Type', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Content by Type';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'type';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'type' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'type' => '#2f7ed8',
    'nid' => '#0d233a',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'uid';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Content Stats';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
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
    'daycount' => 'daycount',
    'weekcount' => 'weekcount',
    'monthcount' => 'monthcount',
    'yearcount' => 'yearcount',
    'comment_count' => 'comment_count',
    'count' => 'count',
    'type' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'totalcount';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'totalcount' => array(
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
    'weekcount' => array(
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
    'yearcount' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Classified';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<p>This player has no content yet.</p>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['relationship'] = 'uid';
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  /* Field: Content statistics: Views this week */
  $handler->display->display_options['fields']['weekcount']['id'] = 'weekcount';
  $handler->display->display_options['fields']['weekcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['weekcount']['field'] = 'weekcount';
  /* Field: Content statistics: Views this month */
  $handler->display->display_options['fields']['monthcount']['id'] = 'monthcount';
  $handler->display->display_options['fields']['monthcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['monthcount']['field'] = 'monthcount';
  /* Field: Content statistics: Views this year */
  $handler->display->display_options['fields']['yearcount']['id'] = 'yearcount';
  $handler->display->display_options['fields']['yearcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['yearcount']['field'] = 'yearcount';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Salutes';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'All Content Statistics for %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
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
    'army_profile' => 'army_profile',
    'blog' => 'blog',
    'gallery' => 'gallery',
    'listcrit' => 'listcrit',
    'models' => 'models',
  );
  /* Filter criterion: Type (selective) */
  $handler->display->display_options['filters']['type_selective']['id'] = 'type_selective';
  $handler->display->display_options['filters']['type_selective']['table'] = 'node';
  $handler->display->display_options['filters']['type_selective']['field'] = 'type_selective';
  $handler->display->display_options['filters']['type_selective']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_selective']['ui_name'] = 'Type (selective)';
  $handler->display->display_options['filters']['type_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['type_selective']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type_selective']['expose']['identifier'] = 'type_selective';
  $handler->display->display_options['filters']['type_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['type_selective']['selective_display_field'] = 'type';
  $handler->display->display_options['filters']['type_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['type_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['path'] = 'user/%/stats/content-statistics/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Content';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Top Content Pane */
  $handler = $view->new_display('panel_pane', 'Top Content Pane', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Content';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Statistics';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'totalcount' => 'totalcount',
    'yearcount' => 'yearcount',
    'monthcount' => 'monthcount',
    'weekcount' => 'weekcount',
    'daycount' => 'daycount',
    'comment_count' => 'comment_count',
    'count' => 'count',
  );
  $handler->display->display_options['style_options']['default'] = 'totalcount';
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
    'yearcount' => array(
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
    'daycount' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['relationship'] = 'uid';
  /* Field: Content statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['relationship'] = 'uid';
  /* Field: Content statistics: Views this week */
  $handler->display->display_options['fields']['weekcount']['id'] = 'weekcount';
  $handler->display->display_options['fields']['weekcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['weekcount']['field'] = 'weekcount';
  $handler->display->display_options['fields']['weekcount']['relationship'] = 'uid';
  /* Field: Content statistics: Views this month */
  $handler->display->display_options['fields']['monthcount']['id'] = 'monthcount';
  $handler->display->display_options['fields']['monthcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['monthcount']['field'] = 'monthcount';
  $handler->display->display_options['fields']['monthcount']['relationship'] = 'uid';
  /* Field: Content statistics: Views this year */
  $handler->display->display_options['fields']['yearcount']['id'] = 'yearcount';
  $handler->display->display_options['fields']['yearcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['yearcount']['field'] = 'yearcount';
  $handler->display->display_options['fields']['yearcount']['relationship'] = 'uid';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Salutes';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Trending */
  $handler = $view->new_display('panel_pane', 'Trending', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trending';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'topboxhead';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="node clearfix">
    <h2>No Content</h2>
    <div class="content">
        <div class="row">
            <div class="col-sm-3 text-center">
                <div class="field field-name-field-images field-type-image field-label-hidden">
                    <div class="field-items">
                        <div class="field-item even">
                            <img src="https://s3.amazonaws.com/itoysoldiers/locked_content.png" width="430" height="240" alt="" />
                        </div>
                    </div>
                </div>
            </div>
            <div class="col-sm-9">
                %1 has not created any content yet.
            </div>
        </div>  
    </div>
    <div class="seperator"></div>
</div>';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'uid';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Most Viewed */
  $handler = $view->new_display('panel_pane', 'Most Viewed', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
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
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'newsletter_square',
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Most Viewed</h3>
</div>
<div class="panel-body">
[field_images]
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Most Viewed</h3>
</div>
<div class="panel-body">
[field_images]
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Most Comments */
  $handler = $view->new_display('panel_pane', 'Most Comments', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
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
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'newsletter_square',
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Most Viewed</h3>
</div>
<div class="panel-body">
[field_images]
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Most Comments</h3>
</div>
<div class="panel-body">
[field_images]
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['comment_count']['order'] = 'DESC';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Most Salutes */
  $handler = $view->new_display('panel_pane', 'Most Salutes', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
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
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
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
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'newsletter_square',
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Most Salutes</h3>
</div>
<div class="panel-body">
[field_images]
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'panel panel-primary';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Content over Time */
  $handler = $view->new_display('panel_pane', 'Content over Time', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Content over Time';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<script>
jQuery(document).ready(function($) {
    $(\'#container_cot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'Content\'
            },
       min: 0
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Content\',
            data: [
                <?php print strip_tags(views_embed_view("profile_stats_content" , "panel_pane_2")); ?>
            ]
        }]
    });
});
</script>

<div id="container_cot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Featured Content */
  $handler = $view->new_display('panel_pane', 'Featured Content', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Content';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="row">
<div class="col-sm-4">
<?php print views_embed_view("profile_stats_content", "panel_pane_6"); ?>
</div>
<div class="col-sm-4">
<?php print views_embed_view("profile_stats_content", "panel_pane_7"); ?>
</div>
<div class="col-sm-4">
<?php print views_embed_view("profile_stats_content", "panel_pane_8"); ?>
</div>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['profile_stats_content'] = $view;

  $view = new view();
  $view->name = 'profile_stats_modeling';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Profile: Stats: Modeling';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'models' => 'models',
  );

  /* Display: Model Count */
  $handler = $view->new_display('panel_pane', 'Model Count', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<span>0</span>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['label'] = '';
  $handler->display->display_options['fields']['field_model_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_count']['empty'] = '0';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Models Aquired Overtime Data */
  $handler = $view->new_display('panel_pane', 'Models Aquired Overtime Data', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Models Aquired Over Time';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Aquired Date */
  $handler->display->display_options['fields']['field_aquired_date_models']['id'] = 'field_aquired_date_models';
  $handler->display->display_options['fields']['field_aquired_date_models']['table'] = 'field_data_field_aquired_date_models';
  $handler->display->display_options['fields']['field_aquired_date_models']['field'] = 'field_aquired_date_models';
  $handler->display->display_options['fields']['field_aquired_date_models']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_aquired_date_models']['label'] = '';
  $handler->display->display_options['fields']['field_aquired_date_models']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aquired_date_models']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aquired_date_models']['settings'] = array(
    'format_type' => 'json',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['label'] = '';
  $handler->display->display_options['fields']['field_model_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_model_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[expression] + [field_model_count]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[Date.parse("[field_aquired_date_models]"),[expression]],';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Models by Army */
  $handler = $view->new_display('panel_pane', 'Models by Army', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Models by Army';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_army_models';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_model_count' => 'field_model_count',
    'field_army_models' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_army_models' => '#2f7ed8',
    'field_model_count' => '#0d233a',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Army */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_army_models']['empty'] = 'Misc';
  $handler->display->display_options['fields']['field_army_models']['type'] = 'taxonomy_term_reference_plain';
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Models Acquired Over Time */
  $handler = $view->new_display('panel_pane', 'Models Acquired Over Time', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Models Acquired Over Time';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<script>
jQuery(document).ready(function($) {
    $(\'#container_mot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'# Models\'
            },
       min: 0
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Models\',
            data: [
                <?php print strip_tags(views_embed_view("profile_stats_modeling" , "panel_pane_2")); ?>
            ]
        }]
    });
});
</script>

<div id="container_mot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Collection Size */
  $handler = $view->new_display('panel_pane', 'Collection Size', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collection';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_army_models';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_model_count' => 'field_model_count',
    'field_army_models' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_army_models' => '#2f7ed8',
    'field_model_count' => '#0d233a',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Army */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_army_models']['empty'] = 'Other';
  $handler->display->display_options['fields']['field_army_models']['type'] = 'taxonomy_term_reference_plain';
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Models by Faction */
  $handler = $view->new_display('panel_pane', 'Models by Faction', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Models by Faction';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_army_models';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_model_count' => 'field_model_count',
    'field_army_models' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_army_models' => '#2f7ed8',
    'field_model_count' => '#0d233a',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Army */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_army_models']['empty'] = 'Other';
  $handler->display->display_options['fields']['field_army_models']['type'] = 'taxonomy_term_reference_plain';
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: SUM(Content: Model Count (field_model_count)) */
  $handler->display->display_options['sorts']['field_model_count_value']['id'] = 'field_model_count_value';
  $handler->display->display_options['sorts']['field_model_count_value']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['sorts']['field_model_count_value']['field'] = 'field_model_count_value';
  $handler->display->display_options['sorts']['field_model_count_value']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_model_count_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_model_count_value']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Completed Count */
  $handler = $view->new_display('panel_pane', 'Completed Count', 'panel_pane_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<span>0</span>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['label'] = '';
  $handler->display->display_options['fields']['field_model_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_count']['empty'] = '0';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'models' => 'models',
  );
  /* Filter criterion: Content: Completed Date (field_completed_date_models) */
  $handler->display->display_options['filters']['field_completed_date_models_value']['id'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['table'] = 'field_data_field_completed_date_models';
  $handler->display->display_options['filters']['field_completed_date_models_value']['field'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_completed_date_models_value']['operator'] = 'not empty';

  /* Display: Inprogress Count */
  $handler = $view->new_display('panel_pane', 'Inprogress Count', 'panel_pane_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<span>0</span>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['label'] = '';
  $handler->display->display_options['fields']['field_model_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_count']['empty'] = '0';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'models' => 'models',
  );
  /* Filter criterion: Content: Completed Date (field_completed_date_models) */
  $handler->display->display_options['filters']['field_completed_date_models_value']['id'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['table'] = 'field_data_field_completed_date_models';
  $handler->display->display_options['filters']['field_completed_date_models_value']['field'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_completed_date_models_value']['operator'] = 'empty';

  /* Display: Count by Unit */
  $handler = $view->new_display('panel_pane', 'Count by Unit', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Model Count by Unit';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'field_unit_models';
  $handler->display->display_options['style_options']['body_field'] = 'field_model_count';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Army (field_army_models) */
  $handler->display->display_options['relationships']['field_army_models_tid']['id'] = 'field_army_models_tid';
  $handler->display->display_options['relationships']['field_army_models_tid']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['relationships']['field_army_models_tid']['field'] = 'field_army_models_tid';
  $handler->display->display_options['relationships']['field_army_models_tid']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Unit */
  $handler->display->display_options['fields']['field_unit_models']['id'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['table'] = 'field_data_field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['field'] = 'field_unit_models';
  $handler->display->display_options['fields']['field_unit_models']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_unit_models']['label'] = '';
  $handler->display->display_options['fields']['field_unit_models']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_models']['empty'] = 'Other';
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['label'] = '';
  $handler->display->display_options['fields']['field_model_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_army_models_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<img src="https://s3.amazonaws.com/itoysoldiers/button_models.png">';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: SUM(Content: Model Count (field_model_count)) */
  $handler->display->display_options['sorts']['field_model_count_value']['id'] = 'field_model_count_value';
  $handler->display->display_options['sorts']['field_model_count_value']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['sorts']['field_model_count_value']['field'] = 'field_model_count_value';
  $handler->display->display_options['sorts']['field_model_count_value']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_model_count_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_model_count_value']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Army Count */
  $handler = $view->new_display('panel_pane', 'Army Count', 'panel_pane_10');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<span>0</span>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Army) */
  $handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
  $handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
  $handler->display->display_options['fields']['field_army_models']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_army_models']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_army_models']['label'] = '';
  $handler->display->display_options['fields']['field_army_models']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_army_models']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $export['profile_stats_modeling'] = $view;

  $view = new view();
  $view->name = 'profiles_all_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Profiles: All: Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media';
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File: User who uploaded */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['alter']['max_length'] = '15';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rendered']['alter']['text'] = '[rendered]
<div class="caption">[filename]</div>';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['rendered']['element_wrapper_class'] = 'thumbnail';
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1\'s Media';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Media';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="clearfix"></div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['rendered']['element_wrapper_class'] = 'thumbnail';
  $handler->display->display_options['fields']['rendered']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1\'s Media';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'user/%/content/media';
  $handler->display->display_options['menu']['title'] = 'Media';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Media Count */
  $handler = $view->new_display('panel_pane', 'Media Count', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
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
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['fid']['label'] = '';
  $handler->display->display_options['fields']['fid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fid']['alter']['text'] = '<a href="/user/!1/content/media">
    <li class="list-group-item">
        <i class="fa fa-picture-o fa-lg"></i>
        Media
        <span class="pull-right">
            <span class="badge badge-default">[fid]</span>
        </span>
    </li>
</a>';
  $handler->display->display_options['fields']['fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['fid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fid']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $export['profiles_all_images'] = $view;

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
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['ops']['alter']['text'] = '<span class="btn btn-default">[ops]</span>';
  $handler->display->display_options['fields']['ops']['element_type'] = 'span';
  $handler->display->display_options['fields']['ops']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = FALSE;
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
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_profile_location_lid';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_profile_location_lid';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_profile_location_lid';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['text'] = '<img src="/sites/default/files/default/iso/[country].png">';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['country']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['country']['style'] = 'code';
  /* Field: Profile: Games Played */
  $handler->display->display_options['fields']['field_games_played_profile']['id'] = 'field_games_played_profile';
  $handler->display->display_options['fields']['field_games_played_profile']['table'] = 'field_data_field_games_played_profile';
  $handler->display->display_options['fields']['field_games_played_profile']['field'] = 'field_games_played_profile';
  $handler->display->display_options['fields']['field_games_played_profile']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_games_played_profile']['label'] = '';
  $handler->display->display_options['fields']['field_games_played_profile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_games_played_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_games_played_profile']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_games_played_profile']['separator'] = ' / ';
  /* Field: User: Signature */
  $handler->display->display_options['fields']['signature']['id'] = 'signature';
  $handler->display->display_options['fields']['signature']['table'] = 'users';
  $handler->display->display_options['fields']['signature']['field'] = 'signature';
  $handler->display->display_options['fields']['signature']['label'] = '';
  $handler->display->display_options['fields']['signature']['exclude'] = TRUE;
  $handler->display->display_options['fields']['signature']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['signature']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-sm-3 text-center">
  <span class="thumbnail">[picture]</span>
</div>
<div class="col-sm-9">
  <div class="pull-right"><a href="/messages/new/[uid]?destination=user/[uid]" class="btn btn-default"><span class="fa fa-envelope"></span></a>[ops]</div>
  <span class="lead">[field_games_played_profile]</span><div>
  <strong>[city] [province]</strong> <span>[country]</span>
  <div><small class="block text-muted">Member Since: [created]</small></div></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: About Me */
  $handler = $view->new_display('panel_pane', 'About Me', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Bio */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Profile: Bio (field_bio) */
  $handler->display->display_options['filters']['field_bio_value']['id'] = 'field_bio_value';
  $handler->display->display_options['filters']['field_bio_value']['table'] = 'field_data_field_bio';
  $handler->display->display_options['filters']['field_bio_value']['field'] = 'field_bio_value';
  $handler->display->display_options['filters']['field_bio_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_bio_value']['operator'] = 'not empty';
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
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/user/!1/content/blogs"><li class="list-group-item">
    <i class="fa fa-file-text-o fa-lg"></i>
    Blog Posts
    <span class="pull-right">
        <span class="badge badge-default">[nid]</span>
    </span>
</li></a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/blogs';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/user/!1/content/galleries">
    <li class="list-group-item">
        <i class="fa fa-picture-o fa-lg"></i>
        Galleries
        <span class="pull-right">
            <span class="badge badge-default">[nid]</span>
        </span>
    </li>
</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/galleries';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/user/!1/gaming">
    <div class="meta-item">
        <i class="fa fa-th-list fa-lg"></i>
        Army Lists
        <span class="pull-right">
            <span class="badge badge-default">[nid]</span>
        </span>
    </div>
</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/army-lists';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
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
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/user/!1/gaming">
    <div class="meta-item">
        <i class="fa fa-fire fa-lg"></i>
        Battles
        <span class="pull-right">
            <span class="badge badge-default">[nid]</span>
        </span>
    </div>
</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/blogs';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">0</h2>
  <h5>Renown</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-flash" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Userpoints: Current renown in category */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['points']['empty'] = '0';
  $handler->display->display_options['fields']['points']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['points']['empty_zero'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/!1/trophies';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_timeline_icon';
  $handler->display->display_options['style_options']['heading_field'] = 'message_render';
  $handler->display->display_options['style_options']['body_field'] = 'timestamp';
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
  $handler->display->display_options['empty']['area']['content'] = '
<span class="lead topboxhead">%1 has no recent actions</span>
';
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
    'campaign_reported_battle' => 'campaign_reported_battle',
    'war_zone_all_anonymous_actions' => 'war_zone_all_anonymous_actions',
    'stream_a_warzone_has_begun' => 'stream_a_warzone_has_begun',
    'war_zone_all_new_round_message' => 'war_zone_all_new_round_message',
    'stream_a_warzone_has_ended' => 'stream_a_warzone_has_ended',
    'stream_new_war_zone' => 'stream_new_war_zone',
    'stream_player_cancels_registration_for_warzone' => 'stream_player_cancels_registration_for_warzone',
    'stream_player_registers_for_warzone' => 'stream_player_registers_for_warzone',
    'models_all_complete_project' => 'models_all_complete_project',
    'models_all_start_project' => 'models_all_start_project',
    'statuses_all_new_files' => 'statuses_all_new_files',
    'statuses_all_new_status' => 'statuses_all_new_status',
    'stream_narrative_army_event' => 'stream_narrative_army_event',
    'stream_player_acknowledges_a_battle' => 'stream_player_acknowledges_a_battle',
    'stream_player_comments_on_post' => 'stream_player_comments_on_post',
    'stream_player_likes_content' => 'stream_player_likes_content',
    'stream_player_posts_a_battle' => 'stream_player_posts_a_battle',
    'stream_player_posts_new_content' => 'stream_player_posts_new_content',
    'stream_player_rates_list' => 'stream_player_rates_list',
    'stream_player_earns_an_achievement' => 'stream_player_earns_an_achievement',
    'statuses_all_new_level' => 'statuses_all_new_level',
    'media_image_new_comment' => 'media_image_new_comment',
    'media_image_salute' => 'media_image_salute',
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
  /* Field: Message: Timeline Icon */
  $handler->display->display_options['fields']['field_timeline_icon']['id'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['table'] = 'field_data_field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['field'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['relationship'] = 'message';
  $handler->display->display_options['fields']['field_timeline_icon']['label'] = '';
  $handler->display->display_options['fields']['field_timeline_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_timeline_icon']['alter']['text'] = '<i class="fa fw [field_timeline_icon-value]"></i>';
  $handler->display->display_options['fields']['field_timeline_icon']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-4';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image]
<div class="caption">
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_images']['alter']['text'] = '[field_images]
<div class="caption">
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_images']['element_wrapper_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_images']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
    'single_image_delta' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
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
    'army_profile' => 'army_profile',
    'game_results' => 'game_results',
    'blog' => 'blog',
    'forum' => 'forum',
    'gallery' => 'gallery',
    'game_result_system_' => 'game_result_system_',
    'listcrit' => 'listcrit',
    'models' => 'models',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Achievements */
  $handler = $view->new_display('panel_pane', 'Achievements', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Achievements';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Achievements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'user/!1/achievements';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
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
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="[title]">[field_image]</span>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Badges';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'text-center';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User Badges: Badge */
  $handler->display->display_options['fields']['badge']['id'] = 'badge';
  $handler->display->display_options['fields']['badge']['table'] = 'user_badges_badges';
  $handler->display->display_options['fields']['badge']['field'] = 'badge';
  $handler->display->display_options['fields']['badge']['label'] = '';
  $handler->display->display_options['fields']['badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['badge']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['badge']['element_wrapper_class'] = 'text-center';
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

  /* Display: Links */
  $handler = $view->new_display('panel_pane', 'Links', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Elsewhere';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<a href="[field_website-url]">
        <i class="fa fa-globe fa-lg"></i>
        [field_website-title]
</a>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_website']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Profile: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_facebook']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['alter']['text'] = '<a href="[field_facebook-url]">

        <i class="fa fa-facebook-official fa-lg"></i> Facebook

    </li>
</a>';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_facebook']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['click_sort_column'] = 'url';
  /* Field: Profile: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter-url]">
<i class="fa fa-twitter fa-lg"></i>
        Twitter

</a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_twitter']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Profile: Pinterest */
  $handler->display->display_options['fields']['field_pinterest']['id'] = 'field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['table'] = 'field_data_field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['field'] = 'field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_pinterest']['label'] = '';
  $handler->display->display_options['fields']['field_pinterest']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pinterest']['alter']['text'] = '<a href="[field_pinterest-url]">

        <i class="fa fa-pinterest-p fa-lg"></i>
        Pinterest

</a>';
  $handler->display->display_options['fields']['field_pinterest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pinterest']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pinterest']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_pinterest']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pinterest']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pinterest']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pinterest']['click_sort_column'] = 'url';
  /* Field: Profile: Instagram */
  $handler->display->display_options['fields']['field_instagram']['id'] = 'field_instagram';
  $handler->display->display_options['fields']['field_instagram']['table'] = 'field_data_field_instagram';
  $handler->display->display_options['fields']['field_instagram']['field'] = 'field_instagram';
  $handler->display->display_options['fields']['field_instagram']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_instagram']['label'] = '';
  $handler->display->display_options['fields']['field_instagram']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram']['alter']['text'] = '<a href="[field_instagram-url]">

        <i class="fa fa-instagram fa-lg"></i>
        Instagram

</a>';
  $handler->display->display_options['fields']['field_instagram']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_instagram']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_instagram']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_instagram']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_instagram']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_instagram']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Website (field_website:url) */
  $handler->display->display_options['filters']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['filters']['field_website_url']['table'] = 'field_data_field_website';
  $handler->display->display_options['filters']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['filters']['field_website_url']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_website_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_website_url']['group'] = 2;
  /* Filter criterion: Profile: Twitter (field_twitter:url) */
  $handler->display->display_options['filters']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['filters']['field_twitter_url']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['filters']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['filters']['field_twitter_url']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_twitter_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_twitter_url']['group'] = 2;
  /* Filter criterion: Profile: Pinterest (field_pinterest:url) */
  $handler->display->display_options['filters']['field_pinterest_url']['id'] = 'field_pinterest_url';
  $handler->display->display_options['filters']['field_pinterest_url']['table'] = 'field_data_field_pinterest';
  $handler->display->display_options['filters']['field_pinterest_url']['field'] = 'field_pinterest_url';
  $handler->display->display_options['filters']['field_pinterest_url']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_pinterest_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_pinterest_url']['group'] = 2;
  /* Filter criterion: Profile: Instagram (field_instagram:url) */
  $handler->display->display_options['filters']['field_instagram_url']['id'] = 'field_instagram_url';
  $handler->display->display_options['filters']['field_instagram_url']['table'] = 'field_data_field_instagram';
  $handler->display->display_options['filters']['field_instagram_url']['field'] = 'field_instagram_url';
  $handler->display->display_options['filters']['field_instagram_url']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_instagram_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_instagram_url']['group'] = 2;
  /* Filter criterion: Profile: Facebook (field_facebook:url) */
  $handler->display->display_options['filters']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['filters']['field_facebook_url']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['filters']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['filters']['field_facebook_url']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_facebook_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_facebook_url']['group'] = 2;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: User Tools */
  $handler = $view->new_display('panel_pane', 'User Tools', 'panel_pane_13');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'btn-group btn-group-justified';
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
  /* Relationship: Flags: follow */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['ops']['element_wrapper_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops']['element_default_classes'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<span class="fa fa-envelope"></span>';
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['path'] = '/messages/new/[uid]?destination=user/[uid]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['uid']['element_wrapper_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Army List */
  $handler = $view->new_display('panel_pane', 'Army List', 'panel_pane_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Armies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_images';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'term_node_tid';
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
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' / ';
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'armies' => 'armies',
    'forums' => 0,
    'achievement_category' => 0,
    'custom_property' => 0,
    'deployment' => 0,
    'event_type' => 0,
    'games' => 0,
    'list_crit_tags' => 0,
    'location_region' => 0,
    'location_type' => 0,
    'missions' => 0,
    'scale' => 0,
    'scenario_special_rules' => 0,
    'tags' => 0,
    'units' => 0,
    'userpoints' => 0,
    'victory_conditions' => 0,
    'war_zone_type' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
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
    'army_profile' => 'army_profile',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Featured Content */
  $handler = $view->new_display('panel_pane', 'Featured Content', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Popular Content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image]
<div class="caption">
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'hero_image_page',
    'image_link' => 'content',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_images']['alter']['text'] = '[field_images]
<div class="caption">
<span class="lead">[title]</span>
</div>';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_images']['element_wrapper_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_images']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'hero_image_page',
    'image_link' => 'content',
    'single_image_delta' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
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
    'army_profile' => 'army_profile',
    'game_results' => 'game_results',
    'blog' => 'blog',
    'forum' => 'forum',
    'gallery' => 'gallery',
    'game_result_system_' => 'game_result_system_',
    'listcrit' => 'listcrit',
    'models' => 'models',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Modeling Project Count */
  $handler = $view->new_display('panel_pane', 'Modeling Project Count', 'panel_pane_16');
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
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/user/!1/modelling">
    <div class="meta-item">
        <i class="fa fa-paint-brush fa-lg"></i>
        Modeling projects
        <span class="pull-right">
            <span class="badge badge-default">[nid]</span>
        </span>
    </div>
</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/blogs';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
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
    'models' => 'models',
  );

  /* Display: Army Profile Count */
  $handler = $view->new_display('panel_pane', 'Army Profile Count', 'panel_pane_17');
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
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/user/!1/narrative">
    <div class="meta-item">
        <i class="fa fa-flag-o fa-lg"></i>
        Army Profiles
        <span class="pull-right">
            <span class="badge badge-default">[nid]</span>
        </span>
    </div>
</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/blogs';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
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
    'army_profile' => 'army_profile',
  );

  /* Display: Content Count */
  $handler = $view->new_display('panel_pane', 'Content Count', 'panel_pane_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="panel panel-default">
    <div class="panel-body no-padding collapse in" id="toDoListWidget">
        <ul class="list-group task-list no-margin collapse in">
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_17"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_6"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_3"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_4"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_5"); ?>
            <?php print views_embed_view("profiles_all_images", "panel_pane_2"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_16"); ?>
        </ul><!-- /list-group -->
    </div>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
    'army_profile' => 'army_profile',
    'game_results' => 'game_results',
    'blog' => 'blog',
    'gallery' => 'gallery',
    'listcrit' => 'listcrit',
    'models' => 'models',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Brief */
  $handler = $view->new_display('panel_pane', 'Brief', 'panel_pane_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Brief';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'profiles_all_page_layout';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_5';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'profiles_all_page_layout';
  $handler->display->display_options['fields']['view_1']['display'] = 'panel_pane_6';
  $handler->display->display_options['fields']['view_1']['arguments'] = '!1';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['label'] = '';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['view'] = 'profiles_all_page_layout';
  $handler->display->display_options['fields']['view_2']['display'] = 'panel_pane_16';
  $handler->display->display_options['fields']['view_2']['arguments'] = '!1';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_3']['id'] = 'view_3';
  $handler->display->display_options['fields']['view_3']['table'] = 'views';
  $handler->display->display_options['fields']['view_3']['field'] = 'view';
  $handler->display->display_options['fields']['view_3']['label'] = '';
  $handler->display->display_options['fields']['view_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_3']['view'] = 'profiles_all_page_layout';
  $handler->display->display_options['fields']['view_3']['display'] = 'panel_pane_17';
  $handler->display->display_options['fields']['view_3']['arguments'] = '!1';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Modelling Achievements */
  $handler = $view->new_display('panel_pane', 'Modelling Achievements', 'panel_pane_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Achievements';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Modelling Achievements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'user/!1/achievements?field_achievement_category_target_id_selective%5B%5D=1938';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
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
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="[title]">[field_image]</span>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Relation: Achievement Date (field_achievement_date) */
  $handler->display->display_options['sorts']['field_achievement_date_value']['id'] = 'field_achievement_date_value';
  $handler->display->display_options['sorts']['field_achievement_date_value']['table'] = 'field_data_field_achievement_date';
  $handler->display->display_options['sorts']['field_achievement_date_value']['field'] = 'field_achievement_date_value';
  $handler->display->display_options['sorts']['field_achievement_date_value']['relationship'] = 'relation_base_right_achievement';
  $handler->display->display_options['sorts']['field_achievement_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Category (field_achievement_category) */
  $handler->display->display_options['filters']['field_achievement_category_target_id']['id'] = 'field_achievement_category_target_id';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['field'] = 'field_achievement_category_target_id';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['filters']['field_achievement_category_target_id']['value']['value'] = '1938';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Club Affiliation */
  $handler = $view->new_display('panel_pane', 'Club Affiliation', 'panel_pane_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Club Membership';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['columns'] = '1';
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
  /* Relationship: OG membership: Group Content from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Node registration: Event node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'caption';
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Campaign Badges';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['link_url'] = 'user/!1/trophies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Node registration: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1\'s Campaign Badges';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Player's War Zones */
  $handler = $view->new_display('page', 'Player\'s War Zones', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="lead">%1 has not earned any campaign badges.</div>';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid_1']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['title'] = '%1\'s Campaign Badges';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['validate']['type'] = 'user';
  $handler->display->display_options['path'] = 'user/%/theater/campaign-badges';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Campaign Badges';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_achievement_category_target_id_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
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
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1\'s Achievements';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  <h4>%1 has not received any decorations.</h4>
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Userpoints: Current renown in category */
  $handler->display->display_options['filters']['points']['id'] = 'points';
  $handler->display->display_options['filters']['points']['table'] = 'userpoints';
  $handler->display->display_options['filters']['points']['field'] = 'points';
  $handler->display->display_options['filters']['points']['operator'] = '>=';
  $handler->display->display_options['filters']['points']['value']['value'] = '1';
  $handler->display->display_options['pane_category']['name'] = 'Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Achievements */
  $handler = $view->new_display('panel_pane', 'Achievements', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Achievements';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'newsletter_square',
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

  /* Display: User Achievement Page */
  $handler = $view->new_display('page', 'User Achievement Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_achievement_category']['id'] = 'field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['field'] = 'field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_achievement_category']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Relation: Achievement Date (field_achievement_date) */
  $handler->display->display_options['sorts']['field_achievement_date_value']['id'] = 'field_achievement_date_value';
  $handler->display->display_options['sorts']['field_achievement_date_value']['table'] = 'field_data_field_achievement_date';
  $handler->display->display_options['sorts']['field_achievement_date_value']['field'] = 'field_achievement_date_value';
  $handler->display->display_options['sorts']['field_achievement_date_value']['relationship'] = 'relation_base_right_achievement';
  $handler->display->display_options['sorts']['field_achievement_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Category (field_achievement_category) (selective) */
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['id'] = 'field_achievement_category_target_id_selective';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['field'] = 'field_achievement_category_target_id_selective';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['ui_name'] = 'Category (field_achievement_category) (selective)';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['expose']['identifier'] = 'field_achievement_category_target_id_selective';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['selective_display_field'] = 'field_achievement_category';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_achievement_category_target_id_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['path'] = 'user/%/achievements';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Achievements';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;
  $export['profiles_all_trophy_room'] = $view;

  return $export;
}
