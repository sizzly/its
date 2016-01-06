<?php
/**
 * @file
 * views_view.user_summary_views.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'user_summary_views';
$view->description = 'Creates data for signature widget';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Widget: Sig Data Source';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Insufficient battle results';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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

/* Display: Small Game Record */
$handler = $view->new_display('panel_pane', 'Small Game Record', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Career Results';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_your_results' => 'field_your_results',
  'nid' => 'nid',
);
$handler->display->display_options['style_options']['default'] = 'field_your_results';
$handler->display->display_options['style_options']['info'] = array(
  'field_your_results' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['argument_input'] = array(
  'uid' => array(
    'type' => 'context',
    'context' => 'entity:user.uid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Author uid',
  ),
);

/* Display: Battle points */
$handler = $view->new_display('panel_pane', 'Battle points', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Summary';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: SUM(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_your_results']['label'] = 'Battle Points';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
$handler->display->display_options['argument_input'] = array(
  'uid' => array(
    'type' => 'context',
    'context' => 'entity:user.uid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Author uid',
  ),
);

/* Display: Data export */
$handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'views_data_export_csv';
$handler->display->display_options['style_options']['provide_file'] = 0;
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['style_options']['separator'] = ': ';
$handler->display->display_options['style_options']['quote'] = 0;
$handler->display->display_options['style_options']['trim'] = 0;
$handler->display->display_options['style_options']['replace_newlines'] = 0;
$handler->display->display_options['style_options']['header'] = 0;
$handler->display->display_options['style_options']['encoding'] = 'ASCII';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['path'] = 'widget/%/record.txt';

/* Display: Data export */
$handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_csv';
$handler->display->display_options['style_options']['provide_file'] = 0;
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['style_options']['separator'] = ': ';
$handler->display->display_options['style_options']['quote'] = 0;
$handler->display->display_options['style_options']['trim'] = 0;
$handler->display->display_options['style_options']['replace_newlines'] = 0;
$handler->display->display_options['style_options']['header'] = 0;
$handler->display->display_options['style_options']['encoding'] = 'ASCII';
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
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
$handler->display->display_options['path'] = 'widget/%/name.txt';

/* Display: Data export */
$handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_3');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_csv';
$handler->display->display_options['style_options']['provide_file'] = 0;
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['style_options']['separator'] = ': ';
$handler->display->display_options['style_options']['quote'] = 0;
$handler->display->display_options['style_options']['trim'] = 0;
$handler->display->display_options['style_options']['replace_newlines'] = 0;
$handler->display->display_options['style_options']['header'] = 0;
$handler->display->display_options['style_options']['encoding'] = 'ASCII';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: File Usage: File */
$handler->display->display_options['relationships']['user_to_file']['id'] = 'user_to_file';
$handler->display->display_options['relationships']['user_to_file']['table'] = 'file_usage';
$handler->display->display_options['relationships']['user_to_file']['field'] = 'user_to_file';
$handler->display->display_options['relationships']['user_to_file']['relationship'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: File: Path */
$handler->display->display_options['fields']['uri']['id'] = 'uri';
$handler->display->display_options['fields']['uri']['table'] = 'file_managed';
$handler->display->display_options['fields']['uri']['field'] = 'uri';
$handler->display->display_options['fields']['uri']['relationship'] = 'user_to_file';
$handler->display->display_options['fields']['uri']['label'] = '';
$handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uri']['empty'] = 'http://itoysoldiers.com/sites/itoysoldiers.com/files/styles/user_avatar/public/225px-Battle_icon_gladii.svg__207.png';
$handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: File: Upload date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['relationship'] = 'user_to_file';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
$handler->display->display_options['path'] = 'widget/%/avatar.txt';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'list',
);
