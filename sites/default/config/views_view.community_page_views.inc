<?php
/**
 * @file
 * views_view.community_page_views.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'community_page_views';
$view->description = 'Generates lists of players for various things.';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Player layout, pages, etc';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Players';
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'col-xs-6 pull-left';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'city' => 'city',
  'province' => 'province',
  'country' => 'country',
);
$handler->display->display_options['row_options']['separator'] = ' ';
/* Relationship: User: Relation: Achievement (user → node) */
$handler->display->display_options['relationships']['relation_achievement_node']['id'] = 'relation_achievement_node';
$handler->display->display_options['relationships']['relation_achievement_node']['table'] = 'users';
$handler->display->display_options['relationships']['relation_achievement_node']['field'] = 'relation_achievement_node';
$handler->display->display_options['relationships']['relation_achievement_node']['r_index'] = '-1';
$handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_left'] = 0;
$handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_right'] = 0;
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
/* Field: Path */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['ui_name'] = 'Path';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = 'user/[uid]';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_type'] = 'span';
$handler->display->display_options['fields']['picture']['element_class'] = 'thumbnail';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'pull-left col-xs-4';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = '[uid]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'strong';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Userpoints total: Current total renown */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['label'] = '';
$handler->display->display_options['fields']['points']['exclude'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['text'] = '<i class="icon glyphicon glyphicon-star" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="reknown"></i> <span class="badge">[points]</span>';
$handler->display->display_options['fields']['points']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['path'] = '[uid]';
$handler->display->display_options['fields']['points']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
/* Field: SUM(Content: Achievement Points) */
$handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_achievement_node';
$handler->display->display_options['fields']['field_achievement_points']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_achievement_points']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 0,
);
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['city']['label'] = '';
$handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['city']['alter']['text'] = '[city], ';
$handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['city']['empty_zero'] = TRUE;
/* Field: Location: Province */
$handler->display->display_options['fields']['province']['id'] = 'province';
$handler->display->display_options['fields']['province']['table'] = 'location';
$handler->display->display_options['fields']['province']['field'] = 'province';
$handler->display->display_options['fields']['province']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['province']['label'] = '';
$handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['province']['alter']['text'] = '[province], ';
$handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['province']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['province']['empty_zero'] = TRUE;
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['country']['label'] = '';
$handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['country']['empty'] = '[ Classified ]';
$handler->display->display_options['fields']['country']['style'] = 'code';
/* Sort criterion: SUM(Content: Achievement Points (field_achievement_points)) */
$handler->display->display_options['sorts']['field_achievement_points_value']['id'] = 'field_achievement_points_value';
$handler->display->display_options['sorts']['field_achievement_points_value']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['sorts']['field_achievement_points_value']['field'] = 'field_achievement_points_value';
$handler->display->display_options['sorts']['field_achievement_points_value']['relationship'] = 'relation_achievement_node';
$handler->display->display_options['sorts']['field_achievement_points_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_achievement_points_value']['order'] = 'DESC';
/* Sort criterion: Userpoints total: Current total renown */
$handler->display->display_options['sorts']['points']['id'] = 'points';
$handler->display->display_options['sorts']['points']['table'] = 'userpoints_total';
$handler->display->display_options['sorts']['points']['field'] = 'points';
$handler->display->display_options['sorts']['points']['order'] = 'DESC';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);

/* Display: Top Players */
$handler = $view->new_display('panel_pane', 'Top Players', 'panel_pane_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'name_1',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['row_class'] = 'col-xs-6 pull-left';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'city' => 'city',
  'province' => 'province',
  'country' => 'country',
);
$handler->display->display_options['row_options']['separator'] = ' ';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Path */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['ui_name'] = 'Path';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = 'user/[uid]';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_type'] = 'span';
$handler->display->display_options['fields']['picture']['element_class'] = 'thumbnail';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'pull-left col-xs-4';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = '[uid]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'strong';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Userpoints total: Current total renown */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['label'] = '';
$handler->display->display_options['fields']['points']['exclude'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['text'] = '<i class="icon glyphicon glyphicon-star" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="reknown"></i> <span class="badge">[points]</span>';
$handler->display->display_options['fields']['points']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['path'] = '[uid]';
$handler->display->display_options['fields']['points']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
/* Field: SUM(Content: Achievement Points) */
$handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_achievement_node';
$handler->display->display_options['fields']['field_achievement_points']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_achievement_points']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 0,
);
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['city']['label'] = '';
$handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['city']['alter']['text'] = '[city], ';
$handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['city']['empty_zero'] = TRUE;
/* Field: Location: Province */
$handler->display->display_options['fields']['province']['id'] = 'province';
$handler->display->display_options['fields']['province']['table'] = 'location';
$handler->display->display_options['fields']['province']['field'] = 'province';
$handler->display->display_options['fields']['province']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['province']['label'] = '';
$handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['province']['alter']['text'] = '[province], ';
$handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['province']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['province']['empty_zero'] = TRUE;
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['country']['label'] = '';
$handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['country']['empty'] = '[ Classified ]';
$handler->display->display_options['fields']['country']['style'] = 'code';
/* Field: User Badges: Badge Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'user_badges_badges';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
/* Filter criterion: User Badges: Badge Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'user_badges_badges';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['value'] = 'Level';
$handler->display->display_options['pane_category']['name'] = 'Community';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '0';

/* Display: Roster */
$handler = $view->new_display('page', 'Roster', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'All Players';
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Realname: Real name */
$handler->display->display_options['sorts']['realname']['id'] = 'realname';
$handler->display->display_options['sorts']['realname']['table'] = 'realname';
$handler->display->display_options['sorts']['realname']['field'] = 'realname';
$handler->display->display_options['path'] = 'community/players/all-players';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All Players';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Roster Table */
$handler = $view->new_display('page', 'Roster Table', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'All Players';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'uid' => 'uid',
  'picture' => 'picture',
  'name' => 'name',
  'points' => 'points',
  'field_achievement_points' => 'field_achievement_points',
  'city' => 'city',
  'province' => 'city',
  'country' => 'city',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'uid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'picture' => array(
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
  'points' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_achievement_points' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'city' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' ',
    'empty_column' => 0,
  ),
  'province' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'country' => array(
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
/* Field: Path */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['ui_name'] = 'Path';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = 'user/[uid]';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['exclude'] = TRUE;
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'pull-left col-xs-2 col-sm-2 col-md-2';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = '[uid]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'strong';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Userpoints total: Current total renown */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['label'] = 'Renown';
$handler->display->display_options['fields']['points']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['text'] = '<i class="icon glyphicon glyphicon-star" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="reknown"></i> <span class="badge">[points]</span>';
$handler->display->display_options['fields']['points']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['path'] = '[uid]';
$handler->display->display_options['fields']['points']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
/* Field: SUM(Content: Achievement Points) */
$handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_achievement_node';
$handler->display->display_options['fields']['field_achievement_points']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_achievement_points']['empty'] = '0';
$handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 0,
);
/* Field: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['city']['label'] = 'Theater';
$handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['city']['alter']['text'] = '[city], ';
$handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['city']['empty_zero'] = TRUE;
/* Field: Location: Province */
$handler->display->display_options['fields']['province']['id'] = 'province';
$handler->display->display_options['fields']['province']['table'] = 'location';
$handler->display->display_options['fields']['province']['field'] = 'province';
$handler->display->display_options['fields']['province']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['province']['label'] = '';
$handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['province']['alter']['text'] = '[province], ';
$handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['province']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['province']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['province']['style'] = 'code';
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['relationship'] = 'field_profile_location_lid';
$handler->display->display_options['fields']['country']['label'] = '';
$handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['country']['empty'] = '[ Classified ]';
$handler->display->display_options['fields']['country']['style'] = 'code';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Realname: Real name */
$handler->display->display_options['sorts']['realname']['id'] = 'realname';
$handler->display->display_options['sorts']['realname']['table'] = 'realname';
$handler->display->display_options['sorts']['realname']['field'] = 'realname';
$handler->display->display_options['path'] = 'community/players/all-players';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All Players';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'number',
  3 => 'views_content',
);
