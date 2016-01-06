<?php
/**
 * @file
 * views_view.slide_show_for_landing_pages.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'slide_show_for_landing_pages';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'file_managed';
$view->human_name = 'Slide Show for Landing Pages';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '1';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
$handler->display->display_options['style_options']['interval'] = '5000';
$handler->display->display_options['style_options']['navigation'] = 1;
$handler->display->display_options['style_options']['indicators'] = 1;
$handler->display->display_options['style_options']['pause'] = 1;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: File: Rendered */
$handler->display->display_options['fields']['rendered']['id'] = 'rendered';
$handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
$handler->display->display_options['fields']['rendered']['field'] = 'rendered';
$handler->display->display_options['fields']['rendered']['label'] = '';
$handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
/* Filter criterion: File: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'file_managed';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'image' => 'image',
);

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'Home';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'system',
  2 => 'views_content',
);
