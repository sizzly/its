<?php
/**
 * @file
 * views_view.user_recent_campaigns.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'user_recent_campaigns';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'User - Recent Campaigns';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Recent Campaigns';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No campaign activity detected.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: User: Content authored */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'users';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['relationship'] = 'uid';
$handler->display->display_options['relationships']['field_event_link_target_id']['required'] = TRUE;
/* Relationship: Content: Campaign Badge (field_campaign_badge:fid) */
$handler->display->display_options['relationships']['field_campaign_badge_fid']['id'] = 'field_campaign_badge_fid';
$handler->display->display_options['relationships']['field_campaign_badge_fid']['table'] = 'field_data_field_campaign_badge';
$handler->display->display_options['relationships']['field_campaign_badge_fid']['field'] = 'field_campaign_badge_fid';
$handler->display->display_options['relationships']['field_campaign_badge_fid']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_campaign_badge_fid']['required'] = TRUE;
/* Field: Content: Campaign Badge */
$handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
$handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
  'image_style' => '70x70-square',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_campaign_badge']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['field_campaign_badge']['group_columns'] = array(
  'fid' => 'fid',
);
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'day';
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['argument_input'] = array(
  'uid' => array(
    'type' => 'context',
    'context' => 'entity:user.uid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'User: Uid',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'image',
  3 => 'views_content',
);
