<?php
/**
 * @file
 * views_view.comments_all_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'comments_all_layout';
$view->description = 'Formats the comments on a page in a pretty manner.';
$view->tag = 'Core 2.1';
$view->base_table = 'comment';
$view->human_name = 'Core: Comments: Layout';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Comments';
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'media';
$handler->display->display_options['style_options']['class'] = 'media-list comment-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Comment: Content */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'comment';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* Relationship: Comment: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'comment';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: Comment: Parent comment */
$handler->display->display_options['relationships']['pid']['id'] = 'pid';
$handler->display->display_options['relationships']['pid']['table'] = 'comment';
$handler->display->display_options['relationships']['pid']['field'] = 'pid';
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'media-left pull-left';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['picture']['image_style'] = 'button';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Comment: Author */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'comment';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
/* Field: Comment: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'comment';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'medium';
$handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['created']['format_date_sql'] = 0;
/* Field: Comment: Delete link */
$handler->display->display_options['fields']['delete_comment']['id'] = 'delete_comment';
$handler->display->display_options['fields']['delete_comment']['table'] = 'comment';
$handler->display->display_options['fields']['delete_comment']['field'] = 'delete_comment';
$handler->display->display_options['fields']['delete_comment']['label'] = '';
$handler->display->display_options['fields']['delete_comment']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_comment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delete_comment']['text'] = 'delete';
/* Field: Comment: Edit link */
$handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
$handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['label'] = '';
$handler->display->display_options['fields']['edit_comment']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_comment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_comment']['text'] = 'edit';
/* Field: Comment: Reply-to link */
$handler->display->display_options['fields']['replyto_comment']['id'] = 'replyto_comment';
$handler->display->display_options['fields']['replyto_comment']['table'] = 'comment';
$handler->display->display_options['fields']['replyto_comment']['field'] = 'replyto_comment';
$handler->display->display_options['fields']['replyto_comment']['label'] = '';
$handler->display->display_options['fields']['replyto_comment']['exclude'] = TRUE;
$handler->display->display_options['fields']['replyto_comment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['replyto_comment']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['replyto_comment']['text'] = 'reply';
/* Field: Comment: Comment */
$handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
$handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
$handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
$handler->display->display_options['fields']['comment_body']['label'] = '';
$handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
$handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
/* Field: Comment: ID */
$handler->display->display_options['fields']['cid']['id'] = 'cid';
$handler->display->display_options['fields']['cid']['table'] = 'comment';
$handler->display->display_options['fields']['cid']['field'] = 'cid';
$handler->display->display_options['fields']['cid']['label'] = '';
$handler->display->display_options['fields']['cid']['exclude'] = TRUE;
$handler->display->display_options['fields']['cid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['cid']['link_to_comment'] = FALSE;
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['exclude'] = TRUE;
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'comments_all_layout';
$handler->display->display_options['fields']['view']['display'] = 'panel_pane_2';
$handler->display->display_options['fields']['view']['arguments'] = '[!cid]';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media-body">
  <div class="media-heading">
    [name_1]
    <small class="text-muted pull-right">[created] / [edit_comment] [replyto_comment]</small>
  </div>
  [comment_body]
  <div class="seperator"></div>
  [view]
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Comment: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'comment';
$handler->display->display_options['sorts']['created']['field'] = 'created';
/* Contextual filter: Comment: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'comment';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Comment: Approved */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'comment';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status_node']['id'] = 'status_node';
$handler->display->display_options['filters']['status_node']['table'] = 'node';
$handler->display->display_options['filters']['status_node']['field'] = 'status';
$handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
$handler->display->display_options['filters']['status_node']['value'] = 1;
$handler->display->display_options['filters']['status_node']['group'] = 1;
$handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Comment: Approved */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'comment';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status_node']['id'] = 'status_node';
$handler->display->display_options['filters']['status_node']['table'] = 'node';
$handler->display->display_options['filters']['status_node']['field'] = 'status';
$handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
$handler->display->display_options['filters']['status_node']['value'] = 1;
$handler->display->display_options['filters']['status_node']['group'] = 1;
$handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
/* Filter criterion: Comment: ID */
$handler->display->display_options['filters']['cid']['id'] = 'cid';
$handler->display->display_options['filters']['cid']['table'] = 'comment';
$handler->display->display_options['filters']['cid']['field'] = 'cid';
$handler->display->display_options['filters']['cid']['relationship'] = 'pid';
$handler->display->display_options['filters']['cid']['operator'] = 'empty';
$handler->display->display_options['pane_category']['name'] = 'Node';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Children */
$handler = $view->new_display('panel_pane', 'Children', 'panel_pane_2');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'media clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Comment: Content */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'comment';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* Relationship: Comment: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'comment';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: Comment: Parent comment */
$handler->display->display_options['relationships']['pid']['id'] = 'pid';
$handler->display->display_options['relationships']['pid']['table'] = 'comment';
$handler->display->display_options['relationships']['pid']['field'] = 'pid';
$handler->display->display_options['relationships']['pid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'media-left pull-left';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['picture']['image_style'] = 'button';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Comment: Author */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'comment';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
/* Field: Comment: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'comment';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'medium';
$handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['created']['format_date_sql'] = 0;
/* Field: Comment: Delete link */
$handler->display->display_options['fields']['delete_comment']['id'] = 'delete_comment';
$handler->display->display_options['fields']['delete_comment']['table'] = 'comment';
$handler->display->display_options['fields']['delete_comment']['field'] = 'delete_comment';
$handler->display->display_options['fields']['delete_comment']['label'] = '';
$handler->display->display_options['fields']['delete_comment']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_comment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delete_comment']['text'] = 'delete';
/* Field: Comment: Edit link */
$handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
$handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['label'] = '';
$handler->display->display_options['fields']['edit_comment']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_comment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_comment']['text'] = 'edit';
/* Field: Comment: Reply-to link */
$handler->display->display_options['fields']['replyto_comment']['id'] = 'replyto_comment';
$handler->display->display_options['fields']['replyto_comment']['table'] = 'comment';
$handler->display->display_options['fields']['replyto_comment']['field'] = 'replyto_comment';
$handler->display->display_options['fields']['replyto_comment']['label'] = '';
$handler->display->display_options['fields']['replyto_comment']['exclude'] = TRUE;
$handler->display->display_options['fields']['replyto_comment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['replyto_comment']['text'] = 'reply';
/* Field: Comment: Comment */
$handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
$handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
$handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
$handler->display->display_options['fields']['comment_body']['label'] = '';
$handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
$handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media-body">
  <div class="media-heading">
    [name_1]
    <small class="text-muted pull-right">[created] [edit_comment]</small>
  </div>
  [comment_body]
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Comment: ID */
$handler->display->display_options['arguments']['cid']['id'] = 'cid';
$handler->display->display_options['arguments']['cid']['table'] = 'comment';
$handler->display->display_options['arguments']['cid']['field'] = 'cid';
$handler->display->display_options['arguments']['cid']['relationship'] = 'pid';
$handler->display->display_options['arguments']['cid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['cid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['cid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['cid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['cid']['summary_options']['items_per_page'] = '25';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'comment',
  2 => 'text',
  3 => 'views_content',
);
