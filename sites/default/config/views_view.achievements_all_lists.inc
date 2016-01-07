<?php
/**
 * @file
 * views_view.achievements_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'achievements_all_lists';
$view->description = 'Various Lists of achievements';
$view->tag = 'Achievements 3.0, Consolidate';
$view->base_table = 'node';
$view->human_name = 'Achievements: All: Lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
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
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: Content: Category */
$handler->display->display_options['fields']['field_achievement_category']['id'] = 'field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['table'] = 'field_data_field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['field'] = 'field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['label'] = '';
$handler->display->display_options['fields']['field_achievement_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_category']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_category']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Achievement Points */
$handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['label'] = '';
$handler->display->display_options['fields']['field_achievement_points']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_points']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_achievement_points']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="Achievement Points"><i class="icon glyphicon glyphicon-signal" aria-hidden="true" aria-hidden="true" ></i> <span class="badge iconbuffer">[field_achievement_points-value]</span></span>';
$handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 0,
);
/* Field: Content: Achievement Unique */
$handler->display->display_options['fields']['field_achievement_unique']['id'] = 'field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['table'] = 'field_data_field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['field'] = 'field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['label'] = '';
$handler->display->display_options['fields']['field_achievement_unique']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['alter']['text'] = '<i class="icon glyphicon glyphicon-star-empty iconbuffer" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="Unique Achievement"></i>';
$handler->display->display_options['fields']['field_achievement_unique']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_unique']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['type'] = 'list_key';
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="[field_event_link]"><i class="icon glyphicon glyphicon-screenshot" aria-hidden="true" aria-hidden="true" ></i></span>';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Short Description */
$handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
$handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
$handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
$handler->display->display_options['fields']['field_short_description']['label'] = '';
$handler->display->display_options['fields']['field_short_description']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
  <div class="pull-left">
    <span class="thumbnail">[field_image]</span>
  </div>
  <div class="media-body">
<div>
  <div class="pull-right"><strong>[field_achievement_category]</strong></div>
  <div><h4 class="media-heading">[title]</h4></div>
</div>

<div>
  <div>
    <p><strong>[field_short_description]</strong></p>
  </div>
  <div class="well well-sm">
    [field_achievement_points]
    <span data-toggle="tooltip" data-placement="bottom" title="Awarded"><i class="icon glyphicon glyphicon-user" aria-hidden="true" aria-hidden="true" ></i> <span class="badge iconbuffer">[rid]</span></span>
    [field_event_link]
    <span class="pull-right">[field_achievement_unique]</span>
  </div>
</div>
</div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Sort criterion: Content: Achievement Points (field_achievement_points) */
$handler->display->display_options['sorts']['field_achievement_points_value']['id'] = 'field_achievement_points_value';
$handler->display->display_options['sorts']['field_achievement_points_value']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['sorts']['field_achievement_points_value']['field'] = 'field_achievement_points_value';
$handler->display->display_options['sorts']['field_achievement_points_value']['order'] = 'DESC';
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
  'achievement' => 'achievement',
);

/* Display: Category Achievement List */
$handler = $view->new_display('panel_pane', 'Category Achievement List', 'panel_pane_1');
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>There are no achievements in this category</h3>
<p>For one reason or another, there are no achievements in %1.</p>';
$handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['pane_category']['name'] = 'Achievements';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'All Achivements';
$handler->display->display_options['path'] = 'wargaming-decorations/achievements/list';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All Achievements';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Landing Page Stat Block */
$handler = $view->new_display('panel_pane', 'Landing Page Stat Block', 'panel_pane_2');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="panel-stat3 bg-success">
<h2 class="m2-top-none">[nid]</h2>
<h5>Achievements</h5>
<div class="stat-icon">
  <i class="fa fa-certificate fa-3x"></i>
</div>
</div>';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = '/wargaming-decorations/achievements';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
  3 => 'entityreference',
  4 => 'number',
  5 => 'list',
  6 => 'text',
  7 => 'views_content',
);
