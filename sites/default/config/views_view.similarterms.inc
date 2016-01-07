<?php
/**
 * @file
 * views_view.similarterms.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'similarterms';
$view->description = 'Similar By Terms';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Similar By Terms';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Related Terms';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Similar By Terms: Similarity */
$handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
$handler->display->display_options['sorts']['similarterms']['table'] = 'node';
$handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
/* Contextual filter: Similar By Terms: Nid */
$handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
$handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
$handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
$handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_caching'] = '4';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
);
