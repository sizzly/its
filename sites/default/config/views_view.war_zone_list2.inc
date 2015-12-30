<?php
/**
 * @file
 * views_view.war_zone_list2.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_list2';
$view->description = 'Consolidate this one with War Zone: All: Lists';
$view->tag = 'War Zones 4.1, Consolidate';
$view->base_table = 'node';
$view->human_name = 'War Zone List';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Leagues';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'media';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'media-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Results</h3>
<p>There are no War Zones that meet your criteria</p>';
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
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Campaign Badge */
$handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
$handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campaign_badge']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
  'image_style' => 'apps_logo',
  'image_link' => '',
);
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
/* Field: Content: League Type */
$handler->display->display_options['fields']['field_league_type']['id'] = 'field_league_type';
$handler->display->display_options['fields']['field_league_type']['table'] = 'field_data_field_league_type';
$handler->display->display_options['fields']['field_league_type']['field'] = 'field_league_type';
$handler->display->display_options['fields']['field_league_type']['label'] = '';
$handler->display->display_options['fields']['field_league_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_league_type']['element_type'] = 'strong';
$handler->display->display_options['fields']['field_league_type']['element_label_colon'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['label'] = '';
$handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
<a href="[path]" class="pull-left col-md-2"><span class="media-object">[field_campaign_badge]</span></a>
<div class="media-body col-md-10">
   <h4 class="media-heading">[title]</h4>
   <p>
      [field_league_type]<br>
      [field_event_date]<br>
      [field_location] [field_address]
   </p>

</div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  'war_zone_league' => 'war_zone_league',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_tournament' => 'war_zone_tournament',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: League Page */
$handler = $view->new_display('page', 'League Page', 'page_1');
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
  'war_zone_league' => 'war_zone_league',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['path'] = 'theater/warzone/leagues';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Leagues';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'tab';
$handler->display->display_options['tab_options']['title'] = 'Warzones';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Tournament Page */
$handler = $view->new_display('page', 'Tournament Page', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Tournaments';
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
  'war_zone_tournament' => 'war_zone_tournament',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
$handler->display->display_options['filters']['field_status_value']['value'] = array(
  0 => '0',
);
$handler->display->display_options['filters']['field_status_value']['group'] = 1;
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
  'origin' => ' ',
);
$handler->display->display_options['filters']['field_geofield_distance']['group'] = 1;
$handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
$handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Proximity';
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
$handler->display->display_options['path'] = 'theater/warzone/tournaments';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Tournaments';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'tab';
$handler->display->display_options['tab_options']['title'] = 'Warzones';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: All Warzones */
$handler = $view->new_display('page', 'All Warzones', 'page_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'All War Zones';
$handler->display->display_options['path'] = 'theater/warzone/list';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All War Zones';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Narrative Campaign Instances */
$handler = $view->new_display('page', 'Narrative Campaign Instances', 'page_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Operational Campaigns';
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
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['path'] = 'theater/warzone/narrative-campaigns/operational';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Operational';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Campaigns */
$handler = $view->new_display('page', 'Campaigns', 'page_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Campaigns';
$handler->display->display_options['defaults']['relationships'] = FALSE;
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
  'narrative_campaign' => 'narrative_campaign',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['path'] = 'warzone/narrative-campaigns/campaigns';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Campaigns';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Operational Pane */
$handler = $view->new_display('panel_pane', 'Operational Pane', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Operational Campaigns';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_4';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
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
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Available Campaign Pane */
$handler = $view->new_display('panel_pane', 'Available Campaign Pane', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Available Campaigns';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_5';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
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
  'narrative_campaign' => 'narrative_campaign',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Events Page */
$handler = $view->new_display('page', 'Events Page', 'page_6');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Other Events';
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
  'special_event' => 'special_event',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['path'] = 'theater/warzone/leagues';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Leagues';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'tab';
$handler->display->display_options['tab_options']['title'] = 'Warzones';
$handler->display->display_options['tab_options']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
  3 => 'taxonomy',
  4 => 'date',
  5 => 'node_reference',
  6 => 'views_content',
);
