<?php
/**
 * @file
 * views_view.home_page_trending_player.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'home_page_trending_player';
$view->description = 'Generates the Trending Player panel (the real one)';
$view->tag = 'Home Page 2.0';
$view->base_table = 'userpoints_txn';
$view->human_name = 'Home Page: Trending Player';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Trending Players';
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'list-group-item clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'list-group';
$handler->display->display_options['style_options']['wrapper_class'] = 'list-group';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Userpoints Transactions: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'userpoints_txn';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'col-xs-4 pull-left';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'h4';
$handler->display->display_options['fields']['name']['element_class'] = 'topboxhead';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Userpoints total: Current total renown */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['relationship'] = 'uid';
$handler->display->display_options['fields']['points']['label'] = 'Renown';
/* Sort criterion: SUM(Userpoints Transactions: Points) */
$handler->display->display_options['sorts']['points']['id'] = 'points';
$handler->display->display_options['sorts']['points']['table'] = 'userpoints_txn';
$handler->display->display_options['sorts']['points']['field'] = 'points';
$handler->display->display_options['sorts']['points']['group_type'] = 'sum';
$handler->display->display_options['sorts']['points']['order'] = 'DESC';
/* Filter criterion: Userpoints Transactions: Timestamp */
$handler->display->display_options['filters']['time_stamp']['id'] = 'time_stamp';
$handler->display->display_options['filters']['time_stamp']['table'] = 'userpoints_txn';
$handler->display->display_options['filters']['time_stamp']['field'] = 'time_stamp';
$handler->display->display_options['filters']['time_stamp']['operator'] = '>=';
$handler->display->display_options['filters']['time_stamp']['value']['value'] = '-14 days';
$handler->display->display_options['filters']['time_stamp']['value']['type'] = 'offset';
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'userpoints',
);
