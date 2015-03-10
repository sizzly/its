<?php
/**
 * @file
 * achievements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function achievements_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'achievement_category_all_page_layout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Achievement Category: All: Page Layout';
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_type'] = 'div';
  $handler->display->display_options['fields']['description']['element_class'] = 'lead';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['description']['element_wrapper_class'] = 'grey-container';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'achievement_category' => 'achievement_category',
  );

  /* Display: Page Header */
  $handler = $view->new_display('panel_pane', 'Page Header', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Category List */
  $handler = $view->new_display('panel_pane', 'Category List', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Achievement Categories';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['class'] = 'media-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'lead';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['achievement_category_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'achievements_all_lists';
  $view->description = '';
  $view->tag = 'default';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Relation: Achievement (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_achievement']['id'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['field'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['entity_deduplication_left'] = 0;
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
  /* Field: Field: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Relation: Rid) */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['fields']['rid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
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
  $export['achievements_all_lists'] = $view;

  $view = new view();
  $view->name = 'achievements_all_page_layout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Achievements: All: Page Layout';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'achievement' => 'achievement',
  );
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

  /* Display: Details */
  $handler = $view->new_display('panel_pane', 'Details', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Details';
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
    'achievement' => 'achievement',
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'not empty';
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Page Header */
  $handler = $view->new_display('panel_pane', 'Page Header', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
<span class="lead">[field_short_description]</span>
</div>';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  /* Field: Content: Achievement Points */
  $handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
  $handler->display->display_options['fields']['field_achievement_points']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_points']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_points']['alter']['text'] = '<span class="btn btn-danger quick-btn">
  [field_achievement_points-value]
  <span>Points</span>
</span>';
  $handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Achievement Unique */
  $handler->display->display_options['fields']['field_achievement_unique']['id'] = 'field_achievement_unique';
  $handler->display->display_options['fields']['field_achievement_unique']['table'] = 'field_data_field_achievement_unique';
  $handler->display->display_options['fields']['field_achievement_unique']['field'] = 'field_achievement_unique';
  $handler->display->display_options['fields']['field_achievement_unique']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_unique']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_unique']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_unique']['alter']['text'] = '<span class="btn btn-info quick-btn">
  <i class="fa fa-flag"></i>
  <span>Unique</span>
</span>';
  $handler->display->display_options['fields']['field_achievement_unique']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_unique']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_unique']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_unique']['type'] = 'list_key';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_achievement_category']['id'] = 'field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['field'] = 'field_achievement_category';
  $handler->display->display_options['fields']['field_achievement_category']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_category']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[field_achievement_category]</h2>
  <h5>Category</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-tag" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['field_achievement_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_category']['alter']['path'] = 'taxonomy/term/[field_achievement_category-target_id]';
  $handler->display->display_options['fields']['field_achievement_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_category']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Event */
  $handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<span class="btn btn-success quick-btn">
  <i class="fa fa-crosshairs"></i>
  <span>War Zone</span>
</span>';
  $handler->display->display_options['fields']['field_event_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['path'] = 'node/[field_event_link-target_id]';
  $handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achievement_category]
[field_achievement_points]
[field_achievement_unique]
[field_event_link]
<div class="seperator"></div>
<div class="seperator"></div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: First Achievers */
  $handler = $view->new_display('panel_pane', 'First Achievers', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'First Achievers';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['class'] = 'media-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: Achievement (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_achievement']['id'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['field'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_left_achievement']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['entity_deduplication_left'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['id'] = 'field_achievement_player_target_id';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['table'] = 'field_data_field_achievement_player';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['field'] = 'field_achievement_player_target_id';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_achievement_player_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  /* Field: Relation: Achievement Player */
  $handler->display->display_options['fields']['field_achievement_player']['id'] = 'field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['table'] = 'field_data_field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['field'] = 'field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['fields']['field_achievement_player']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_player']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_achievement_player']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_achievement_player']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_player']['settings'] = array(
    'link' => 1,
  );
  /* Field: Relation: Create Date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'relation';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Relation: Create Date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'relation';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Awarded to */
  $handler = $view->new_display('panel_pane', 'Awarded to', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Awarded to';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['class'] = 'media-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: Achievement (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_achievement']['id'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['field'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_left_achievement']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['entity_deduplication_left'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['id'] = 'field_achievement_player_target_id';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['table'] = 'field_data_field_achievement_player';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['field'] = 'field_achievement_player_target_id';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_achievement_player_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  /* Field: Relation: Achievement Player */
  $handler->display->display_options['fields']['field_achievement_player']['id'] = 'field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['table'] = 'field_data_field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['field'] = 'field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['fields']['field_achievement_player']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_player']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_achievement_player']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_achievement_player']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_player']['settings'] = array(
    'link' => 1,
  );
  /* Field: Relation: Create Date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'relation';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Relation: Create Date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'relation';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page Image and Short Description */
  $handler = $view->new_display('panel_pane', 'Page Image and Short Description', 'panel_pane_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'thumbnail';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  /* Field: Field: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
<span class="lead">[field_short_description]</span>
</div>';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: All Recipients */
  $handler = $view->new_display('panel_pane', 'All Recipients', 'panel_pane_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'photo-stream-lg';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: Achievement (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_achievement']['id'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['field'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_left_achievement']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['entity_deduplication_left'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['id'] = 'field_achievement_player_target_id';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['table'] = 'field_data_field_achievement_player';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['field'] = 'field_achievement_player_target_id';
  $handler->display->display_options['relationships']['field_achievement_player_target_id']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Relation: Achievement Player */
  $handler->display->display_options['fields']['field_achievement_player']['id'] = 'field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['table'] = 'field_data_field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['field'] = 'field_achievement_player';
  $handler->display->display_options['fields']['field_achievement_player']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['fields']['field_achievement_player']['label'] = '';
  $handler->display->display_options['fields']['field_achievement_player']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achievement_player']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_player']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_achievement_player_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="[field_achievement_player]">[picture]</span>';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'large_button';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Relation: Create Date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'relation';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['achievements_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'achievements_main_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Achievements: Main: Messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recently Awarded Achievements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['class'] = 'media-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['label'] = 'Achievement';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: Message: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'message';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stream_player_earns_an_achievement' => 'stream_player_earns_an_achievement',
  );

  /* Display: Recent Achievements */
  $handler = $view->new_display('panel_pane', 'Recent Achievements', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['achievements_main_messages'] = $view;

  return $export;
}
