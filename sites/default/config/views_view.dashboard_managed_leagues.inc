<?php
/**
 * @file
 * views_view.dashboard_managed_leagues.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'dashboard_managed_leagues';
$view->description = 'Generates a list of War Zones the player has made';
$view->tag = 'War Zones 4.1';
$view->base_table = 'node';
$view->human_name = 'War Zone: All: Dashboard Managed War Zones';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Manage War Zones';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  2 => '2',
  9 => '9',
  8 => '8',
  7 => '7',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_campaign_badge' => 'field_campaign_badge',
  'title' => 'title',
  'field_status' => 'field_status',
  'field_league_type' => 'field_league_type',
  'field_warzone_game' => 'field_warzone_game',
  'nid' => 'nid',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_campaign_badge' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_league_type' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_warzone_game' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 0,
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'strong';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Used slots */
$handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
$handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
$handler->display->display_options['fields']['registration_used_slots']['label'] = 'Players';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'Manage';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'Manage';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/management';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);

/* Display: Manage Leagues */
$handler = $view->new_display('panel_pane', 'Manage Leagues', 'panel_pane_1');
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
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'war_zone_league' => 'war_zone_league',
  'league' => 'league',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_tournament' => 'war_zone_tournament',
);
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['value'] = array(
  0 => '0',
  3 => '3',
  5 => '5',
);
$handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'dashboard/manage-war-zones';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Manage War Zones';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'list',
  3 => 'taxonomy',
  4 => 'views_content',
);
