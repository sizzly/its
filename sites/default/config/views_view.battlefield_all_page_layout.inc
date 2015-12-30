<?php
/**
 * @file
 * views_view.battlefield_all_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'battlefield_all_page_layout';
$view->description = 'Page Elements for battlefields.';
$view->tag = 'Battlefields 2.0';
$view->base_table = 'node';
$view->human_name = 'Battlefield: All: Page Layout';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'location' => 'location',
);
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

/* Display: Supported Games */
$handler = $view->new_display('panel_pane', 'Supported Games', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Supported Games';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Supported Games (field_supported_games) */
$handler->display->display_options['relationships']['field_supported_games_tid']['id'] = 'field_supported_games_tid';
$handler->display->display_options['relationships']['field_supported_games_tid']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['relationships']['field_supported_games_tid']['field'] = 'field_supported_games_tid';
$handler->display->display_options['relationships']['field_supported_games_tid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'field_supported_games_tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Content: Supported Games */
$handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['label'] = '';
$handler->display->display_options['fields']['field_supported_games']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_supported_games']['alter']['path'] = 'node/!1/[tid]/meta';
$handler->display->display_options['fields']['field_supported_games']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_supported_games']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_supported_games']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_supported_games']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_supported_games']['multi_type'] = 'ul';
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Stat Block: Prestige */
$handler = $view->new_display('panel_pane', 'Stat Block: Prestige', 'panel_pane_3');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'panel panel-default';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'panel-body p-top-sm';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node_1']['id'] = 'reverse_field_location_node_1';
$handler->display->display_options['relationships']['reverse_field_location_node_1']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node_1']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node_1']['label'] = 'All Battles';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Userpoints: Current renown in category */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['relationship'] = 'uid';
$handler->display->display_options['fields']['points']['label'] = '';
$handler->display->display_options['fields']['points']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['text'] = '<span class="badge badge-danger">[points]</span>
<strong class="m-left-xs m-right-sm"> Prestige</strong>
';
$handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['points']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['points']['element_wrapper_class'] = 'inline-block m-top-xs';
$handler->display->display_options['fields']['points']['empty'] = '<span class="badge badge-danger">0</span>
<strong class="m-left-xs m-right-sm"> Prestige</strong>';
$handler->display->display_options['fields']['points']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['points']['hide_alter_empty'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="badge badge-info">[nid]</span>
<strong class="m-left-xs m-right-sm"> Battles</strong>';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'node/!1/battles';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'inline-block m-top-xs';
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'reverse_field_location_node_1';
$handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = '<span class="badge badge-success">[uid]</span>
<strong class="m-left-xs m-right-sm"> Players</strong>';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['uid']['element_wrapper_class'] = 'inline-block m-top-xs';
$handler->display->display_options['fields']['uid']['empty'] = '<span class="badge badge-success">0</span>
<strong class="m-left-xs m-right-sm"> Players</strong>';
$handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
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
/* Filter criterion: Userpoints: Points category */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'userpoints';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['relationship'] = 'uid';
$handler->display->display_options['filters']['tid']['value'] = array(
  894 => '894',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'game_results' => 'game_results',
);
$handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
$handler->display->display_options['filters']['type_1']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
$handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Map */
$handler = $view->new_display('panel_pane', 'Map', 'panel_pane_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Map';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Geolocation */
$handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['label'] = '';
$handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
$handler->display->display_options['fields']['field_geolocation']['type'] = 'geofield_openlayers';
$handler->display->display_options['fields']['field_geolocation']['settings'] = array(
  'map_preset' => 'geofield_formatter_map',
  'data' => 'full',
);
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Photo Stream Panel */
$handler = $view->new_display('panel_pane', 'Photo Stream Panel', 'panel_pane_5');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '8';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'photo-stream';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Images */
$handler->display->display_options['fields']['field_images']['id'] = 'field_images';
$handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
$handler->display->display_options['fields']['field_images']['field'] = 'field_images';
$handler->display->display_options['fields']['field_images']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_images']['label'] = '';
$handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_images']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_images']['type'] = 'lightbox2__lightbox__thumbnail__original';
$handler->display->display_options['fields']['field_images']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
  'single_image_delta' => '',
);
$handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
/* Filter criterion: Content: Images (field_images:delta) */
$handler->display->display_options['filters']['delta']['id'] = 'delta';
$handler->display->display_options['filters']['delta']['table'] = 'field_data_field_images';
$handler->display->display_options['filters']['delta']['field'] = 'delta';
$handler->display->display_options['filters']['delta']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['delta']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Photo Stream Page */
$handler = $view->new_display('page', 'Photo Stream Page', 'page_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'title',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['class'] = 'photo-stream';
$handler->display->display_options['style_options']['wrapper_class'] = '';
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
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Photos Found</h3>
<p>There are no photos taken at this battlefield.</p>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Images */
$handler->display->display_options['fields']['field_images']['id'] = 'field_images';
$handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
$handler->display->display_options['fields']['field_images']['field'] = 'field_images';
$handler->display->display_options['fields']['field_images']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_images']['label'] = '';
$handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_images']['type'] = 'lightbox2__lightbox__thumbnail__original';
$handler->display->display_options['fields']['field_images']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['nid']['title'] = '%1 Photo Stream';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'location' => 'location',
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
/* Filter criterion: Content: Images (field_images:delta) */
$handler->display->display_options['filters']['delta']['id'] = 'delta';
$handler->display->display_options['filters']['delta']['table'] = 'field_data_field_images';
$handler->display->display_options['filters']['delta']['field'] = 'delta';
$handler->display->display_options['filters']['delta']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['delta']['operator'] = 'not empty';
$handler->display->display_options['path'] = 'node/%/battlefield-photo-stream';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Photo Stream';
$handler->display->display_options['menu']['description'] = 'Photos taken at the battlefield.';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Meta Data */
$handler = $view->new_display('panel_pane', 'Meta Data', 'panel_pane_6');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Location type */
$handler->display->display_options['fields']['field_location_type']['id'] = 'field_location_type';
$handler->display->display_options['fields']['field_location_type']['table'] = 'field_data_field_location_type';
$handler->display->display_options['fields']['field_location_type']['field'] = 'field_location_type';
$handler->display->display_options['fields']['field_location_type']['label'] = '';
$handler->display->display_options['fields']['field_location_type']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_location_type']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-tag"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_location_type]</strong>
        <div class="text-muted"></div>
    </div>
</div>';
$handler->display->display_options['fields']['field_location_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location_type']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_location_type']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_location_type']['element_default_classes'] = FALSE;
/* Field: Content: Address */
$handler->display->display_options['fields']['field_address_battlefield']['id'] = 'field_address_battlefield';
$handler->display->display_options['fields']['field_address_battlefield']['table'] = 'field_data_field_address_battlefield';
$handler->display->display_options['fields']['field_address_battlefield']['field'] = 'field_address_battlefield';
$handler->display->display_options['fields']['field_address_battlefield']['label'] = '';
$handler->display->display_options['fields']['field_address_battlefield']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_address_battlefield']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-map-marker"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_address_battlefield]</strong>
    </div>
</div>';
$handler->display->display_options['fields']['field_address_battlefield']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address_battlefield']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_address_battlefield']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_address_battlefield']['element_default_classes'] = FALSE;
/* Field: Content: Phone */
$handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
$handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
$handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
$handler->display->display_options['fields']['field_phone']['label'] = '';
$handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_phone']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-phone"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_phone]</strong>
    </div>
</div>';
$handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_phone']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_phone']['empty_zero'] = TRUE;
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website']['id'] = 'field_website';
$handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website']['label'] = '';
$handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_website']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-globe"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_website]</strong>
    </div>
</div>';
$handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_website']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_website']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_website']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Campaign Badge Panel */
$handler = $view->new_display('panel_pane', 'Campaign Badge Panel', 'panel_pane_7');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'War Zone Badges';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'photo-stream';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Campaign Badge */
$handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
$handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
  'image_style' => 'uc_product_list',
  'image_link' => 'content',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['type']['value'] = array(
  'war_zone_league' => 'war_zone_league',
  'league' => 'league',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_tournament' => 'war_zone_tournament',
);
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: War Zone Page */
$handler = $view->new_display('page', 'War Zone Page', 'page_2');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix list-group';
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
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No War Zones Detected</h3>
<p>This battlefield has not run any War Zones yet.</p>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Date -  start date (field_event_date) */
$handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['nid']['title'] = '%1 War Zones';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'location' => 'location',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['type']['value'] = array(
  'war_zone_league' => 'war_zone_league',
  'league' => 'league',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_tournament' => 'war_zone_tournament',
);
$handler->display->display_options['path'] = 'node/%/warzones';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'War Zones';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 1;

/* Display: Closed Battlefield */
$handler = $view->new_display('panel_pane', 'Closed Battlefield', 'panel_pane_8');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: battlefield_closed */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'battlefield_closed';
$handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<div align="center">
<h3>This Battlefield is Closed</h3>
</div>';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Body */
$handler = $view->new_display('panel_pane', 'Body', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'About';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'taxonomy',
  4 => 'geofield',
  5 => 'image',
  6 => 'location_cck',
  7 => 'text',
  8 => 'link',
);
