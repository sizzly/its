<?php
/**
 * @file
 * views_view.location_map_data.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'location_map_data';
$view->description = 'Location data layer for a map';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Location map data';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Location map data';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'openlayers_data';
$handler->display->display_options['style_options']['data_source'] = array(
  'value' => 'wkt',
  'other_lat' => 'field_geolocation',
  'other_lon' => 'field_geolocation',
  'wkt' => 'field_geolocation',
  'other_top' => 'title',
  'other_right' => 'title',
  'other_bottom' => 'title',
  'other_left' => 'title',
  'name_field' => 'title',
  'description_field' => '',
  'view_mode' => 'full',
  'style_field' => '',
);
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Location type (field_location_type) */
$handler->display->display_options['relationships']['field_location_type_tid']['id'] = 'field_location_type_tid';
$handler->display->display_options['relationships']['field_location_type_tid']['table'] = 'field_data_field_location_type';
$handler->display->display_options['relationships']['field_location_type_tid']['field'] = 'field_location_type_tid';
$handler->display->display_options['relationships']['field_location_type_tid']['label'] = 'Location type term';
/* Relationship: File Usage: File */
$handler->display->display_options['relationships']['taxonomy_term_to_file']['id'] = 'taxonomy_term_to_file';
$handler->display->display_options['relationships']['taxonomy_term_to_file']['table'] = 'file_usage';
$handler->display->display_options['relationships']['taxonomy_term_to_file']['field'] = 'taxonomy_term_to_file';
$handler->display->display_options['relationships']['taxonomy_term_to_file']['relationship'] = 'field_location_type_tid';
$handler->display->display_options['relationships']['taxonomy_term_to_file']['label'] = 'Location icon file';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Field: Geolocation */
$handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['label'] = '';
$handler->display->display_options['fields']['field_geolocation']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
$handler->display->display_options['fields']['field_geolocation']['settings'] = array(
  'data' => 'full',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: File: Path */
$handler->display->display_options['fields']['uri']['id'] = 'uri';
$handler->display->display_options['fields']['uri']['table'] = 'file_managed';
$handler->display->display_options['fields']['uri']['field'] = 'uri';
$handler->display->display_options['fields']['uri']['relationship'] = 'taxonomy_term_to_file';
$handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Has taxonomy terms (with depth)';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'location_type';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
/* Filter criterion: Field: Geolocation (field_geolocation:lat) */
$handler->display->display_options['filters']['field_geolocation_lat']['id'] = 'field_geolocation_lat';
$handler->display->display_options['filters']['field_geolocation_lat']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['filters']['field_geolocation_lat']['field'] = 'field_geolocation_lat';
$handler->display->display_options['filters']['field_geolocation_lat']['operator'] = 'not empty';

/* Display: OpenLayers Data Overlay */
$handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Field: Geolocation */
$handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['label'] = '';
$handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
$handler->display->display_options['fields']['field_geolocation']['settings'] = array(
  'data' => 'full',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: File: Path */
$handler->display->display_options['fields']['uri']['id'] = 'uri';
$handler->display->display_options['fields']['uri']['table'] = 'file_managed';
$handler->display->display_options['fields']['uri']['field'] = 'uri';
$handler->display->display_options['fields']['uri']['relationship'] = 'taxonomy_term_to_file';
$handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
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
  'location' => 'location',
);
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
  137 => '137',
  320 => '320',
  136 => '136',
);
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Has taxonomy terms (with depth)';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'location_type';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
/* Filter criterion: Field: Geolocation (field_geolocation:lat) */
$handler->display->display_options['filters']['field_geolocation_lat']['id'] = 'field_geolocation_lat';
$handler->display->display_options['filters']['field_geolocation_lat']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['filters']['field_geolocation_lat']['field'] = 'field_geolocation_lat';
$handler->display->display_options['filters']['field_geolocation_lat']['operator'] = 'not empty';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'openlayers_map';
$handler->display->display_options['style_options']['map'] = 'location_map';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'test-2';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'geofield',
  3 => 'text',
);
