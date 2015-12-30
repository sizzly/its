<?php
/**
 * @file
 * views_view.core_all_node_timeline.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'core_all_node_timeline';
$view->description = 'Generates the global timeline for any node ';
$view->tag = 'Core 3.0';
$view->base_table = 'message';
$view->human_name = 'Core: All: Node Timeline';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Recent Activity';
$handler->display->display_options['css_class'] = 'timeline-wrapper';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'timestamp_2',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['row_class'] = 'timeline-item';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['id'] = 'field_associated_nodes_stream_target_id';
$handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['table'] = 'field_data_field_associated_nodes_stream';
$handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['field'] = 'field_associated_nodes_stream_target_id';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_update_reference_target_id']['id'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['table'] = 'field_data_field_update_reference';
$handler->display->display_options['relationships']['field_update_reference_target_id']['field'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['label'] = 'status_update';
/* Relationship: Flags: messages_all_salute */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'message';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'messages_all_salute';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['id'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['table'] = 'field_data_field_message_comment_reference';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['field'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['label'] = 'comment';
/* Field: Message: Stream Node */
$handler->display->display_options['fields']['field_stream_node_ref']['id'] = 'field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['field'] = 'field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['label'] = '';
$handler->display->display_options['fields']['field_stream_node_ref']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_stream_node_ref']['alter']['text'] = '<small class="text-muted">in reply to [field_stream_node_ref]</small>';
$handler->display->display_options['fields']['field_stream_node_ref']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_stream_node_ref']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_stream_node_ref']['type'] = 'entityreference_entity_view';
$handler->display->display_options['fields']['field_stream_node_ref']['settings'] = array(
  'view_mode' => 'teaser',
  'links' => 1,
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['label'] = '';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['expression']['alter']['text'] = '[field_stream_node_ref]
';
$handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['expression']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['expression']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '0';
$handler->display->display_options['fields']['expression']['expression'] = '!1 - [nid]';
/* Field: Comment: Rendered Comment */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_comment';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['empty'] = '[expression]';
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Entityform Submission: Rendered Entityform Submission */
$handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
$handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_entityform';
$handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'field_update_reference_target_id';
$handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
$handler->display->display_options['fields']['rendered_entity_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity_1']['empty'] = '[rendered_entity]';
$handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
/* Field: Message: Timeline Icon */
$handler->display->display_options['fields']['field_timeline_icon']['id'] = 'field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['table'] = 'field_data_field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['field'] = 'field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['label'] = '';
$handler->display->display_options['fields']['field_timeline_icon']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_timeline_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_timeline_icon']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_timeline_icon']['empty'] = 'fa-plus-square';
/* Field: Field: Reply */
$handler->display->display_options['fields']['field_reply_form']['id'] = 'field_reply_form';
$handler->display->display_options['fields']['field_reply_form']['table'] = 'field_data_field_reply_form';
$handler->display->display_options['fields']['field_reply_form']['field'] = 'field_reply_form';
$handler->display->display_options['fields']['field_reply_form']['label'] = '';
$handler->display->display_options['fields']['field_reply_form']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_reply_form']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_reply_form']['click_sort_column'] = 'access';
/* Field: Message: Message ID */
$handler->display->display_options['fields']['mid']['id'] = 'mid';
$handler->display->display_options['fields']['mid']['table'] = 'message';
$handler->display->display_options['fields']['mid']['field'] = 'mid';
$handler->display->display_options['fields']['mid']['label'] = '';
$handler->display->display_options['fields']['mid']['exclude'] = TRUE;
$handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['mid']['separator'] = '';
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'message';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
$handler->display->display_options['fields']['timestamp_1']['table'] = 'message';
$handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_1']['label'] = '';
$handler->display->display_options['fields']['timestamp_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp_1']['alter']['text'] = '<div class="timeline-icon bg-grey">
<i class="fa fa-file-text-o"></i>
</div>
<div class="time">[timestamp_1]</div>';
$handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['timestamp_1']['element_wrapper_class'] = 'timeline-info';
$handler->display->display_options['fields']['timestamp_1']['date_format'] = 'event_time';
$handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
/* Field: Message: Render message (Get text) */
$handler->display->display_options['fields']['message_render']['id'] = 'message_render';
$handler->display->display_options['fields']['message_render']['table'] = 'message';
$handler->display->display_options['fields']['message_render']['field'] = 'message_render';
$handler->display->display_options['fields']['message_render']['label'] = '';
$handler->display->display_options['fields']['message_render']['exclude'] = TRUE;
$handler->display->display_options['fields']['message_render']['alter']['text'] = '<div class="panel panel-default timeline-panel">
  <div class="panel-heading">
     [message_render]
     <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
  </div>
</div>';
$handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['message_render']['partials'] = 0;
$handler->display->display_options['fields']['message_render']['partials_delta'] = '1';
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp_2']['id'] = 'timestamp_2';
$handler->display->display_options['fields']['timestamp_2']['table'] = 'message';
$handler->display->display_options['fields']['timestamp_2']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_2']['label'] = '';
$handler->display->display_options['fields']['timestamp_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp_2']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['timestamp_2']['alter']['text'] = '<div class="timeline-date">
[timestamp_2]
</div>';
$handler->display->display_options['fields']['timestamp_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp_2']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['timestamp_2']['element_wrapper_class'] = 'timeline-date';
$handler->display->display_options['fields']['timestamp_2']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['timestamp_2']['date_format'] = 'uc_store';
$handler->display->display_options['fields']['timestamp_2']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp_2']['format_date_sql'] = 1;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="timeline-info">
            <div class="timeline-icon bg-grey">
                <i class="fa [field_timeline_icon]"></i>
            </div>
            <div class="time">[timestamp_1]</div>
        </div>
        <div class="panel panel-default timeline-panel">
            <div class="panel-heading">
                [message_render]
                <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
            </div>
            <div class="panel-body">
            [rendered_entity_1]
            </div>
        </div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Message: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'message';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_associated_nodes_stream_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['exception']['value'] = '';
$handler->display->display_options['arguments']['nid']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['nid']['breadcrumb'] = 'All Activity';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
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
$handler->display->display_options['pane_category']['name'] = 'Node';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'node/%/timeline';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Timeline';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 1;

/* Display: Home Page */
$handler = $view->new_display('panel_pane', 'Home Page', 'panel_pane_2');
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_update_reference_target_id']['id'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['table'] = 'field_data_field_update_reference';
$handler->display->display_options['relationships']['field_update_reference_target_id']['field'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['label'] = 'status_update';
/* Relationship: Flags: messages_all_salute */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'message';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'messages_all_salute';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['id'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['table'] = 'field_data_field_message_comment_reference';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['field'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['label'] = 'comment';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['empty'] = '0';
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
$handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
$handler->display->display_options['fields']['rendered_entity_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
/* Field: Message: Stream Node */
$handler->display->display_options['fields']['field_stream_node_ref']['id'] = 'field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['field'] = 'field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['label'] = '';
$handler->display->display_options['fields']['field_stream_node_ref']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_stream_node_ref']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_stream_node_ref']['alter']['text'] = '<small class="text-muted">in reply to [field_stream_node_ref]</small>';
$handler->display->display_options['fields']['field_stream_node_ref']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_stream_node_ref']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_stream_node_ref']['settings'] = array(
  'link' => 1,
);
/* Field: Comment: Rendered Comment */
$handler->display->display_options['fields']['rendered_entity_2']['id'] = 'rendered_entity_2';
$handler->display->display_options['fields']['rendered_entity_2']['table'] = 'views_entity_comment';
$handler->display->display_options['fields']['rendered_entity_2']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity_2']['relationship'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['fields']['rendered_entity_2']['label'] = '';
$handler->display->display_options['fields']['rendered_entity_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity_2']['empty'] = '[rendered_entity_1]';
$handler->display->display_options['fields']['rendered_entity_2']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity_2']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity_2']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity_2']['bypass_access'] = 0;
/* Field: Entityform Submission: Rendered Entityform Submission */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_update_reference_target_id';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['rendered_entity']['alter']['text'] = '[rendered_entity]

';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['empty'] = '[rendered_entity_2]';
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['exclude'] = TRUE;
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
/* Field: Message: Timeline Icon */
$handler->display->display_options['fields']['field_timeline_icon']['id'] = 'field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['table'] = 'field_data_field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['field'] = 'field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['label'] = '';
$handler->display->display_options['fields']['field_timeline_icon']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_timeline_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_timeline_icon']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_timeline_icon']['empty'] = 'fa-plus-square';
/* Field: Message: Message ID */
$handler->display->display_options['fields']['mid']['id'] = 'mid';
$handler->display->display_options['fields']['mid']['table'] = 'message';
$handler->display->display_options['fields']['mid']['field'] = 'mid';
$handler->display->display_options['fields']['mid']['label'] = '';
$handler->display->display_options['fields']['mid']['exclude'] = TRUE;
$handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['mid']['separator'] = '';
/* Field: Entityform Submission: Write something... */
$handler->display->display_options['fields']['field_status_body']['id'] = 'field_status_body';
$handler->display->display_options['fields']['field_status_body']['table'] = 'field_data_field_status_body';
$handler->display->display_options['fields']['field_status_body']['field'] = 'field_status_body';
$handler->display->display_options['fields']['field_status_body']['relationship'] = 'field_update_reference_target_id';
$handler->display->display_options['fields']['field_status_body']['label'] = '';
$handler->display->display_options['fields']['field_status_body']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_status_body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_status_body']['alter']['text'] = '<div class="panel-body">
[rendered_entity]
[field_stream_node_ref]
</div>';
$handler->display->display_options['fields']['field_status_body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_status_body']['hide_empty'] = TRUE;
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'message';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
$handler->display->display_options['fields']['timestamp_1']['table'] = 'message';
$handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_1']['label'] = '';
$handler->display->display_options['fields']['timestamp_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp_1']['alter']['text'] = '<div class="timeline-icon bg-grey">
<i class="fa fa-file-text-o"></i>
</div>
<div class="time">[timestamp_1]</div>';
$handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['timestamp_1']['element_wrapper_class'] = 'timeline-info';
$handler->display->display_options['fields']['timestamp_1']['date_format'] = 'event_time';
$handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
/* Field: Message: Render message (Get text) */
$handler->display->display_options['fields']['message_render']['id'] = 'message_render';
$handler->display->display_options['fields']['message_render']['table'] = 'message';
$handler->display->display_options['fields']['message_render']['field'] = 'message_render';
$handler->display->display_options['fields']['message_render']['label'] = '';
$handler->display->display_options['fields']['message_render']['exclude'] = TRUE;
$handler->display->display_options['fields']['message_render']['alter']['text'] = '<div class="panel panel-default timeline-panel">
  <div class="panel-heading">
     [message_render]
     <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
  </div>
</div>';
$handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['message_render']['partials'] = 0;
$handler->display->display_options['fields']['message_render']['partials_delta'] = '1';
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp_2']['id'] = 'timestamp_2';
$handler->display->display_options['fields']['timestamp_2']['table'] = 'message';
$handler->display->display_options['fields']['timestamp_2']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_2']['label'] = '';
$handler->display->display_options['fields']['timestamp_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp_2']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['timestamp_2']['alter']['text'] = '<div class="timeline-date">
[timestamp_2]
</div>';
$handler->display->display_options['fields']['timestamp_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp_2']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['timestamp_2']['element_wrapper_class'] = 'timeline-date';
$handler->display->display_options['fields']['timestamp_2']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['timestamp_2']['date_format'] = 'uc_store';
$handler->display->display_options['fields']['timestamp_2']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp_2']['format_date_sql'] = 1;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="timeline-info">
            <div class="timeline-icon bg-grey">
                <i class="fa [field_timeline_icon]"></i>
            </div>
            <div class="time">[timestamp_1]</div>
        </div>
        <div class="panel panel-default timeline-panel">
            <div class="panel-heading">
                [message_render]
                <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
            </div>
            <div class="panel-body">
            [rendered_entity]
            </div>
        </div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Home Page';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Term Page */
$handler = $view->new_display('panel_pane', 'Term Page', 'panel_pane_3');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['id'] = 'field_associated_nodes_stream_target_id';
$handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['table'] = 'field_data_field_associated_nodes_stream';
$handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['field'] = 'field_associated_nodes_stream_target_id';
$handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['required'] = TRUE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_update_reference_target_id']['id'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['table'] = 'field_data_field_update_reference';
$handler->display->display_options['relationships']['field_update_reference_target_id']['field'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['label'] = 'status_update';
/* Relationship: Flags: messages_all_salute */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'message';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'messages_all_salute';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['id'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['table'] = 'field_data_field_message_comment_reference';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['field'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['relationships']['field_message_comment_reference_target_id']['label'] = 'comment';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['relationship'] = 'field_associated_nodes_stream_target_id';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
$handler->display->display_options['pane_category']['name'] = 'Term';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Recent Node Activity Block */
$handler = $view->new_display('block', 'Recent Node Activity Block', 'block_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'Timeline';
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['link_url'] = 'node/!1/timeline';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
$handler->display->display_options['style_options']['image_field'] = 'field_timeline_icon';
$handler->display->display_options['style_options']['heading_field'] = '';
$handler->display->display_options['style_options']['body_field'] = 'message_render';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Message: Stream Node */
$handler->display->display_options['fields']['field_stream_node_ref']['id'] = 'field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['field'] = 'field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['label'] = '';
$handler->display->display_options['fields']['field_stream_node_ref']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_stream_node_ref']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_stream_node_ref']['alter']['text'] = '<small class="text-muted">in reply to [field_stream_node_ref]</small>';
$handler->display->display_options['fields']['field_stream_node_ref']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_stream_node_ref']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_stream_node_ref']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
$handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'field_associated_nodes_stream_target_id';
$handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
$handler->display->display_options['fields']['rendered_entity_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
/* Field: Comment: Comment */
$handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
$handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
$handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
$handler->display->display_options['fields']['comment_body']['relationship'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['fields']['comment_body']['label'] = '';
$handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
$handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comment_body']['empty'] = '[rendered_entity_1]';
/* Field: Comment: Rendered Comment */
$handler->display->display_options['fields']['rendered_entity_2']['id'] = 'rendered_entity_2';
$handler->display->display_options['fields']['rendered_entity_2']['table'] = 'views_entity_comment';
$handler->display->display_options['fields']['rendered_entity_2']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity_2']['relationship'] = 'field_message_comment_reference_target_id';
$handler->display->display_options['fields']['rendered_entity_2']['label'] = '';
$handler->display->display_options['fields']['rendered_entity_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity_2']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['rendered_entity_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity_2']['empty'] = '[rendered_entity_1]';
$handler->display->display_options['fields']['rendered_entity_2']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity_2']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity_2']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity_2']['bypass_access'] = 0;
/* Field: Entityform Submission: Rendered Entityform Submission */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_update_reference_target_id';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['rendered_entity']['alter']['text'] = '<div class="panel-body">
[rendered_entity]
[field_stream_node_ref]
</div>';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['empty'] = '[rendered_entity_2]';
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['exclude'] = TRUE;
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
/* Field: Message: Timeline Icon */
$handler->display->display_options['fields']['field_timeline_icon']['id'] = 'field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['table'] = 'field_data_field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['field'] = 'field_timeline_icon';
$handler->display->display_options['fields']['field_timeline_icon']['label'] = '';
$handler->display->display_options['fields']['field_timeline_icon']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_timeline_icon']['alter']['text'] = '<i class="fa [field_timeline_icon]"></i>

';
$handler->display->display_options['fields']['field_timeline_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_timeline_icon']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_timeline_icon']['empty'] = '<i class="fa fa-plus-square"></i>';
/* Field: Field: Reply */
$handler->display->display_options['fields']['field_reply_form']['id'] = 'field_reply_form';
$handler->display->display_options['fields']['field_reply_form']['table'] = 'field_data_field_reply_form';
$handler->display->display_options['fields']['field_reply_form']['field'] = 'field_reply_form';
$handler->display->display_options['fields']['field_reply_form']['label'] = '';
$handler->display->display_options['fields']['field_reply_form']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_reply_form']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_reply_form']['click_sort_column'] = 'access';
/* Field: Message: Message ID */
$handler->display->display_options['fields']['mid']['id'] = 'mid';
$handler->display->display_options['fields']['mid']['table'] = 'message';
$handler->display->display_options['fields']['mid']['field'] = 'mid';
$handler->display->display_options['fields']['mid']['label'] = '';
$handler->display->display_options['fields']['mid']['exclude'] = TRUE;
$handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['mid']['separator'] = '';
/* Field: Entityform Submission: Write something... */
$handler->display->display_options['fields']['field_status_body']['id'] = 'field_status_body';
$handler->display->display_options['fields']['field_status_body']['table'] = 'field_data_field_status_body';
$handler->display->display_options['fields']['field_status_body']['field'] = 'field_status_body';
$handler->display->display_options['fields']['field_status_body']['relationship'] = 'field_update_reference_target_id';
$handler->display->display_options['fields']['field_status_body']['label'] = '';
$handler->display->display_options['fields']['field_status_body']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_status_body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_status_body']['alter']['text'] = '<div class="panel-body">
[rendered_entity]
[field_stream_node_ref]
</div>';
$handler->display->display_options['fields']['field_status_body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_status_body']['hide_empty'] = TRUE;
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'message';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
$handler->display->display_options['fields']['timestamp_1']['table'] = 'message';
$handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_1']['label'] = '';
$handler->display->display_options['fields']['timestamp_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp_1']['alter']['text'] = '<div class="timeline-icon bg-grey">
<i class="fa fa-file-text-o"></i>
</div>
<div class="time">[timestamp_1]</div>';
$handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['timestamp_1']['element_wrapper_class'] = 'timeline-info';
$handler->display->display_options['fields']['timestamp_1']['date_format'] = 'event_time';
$handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
/* Field: Message: Render message (Get text) */
$handler->display->display_options['fields']['message_render']['id'] = 'message_render';
$handler->display->display_options['fields']['message_render']['table'] = 'message';
$handler->display->display_options['fields']['message_render']['field'] = 'message_render';
$handler->display->display_options['fields']['message_render']['label'] = '';
$handler->display->display_options['fields']['message_render']['exclude'] = TRUE;
$handler->display->display_options['fields']['message_render']['alter']['text'] = '<div class="panel panel-default timeline-panel">
  <div class="panel-heading">
     [message_render]
     <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
  </div>
</div>';
$handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['message_render']['partials'] = 0;
$handler->display->display_options['fields']['message_render']['partials_delta'] = '1';
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp_2']['id'] = 'timestamp_2';
$handler->display->display_options['fields']['timestamp_2']['table'] = 'message';
$handler->display->display_options['fields']['timestamp_2']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_2']['label'] = '';
$handler->display->display_options['fields']['timestamp_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp_2']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['timestamp_2']['alter']['text'] = '<div class="timeline-date">
[timestamp_2]
</div>';
$handler->display->display_options['fields']['timestamp_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp_2']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['timestamp_2']['element_wrapper_class'] = 'timeline-date';
$handler->display->display_options['fields']['timestamp_2']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['timestamp_2']['date_format'] = 'uc_store';
$handler->display->display_options['fields']['timestamp_2']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp_2']['format_date_sql'] = 1;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="timeline-info">
            <div class="timeline-icon bg-grey">
                <i class="fa [field_timeline_icon]"></i>
            </div>
            <div class="time">[timestamp_1]</div>
        </div>
        <div class="panel panel-default timeline-panel">
            <div class="panel-heading">
                [message_render]
                <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
            </div>
            [rendered_entity]

            <div class="panel-footer">
            <p><a class="btn btn-default btn-xs" role="button" data-toggle="collapse" href="#collapseForm-[mid]" aria-expanded="false" aria-controls="collapseForm-[mid]"><i class="fa fa-comment"></i> Reply</a> <i class="fa fa-flag"></i> [ops]
</p>
                [field_reply_form]
            </div>
        </div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

/* Display: Page 2 */
$handler = $view->new_display('page', 'Page 2', 'page_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'timestamp_2',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['row_class'] = 'timeline-item';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['path'] = 'TestMessages';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'message',
  2 => 'entityreference',
  3 => 'text',
  4 => 'reply',
  5 => 'views_content',
);
