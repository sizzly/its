<?php
/**
 * @file
 * its_activity_feed.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function its_activity_feed_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'messages_all_lists_of_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Messages: All: Lists of Messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Actions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_timeline_icon';
  $handler->display->display_options['style_options']['heading_field'] = 'message_render';
  $handler->display->display_options['style_options']['body_field'] = 'timestamp';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['label'] = 'Node Reference';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['required'] = TRUE;
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
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  /* Field: Message: Timeline Icon */
  $handler->display->display_options['fields']['field_timeline_icon']['id'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['table'] = 'field_data_field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['field'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['label'] = '';
  $handler->display->display_options['fields']['field_timeline_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_timeline_icon']['alter']['text'] = '        <div class="activity-icon small">
            <i class="fa [field_timeline_icon]"></i>
        </div>';
  $handler->display->display_options['fields']['field_timeline_icon']['element_label_colon'] = FALSE;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

  /* Display: Army Profiles */
  $handler = $view->new_display('panel_pane', 'Army Profiles', 'panel_pane_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'army_profile' => 'army_profile',
  );
  $handler->display->display_options['pane_category']['name'] = 'Army Profiles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['messages_all_lists_of_messages'] = $view;

  return $export;
}
