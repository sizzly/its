<?php
/**
 * @file
 * views_view.battlefields_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'battlefields_all_lists';
$view->description = 'Various lists of battlefields.';
$view->tag = 'Battlefields 2.0';
$view->base_table = 'node';
$view->human_name = 'Battlefield: All: Lists';
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
$handler->display->display_options['style_options']['row_class'] = 'clearfix list-group';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Flags: glory */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'glory';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_address']['id'] = 'field_address';
$handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address']['field'] = 'field_address';
$handler->display->display_options['fields']['field_address']['label'] = '';
$handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-locality]  [field_address-administrative_area]  [field_address-country]';
$handler->display->display_options['fields']['field_address']['element_type'] = 'h3';
$handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
/* Field: Content: Location type */
$handler->display->display_options['fields']['field_location_type']['id'] = 'field_location_type';
$handler->display->display_options['fields']['field_location_type']['table'] = 'field_data_field_location_type';
$handler->display->display_options['fields']['field_location_type']['field'] = 'field_location_type';
$handler->display->display_options['fields']['field_location_type']['label'] = '';
$handler->display->display_options['fields']['field_location_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_location_type']['element_type'] = 'h4';
$handler->display->display_options['fields']['field_location_type']['element_class'] = 'label label-default';
$handler->display->display_options['fields']['field_location_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Supported Games */
$handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_supported_games']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_supported_games']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
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
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Location Type List */
$handler = $view->new_display('panel_pane', 'Location Type List', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  'location_type' => 'location_type',
);
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

/* Display: Gaming Stores */
$handler = $view->new_display('page', 'Gaming Stores', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Gaming Stores';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: battlefield_closed counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'battlefield_closed';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
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
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Location type (field_location_type) */
$handler->display->display_options['filters']['field_location_type_tid']['id'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid']['table'] = 'field_data_field_location_type';
$handler->display->display_options['filters']['field_location_type_tid']['field'] = 'field_location_type_tid';
$handler->display->display_options['filters']['field_location_type_tid']['value'] = array(
  0 => '136',
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
/* Filter criterion: Flags: Flag counter */
$handler->display->display_options['filters']['count']['id'] = 'count';
$handler->display->display_options['filters']['count']['table'] = 'flag_counts';
$handler->display->display_options['filters']['count']['field'] = 'count';
$handler->display->display_options['filters']['count']['relationship'] = 'flag_count_rel';
$handler->display->display_options['filters']['count']['operator'] = 'empty';
$handler->display->display_options['filters']['count']['value']['value'] = '0';
$handler->display->display_options['path'] = 'munitions/gaming-stores';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Gaming Stores';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'views_content',
);
