<?php
/**
 * @file
 * views_view.battlefield_all_stats.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'battlefield_all_stats';
$view->description = 'Generates stats for the battlefields.';
$view->tag = 'Battlefields 2.0';
$view->base_table = 'node';
$view->human_name = 'Battlefield: All: Stats';
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
  'location' => 'location',
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
  'location' => 'location',
);

/* Display: Battle Count Panel */
$handler = $view->new_display('panel_pane', 'Battle Count Panel', 'panel_pane_1');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/!1/battlefield-battles">
        <div class="panel panel-overview">
            <div class="overview-icon bg-danger">
                <i class="glyphicon glyphicon-fire" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[nid]</h2>
                <div class="text-muted">Battles</div>
            </div>
        </div>
</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  'location' => 'location',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'game_results' => 'game_results',
);
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Top Player Panel */
$handler = $view->new_display('panel_pane', 'Top Player Panel', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Top Players';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'list-group-item clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'list-group';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['required'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'pull-left iconbuffer';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['picture']['image_style'] = 'avatar_small';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'span';
$handler->display->display_options['fields']['name']['element_class'] = 'lead';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Your Results (field_your_results) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
  'location' => 'location',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Battles by Game Chart */
$handler = $view->new_display('panel_pane', 'Battles by Game Chart', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Battles by Game';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_army_game';
$handler->display->display_options['style_options']['data_fields'] = array(
  'nid' => 'nid',
  'field_army_game' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_army_game' => '#2f7ed8',
  'nid' => '#0d233a',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['required'] = TRUE;
/* Relationship: Field: Your Army (field_your_army) */
$handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_army_game']['id'] = 'field_army_game';
$handler->display->display_options['fields']['field_army_game']['table'] = 'field_data_field_army_game';
$handler->display->display_options['fields']['field_army_game']['field'] = 'field_army_game';
$handler->display->display_options['fields']['field_army_game']['relationship'] = 'field_your_army_tid';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'Battles';
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
  'location' => 'location',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'game_results' => 'game_results',
);
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Battles Page */
$handler = $view->new_display('page', 'Battles Page', 'page_1');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix list-group';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Battles Reported</h3>
<p>No battles have been fought at this battlefield.</p>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Battlefield (field_location) - reverse (to Content) */
$handler->display->display_options['relationships']['reverse_field_location_node']['id'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_location_node']['field'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['reverse_field_location_node']['required'] = TRUE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['text'] = '/battles/!1';
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Field: Content: Images */
$handler->display->display_options['fields']['field_images']['id'] = 'field_images';
$handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
$handler->display->display_options['fields']['field_images']['field'] = 'field_images';
$handler->display->display_options['fields']['field_images']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_images']['label'] = '';
$handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_images']['element_type'] = 'span';
$handler->display->display_options['fields']['field_images']['element_class'] = 'thumbnail';
$handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_images']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_images']['element_wrapper_class'] = 'pull-left iconbuffer';
$handler->display->display_options['fields']['field_images']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_images']['empty'] = '[field_image]';
$handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_images']['type'] = 'single_image';
$handler->display->display_options['fields']['field_images']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
  'single_image_delta' => '',
);
$handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_game']['id'] = 'field_game';
$handler->display->display_options['fields']['field_game']['table'] = 'field_data_field_game';
$handler->display->display_options['fields']['field_game']['field'] = 'field_game';
$handler->display->display_options['fields']['field_game']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_game']['label'] = '';
$handler->display->display_options['fields']['field_game']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_game']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['text'] = 'Details';
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_your_army']['label'] = '';
$handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
/* Field: Field: Opponent's Army */
$handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
$handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_opponent_s_army']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<i class="icon glyphicon glyphicon-align-left" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="battle commentary"></i>';
$handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['body']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
/* Field: Content: Images */
$handler->display->display_options['fields']['field_images_1']['id'] = 'field_images_1';
$handler->display->display_options['fields']['field_images_1']['table'] = 'field_data_field_images';
$handler->display->display_options['fields']['field_images_1']['field'] = 'field_images';
$handler->display->display_options['fields']['field_images_1']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_images_1']['label'] = '';
$handler->display->display_options['fields']['field_images_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_images_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_images_1']['alter']['text'] = '<i class="icon glyphicon glyphicon-picture" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="battle photos"></i>';
$handler->display->display_options['fields']['field_images_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_images_1']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_images_1']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['field_images_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_images_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_images_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_images_1']['type'] = 'single_image';
$handler->display->display_options['fields']['field_images_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
  'single_image_delta' => '',
);
$handler->display->display_options['fields']['field_images_1']['delta_offset'] = '0';
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<i class="icon glyphicon glyphicon-screenshot" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="War Zone battle"></i>';
$handler->display->display_options['fields']['field_event_link']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_event_link']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['text'] = '<span class="label label-info">[timestamp]</span>';
$handler->display->display_options['fields']['timestamp']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['timestamp']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['fields']['comment_count']['label'] = '';
$handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
$handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['comment_count']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="comments"><i class="icon glyphicon glyphicon-comment" aria-hidden="true" aria-hidden="true" ></i> <span class="badge">[comment_count]</span></span>';
$handler->display->display_options['fields']['comment_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['comment_count']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['comment_count']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
/* Field: Flags: Flag counter */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'flag_counts';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
$handler->display->display_options['fields']['count']['label'] = '';
$handler->display->display_options['fields']['count']['exclude'] = TRUE;
$handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['count']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="salutes"><i class="icon glyphicon glyphicon-thumbs-up" aria-hidden="true" aria-hidden="true" ></i> <span class="badge">[count]</span></span>';
$handler->display->display_options['fields']['count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['count']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['count']['alter']['link_class'] = 'btn btn-default';
$handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
  <div class="pull-left">
    <span class="thumbnail">[field_images]</span>
  </div>
  <div class="media-body">
<div>
  <div class="pull-right"><strong>[field_game]</strong></div>
  <div><h4 class="media-heading">[title]</h4></div>
</div>

<div>
  <div>
    <strong>[field_your_army] vs [field_opponent_s_army]</strong>
  </div>
  <div class="well well-sm">
    <small>[count] [comment_count] [body] [field_images_1] [field_event_link] [timestamp]</small>
  </div>
</div>
</div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['nid']['title'] = '%1 Battles';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'location' => 'location',
);
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
  'location' => 'location',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_location_node';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'game_results' => 'game_results',
);
$handler->display->display_options['path'] = 'node/%/battlefield-battles';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Battles';
$handler->display->display_options['menu']['description'] = 'Battles that have been played at this battlefield';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'image',
  4 => 'taxonomy',
  5 => 'text',
  6 => 'entityreference',
);
