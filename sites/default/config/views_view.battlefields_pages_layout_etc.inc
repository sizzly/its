<?php
/**
 * @file
 * views_view.battlefields_pages_layout_etc.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'battlefields_pages_layout_etc';
$view->description = 'Should probably be consolidated into Battlefields: All: Lists it is in use.';
$view->tag = 'Battlefields 2.0, Consolidate';
$view->base_table = 'node';
$view->human_name = 'Battlefields: All: Pages and Lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'All Battlefields';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'col-xs-5 col-sm-3 pull-left';
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => 'content',
);
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_address']['id'] = 'field_address';
$handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address']['field'] = 'field_address';
$handler->display->display_options['fields']['field_address']['label'] = '';
$handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-locality]  [field_address-administrative_area]  [field_address-country]';
$handler->display->display_options['fields']['field_address']['element_type'] = 'h3';
$handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
/* Field: Content: Location type */
$handler->display->display_options['fields']['field_location_type']['id'] = 'field_location_type';
$handler->display->display_options['fields']['field_location_type']['table'] = 'field_data_field_location_type';
$handler->display->display_options['fields']['field_location_type']['field'] = 'field_location_type';
$handler->display->display_options['fields']['field_location_type']['label'] = '';
$handler->display->display_options['fields']['field_location_type']['element_type'] = 'h4';
$handler->display->display_options['fields']['field_location_type']['element_class'] = 'label label-default';
$handler->display->display_options['fields']['field_location_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Supported Games */
$handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_supported_games']['empty'] = '[Classified]';
$handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website']['id'] = 'field_website';
$handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_website']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[classified]';
$handler->display->display_options['fields']['nothing']['element_type'] = 'p';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'well well-sm';
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
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
  'location' => 'location',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Location type (field_location_type) */
$handler->display->display_options['filters']['field_location_type_tid']['id'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid']['table'] = 'field_data_field_location_type';
$handler->display->display_options['filters']['field_location_type_tid']['field'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid']['operator'] = 'not';
$handler->display->display_options['filters']['field_location_type_tid']['value'] = array(
  0 => '135',
);
$handler->display->display_options['filters']['field_location_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_location_type_tid']['vocabulary'] = 'location_type';
/* Filter criterion: Content: Supported Games (field_supported_games) */
$handler->display->display_options['filters']['field_supported_games_tid']['id'] = 'field_supported_games_tid';
$handler->display->display_options['filters']['field_supported_games_tid']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['filters']['field_supported_games_tid']['field'] = 'field_supported_games_tid';
$handler->display->display_options['filters']['field_supported_games_tid']['value'] = array(
  364 => '364',
  735 => '735',
  718 => '718',
  776 => '776',
  395 => '395',
  433 => '433',
  223 => '223',
  611 => '611',
  2 => '2',
  55 => '55',
  42 => '42',
);
$handler->display->display_options['filters']['field_supported_games_tid']['group'] = 1;
$handler->display->display_options['filters']['field_supported_games_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_supported_games_tid']['expose']['operator_id'] = 'field_supported_games_tid_op';
$handler->display->display_options['filters']['field_supported_games_tid']['expose']['label'] = 'Supported Games';
$handler->display->display_options['filters']['field_supported_games_tid']['expose']['operator'] = 'field_supported_games_tid_op';
$handler->display->display_options['filters']['field_supported_games_tid']['expose']['identifier'] = 'field_supported_games_tid';
$handler->display->display_options['filters']['field_supported_games_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_supported_games_tid']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['field_supported_games_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_supported_games_tid']['vocabulary'] = 'armies';
$handler->display->display_options['filters']['field_supported_games_tid']['hierarchy'] = 1;
/* Filter criterion: Content: Location type (field_location_type) */
$handler->display->display_options['filters']['field_location_type_tid_1']['id'] = 'field_location_type_tid_1';
$handler->display->display_options['filters']['field_location_type_tid_1']['table'] = 'field_data_field_location_type';
$handler->display->display_options['filters']['field_location_type_tid_1']['field'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid_1']['value'] = array(
  137 => '137',
  320 => '320',
  136 => '136',
);
$handler->display->display_options['filters']['field_location_type_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_location_type_tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_location_type_tid_1']['expose']['operator_id'] = 'field_location_type_tid_1_op';
$handler->display->display_options['filters']['field_location_type_tid_1']['expose']['label'] = 'Battlefield Type';
$handler->display->display_options['filters']['field_location_type_tid_1']['expose']['operator'] = 'field_location_type_tid_1_op';
$handler->display->display_options['filters']['field_location_type_tid_1']['expose']['identifier'] = 'field_location_type_tid_1';
$handler->display->display_options['filters']['field_location_type_tid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_location_type_tid_1']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['field_location_type_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_location_type_tid_1']['vocabulary'] = 'location_type';
$handler->display->display_options['filters']['field_location_type_tid_1']['hierarchy'] = 1;
/* Filter criterion: Field: Geolocation (field_geolocation) - proximity */
$handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
$handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
  'distance' => '100',
  'distance2' => 200,
  'unit' => '6371',
  'origin' => '',
);
$handler->display->display_options['filters']['field_geofield_distance']['group'] = 1;
$handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Near to';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['description'] = 'Enter an address, city, or postal code';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
$handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geolocation';
$handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geolocation';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'warzone/battlefield/list';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'List';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Battlefield landing page */
$handler = $view->new_display('panel_pane', 'Battlefield landing page', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-md-6';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Popular battlefields */
$handler = $view->new_display('panel_pane', 'Popular battlefields', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Popular Battlefields';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['type'] = 'bar';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'title';
$handler->display->display_options['style_options']['data_fields'] = array(
  'nid' => 'nid',
  'title' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'title' => '#2f7ed8',
  'nid' => '#0080c0',
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
$handler->display->display_options['fields']['title']['label'] = 'Battlefield';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '# Battles';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: COUNT(Content: Nid) */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['group_type'] = 'count';
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
  'game_results' => 'game_results',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Location type (field_location_type) */
$handler->display->display_options['filters']['field_location_type_tid']['id'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid']['table'] = 'field_data_field_location_type';
$handler->display->display_options['filters']['field_location_type_tid']['field'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid']['operator'] = 'not';
$handler->display->display_options['filters']['field_location_type_tid']['value'] = array(
  0 => '135',
);
$handler->display->display_options['filters']['field_location_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_location_type_tid']['vocabulary'] = 'location_type';
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Most Players */
$handler = $view->new_display('panel_pane', 'Most Players', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Popular Battlefields';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['type'] = 'bar';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'title';
$handler->display->display_options['style_options']['data_fields'] = array(
  'uid' => 'uid',
  'title' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'title' => '#2f7ed8',
  'uid' => '#0080c0',
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
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['required'] = TRUE;
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['title']['label'] = 'Battlefield';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: COUNT(DISTINCT Content: Author uid) */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['uid']['label'] = '# Players';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: COUNT(DISTINCT User: Uid) */
$handler->display->display_options['sorts']['uid']['id'] = 'uid';
$handler->display->display_options['sorts']['uid']['table'] = 'users';
$handler->display->display_options['sorts']['uid']['field'] = 'uid';
$handler->display->display_options['sorts']['uid']['relationship'] = 'uid';
$handler->display->display_options['sorts']['uid']['group_type'] = 'count_distinct';
$handler->display->display_options['sorts']['uid']['order'] = 'DESC';
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
/* Filter criterion: Content: Location type (field_location_type) */
$handler->display->display_options['filters']['field_location_type_tid']['id'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid']['table'] = 'field_data_field_location_type';
$handler->display->display_options['filters']['field_location_type_tid']['field'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid']['operator'] = 'not';
$handler->display->display_options['filters']['field_location_type_tid']['value'] = array(
  0 => '135',
);
$handler->display->display_options['filters']['field_location_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_location_type_tid']['vocabulary'] = 'location_type';
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
  3 => 'taxonomy',
  4 => 'link',
  5 => 'views_content',
);
