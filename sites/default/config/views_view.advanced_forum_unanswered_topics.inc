<?php
/**
 * @file
 * views_view.advanced_forum_unanswered_topics.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'advanced_forum_unanswered_topics';
$view->description = 'Shows unanswered topics in a given forum';
$view->tag = 'Advanced Forum';
$view->base_table = 'node';
$view->human_name = 'Advanced Forum unanswered topics';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Unanswered forum topics';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 20;
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
  'new_comments' => 'new_comments',
  'totalcount' => 'totalcount',
  'last_comment_name' => 'last_updated',
  'last_updated' => 'last_updated',
  'sticky' => 'sticky',
  'comment' => 'comment',
  'name' => 'name',
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
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = FALSE;
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['order'] = 'desc';
$handler->display->display_options['style_options']['tid'] = 'filter.term_node_tid_depth';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'area';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['content'] = 'No unanswered topics.';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
$handler->display->display_options['fields']['title']['label'] = 'Topic';
$handler->display->display_options['fields']['title']['alter']['text'] = '<span class="forum-topic-title">[title]</span> ';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['title']['alter']['alt'] = '[teaser]';
$handler->display->display_options['fields']['title']['alter']['link_class'] = 'topic-title';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
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
$handler->display->display_options['fields']['name_1']['alter']['text'] = '<br /> by [name_1] ';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['text'] = 'on [created]';
/* Field: Content statistics: Total views */
$handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
$handler->display->display_options['fields']['totalcount']['label'] = 'Views';
$handler->display->display_options['fields']['totalcount']['empty'] = '0';
$handler->display->display_options['fields']['totalcount']['empty_zero'] = TRUE;
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
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
$handler->display->display_options['fields']['name']['label'] = 'Forum';
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = '';
$handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
$handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
$handler->display->display_options['filters']['vid']['value'] = array(
  31 => '31',
);
$handler->display->display_options['filters']['vid']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Show unanswered topics in:';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'forum';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'forums';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
/* Filter criterion: Content: Comment count */
$handler->display->display_options['filters']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['filters']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['filters']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['filters']['comment_count']['value']['value'] = '0';
$handler->display->display_options['filters']['comment_count']['expose']['operator_id'] = 'comment_count_op';
$handler->display->display_options['filters']['comment_count']['expose']['label'] = 'Comment count';
$handler->display->display_options['filters']['comment_count']['expose']['operator'] = 'comment_count_op';
$handler->display->display_options['filters']['comment_count']['expose']['identifier'] = 'comment_count';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'forum/unanswered';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Unanswered topics';
$handler->display->display_options['menu']['weight'] = '1';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'feed_1';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'forum/unanswered/feed';
$handler->display->display_options['displays'] = array(
  'page_1' => 'page_1',
  'default' => 0,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
);
