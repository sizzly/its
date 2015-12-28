<?php
/**
 * @file
 * views_view.meta_results.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'meta_results';
$view->description = 'Battle stats for a particular meta term';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Meta: Results';
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
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['override'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h4>Insufficient Battle Results</h4>
<p>Report more battles!</p>';
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
/* Field: SUM(Field: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = 'W';
/* Field: SUM(Field: Draw) */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_draw']['label'] = 'D';
/* Field: SUM(Field: Defeat) */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_defeat']['label'] = 'L';
/* Sort criterion: AVG(Field: Your Results (field_your_results)) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
/* Sort criterion: SUM(Field: Victory (field_victory)) */
$handler->display->display_options['sorts']['field_victory_value']['id'] = 'field_victory_value';
$handler->display->display_options['sorts']['field_victory_value']['table'] = 'field_data_field_victory';
$handler->display->display_options['sorts']['field_victory_value']['field'] = 'field_victory_value';
$handler->display->display_options['sorts']['field_victory_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_victory_value']['order'] = 'DESC';
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
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
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);

/* Display: Top Armies */
$handler = $view->new_display('panel_pane', 'Top Armies', 'panel_pane_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['type'] = 'bar';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_your_army';
$handler->display->display_options['style_options']['data_fields'] = array(
  'field_your_results' => 'field_your_results',
  'field_your_army' => 0,
  'field_victory' => 0,
  'field_draw' => 0,
  'field_defeat' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_your_army' => '#2f7ed8',
  'field_your_results' => '#0d233a',
  'field_victory' => '#8bbc21',
  'field_draw' => '#910000',
  'field_defeat' => '#1aadce',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '250';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_min'] = '0';
$handler->display->display_options['style_options']['yaxis_max'] = '5';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
/* Field: SUM(Field: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = 'W';
$handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
/* Field: SUM(Field: Draw) */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_draw']['label'] = 'D';
$handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
/* Field: SUM(Field: Defeat) */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_defeat']['label'] = 'L';
$handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
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
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: COUNT(Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';
$handler->display->display_options['pane_category']['name'] = 'Meta';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Bottom Armies */
$handler = $view->new_display('panel_pane', 'Bottom Armies', 'panel_pane_2');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['type'] = 'bar';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_your_army';
$handler->display->display_options['style_options']['data_fields'] = array(
  'field_your_results' => 'field_your_results',
  'field_your_army' => 0,
  'field_victory' => 0,
  'field_draw' => 0,
  'field_defeat' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_your_army' => '#2f7ed8',
  'field_your_results' => '#0d233a',
  'field_victory' => '#8bbc21',
  'field_draw' => '#910000',
  'field_defeat' => '#1aadce',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '250';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_min'] = '0';
$handler->display->display_options['style_options']['yaxis_max'] = '5';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
/* Field: SUM(Field: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = 'W';
$handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
/* Field: SUM(Field: Draw) */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_draw']['label'] = 'D';
$handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
/* Field: SUM(Field: Defeat) */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_defeat']['label'] = 'L';
$handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: AVG(Field: Your Results (field_your_results)) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
/* Sort criterion: SUM(Field: Victory (field_victory)) */
$handler->display->display_options['sorts']['field_victory_value']['id'] = 'field_victory_value';
$handler->display->display_options['sorts']['field_victory_value']['table'] = 'field_data_field_victory';
$handler->display->display_options['sorts']['field_victory_value']['field'] = 'field_victory_value';
$handler->display->display_options['sorts']['field_victory_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_victory_value']['order'] = 'DESC';
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
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: COUNT(Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';
$handler->display->display_options['pane_category']['name'] = 'Meta';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Army Results Page */
$handler = $view->new_display('page', 'Army Results Page', 'page_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
$handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1: Army Results';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
  'custom_property' => 'custom_property',
  'deployment' => 'deployment',
  'missions' => 'missions',
  'scenario_special_rules' => 'scenario_special_rules',
  'victory_conditions' => 'victory_conditions',
);
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
$handler->display->display_options['path'] = 'taxonomy/term/%/army-results';

/* Display: Top Commanders */
$handler = $view->new_display('panel_pane', 'Top Commanders', 'panel_pane_3');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['type'] = 'bar';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'name';
$handler->display->display_options['style_options']['data_fields'] = array(
  'field_your_results' => 'field_your_results',
  'name' => 0,
  'field_victory' => 0,
  'field_draw' => 0,
  'field_defeat' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'name' => '#2f7ed8',
  'field_your_results' => '#0d233a',
  'field_victory' => '#8bbc21',
  'field_draw' => '#910000',
  'field_defeat' => '#1aadce',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '250';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_min'] = '0';
$handler->display->display_options['style_options']['yaxis_max'] = '5';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
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
$handler->display->display_options['fields']['name']['label'] = 'Commander';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
/* Field: SUM(Field: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = 'W';
$handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
/* Field: SUM(Field: Draw) */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_draw']['label'] = 'D';
$handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
/* Field: SUM(Field: Defeat) */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_defeat']['label'] = 'L';
$handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
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
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: COUNT(Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
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
$handler->display->display_options['pane_category']['name'] = 'Meta';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'list',
  4 => 'computed_field',
  5 => 'views_content',
);
