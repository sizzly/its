<?php
/**
 * @file
 * views_view.utility_achievement_anniversary.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'utility_achievement_anniversary';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Utility: Achievement: Anniversary';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_event_date' => 'field_event_date',
  'nid' => 'nid',
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
  'field_event_date' => array(
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'not found';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  'field_data_field_event_date.field_event_date_value2' => 'field_data_field_event_date.field_event_date_value2',
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'achievement' => 'achievement',
);

/* Display: Rules */
$handler = $view->new_display('views_rules', 'Rules', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['rules_parameter'] = array(
  'date_argument' => array(
    'enabled' => 1,
    'type' => 'text',
    'label' => 'Date: Date (node)',
    'name' => 'date_argument',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'title' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Content: Title',
    'name' => 'title',
  ),
  'field_event_date' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Date',
    'name' => 'field_event_date',
  ),
  'nid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Content: Nid',
    'name' => 'nid',
  ),
);

/* Display: Rules 2 */
$handler = $view->new_display('views_rules', 'Rules 2', 'views_rules_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '-10';
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
$handler->display->display_options['arguments']['term_node_tid_depth_1']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth_1']['default_action'] = 'not found';
$handler->display->display_options['arguments']['term_node_tid_depth_1']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth_1']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth_1']['depth'] = '-10';
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
$handler->display->display_options['arguments']['term_node_tid_depth_2']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth_2']['default_action'] = 'not found';
$handler->display->display_options['arguments']['term_node_tid_depth_2']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth_2']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth_2']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth_2']['depth'] = '-10';
$handler->display->display_options['rules_parameter'] = array(
  'term_node_tid_depth' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Content: Has taxonomy term ID (with depth)',
    'name' => 'term_node_tid_depth',
  ),
  'term_node_tid_depth_1' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Content: Has taxonomy term ID (with depth)',
    'name' => 'term_node_tid_depth_1',
  ),
  'term_node_tid_depth_2' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Content: Has taxonomy term ID (with depth)',
    'name' => 'term_node_tid_depth_2',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'title' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Content: Title',
    'name' => 'title',
  ),
  'nid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Content: Nid',
    'name' => 'nid',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'date',
);
