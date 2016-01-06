<?php
/**
 * @file
 * views_view.location_map.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'location_map';
$view->description = 'Generates the battlefield map';
$view->tag = 'Maps, Battlefield';
$view->base_table = 'node';
$view->human_name = 'Battlefield Map';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'openlayers_map';
$handler->display->display_options['style_options']['map'] = 'location_map2';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
  137 => '137',
  320 => '320',
  136 => '136',
);
$handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Select the map icons you would like displayed.';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'location_type';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

/* Display: Map */
$handler = $view->new_display('panel_pane', 'Map', 'panel_pane_1');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['pane_category']['name'] = 'Battlefield';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Content pane 2 */
$handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['operator'] = 'not';
$handler->display->display_options['filters']['tid']['value'] = array(
  0 => '135',
);
$handler->display->display_options['filters']['tid']['vocabulary'] = 'location_type';
$handler->display->display_options['pane_category']['name'] = 'War Zones';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
);
