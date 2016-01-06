<?php
/**
 * @file
 * views_view.warzone_campaign_timeline.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'warzone_campaign_timeline';
$view->description = 'Generates the Chronicle page and views for Narrative Campaign instances. Should be in War Zones and not Narrative Campaign.';
$view->tag = 'War Zones 4.1, Narrative Campaigns 1.0';
$view->base_table = 'message';
$view->human_name = 'War Zone: Campaign: Timeline';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'timeline-wrapper';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'infinite_scroll';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'timeline-item';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['required'] = TRUE;
/* Field: Message: Render message (Get text) */
$handler->display->display_options['fields']['message_render']['id'] = 'message_render';
$handler->display->display_options['fields']['message_render']['table'] = 'message';
$handler->display->display_options['fields']['message_render']['field'] = 'message_render';
$handler->display->display_options['fields']['message_render']['label'] = '';
$handler->display->display_options['fields']['message_render']['exclude'] = TRUE;
$handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['message_render']['partials'] = 0;
$handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'uc_product_list',
  'image_link' => '',
);
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'message';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
$handler->display->display_options['fields']['timestamp_1']['table'] = 'message';
$handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_1']['label'] = '';
$handler->display->display_options['fields']['timestamp_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp_1']['date_format'] = 'time ago';
$handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
/* Field: Taxonomy term: Chronicle Icon */
$handler->display->display_options['fields']['field_chronicle_icon']['id'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['table'] = 'field_data_field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['field'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['label'] = '';
$handler->display->display_options['fields']['field_chronicle_icon']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_chronicle_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_chronicle_icon']['type'] = 'text_plain';
/* Field: Entityform Submission: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_title_chronicle']['type'] = 'text_plain';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="timeline-icon bg-grey">
  <span class="glyphicon glyphicon-[field_chronicle_icon]" aria-hidden="true"></span>
</div>
<div class="time">
[timestamp]
</div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'timeline-info';
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="panel-heading">
[field_title_chronicle]
<small class="pull-right text-muted">[timestamp_1]</small>
</div>
<div class="panel-body">
[message_render]
</div>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'panel panel-default timeline-panel';
/* Sort criterion: Message: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'message';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);
/* Filter criterion: Message: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'message';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'campaign_reported_battle' => 'campaign_reported_battle',
);

/* Display: Chronicle Page */
$handler = $view->new_display('panel_pane', 'Chronicle Page', 'panel_pane_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'infinite_scroll';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'message',
  2 => 'image',
  3 => 'text',
  4 => 'views_content',
);
