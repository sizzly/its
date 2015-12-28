<?php
/**
 * @file
 * views_view.articles_all_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'articles_all_page_layout';
$view->description = 'Page Layout elements for Article Nodes.';
$view->tag = 'Articles and Feeds 2.0';
$view->base_table = 'node';
$view->human_name = 'Articles: All: Page Layout';
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
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  'article' => 'article',
);

/* Display: Sharethis and Tools */
$handler = $view->new_display('panel_pane', 'Sharethis and Tools', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'text-muted well well-sm';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'comments_link' => 'comments_link',
  'ops' => 'ops',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<div class="seperator"></div><div class="seperator"></div>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'glory';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: ShareThis Link */
$handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
$handler->display->display_options['fields']['sharethis']['table'] = 'node';
$handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
$handler->display->display_options['fields']['sharethis']['label'] = '';
$handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sharethis']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['sharethis']['element_wrapper_class'] = 'pull-right';
$handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
/* Field: Content: Add comment link */
$handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['table'] = 'node';
$handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['label'] = '';
$handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Articles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Published Info - Feed */
$handler = $view->new_display('panel_pane', 'Published Info - Feed', 'panel_pane_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'text-muted';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_website' => 'field_website',
  'created' => 'created',
  'field_website_1' => 'field_website_1',
  'comment_count' => 'comment_count',
  'count' => 'count',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Unfiltered text */
$handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
$handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="seperator"></div>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Feeds item: Owner feed */
$handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
$handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
$handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
$handler->display->display_options['relationships']['feed_nid']['required'] = TRUE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website']['id'] = 'field_website';
$handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website']['relationship'] = 'feed_nid';
$handler->display->display_options['fields']['field_website']['label'] = '';
$handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_website']['alter']['text'] = 'by [field_website]';
$handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'uc_store';
$handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['created']['format_date_sql'] = 0;
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website_1']['id'] = 'field_website_1';
$handler->display->display_options['fields']['field_website_1']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website_1']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website_1']['label'] = '';
$handler->display->display_options['fields']['field_website_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_website_1']['click_sort_column'] = 'url';
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = '';
$handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comment_count']['suffix'] = ' comments';
/* Field: Flags: Flag counter */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'flag_counts';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
$handler->display->display_options['fields']['count']['label'] = '';
$handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['count']['suffix'] = ' salutes';
$handler->display->display_options['pane_category']['name'] = 'Articles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Published Info - Warzone Update */
$handler = $view->new_display('panel_pane', 'Published Info - Warzone Update', 'panel_pane_3');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'text-muted';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
  'created' => 'created',
  'field_event_link' => 'field_event_link',
  'comment_count' => 'comment_count',
  'count' => 'count',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Unfiltered text */
$handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
$handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="seperator"></div>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['required'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = 'by [name]';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'uc_store';
$handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['created']['format_date_sql'] = 0;
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = '';
$handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comment_count']['suffix'] = ' comments';
/* Field: Flags: Flag counter */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'flag_counts';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
$handler->display->display_options['fields']['count']['label'] = '';
$handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['count']['suffix'] = ' salutes';
$handler->display->display_options['pane_category']['name'] = 'Articles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Warzone Body */
$handler = $view->new_display('panel_pane', 'Warzone Body', 'panel_pane_4');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['required'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Campaign Badge */
$handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
$handler->display->display_options['fields']['field_campaign_badge']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
$handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
);
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 1,
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-heading"><h3 class="panel-title">War Zone</h3></div>
<div class="panel-body">
<div class="thumbnail">[field_campaign_badge]</div>
[field_event_link]
</div>';
$handler->display->display_options['fields']['nothing']['element_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_class'] = 'panel panel-default';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'pull-right col-xs-12 col-sm-4 col-md-3';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Articles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Feed Body */
$handler = $view->new_display('panel_pane', 'Feed Body', 'panel_pane_5');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Feeds item: Owner feed */
$handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
$handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
$handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
$handler->display->display_options['relationships']['feed_nid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website']['id'] = 'field_website';
$handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website_1']['id'] = 'field_website_1';
$handler->display->display_options['fields']['field_website_1']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website_1']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website_1']['relationship'] = 'feed_nid';
$handler->display->display_options['fields']['field_website_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_website_1']['click_sort_column'] = 'url';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-heading"><h3 class="panel-title">Gaming News</h3></div>
<div class="panel-body">
<p>[field_website]</p>
<p><strong>Source:</strong><br>[field_website_1]</p>
</div>';
$handler->display->display_options['fields']['nothing']['element_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_class'] = 'panel panel-default';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'pull-right col-xs-12 col-sm-4 col-md-4';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Articles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Club Body */
$handler = $view->new_display('panel_pane', 'Club Body', 'panel_pane_6');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: OG membership: OG membership from Content */
$handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
$handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'article' => 'article',
);
$handler->display->display_options['pane_category']['name'] = 'Articles';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'link',
  4 => 'entityreference',
  5 => 'image',
  6 => 'text',
);
