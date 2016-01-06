<?php
/**
 * @file
 * views_view.home_page_list_crit.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'home_page_list_crit';
$view->description = 'Generates the List Crit panel for the Anonymous Home Page';
$view->tag = 'Home Page 2.0';
$view->base_table = 'node';
$view->human_name = 'Home Page: List Crit';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Top Ranked Lists';
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
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
/* Relationship: Content: Votes */
$handler->display->display_options['relationships']['votingapi_vote']['id'] = 'votingapi_vote';
$handler->display->display_options['relationships']['votingapi_vote']['table'] = 'node';
$handler->display->display_options['relationships']['votingapi_vote']['field'] = 'votingapi_vote';
$handler->display->display_options['relationships']['votingapi_vote']['votingapi'] = array(
  'value_type' => '',
  'tag' => '',
);
$handler->display->display_options['relationships']['votingapi_vote']['current_user'] = 0;
/* Relationship: Field: Your Army (field_your_army) */
$handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_your_army_tid';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'col-xs-4 pull-left';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h4';
$handler->display->display_options['fields']['title']['element_class'] = 'topboxhead';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: SUM(Votes: Value) */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'votingapi_vote';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['relationship'] = 'votingapi_vote';
$handler->display->display_options['fields']['value']['group_type'] = 'sum';
$handler->display->display_options['fields']['value']['label'] = '';
$handler->display->display_options['fields']['value']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['value']['alter']['text'] = 'Rating: [value]';
$handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['value']['precision'] = '0';
/* Sort criterion: SUM(Votes: Value) */
$handler->display->display_options['sorts']['value']['id'] = 'value';
$handler->display->display_options['sorts']['value']['table'] = 'votingapi_vote';
$handler->display->display_options['sorts']['value']['field'] = 'value';
$handler->display->display_options['sorts']['value']['relationship'] = 'votingapi_vote';
$handler->display->display_options['sorts']['value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['value']['order'] = 'DESC';
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
);
