<?php
/**
 * @file
 * views_view.term_armies_stats.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'term_armies_stats';
$view->description = '';
$view->tag = 'armies-3.0';
$view->base_table = 'node';
$view->human_name = 'Term: Armies: Stats';
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
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="lead">Insufficient Battle Results</div>
<p>There are not enough battles for this army/faction to present statistics</p>';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Contextual filter: Field: Your Army (field_your_army) */
$handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_your_army_tid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['field_your_army_tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['field_your_army_tid']['validate_options']['vocabularies'] = array(
  'armies' => 'armies',
);
$handler->display->display_options['arguments']['field_your_army_tid']['validate_options']['type'] = 'tids';
$handler->display->display_options['arguments']['field_your_army_tid']['break_phrase'] = TRUE;
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

/* Display: Average Battle Score */
$handler = $view->new_display('panel_pane', 'Average Battle Score', 'panel_pane_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<div>
<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">0.0000</h2>
  <h5>average battle score</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-stats" aria-hidden="true"></span>
  </div>
</div>
</div>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[field_your_results]</h2>
  <h5>average battle score</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-stats" aria-hidden="true"></span>
  </div>
</div>
</div>';
$handler->display->display_options['fields']['nothing']['alter']['path'] = './stats';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_your_army_tid' => array(
    'type' => 'none',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Army',
  ),
);

/* Display: Games by System Chart */
$handler = $view->new_display('panel_pane', 'Games by System Chart', 'panel_pane_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_game_system_armies';
$handler->display->display_options['style_options']['data_fields'] = array(
  'nid' => 'nid',
  'field_game_system_armies' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_game_system_armies' => '#2f7ed8',
  'nid' => '#0d233a',
);
$handler->display->display_options['style_options']['title'] = 'Battles';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Your Army (field_your_army) */
$handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['label'] = 'army';
$handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Game System */
$handler->display->display_options['fields']['field_game_system_armies']['id'] = 'field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['table'] = 'field_data_field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['field'] = 'field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['relationship'] = 'field_your_army_tid';
$handler->display->display_options['fields']['field_game_system_armies']['type'] = 'taxonomy_term_reference_plain';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'Battles';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
);
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Victory Percentage */
$handler = $view->new_display('panel_pane', 'Victory Percentage', 'panel_pane_3');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">0.00%</h2>
  <h5>victory</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-flag" aria-hidden="true"></span>
  </div>
</div>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['separator'] = '';
/* Field: SUM(Field: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = '';
$handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_victory']['element_label_colon'] = FALSE;
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['label'] = '';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '2';
$handler->display->display_options['fields']['expression']['expression'] = '([field_victory] / [nid]) * 100';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[expression]%</h2>
  <h5>victory</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-flag" aria-hidden="true"></span>
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Commander Survival */
$handler = $view->new_display('panel_pane', 'Commander Survival', 'panel_pane_4');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: SUM(Content: Your Commander Survival) */
$handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_your_commander_survival']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_commander_survival']['type'] = 'list_key';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['label'] = '';
$handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '2';
$handler->display->display_options['fields']['expression']['expression'] = '(([nid] - [field_your_commander_survival]) / [nid]) *100';
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
/* Filter criterion: Content: Your Commander Survival (field_your_commander_survival) */
$handler->display->display_options['filters']['field_your_commander_survival_value']['id'] = 'field_your_commander_survival_value';
$handler->display->display_options['filters']['field_your_commander_survival_value']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['filters']['field_your_commander_survival_value']['field'] = 'field_your_commander_survival_value';
$handler->display->display_options['filters']['field_your_commander_survival_value']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Commander Slain */
$handler = $view->new_display('panel_pane', 'Commander Slain', 'panel_pane_5');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: SUM(Content: Your Commander Survival) */
$handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_your_commander_survival']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_commander_survival']['type'] = 'list_key';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['label'] = '';
$handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '2';
$handler->display->display_options['fields']['expression']['expression'] = '(([field_your_commander_survival]) / [nid]) *100';
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
/* Filter criterion: Content: Your Commander Survival (field_your_commander_survival) */
$handler->display->display_options['filters']['field_your_commander_survival_value']['id'] = 'field_your_commander_survival_value';
$handler->display->display_options['filters']['field_your_commander_survival_value']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['filters']['field_your_commander_survival_value']['field'] = 'field_your_commander_survival_value';
$handler->display->display_options['filters']['field_your_commander_survival_value']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Top Players */
$handler = $view->new_display('panel_pane', 'Top Players', 'panel_pane_6');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Top Players';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'media';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'media-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_type'] = 'span';
$handler->display->display_options['fields']['picture']['element_class'] = 'media-object pull-left iconbuffer';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'media-left';
$handler->display->display_options['fields']['picture']['image_style'] = 'button';
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '<span class="lead">[name]</span>
<br><small><strong>[field_your_results]</strong></small>';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['name']['element_wrapper_class'] = 'media-body';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: AVG(Field: Your Results (field_your_results)) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
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
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
/* Filter criterion: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Most Battles */
$handler = $view->new_display('panel_pane', 'Most Battles', 'panel_pane_7');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Most Battles';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'media';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'media-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_type'] = 'span';
$handler->display->display_options['fields']['picture']['element_class'] = 'pull-left media-object iconbuffer';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'media-left';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '<span class="lead">[name]</span>
<br><small><strong>[nid]</strong></small>';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Distinct Players */
$handler = $view->new_display('panel_pane', 'Distinct Players', 'panel_pane_8');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<div>
<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">0.0000</h2>
  <h5>average battle score</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-stats" aria-hidden="true"></span>
  </div>
</div>
</div>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(DISTINCT Content: Author uid) */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['empty'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[uid]</h2>
  <h5>players</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-user" aria-hidden="true"></span>
  </div>
</div>
</div>';
$handler->display->display_options['fields']['nothing']['alter']['path'] = './stats';
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
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_your_army_tid' => array(
    'type' => 'none',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Army',
  ),
);

/* Display: Top Factions */
$handler = $view->new_display('panel_pane', 'Top Factions', 'panel_pane_9');
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Your Army (field_your_army) */
$handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_your_army_tid';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left media-object iconbuffer';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = '';
$handler->display->display_options['fields']['field_your_army']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_your_army']['alter']['text'] = '<span class="lead">[field_your_army]</span>
<br><small><strong>[field_your_results]</strong></small>';
$handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: AVG(Field: Your Results (field_your_results)) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';

/* Display: Factions Battles */
$handler = $view->new_display('panel_pane', 'Factions Battles', 'panel_pane_10');
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Your Army (field_your_army) */
$handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_your_army_tid';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left media-object iconbuffer';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = '';
$handler->display->display_options['fields']['field_your_army']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_your_army']['alter']['text'] = '<span class="lead">[field_your_army]</span>
<br><small><strong>[nid]</strong></small>';
$handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';

/* Display: Nemesis Factions */
$handler = $view->new_display('panel_pane', 'Nemesis Factions', 'panel_pane_11');
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
$handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
$handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
$handler->display->display_options['relationships']['field_opponent_s_army_tid']['label'] = 'field_opponent_s_army_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_opponent_s_army_tid';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_class'] = 'pull-left media-object iconbuffer';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'media-left';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['label'] = '';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['expression']['precision'] = '0';
$handler->display->display_options['fields']['expression']['expression'] = '6 - [field_your_results]';
/* Field: Field: Opponent's Army */
$handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
$handler->display->display_options['fields']['field_opponent_s_army']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_opponent_s_army']['alter']['text'] = '<span class="lead">[field_opponent_s_army]</span>
<br><small><strong>[expression]</strong></small>';
$handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: AVG(Field: Your Results (field_your_results)) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
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
/* Filter criterion: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';

/* Display: Nemesis Players */
$handler = $view->new_display('panel_pane', 'Nemesis Players', 'panel_pane_12');
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['required'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_game_reference_node';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_type'] = 'span';
$handler->display->display_options['fields']['picture']['element_class'] = 'pull-left media-object iconbuffer';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'media-left';
$handler->display->display_options['fields']['picture']['image_style'] = 'button';
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['label'] = '';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['expression']['precision'] = '0';
$handler->display->display_options['fields']['expression']['expression'] = '6 - [field_your_results]';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '<span class="lead">[name]</span>
<br><small><strong>[expression]</strong></small>';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: AVG(Field: Your Results (field_your_results)) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
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
/* Filter criterion: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'list',
  4 => 'taxonomy',
  5 => 'computed_field',
  6 => 'image',
);
