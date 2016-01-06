<?php
/**
 * @file
 * views_view.war_zone_campaign_instance_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_campaign_instance_page_layout';
$view->description = 'Campaign Instance page layout elements. Should be part of War Zones and not Narrative Campaigns';
$view->tag = 'War Zones 4.1, Narrative Campaigns 1.0';
$view->base_table = 'node';
$view->human_name = 'War Zone: Campaign Instance: Page Layout';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['hide_admin_links'] = TRUE;
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
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'lightbox2__lightbox__user_avatar__original';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Available slots */
$handler->display->display_options['fields']['registration_available_slots']['id'] = 'registration_available_slots';
$handler->display->display_options['fields']['registration_available_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_available_slots']['field'] = 'registration_available_slots';
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
/* Field: Content: Entry Fee */
$handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
/* Field: Content: Used slots */
$handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
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
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_league' => 'war_zone_league',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);

/* Display: Page Header */
$handler = $view->new_display('panel_pane', 'Page Header', 'panel_pane_1');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Campaign Badge */
$handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
$handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_campaign_badge']['type'] = 'lightbox2__lightbox__medium__original';
$handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Game */
$handler->display->display_options['fields']['field_warzone_game']['id'] = 'field_warzone_game';
$handler->display->display_options['fields']['field_warzone_game']['table'] = 'field_data_field_warzone_game';
$handler->display->display_options['fields']['field_warzone_game']['field'] = 'field_warzone_game';
$handler->display->display_options['fields']['field_warzone_game']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['fields']['field_warzone_game']['label'] = '';
$handler->display->display_options['fields']['field_warzone_game']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_warzone_game']['element_label_colon'] = FALSE;
/* Field: Content: Event Type */
$handler->display->display_options['fields']['field_special_event_type']['id'] = 'field_special_event_type';
$handler->display->display_options['fields']['field_special_event_type']['table'] = 'field_data_field_special_event_type';
$handler->display->display_options['fields']['field_special_event_type']['field'] = 'field_special_event_type';
$handler->display->display_options['fields']['field_special_event_type']['label'] = '';
$handler->display->display_options['fields']['field_special_event_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_special_event_type']['element_label_colon'] = FALSE;
/* Field: Field: Game */
$handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['label'] = '';
$handler->display->display_options['fields']['field_game_warzone']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
/* Field: Flags: Flag counter */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'flag_counts';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
$handler->display->display_options['fields']['count']['label'] = '';
$handler->display->display_options['fields']['count']['exclude'] = TRUE;
$handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['count']['separator'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-6 col-sm-12 col-md-6 text-center">
<span class="thumbnail">[field_campaign_badge]</span>
</div>
<div class="col-xs-6 col-sm-12 col-md-6">
<strong>[field_game_warzone]</strong></br>
<small>[field_special_event_type]</small></br>
<small>Salutes <span class="badge">[count]</span></small>
</div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Logistics */
$handler = $view->new_display('panel_pane', 'Logistics', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Logistics';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Event Details</h3>
</div>
<div class="panel-body">
[body]
</div>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Map */
$handler = $view->new_display('panel_pane', 'Map', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'panel panel-default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Geolocation */
$handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['field_geolocation']['label'] = '';
$handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
$handler->display->display_options['fields']['field_geolocation']['type'] = 'geofield_openlayers';
$handler->display->display_options['fields']['field_geolocation']['settings'] = array(
  'map_preset' => 'geofield_formatter_map',
  'data' => 'full',
);
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['label'] = '';
$handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="panel-body">[field_location]</div>';
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Capacity Chart */
$handler = $view->new_display('panel_pane', 'Capacity Chart', 'panel_pane_4');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Slots */
$handler->display->display_options['fields']['field_slots_warzone']['id'] = 'field_slots_warzone';
$handler->display->display_options['fields']['field_slots_warzone']['table'] = 'field_data_field_slots_warzone';
$handler->display->display_options['fields']['field_slots_warzone']['field'] = 'field_slots_warzone';
$handler->display->display_options['fields']['field_slots_warzone']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_slots_warzone']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Used slots */
$handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['exclude'] = TRUE;
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['label'] = '';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '0';
$handler->display->display_options['fields']['expression']['expression'] = '([registration_used_slots] / [field_slots_warzone]) * 100';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression]" role="progressbar" aria-valuenow="[expression]" aria-valuemin="0" aria-valuemax="100" style="width: [expression]%;">
    [expression]%
  </div>
</div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
/* Filter criterion: Content: Slots (field_slots_warzone) */
$handler->display->display_options['filters']['field_slots_warzone_value']['id'] = 'field_slots_warzone_value';
$handler->display->display_options['filters']['field_slots_warzone_value']['table'] = 'field_data_field_slots_warzone';
$handler->display->display_options['filters']['field_slots_warzone_value']['field'] = 'field_slots_warzone_value';
$handler->display->display_options['filters']['field_slots_warzone_value']['operator'] = '>';
$handler->display->display_options['filters']['field_slots_warzone_value']['value']['value'] = '0';
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Player Count */
$handler = $view->new_display('panel_pane', 'Player Count', 'panel_pane_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Node registration: Registrations */
$handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
$handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
$handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['relationship'] = 'node_registration_rel';
$handler->display->display_options['fields']['registration_id']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['registration_id']['label'] = '';
$handler->display->display_options['fields']['registration_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['registration_id']['empty'] = '0';
$handler->display->display_options['fields']['registration_id']['empty_zero'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/!1/player-list">
        <div class="panel panel-overview">
            <div class="overview-icon bg-info">
                <i class="glyphicon glyphicon-user" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[registration_id]</h2>
                <div class="text-muted">Players</div>
            </div>
        </div>
</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['relationship'] = 'node_registration_rel';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Recent Actions */
$handler = $view->new_display('panel_pane', 'Recent Actions', 'panel_pane_6');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'panel panel-default';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'list-group-item';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'list-group';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<div class="panel-heading">
<h3 class="panel-title">Recent Actions</h3>
</div>';
$handler->display->display_options['header']['area']['format'] = 'php_code';
$handler->display->display_options['header']['area']['roles_fieldset'] = array(
  'roles' => array(
    'anonymous user' => 0,
    'authenticated user' => 0,
    'administrator' => 0,
    'verified' => 0,
    'Ironmonger' => 0,
    'System' => 0,
  ),
);
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['id'] = 'reverse_field_stream_node_ref_message';
$handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['field'] = 'reverse_field_stream_node_ref_message';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Message: Render message (Get text) */
$handler->display->display_options['fields']['message_render']['id'] = 'message_render';
$handler->display->display_options['fields']['message_render']['table'] = 'message';
$handler->display->display_options['fields']['message_render']['field'] = 'message_render';
$handler->display->display_options['fields']['message_render']['relationship'] = 'reverse_field_stream_node_ref_message';
$handler->display->display_options['fields']['message_render']['label'] = '';
$handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['message_render']['partials'] = 0;
$handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'message';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['relationship'] = 'reverse_field_stream_node_ref_message';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'today time ago';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
$handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Message: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'message';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['relationship'] = 'reverse_field_stream_node_ref_message';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: State */
$handler = $view->new_display('panel_pane', 'State', 'panel_pane_7');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
$handler->display->display_options['fields']['field_status']['label'] = '';
$handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="panel panel-overview">
            <div class="overview-icon bg-success">
                <i class="glyphicon glyphicon-time" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[field_status]</h2>
                <div class="text-muted">Status</div>
            </div>
        </div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Meta */
$handler = $view->new_display('panel_pane', 'Meta', 'panel_pane_8');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Summary';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'list-group-item';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'list-group';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['element_type'] = 'div';
$handler->display->display_options['fields']['field_event_type']['element_class'] = 'lead';
$handler->display->display_options['fields']['field_event_type']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_event_type']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
/* Field: Field: Game */
$handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['fields']['field_game_warzone']['element_type'] = 'div';
$handler->display->display_options['fields']['field_game_warzone']['element_class'] = 'lead';
$handler->display->display_options['fields']['field_game_warzone']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_game_warzone']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_game_warzone']['element_default_classes'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
$handler->display->display_options['fields']['field_event_date']['element_class'] = 'lead';
$handler->display->display_options['fields']['field_event_date']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_event_date']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '1',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['element_type'] = 'div';
$handler->display->display_options['fields']['field_location']['element_class'] = 'lead';
$handler->display->display_options['fields']['field_location']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_location']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
/* Field: Content: Entry Fee */
$handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['element_type'] = 'div';
$handler->display->display_options['fields']['field_entry_fee']['element_class'] = 'lead';
$handler->display->display_options['fields']['field_entry_fee']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_entry_fee']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['field_entry_fee']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_entry_fee']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_entry_fee']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_entry_fee']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website']['id'] = 'field_website';
$handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website']['label'] = 'More Info';
$handler->display->display_options['fields']['field_website']['element_type'] = 'div';
$handler->display->display_options['fields']['field_website']['element_class'] = 'lead';
$handler->display->display_options['fields']['field_website']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_website']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_website']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
/* Field: Content: Available slots */
$handler->display->display_options['fields']['registration_available_slots']['id'] = 'registration_available_slots';
$handler->display->display_options['fields']['registration_available_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_available_slots']['field'] = 'registration_available_slots';
$handler->display->display_options['fields']['registration_available_slots']['element_type'] = 'div';
$handler->display->display_options['fields']['registration_available_slots']['element_class'] = 'lead';
$handler->display->display_options['fields']['registration_available_slots']['element_label_type'] = 'span';
$handler->display->display_options['fields']['registration_available_slots']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['registration_available_slots']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['registration_available_slots']['unlimited_text'] = 'Unlimited';
/* Field: Content: Used slots */
$handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['label'] = 'Registered Players';
$handler->display->display_options['fields']['registration_used_slots']['element_type'] = 'div';
$handler->display->display_options['fields']['registration_used_slots']['element_class'] = 'lead';
$handler->display->display_options['fields']['registration_used_slots']['element_label_type'] = 'span';
$handler->display->display_options['fields']['registration_used_slots']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['registration_used_slots']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['registration_used_slots']['element_default_classes'] = FALSE;
/* Field: Content: Registration Deadline */
$handler->display->display_options['fields']['field_registration_deadline']['id'] = 'field_registration_deadline';
$handler->display->display_options['fields']['field_registration_deadline']['table'] = 'field_data_field_registration_deadline';
$handler->display->display_options['fields']['field_registration_deadline']['field'] = 'field_registration_deadline';
$handler->display->display_options['fields']['field_registration_deadline']['element_type'] = 'div';
$handler->display->display_options['fields']['field_registration_deadline']['element_class'] = 'lead';
$handler->display->display_options['fields']['field_registration_deadline']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_registration_deadline']['element_label_class'] = 'text-muted';
$handler->display->display_options['fields']['field_registration_deadline']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_registration_deadline']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_registration_deadline']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_registration_deadline']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_registration_deadline']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
/* Field: Content: Register link */
$handler->display->display_options['fields']['register_link']['id'] = 'register_link';
$handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['register_link']['field'] = 'register_link';
$handler->display->display_options['fields']['register_link']['label'] = '';
$handler->display->display_options['fields']['register_link']['element_type'] = 'div';
$handler->display->display_options['fields']['register_link']['element_class'] = 'lead';
$handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['register_link']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['register_link']['text'] = 'Register';
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Organizer */
$handler = $view->new_display('panel_pane', 'Organizer', 'panel_pane_9');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Organizer';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Flags: follow */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'uid';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['exclude'] = TRUE;
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['exclude'] = TRUE;
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$target = user_load($row-uid);
$url = privatemsg_get_link($target);
$link = l(t(\'Message\'), $url, array(\'query\' => drupal_get_destination()));
print $link;
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
  <div class="pull-left iconbuffer">[picture]</div>
  <div class="media-body">
    <h4 class="media-heading">[name]</h4>
    [ops] [php] 
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Campaign Brief */
$handler = $view->new_display('panel_pane', 'Campaign Brief', 'panel_pane_10');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Campaign Brief';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail iconbuffer';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'user_avatar',
  'image_link' => 'content',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Event Details</h3>
</div>
<div class="panel-body">
[body]
</div>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Faction List */
$handler = $view->new_display('panel_pane', 'Faction List', 'panel_pane_11');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Belligerents';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_entityform']['id'] = 'reverse_field_event_link_entityform';
$handler->display->display_options['relationships']['reverse_field_event_link_entityform']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_entityform']['field'] = 'reverse_field_event_link_entityform';
$handler->display->display_options['relationships']['reverse_field_event_link_entityform']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Entityform Submission: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'reverse_field_event_link_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_event_link_entityform';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'entityform';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_event_link_entityform';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'warzone_campaign_factions' => 'warzone_campaign_factions',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Victor */
$handler = $view->new_display('panel_pane', 'Victor', 'panel_pane_12');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Victor */
$handler->display->display_options['fields']['field_victor_narrative']['id'] = 'field_victor_narrative';
$handler->display->display_options['fields']['field_victor_narrative']['table'] = 'field_data_field_victor_narrative';
$handler->display->display_options['fields']['field_victor_narrative']['field'] = 'field_victor_narrative';
$handler->display->display_options['fields']['field_victor_narrative']['label'] = '';
$handler->display->display_options['fields']['field_victor_narrative']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_victor_narrative']['alter']['text'] = '        <div class="panel panel-overview">
            <div class="overview-icon bg-success">
                <i class="glyphicon glyphicon-flag" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[field_victor_narrative]</h2>
                <div class="text-muted">Victor</div>
            </div>
        </div>';
$handler->display->display_options['fields']['field_victor_narrative']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_victor_narrative']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_victor_narrative']['type'] = 'field_hidden_text_plain';
/* Field: Content: Used slots */
$handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['label'] = 'AUTOMATIC';
$handler->display->display_options['fields']['registration_used_slots']['exclude'] = TRUE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
  3 => 'date',
  4 => 'number',
  5 => 'taxonomy',
  6 => 'node_reference',
  7 => 'views_content',
  8 => 'text',
  9 => 'geofield',
  10 => 'list',
  11 => 'link',
  12 => 'field_hidden',
);
