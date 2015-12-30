<?php
/**
 * @file
 * views_view.join_now_all_content_displays.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'join_now_all_content_displays';
$view->description = 'Generates various displays of content for the Join Now page.';
$view->tag = 'Home Page 2.0';
$view->base_table = 'node';
$view->human_name = 'Join Now: All: Content Displays';
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
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'type' => 'type',
  'view_node' => 'view_node',
  'comment_count' => 'comment_count',
  'comments_link' => 'comments_link',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_link' => '0',
  'trim_length' => '450',
  'trim_type' => 'chars',
  'trim_suffix' => '...',
  'more_link' => '0',
  'more_text' => 'Read more',
  'summary_handler' => 'full',
  'trim_options' => array(
    'text' => 'text',
  ),
  'trim_preserve_tags' => '',
);
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
);
/* Field: Content: All taxonomy terms */
$handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
$handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['fields']['term_node_tid']['label'] = '';
$handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
  'forums' => 0,
  'achievement_category' => 0,
  'armies' => 0,
  'catalog' => 0,
  'custom_property' => 0,
  'deployment' => 0,
  'dfp_ad_categories' => 0,
  'event_type' => 0,
  'games' => 0,
  'league_type' => 0,
  'list_crit_tags' => 0,
  'location_region' => 0,
  'location_type' => 0,
  'missions' => 0,
  'scale' => 0,
  'scenario_special_rules' => 0,
  'tags' => 0,
  'units' => 0,
  'userpoints' => 0,
  'victory_conditions' => 0,
  'war_zone_type' => 0,
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
  <div class="col-xs-12 col-sm-2">
    [field_image]
  </div>
  <div class="col-xs-12 col-sm-10">
    [body]
    <div class="seperator"></div>
  <small>[term_node_tid]</small>
  </div>
</div>
<div class="clearfix"></div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['text'] = 'Read more';
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = '';
$handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
$handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
$handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
/* Field: Content: Add comment link */
$handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['table'] = 'node';
$handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['label'] = '';
$handler->display->display_options['fields']['comments_link']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['comments_link']['alter']['preserve_tags'] = '<a>';
$handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
/* Sort criterion: Content statistics: Views this week */
$handler->display->display_options['sorts']['weekcount']['id'] = 'weekcount';
$handler->display->display_options['sorts']['weekcount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['weekcount']['field'] = 'weekcount';
$handler->display->display_options['sorts']['weekcount']['order'] = 'DESC';
/* Sort criterion: Content: Comment count */
$handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['sorts']['comment_count']['order'] = 'DESC';
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
  'army_profile' => 'army_profile',
  'article' => 'article',
  'blog' => 'blog',
  'forum' => 'forum',
  'gallery' => 'gallery',
  'listcrit' => 'listcrit',
);

/* Display: New Content */
$handler = $view->new_display('panel_pane', 'New Content', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'Advert';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
  3 => 'image',
  4 => 'views_content',
);
