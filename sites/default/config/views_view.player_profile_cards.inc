<?php
/**
 * @file
 * views_view.player_profile_cards.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'player_profile_cards';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Player: Profile: Cards';
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
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-sm-3';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: User: Content authored */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'users';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'uid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'lead';
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
$handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
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

/* Display: Blog Posts */
$handler = $view->new_display('panel_pane', 'Blog Posts', 'panel_pane_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'uid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'Blogs';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/blogs';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'lead';
$handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;

/* Display: Galleries */
$handler = $view->new_display('panel_pane', 'Galleries', 'panel_pane_2');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'uid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'Galleries';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/galleries';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'lead';
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
  'gallery' => 'gallery',
);

/* Display: Armies */
$handler = $view->new_display('panel_pane', 'Armies', 'panel_pane_3');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'uid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'Armies';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/armies';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'lead';
$handler->display->display_options['fields']['nid']['empty'] = '0';
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

/* Display: Army Lists */
$handler = $view->new_display('panel_pane', 'Army Lists', 'panel_pane_4');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'uid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'Army Lists';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/army-lists';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'lead';
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
  'listcrit' => 'listcrit',
);

/* Display: Renown */
$handler = $view->new_display('panel_pane', 'Renown', 'panel_pane_5');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Userpoints: Current renown in category */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['label'] = 'Renown';
$handler->display->display_options['fields']['points']['element_type'] = 'div';
$handler->display->display_options['fields']['points']['element_class'] = 'lead';
$handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['points']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['points']['empty_zero'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Achievement Points */
$handler = $view->new_display('panel_pane', 'Achievement Points', 'panel_pane_6');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Relation: Achievement (user → node) */
$handler->display->display_options['relationships']['relation_achievement_node']['id'] = 'relation_achievement_node';
$handler->display->display_options['relationships']['relation_achievement_node']['table'] = 'users';
$handler->display->display_options['relationships']['relation_achievement_node']['field'] = 'relation_achievement_node';
$handler->display->display_options['relationships']['relation_achievement_node']['r_index'] = '-1';
$handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_left'] = 0;
$handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_right'] = 0;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: SUM(Content: Achievement Points) */
$handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_achievement_node';
$handler->display->display_options['fields']['field_achievement_points']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_achievement_points']['element_type'] = 'div';
$handler->display->display_options['fields']['field_achievement_points']['element_class'] = 'lead';
$handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_points']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 0,
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

/* Display: Galleries v2 */
$handler = $view->new_display('panel_pane', 'Galleries v2', 'panel_pane_7');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'uid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'Army Lists';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/army-lists';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'lead';
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

/* Display: Blogs */
$handler = $view->new_display('panel_pane', 'Blogs', 'panel_pane_8');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'uid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'Blogs';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'user/!1/blogs';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'lead';
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'views_content',
  3 => 'number',
);
