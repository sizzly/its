<?php
/**
 * @file
 * views_view.user_points_rules.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'user_points_rules';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'User Points: Rules';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: Userpoints: Max renown in category */
$handler->display->display_options['fields']['max_points']['id'] = 'max_points';
$handler->display->display_options['fields']['max_points']['table'] = 'userpoints';
$handler->display->display_options['fields']['max_points']['field'] = 'max_points';
$handler->display->display_options['fields']['max_points']['label'] = '';
$handler->display->display_options['fields']['max_points']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['max_points']['separator'] = '';
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
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
/* Filter criterion: Userpoints Transactions: Category */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'userpoints_txn';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['operator'] = 'not in';
$handler->display->display_options['filters']['tid']['value'] = array(
  894 => '894',
);

/* Display: Renown */
$handler = $view->new_display('views_rules', 'Renown', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'uid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'User: Uid',
    'name' => 'uid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'name' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'User: Name',
    'name' => 'name',
  ),
  'max_points' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => 'Max renown in category',
    'name' => 'max_points',
  ),
);

/* Display: Already have it */
$handler = $view->new_display('views_rules', 'Already have it', 'views_rules_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: User Badges: Badge Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'user_badges_badges';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
$handler->display->display_options['rules_parameter'] = array(
  'uid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'User: Uid',
    'name' => 'uid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'name' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'User: Name',
    'name' => 'name',
  ),
  'name_1' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'Badge Name',
    'name' => 'name_1',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
);
