<?php
/**
 * @file
 * views_view.achievements_main_messages.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'achievements_main_messages';
$view->description = 'Displays activity stream for achievements.  May be obsolete with the new message stream.';
$view->tag = 'Achievements 3.0, Consolidate';
$view->base_table = 'message';
$view->human_name = 'Achievements: Main: Messages';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Recently Awarded Achievements';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
$handler->display->display_options['style_options']['image_field'] = 'field_image';
$handler->display->display_options['style_options']['heading_field'] = 'message_render';
$handler->display->display_options['style_options']['body_field'] = 'timestamp';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['relationships']['field_stream_node_ref_target_id']['label'] = 'Achievement';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_stream_node_ref_target_id';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left iconbuffer';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => 'content',
);
/* Field: Message: Render message (Get text) */
$handler->display->display_options['fields']['message_render']['id'] = 'message_render';
$handler->display->display_options['fields']['message_render']['table'] = 'message';
$handler->display->display_options['fields']['message_render']['field'] = 'message_render';
$handler->display->display_options['fields']['message_render']['label'] = '';
$handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['message_render']['partials'] = 0;
$handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
/* Field: Message: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'message';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        [field_image]
    </div>
    <div class="media-body">
        [message_render]
        <div class="text-muted">[timestamp]</div>
    </div>
</div>';
$handler->display->display_options['fields']['timestamp']['element_type'] = 'span';
$handler->display->display_options['fields']['timestamp']['element_class'] = 'text-muted';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
/* Sort criterion: Message: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'message';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
/* Filter criterion: Message: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'message';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'stream_player_earns_an_achievement' => 'stream_player_earns_an_achievement',
);

/* Display: Recent Achievements */
$handler = $view->new_display('panel_pane', 'Recent Achievements', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'Achievements';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'message',
  2 => 'image',
  3 => 'views_content',
);
