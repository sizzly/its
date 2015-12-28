<?php
/**
 * @file
 * views_view.war_zone_all_player_dashboard.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_all_player_dashboard';
$view->description = 'War Zones a player is and has participated in.';
$view->tag = 'War Zones 4.1';
$view->base_table = 'node_registration';
$view->human_name = 'War Zone: All: Player Dashboard';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My War Zones';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'cancel_node_registration' => 'cancel_node_registration',
  'edit_node_registration' => 'cancel_node_registration',
  'field_event_type' => 'field_event_type',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'cancel_node_registration' => array(
    'align' => '',
    'separator' => ' | ',
    'empty_column' => 0,
  ),
  'edit_node_registration' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_event_type' => array(
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
/* Relationship: Node registration: Event node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'nid';
$handler->display->display_options['fields']['title']['label'] = 'War Zone';
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_event_type']['label'] = 'War Zone type';
$handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
$handler->display->display_options['fields']['field_status']['relationship'] = 'nid';
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_event_date']['label'] = 'Battle Commencement';
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'value',
  'multiple_number' => '1',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 1,
  'show_repeat_rule' => 'show',
);
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
/* Field: Node registration: Cancel link */
$handler->display->display_options['fields']['cancel_node_registration']['id'] = 'cancel_node_registration';
$handler->display->display_options['fields']['cancel_node_registration']['table'] = 'views_entity_node_registration';
$handler->display->display_options['fields']['cancel_node_registration']['field'] = 'cancel_node_registration';
$handler->display->display_options['fields']['cancel_node_registration']['label'] = 'Actions';
/* Sort criterion: Content: Date -  start date (field_event_date) */
$handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'nid';
$handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
/* Contextual filter: Node registration: User uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'all War Zones';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_status_value']['value'] = array(
  3 => '3',
  5 => '5',
);
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'nid';
$handler->display->display_options['fields']['title']['label'] = 'War Zone';
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_event_type']['label'] = 'War Zone type';
$handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
$handler->display->display_options['fields']['field_status']['relationship'] = 'nid';
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_event_date']['label'] = 'Battle Commencement';
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'value',
  'multiple_number' => '1',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 1,
  'show_repeat_rule' => 'show',
);
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
$handler->display->display_options['path'] = 'dashboard/warzones';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'War Zones';
$handler->display->display_options['menu']['description'] = 'The War Zones I\'ve registered for.';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node_registration',
  2 => 'taxonomy',
  3 => 'list',
  4 => 'date',
  5 => 'views_content',
);
