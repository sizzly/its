<?php
/**
 * @file
 * views_view.utility_update_associated_nodes.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'utility_update_associated_nodes';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'message';
$view->human_name = 'Utility: Update Associated Nodes';
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
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Message: Message ID */
$handler->display->display_options['fields']['mid']['id'] = 'mid';
$handler->display->display_options['fields']['mid']['table'] = 'message';
$handler->display->display_options['fields']['mid']['field'] = 'mid';

/* Display: Rules */
$handler = $view->new_display('views_rules', 'Rules', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['rules_variables'] = array(
  'mid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Message ID',
    'name' => 'mid',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'message',
);
