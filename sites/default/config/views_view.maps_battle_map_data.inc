<?php
/**
 * @file
 * views_view.maps_battle_map_data.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'maps_battle_map_data';
$view->description = 'Location data layer for a map';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Maps - Battle Map Data';
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
$handler->display->display_options['pager']['type'] = 'none';
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
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
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
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'hour';
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
/* Filter criterion: Field: Geolocation (field_geolocation:lat) */
$handler->display->display_options['filters']['field_geolocation_lat']['id'] = 'field_geolocation_lat';
$handler->display->display_options['filters']['field_geolocation_lat']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['filters']['field_geolocation_lat']['field'] = 'field_geolocation_lat';
$handler->display->display_options['filters']['field_geolocation_lat']['relationship'] = 'field_location_nid';
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
$handler->display->display_options['fields']['field_geolocation']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['field_geolocation']['label'] = '';
$handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
$handler->display->display_options['fields']['field_geolocation']['settings'] = array(
  'data' => 'full',
);
/* Field: File: Path */
$handler->display->display_options['fields']['uri']['id'] = 'uri';
$handler->display->display_options['fields']['uri']['table'] = 'file_managed';
$handler->display->display_options['fields']['uri']['field'] = 'uri';
$handler->display->display_options['fields']['uri']['relationship'] = 'field_location_icon_fid';
$handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_geolocation' => 'field_geolocation',
  'body' => 'body',
  'uri' => 'uri',
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
  'field_geolocation' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'body' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'uri' => array(
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'geofield',
  3 => 'text',
  4 => 'views_content',
);
