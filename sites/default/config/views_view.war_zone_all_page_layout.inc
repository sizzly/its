<?php
/**
 * @file
 * views_view.war_zone_all_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_all_page_layout';
$view->description = 'General War Zone page layout elements.';
$view->tag = 'War Zones 4.1';
$view->base_table = 'node';
$view->human_name = 'War Zone: All: Page Layout';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
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
$handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
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
  'narrative_campaign' => 'narrative_campaign',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_league' => 'war_zone_league',
  'war_zone_tournament' => 'war_zone_tournament',
);

/* Display: Page Header */
$handler = $view->new_display('panel_pane', 'Page Header', 'panel_pane_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Campaign Badge */
$handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
$handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_campaign_badge']['type'] = 'lightbox2__lightbox__large__original';
$handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="thumbnail">[field_campaign_badge]</span>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Event Details */
$handler = $view->new_display('panel_pane', 'Event Details', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Event Details';
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
$handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
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
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['required'] = TRUE;
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Geolocation */
$handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
$handler->display->display_options['fields']['field_geolocation']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['field_geolocation']['label'] = '';
$handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_geolocation']['hide_empty'] = TRUE;
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
$handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="panel-footer">[field_location]</div>';
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
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
$handler->display->display_options['title'] = 'Recent Actions';
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
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="panel-body">
<div class="lead">No Recent Actions</div>
<p>This War Zone is still in <strong>Set Up</strong> mode.  No actions are generated until you open the War Zone for registration.</p>
</div>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['id'] = 'reverse_field_stream_node_ref_message';
$handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['field'] = 'reverse_field_stream_node_ref_message';
$handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['required'] = TRUE;
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
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Available slots */
$handler->display->display_options['fields']['registration_available_slots']['id'] = 'registration_available_slots';
$handler->display->display_options['fields']['registration_available_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_available_slots']['field'] = 'registration_available_slots';
$handler->display->display_options['fields']['registration_available_slots']['label'] = '';
$handler->display->display_options['fields']['registration_available_slots']['exclude'] = TRUE;
$handler->display->display_options['fields']['registration_available_slots']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['registration_available_slots']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['registration_available_slots']['unlimited_text'] = 'Unlimited';
/* Field: Content: Register link */
$handler->display->display_options['fields']['register_link']['id'] = 'register_link';
$handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['register_link']['field'] = 'register_link';
$handler->display->display_options['fields']['register_link']['label'] = '';
$handler->display->display_options['fields']['register_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['register_link']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-share"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[register_link]</strong>
        <div class="text-muted">Available Slots <span class="badge">[registration_available_slots]</span></div>
    </div>
</div>';
$handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['register_link']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['register_link']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['register_link']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['register_link']['text'] = 'Register';
/* Field: Field: Game */
$handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['label'] = '';
$handler->display->display_options['fields']['field_game_warzone']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_game_warzone']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-book"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_game_warzone]</strong>
        <div class="text-muted">Game System</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_game_warzone']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_game_warzone']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_game_warzone']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_game_warzone']['hide_empty'] = TRUE;
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['label'] = '';
$handler->display->display_options['fields']['field_event_type']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_type']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-tag"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_event_type]</strong>
        <div class="text-muted">Event Type</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_type']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_event_type']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_event_type']['hide_empty'] = TRUE;
/* Field: Content: Tournament Type */
$handler->display->display_options['fields']['field_tournament_type']['id'] = 'field_tournament_type';
$handler->display->display_options['fields']['field_tournament_type']['table'] = 'field_data_field_tournament_type';
$handler->display->display_options['fields']['field_tournament_type']['field'] = 'field_tournament_type';
$handler->display->display_options['fields']['field_tournament_type']['label'] = '';
$handler->display->display_options['fields']['field_tournament_type']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_tournament_type']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-clipboard"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_tournament_type]</strong>
        <div class="text-muted">Format</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_tournament_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_tournament_type']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_tournament_type']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_tournament_type']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_tournament_type']['hide_empty'] = TRUE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-calendar"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_event_date]</strong>

    </div>
</div>';
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_event_date']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '1',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
/* Field: Content: Entry Fee */
$handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
$handler->display->display_options['fields']['field_entry_fee']['label'] = '';
$handler->display->display_options['fields']['field_entry_fee']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_entry_fee']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-money"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_entry_fee]</strong>
        <div class="text-muted">Entry Free</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_entry_fee']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_entry_fee']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_entry_fee']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_entry_fee']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_entry_fee']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_entry_fee']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Address */
$handler->display->display_options['fields']['field_address_battlefield']['id'] = 'field_address_battlefield';
$handler->display->display_options['fields']['field_address_battlefield']['table'] = 'field_data_field_address_battlefield';
$handler->display->display_options['fields']['field_address_battlefield']['field'] = 'field_address_battlefield';
$handler->display->display_options['fields']['field_address_battlefield']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['field_address_battlefield']['label'] = '';
$handler->display->display_options['fields']['field_address_battlefield']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_address_battlefield']['element_label_colon'] = FALSE;
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['label'] = '';
$handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-map-marker"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_location]</strong>
        <div class="text-muted">[field_address_battlefield]</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_location']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
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
/* Field: Content: Used slots */
$handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['label'] = 'AUTOMATIC';
$handler->display->display_options['fields']['registration_used_slots']['exclude'] = TRUE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Organizer */
$handler = $view->new_display('panel_pane', 'Organizer', 'panel_pane_9');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Organizer';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'ops' => 'ops',
  'privatemsg_link' => 'privatemsg_link',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
$handler->display->display_options['fields']['picture']['element_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_class'] = 'pull-left iconbuffer';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['image_style'] = 'button';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'strong';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: User Badges: Badge Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'user_badges_badges';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
/* Field: Privatemsg: Send Privatemsg link */
$handler->display->display_options['fields']['privatemsg_link']['id'] = 'privatemsg_link';
$handler->display->display_options['fields']['privatemsg_link']['table'] = 'users';
$handler->display->display_options['fields']['privatemsg_link']['field'] = 'privatemsg_link';
$handler->display->display_options['fields']['privatemsg_link']['relationship'] = 'uid';
$handler->display->display_options['fields']['privatemsg_link']['label'] = '';
$handler->display->display_options['fields']['privatemsg_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['privatemsg_link']['text'] = 'Message';
$handler->display->display_options['fields']['privatemsg_link']['return'] = 1;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User Badges: Badge Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'user_badges_badges';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['value'] = 'level';
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Battle Count */
$handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['separator'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/!1/battle-list">
        <div class="panel panel-overview">
            <div class="overview-icon bg-danger">
                <i class="glyphicon glyphicon-fire" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[nid]</h2>
                <div class="text-muted">Battles</div>
            </div>
        </div>
</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['filters']['type']['value'] = array(
  'game_results' => 'game_results',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Sharethis and Tools */
$handler = $view->new_display('panel_pane', 'Sharethis and Tools', 'panel_pane_10');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'ops' => 'ops',
  'register_link' => 'register_link',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'glory';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: ShareThis Link */
$handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
$handler->display->display_options['fields']['sharethis']['table'] = 'node';
$handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
$handler->display->display_options['fields']['sharethis']['label'] = '';
$handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sharethis']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['sharethis']['element_wrapper_class'] = 'pull-right';
/* Field: Content: Add comment link */
$handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['table'] = 'node';
$handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['label'] = '';
$handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
/* Field: Content: Register link */
$handler->display->display_options['fields']['register_link']['id'] = 'register_link';
$handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['register_link']['field'] = 'register_link';
$handler->display->display_options['fields']['register_link']['label'] = '';
$handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['register_link']['text'] = 'Register';
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
  11 => 'location_cck',
  12 => 'link',
);
