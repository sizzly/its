<?php
/**
 * @file
 * views_view.og_user_groups.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'og_user_groups';
$view->description = 'Show groups of a user.';
$view->tag = 'og';
$view->base_table = 'og_membership';
$view->human_name = 'OG User groups';
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'state' => 'state',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'state' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['content'] = 'User is not a member of any group.';
/* Relationship: OG membership: Group Content from OG membership */
$handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
$handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['fields']['title']['label'] = 'Group';
$handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
/* Field: OG membership: Created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'og_membership';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Member since';
$handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
/* Contextual filter: We pass the user ID as the Entity ID. */
$handler->display->display_options['arguments']['etid']['id'] = 'etid';
$handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
$handler->display->display_options['arguments']['etid']['field'] = 'etid';
$handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
$handler->display->display_options['arguments']['etid']['default_action'] = 'default';
$handler->display->display_options['arguments']['etid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['etid']['title'] = '%1\'s groups';
$handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
/* Filter criterion: OG membership: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'og_membership';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
$handler->display->display_options['filters']['state']['value'] = array(
  1 => '1',
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter criterion: OG membership: Entity_type */
$handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
$handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
$handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
$handler->display->display_options['filters']['entity_type']['value'] = 'user';

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['argument_input'] = array(
  'etid' => array(
    'type' => 'context',
    'context' => 'entity:user.uid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'We pass to the &quot;Entity ID&quot; the User ID.',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'og',
  2 => 'views_content',
);
