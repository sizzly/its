<?php
/**
 * @file
 * views_view.models_all_timeline.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'models_all_timeline';
$view->description = 'Should probably be consolidated with the Core version of this display.';
$view->tag = 'Model Projects 1.0, Consolidate';
$view->base_table = 'message';
$view->human_name = 'Models: All: Timeline';
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
$handler->display->display_options['pager']['options']['offset'] = '5';
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
$handler->display->display_options['relationships']['field_update_reference_target_id']['id'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['table'] = 'field_data_field_update_reference';
$handler->display->display_options['relationships']['field_update_reference_target_id']['field'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['label'] = 'status_update';
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
/* Field: Entityform Submission: Rendered Entityform Submission */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_update_reference_target_id';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Entityform Submission: Write something... */
$handler->display->display_options['fields']['field_status_body']['id'] = 'field_status_body';
$handler->display->display_options['fields']['field_status_body']['table'] = 'field_data_field_status_body';
$handler->display->display_options['fields']['field_status_body']['field'] = 'field_status_body';
$handler->display->display_options['fields']['field_status_body']['relationship'] = 'field_update_reference_target_id';
$handler->display->display_options['fields']['field_status_body']['label'] = '';
$handler->display->display_options['fields']['field_status_body']['exclude'] = TRUE;
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
$handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
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
                <i class="fa fa-file-text-o"></i>
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
            <div class="panel-footer">
            <p><a class="btn btn-primary" role="button" data-toggle="collapse" href="#collapseForm-[mid]" aria-expanded="false" aria-controls="collapseForm-[mid]">
  Reply
</a>
</p>
                [field_reply_form]
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
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
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
$handler->display->display_options['pane_category']['name'] = 'Model Projects';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'message',
  2 => 'reply',
  3 => 'text',
  4 => 'views_content',
);
