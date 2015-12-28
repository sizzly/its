<?php
/**
 * @file
 * views_view.events_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'events_all_lists';
$view->description = 'Lists of Events.  Primarily for the Calendar Event List pages. Includes War Zones.';
$view->tag = 'Events 2.0';
$view->base_table = 'node';
$view->human_name = 'Events: All: Lists';
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
$handler->display->display_options['style_options']['row_class'] = 'clearfix list-group';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Events Found</h3>
<p>There are no events found that match the criteria provided.</p>';
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
/* Field: Content: Supported Games */
$handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['label'] = '';
$handler->display->display_options['fields']['field_supported_games']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_supported_games']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_supported_games']['empty'] = 'Other';
$handler->display->display_options['fields']['field_supported_games']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['label'] = '';
$handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
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
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['label'] = '';
$handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
/* Sort criterion: Content: Date -  start date (field_event_date) */
$handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
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
  'event' => 'event',
  'war_zone_league' => 'war_zone_league',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_tournament' => 'war_zone_tournament',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Event type (field_event_type) */
$handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
$handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
$handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
$handler->display->display_options['filters']['field_event_type_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_event_type_tid']['value'] = '';
$handler->display->display_options['filters']['field_event_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
/* Filter criterion: Supported Games (field_supported_games) (selective) */
$handler->display->display_options['filters']['field_supported_games_tid_selective']['id'] = 'field_supported_games_tid_selective';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['field'] = 'field_supported_games_tid_selective';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['ui_name'] = 'Supported Games (field_supported_games) (selective)';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_supported_games_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['label'] = 'Game System';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['identifier'] = 'field_supported_games_tid_selective';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_supported_games_tid_selective']['selective_display_field'] = 'field_supported_games';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Event type (field_event_type) (selective) */
$handler->display->display_options['filters']['field_event_type_tid_selective']['id'] = 'field_event_type_tid_selective';
$handler->display->display_options['filters']['field_event_type_tid_selective']['table'] = 'field_data_field_event_type';
$handler->display->display_options['filters']['field_event_type_tid_selective']['field'] = 'field_event_type_tid_selective';
$handler->display->display_options['filters']['field_event_type_tid_selective']['ui_name'] = 'Event type (field_event_type) (selective)';
$handler->display->display_options['filters']['field_event_type_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_event_type_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['label'] = 'Event type';
$handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['identifier'] = 'field_event_type_tid_selective';
$handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_event_type_tid_selective']['selective_display_field'] = 'field_event_type';
$handler->display->display_options['filters']['field_event_type_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Battlefield (field_location) (selective) */
$handler->display->display_options['filters']['field_location_nid_selective']['id'] = 'field_location_nid_selective';
$handler->display->display_options['filters']['field_location_nid_selective']['table'] = 'field_data_field_location';
$handler->display->display_options['filters']['field_location_nid_selective']['field'] = 'field_location_nid_selective';
$handler->display->display_options['filters']['field_location_nid_selective']['ui_name'] = 'Battlefield (field_location) (selective)';
$handler->display->display_options['filters']['field_location_nid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_location_nid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['label'] = 'Battlefield';
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['description'] = 'Filter by Battlefield (store or location)';
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['identifier'] = 'field_location_nid_selective';
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_location_nid_selective']['selective_display_field'] = 'field_location';
$handler->display->display_options['filters']['field_location_nid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Field: Geolocation (field_geolocation) - proximity */
$handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
$handler->display->display_options['filters']['field_geofield_distance']['relationship'] = 'field_location_nid';
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
$handler->display->display_options['filters']['field_geofield_distance']['expose']['description'] = 'search via city, address, or postal code';
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
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
$handler->display->display_options['filters']['field_status_value']['value'] = array(
  0 => '0',
);

/* Display: All Events */
$handler = $view->new_display('page', 'All Events', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'All Events';
$handler->display->display_options['path'] = 'warzone/events/wargaming-events/main';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'List';
$handler->display->display_options['menu']['description'] = 'A list of all upcoming events';
$handler->display->display_options['menu']['weight'] = '-50';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'All Events';
$handler->display->display_options['tab_options']['weight'] = '0';
$handler->display->display_options['tab_options']['name'] = 'main-menu';

/* Display: Event Type Panel */
$handler = $view->new_display('panel_pane', 'Event Type Panel', 'panel_pane_1');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
$handler->display->display_options['pane_category']['name'] = 'Events';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'term_node_tid_depth' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Has taxonomy term ID (with depth)',
  ),
);
$handler->display->display_options['inherit_panels_path'] = '1';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'node_reference',
  4 => 'views_content',
);
