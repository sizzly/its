<?php
/**
 * @file
 * views_view.groups_all_forums.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'groups_all_forums';
$view->description = 'Shows the topics in a given forum';
$view->tag = 'Advanced Forum';
$view->base_table = 'node';
$view->human_name = 'Groups: All: Forums';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Forum';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'forum_topic_list';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'teaser' => 'teaser',
  'topic_icon' => 'topic_icon',
  'title' => 'title',
  'timestamp' => 'title',
  'topic_pager' => 'title',
  'name_1' => 'title',
  'created' => 'title',
  'comment_count' => 'comment_count',
  'new_comments' => 'comment_count',
  'totalcount' => 'totalcount',
  'last_comment_name' => 'last_updated',
  'last_updated' => 'last_updated',
  'sticky' => 'sticky',
  'comment' => 'comment',
);
$handler->display->display_options['style_options']['default'] = 'last_updated';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'teaser' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'topic_icon' => array(
    'align' => '',
    'separator' => '',
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' ',
  ),
  'timestamp' => array(
    'align' => '',
    'separator' => '',
  ),
  'topic_pager' => array(
    'align' => '',
    'separator' => '',
  ),
  'name_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'comment_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br />',
  ),
  'new_comments' => array(
    'align' => '',
    'separator' => '',
  ),
  'totalcount' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'last_comment_name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br />',
  ),
  'last_updated' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '<br />',
  ),
  'sticky' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'comment' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = FALSE;
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['order'] = 'desc';
$handler->display->display_options['style_options']['tid'] = 'argument.tid';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'text';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['content'] = 'No posts in this forum.';
$handler->display->display_options['empty']['text']['format'] = 'filtered_html';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Content: Forums (taxonomy_forums) */
$handler->display->display_options['relationships']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
$handler->display->display_options['relationships']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
$handler->display->display_options['relationships']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
$handler->display->display_options['relationships']['taxonomy_forums_tid']['required'] = TRUE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Body */
$handler->display->display_options['fields']['teaser']['id'] = 'teaser';
$handler->display->display_options['fields']['teaser']['table'] = 'field_data_body';
$handler->display->display_options['fields']['teaser']['field'] = 'body';
$handler->display->display_options['fields']['teaser']['label'] = 'Teaser';
$handler->display->display_options['fields']['teaser']['exclude'] = TRUE;
$handler->display->display_options['fields']['teaser']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['teaser']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['teaser']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['teaser']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Topic Icon */
$handler->display->display_options['fields']['topic_icon']['id'] = 'topic_icon';
$handler->display->display_options['fields']['topic_icon']['table'] = 'node';
$handler->display->display_options['fields']['topic_icon']['field'] = 'topic_icon';
$handler->display->display_options['fields']['topic_icon']['label'] = '';
$handler->display->display_options['fields']['topic_icon']['hot_topic_threshold'] = '15';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Topic / Topic starter';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<span class="forum-topic-title">[title]</span> ';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['title']['alter']['alt'] = '[teaser]';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['ui_name'] = 'Has new content';
$handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['text'] = '[timestamp] ';
$handler->display->display_options['fields']['timestamp']['comments'] = TRUE;
/* Field: Content: Topic Pager */
$handler->display->display_options['fields']['topic_pager']['id'] = 'topic_pager';
$handler->display->display_options['fields']['topic_pager']['table'] = 'node';
$handler->display->display_options['fields']['topic_pager']['field'] = 'topic_pager';
$handler->display->display_options['fields']['topic_pager']['total_pages_shown'] = '3';
/* Field: User: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'users';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['text'] = '<br /> by [name_1]';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['text'] = '» [created]';
/* Field: Content: New comments */
$handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
$handler->display->display_options['fields']['new_comments']['table'] = 'node';
$handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
$handler->display->display_options['fields']['new_comments']['exclude'] = TRUE;
$handler->display->display_options['fields']['new_comments']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['new_comments']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['new_comments']['prefix'] = 'View ';
$handler->display->display_options['fields']['new_comments']['suffix'] = ' new';
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
$handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['comment_count']['alter']['text'] = '[comment_count]<br />[new_comments] ';
$handler->display->display_options['fields']['comment_count']['empty'] = '0';
$handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = FALSE;
/* Field: Content statistics: Total views */
$handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['label'] = 'Views';
$handler->display->display_options['fields']['totalcount']['empty'] = '0';
$handler->display->display_options['fields']['totalcount']['empty_zero'] = TRUE;
/* Field: Content: Last comment author */
$handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
$handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
$handler->display->display_options['fields']['last_comment_name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['last_comment_name']['alter']['text'] = 'by [last_comment_name]';
/* Field: Content: Updated/commented date */
$handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
$handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
$handler->display->display_options['fields']['last_updated']['label'] = 'Last post';
/* Field: Content: Sticky */
$handler->display->display_options['fields']['sticky']['id'] = 'sticky';
$handler->display->display_options['fields']['sticky']['table'] = 'node';
$handler->display->display_options['fields']['sticky']['field'] = 'sticky';
$handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
$handler->display->display_options['fields']['sticky']['not'] = 0;
/* Field: Content: Comment status */
$handler->display->display_options['fields']['comment']['id'] = 'comment';
$handler->display->display_options['fields']['comment']['table'] = 'node';
$handler->display->display_options['fields']['comment']['field'] = 'comment';
$handler->display->display_options['fields']['comment']['exclude'] = TRUE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_forums_tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Content: Updated/commented date */
$handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
$handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
$handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
$handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
/* Contextual filter: OG membership: Group ID */
$handler->display->display_options['arguments']['gid']['id'] = 'gid';
$handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
$handler->display->display_options['arguments']['gid']['field'] = 'gid';
$handler->display->display_options['arguments']['gid']['relationship'] = 'taxonomy_forums_tid';
$handler->display->display_options['arguments']['gid']['default_action'] = 'default';
$handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
$handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Forum Panel */
$handler = $view->new_display('panel_pane', 'Forum Panel', 'panel_pane_1');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['header']['area_text_custom']['content'] = '<a name="forum"></a>
<a href="/node/add/forum/[tid]" class="btn btn-default">New Topic</a>
<div class="seperator"></div>';
$handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: OG membership: Group ID */
$handler->display->display_options['arguments']['gid']['id'] = 'gid';
$handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
$handler->display->display_options['arguments']['gid']['field'] = 'gid';
$handler->display->display_options['arguments']['gid']['relationship'] = 'taxonomy_forums_tid';
$handler->display->display_options['arguments']['gid']['default_action'] = 'default';
$handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
$handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['pane_category']['name'] = 'Organic Groups';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_group_forum_target_id' => array(
    'type' => 'none',
    'context' => 'entity:group.gid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Taxonomy term: Group Forum (field_group_forum)',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
  3 => 'views_content',
);
