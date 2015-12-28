<?php
/**
 * @file
 * views_view.home_page_authenticated_messages.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'home_page_authenticated_messages';
$view->description = 'Generates a list of messages - maybe deprecated by Core: Node: Messages';
$view->tag = 'Home Page 3.0';
$view->base_table = 'message';
$view->human_name = 'Home Page: Authenticated: Messages';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'panel panel-default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_update_reference_target_id']['id'] = 'field_update_reference_target_id';
$handler->display->display_options['relationships']['field_update_reference_target_id']['table'] = 'field_data_field_update_reference';
$handler->display->display_options['relationships']['field_update_reference_target_id']['field'] = 'field_update_reference_target_id';
/* Field: Entityform Submission: Write something... */
$handler->display->display_options['fields']['field_status_body']['id'] = 'field_status_body';
$handler->display->display_options['fields']['field_status_body']['table'] = 'field_data_field_status_body';
$handler->display->display_options['fields']['field_status_body']['field'] = 'field_status_body';
$handler->display->display_options['fields']['field_status_body']['relationship'] = 'field_update_reference_target_id';
$handler->display->display_options['fields']['field_status_body']['label'] = '';
$handler->display->display_options['fields']['field_status_body']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_status_body']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_status_body]
<div class="panel panel-default">
  <div class="panel-body">
Salute  Comment  Share
  </div>
</div>
[field_status_comments]
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Message: Render message (Get text) */
$handler->display->display_options['fields']['message_render']['id'] = 'message_render';
$handler->display->display_options['fields']['message_render']['table'] = 'message';
$handler->display->display_options['fields']['message_render']['field'] = 'message_render';
$handler->display->display_options['fields']['message_render']['label'] = '';
$handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['message_render']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['message_render']['element_wrapper_class'] = 'panel-heading';
$handler->display->display_options['fields']['message_render']['partials'] = 0;
$handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
/* Field: Message: Stream Node */
$handler->display->display_options['fields']['field_stream_node_ref']['id'] = 'field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['field'] = 'field_stream_node_ref';
$handler->display->display_options['fields']['field_stream_node_ref']['label'] = '';
$handler->display->display_options['fields']['field_stream_node_ref']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_stream_node_ref']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_stream_node_ref']['element_wrapper_class'] = 'panel-body';
$handler->display->display_options['fields']['field_stream_node_ref']['empty'] = '[nothing]';
$handler->display->display_options['fields']['field_stream_node_ref']['type'] = 'entityreference_entity_view';
$handler->display->display_options['fields']['field_stream_node_ref']['settings'] = array(
  'view_mode' => 'teaser',
  'links' => 1,
);
/* Sort criterion: Message: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'message';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'Home';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'message',
  2 => 'text',
  3 => 'entityreference',
  4 => 'views_content',
);
