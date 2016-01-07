<?php
/**
 * @file
 * views_view.profile_commander.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'profile_commander';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Profile: Commander';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Commander';
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'col-md-4 col-xs-6';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
/* Relationship: Taxonomy term: Content using Commander */
$handler->display->display_options['relationships']['reverse_field_batteresult_commander_node']['id'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['relationships']['reverse_field_batteresult_commander_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_batteresult_commander_node']['field'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['relationships']['reverse_field_batteresult_commander_node']['required'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '<h3 class="panel-title">[name]</h3>
';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h3';
$handler->display->display_options['fields']['name']['element_class'] = 'panel-title';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['name']['element_wrapper_class'] = 'panel-heading';
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '70x70-square',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'Battles:  [nid]';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: SUM(Content: Victory) */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['relationship'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = '';
$handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_victory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_victory']['alter']['text'] = 'Victories:  [field_victory]';
$handler->display->display_options['fields']['field_victory']['element_label_colon'] = FALSE;
/* Field: AVG(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['relationship'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['alter']['text'] = 'AVG: [field_your_results]';
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel panel-default">
<div class="panel-heading">
    <h3 class="panel-title">[name]</h3>
  </div>
<div class="panel-body">
<span class="col-sm-6 pull-left">[field_image]</span>
[nid]<br>
[field_victory]<br>
[field_your_results]
</div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: AVG(Field: Your Results (field_your_results)) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
/* Contextual filter: Field: Your Army (field_your_army) */
$handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['relationship'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['arguments']['field_your_army_tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'units' => 'units',
);
/* Filter criterion: COUNT(Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';

/* Display: Army Profile */
$handler = $view->new_display('panel_pane', 'Army Profile', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'Term';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: User Profile */
$handler = $view->new_display('panel_pane', 'User Profile', 'panel_pane_2');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_batteresult_commander_node';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['pane_category']['name'] = 'User';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'image',
  3 => 'computed_field',
  4 => 'list',
  5 => 'views_content',
);
