<?php
/**
 * @file
 * views_view.achievements_all_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'achievements_all_page_layout';
$view->description = 'Page Layout elements for Achievement node pages.';
$view->tag = 'Achievements 3.0';
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

/* Display: Meta */
$handler = $view->new_display('panel_pane', 'Meta', 'panel_pane_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Category */
$handler->display->display_options['fields']['field_achievement_category']['id'] = 'field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['table'] = 'field_data_field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['field'] = 'field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['label'] = '';
$handler->display->display_options['fields']['field_achievement_category']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_achievement_category']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-tag"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_achievement_category]</strong>
    </div>
</div>';
$handler->display->display_options['fields']['field_achievement_category']['alter']['path'] = 'taxonomy/term/[field_achievement_category-target_id]';
$handler->display->display_options['fields']['field_achievement_category']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_category']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_achievement_category']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_achievement_category']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Achievement Points */
$handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['label'] = '';
$handler->display->display_options['fields']['field_achievement_points']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_achievement_points']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-arrow-circle-up"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_achievement_points]</strong>
    </div>
</div>';
$handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_points']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_achievement_points']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Achievement Unique */
$handler->display->display_options['fields']['field_achievement_unique']['id'] = 'field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['table'] = 'field_data_field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['field'] = 'field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['label'] = '';
$handler->display->display_options['fields']['field_achievement_unique']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-bolt"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">Unique</strong>
        <div class="text-muted">This achievement can only be awarded to a single player.</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_achievement_unique']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_unique']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_achievement_unique']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_achievement_unique']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['type'] = 'list_key';
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-crosshairs"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_event_link]</strong>
        <div class="text-muted">War Zone</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_event_link']['alter']['path'] = 'node/[field_event_link-target_id]';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_event_link']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 1,
);
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
$handler->display->display_options['fields']['field_image']['element_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_class'] = 'text-center';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Short Description */
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

/* Display: Page Image and Short Description */
$handler = $view->new_display('panel_pane', 'Page Image and Short Description', 'panel_pane_7');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Short Description */
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'text',
  4 => 'entityreference',
  5 => 'number',
  6 => 'list',
  7 => 'image',
);
