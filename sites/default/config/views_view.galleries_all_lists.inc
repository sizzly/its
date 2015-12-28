<?php
/**
 * @file
 * views_view.galleries_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'galleries_all_lists';
$view->description = 'Various Lists of Galleries.';
$view->tag = 'Galleries 2.0';
$view->base_table = 'node';
$view->human_name = 'Galleries: All: Lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Galleries';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="commentary available"><i class="icon glyphicon glyphicon-briefcase" aria-hidden="true" aria-hidden="true" ></i></span>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = '';
$handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
$handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['comment_count']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="comments"><i class="icon glyphicon glyphicon-comment" aria-hidden="true" aria-hidden="true" ></i> <span class="badge iconbuffer">[comment_count]</span></span>';
$handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
/* Field: Content: Images */
$handler->display->display_options['fields']['field_images']['id'] = 'field_images';
$handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
$handler->display->display_options['fields']['field_images']['field'] = 'field_images';
$handler->display->display_options['fields']['field_images']['label'] = '';
$handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_images']['element_type'] = 'div';
$handler->display->display_options['fields']['field_images']['element_class'] = 'photo-stream';
$handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_images']['settings'] = array(
  'image_style' => 'button',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_images']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['field_images']['delta_limit'] = '11';
$handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_images']['multi_type'] = 'ul';
$handler->display->display_options['fields']['field_images']['separator'] = '';
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<i class="icon glyphicon glyphicon-screenshot iconbuffer" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="War Zone Gallery"></i>';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Categories */
$handler->display->display_options['fields']['field_blog_army']['id'] = 'field_blog_army';
$handler->display->display_options['fields']['field_blog_army']['table'] = 'field_data_field_blog_army';
$handler->display->display_options['fields']['field_blog_army']['field'] = 'field_blog_army';
$handler->display->display_options['fields']['field_blog_army']['label'] = '';
$handler->display->display_options['fields']['field_blog_army']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_blog_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_blog_army']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_blog_army']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_blog_army']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_blog_army']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_blog_army']['separator'] = '';
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['text'] = '<span class="label label-primary">[timestamp]</span>';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['timestamp']['empty_zero'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
  <div class="pull-right"><strong>[field_blog_army]</strong></div>
  <div><h3 class="media-heading">[title]</h4></div>
</div>

<div>
<div class="clearfix">
  <div class="photo-stream photo-stream-teaser">
    [field_images]
  </div>
</div>
  <div class="well well-sm">
     [count] [comment_count] [body] [field_event_link] [timestamp]
  </div>
</div>
<div class="seperator"></div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'gallery' => 'gallery',
);
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = '';
$handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Army or Game Filter';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'army_filter';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'armies';
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';

/* Display: Main Gallery Page */
$handler = $view->new_display('page', 'Main Gallery Page', 'page_1');
$handler->display->display_options['path'] = 'galleries';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
  3 => 'image',
  4 => 'entityreference',
  5 => 'taxonomy',
);
