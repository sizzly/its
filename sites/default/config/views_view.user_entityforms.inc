<?php
/**
 * @file
 * views_view.user_entityforms.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'user_entityforms';
$view->description = 'A list of all entityforms submissions to be displayed to the submitter.';
$view->tag = 'entityforms';
$view->base_table = 'entityform';
$view->human_name = 'User Entityforms';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'List';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'link_entityform' => 'link_entityform',
  'label_1' => 'label_1',
  'created' => 'created',
  'changed' => 'changed',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'link_entityform' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'label_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Empty ';
$handler->display->display_options['empty']['area']['content'] = 'No form submissions available.';
/* Relationship: Entityform Submission: Uid */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'entityform';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Submitter';
/* Field: Entityform Submission: Link */
$handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
$handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
$handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
$handler->display->display_options['fields']['link_entityform']['label'] = 'View';
/* Field: Entityform Submission: Edit Link */
$handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
$handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['label'] = 'Edit';
/* Field: Entityform Submission: Delete Link */
$handler->display->display_options['fields']['delete_entityform']['id'] = 'delete_entityform';
$handler->display->display_options['fields']['delete_entityform']['table'] = 'entityform';
$handler->display->display_options['fields']['delete_entityform']['field'] = 'delete_entityform';
$handler->display->display_options['fields']['delete_entityform']['label'] = 'Delete';
$handler->display->display_options['fields']['delete_entityform']['hide_alter_empty'] = FALSE;
/* Field: Entityform Submission: Date submitted */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'entityform';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'medium';
/* Field: Entityform Submission: Date changed */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'entityform';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
/* Sort criterion: Entityform Submission: Date submitted */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'entityform';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Entityform Submission: Entityform Type */
$handler->display->display_options['arguments']['type']['id'] = 'type';
$handler->display->display_options['arguments']['type']['table'] = 'entityform';
$handler->display->display_options['arguments']['type']['field'] = 'type';
$handler->display->display_options['arguments']['type']['default_action'] = 'not found';
$handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['type']['title'] = 'Submissions for %1';
$handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['type']['limit'] = '0';
/* Filter criterion: Entityform Submission: Date submitted */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'entityform';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['operator'] = '>';
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['label'] = 'Date submitted';
$handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
/* Filter criterion: Entityform Submission: Draft */
$handler->display->display_options['filters']['draft']['id'] = 'draft';
$handler->display->display_options['filters']['draft']['table'] = 'entityform';
$handler->display->display_options['filters']['draft']['field'] = 'draft';
$handler->display->display_options['filters']['draft']['operator'] = '!=';
$handler->display->display_options['filters']['draft']['value']['value'] = '1';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'entityforms_admin_page');
$handler->display->display_options['display_description'] = 'Show the current user\'s submissions for a entityform type';
$handler->display->display_options['path'] = 'entityform-user-submissions/submissions/%/list';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'List';
$handler->display->display_options['menu']['description'] = 'View Submissions for all Entityforms';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Submissions';
$handler->display->display_options['tab_options']['weight'] = '0';
$handler->display->display_options['tab_options']['name'] = 'management';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'entityform',
);
