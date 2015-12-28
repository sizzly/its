<?php
/**
 * @file
 * views_view.army_profile_chronicle.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'army_profile_chronicle';
$view->description = 'Used to format the old Army Chronicles.  Need to revisit.';
$view->tag = 'Obsolete, fix';
$view->base_table = 'node';
$view->human_name = 'Army Profile: Chronicle';
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
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
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
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_army_profile_node_entityform']['id'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['relationships']['reverse_field_army_profile_node_entityform']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_army_profile_node_entityform']['field'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['relationships']['reverse_field_army_profile_node_entityform']['required'] = TRUE;
/* Field: Entityform Submission: Date */
$handler->display->display_options['fields']['field_date_call_to_battle']['id'] = 'field_date_call_to_battle';
$handler->display->display_options['fields']['field_date_call_to_battle']['table'] = 'field_data_field_date_call_to_battle';
$handler->display->display_options['fields']['field_date_call_to_battle']['field'] = 'field_date_call_to_battle';
$handler->display->display_options['fields']['field_date_call_to_battle']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_date_call_to_battle']['label'] = 'startDate';
$handler->display->display_options['fields']['field_date_call_to_battle']['settings'] = array(
  'format_type' => 'json',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = 'headline';
/* Field: Entityform Submission: Details */
$handler->display->display_options['fields']['field_details_ap_event_txt']['id'] = 'field_details_ap_event_txt';
$handler->display->display_options['fields']['field_details_ap_event_txt']['table'] = 'field_data_field_details_ap_event_txt';
$handler->display->display_options['fields']['field_details_ap_event_txt']['field'] = 'field_details_ap_event_txt';
$handler->display->display_options['fields']['field_details_ap_event_txt']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_details_ap_event_txt']['label'] = 'text';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_image']['label'] = 'media';
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'custom_formatters_medium_file_url';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Entityform Submission: Focus */
$handler->display->display_options['fields']['field_focus']['id'] = 'field_focus';
$handler->display->display_options['fields']['field_focus']['table'] = 'field_data_field_focus';
$handler->display->display_options['fields']['field_focus']['field'] = 'field_focus';
$handler->display->display_options['fields']['field_focus']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_focus']['label'] = 'tag';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
$handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image_1']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_image_1']['label'] = 'thumbnail';
$handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image_1']['type'] = 'custom_formatters_clone_of_medium_file_url';
$handler->display->display_options['fields']['field_image_1']['settings'] = array(
  'relationship' => '',
  'ui_name' => '',
  'custom_label' => 0,
  'label' => '',
  'element_label_colon' => 0,
  'exclude' => 0,
  'element_type_enable' => 0,
  'element_type' => '',
  'element_class_enable' => 0,
  'element_class' => '',
  'element_label_type_enable' => 0,
  'element_label_type' => '',
  'element_label_class_enable' => 0,
  'element_label_class' => '',
  'element_wrapper_type_enable' => 0,
  'element_wrapper_type' => '',
  'element_wrapper_class_enable' => 0,
  'element_wrapper_class' => '',
  'element_default_classes' => 0,
  'alter' => array(
    'alter_text' => 0,
    'text' => '',
    'make_link' => 0,
    'path' => '',
    'absolute' => 0,
    'replace_spaces' => 0,
    'external' => 0,
    'path_case' => 'none',
    'link_class' => '',
    'alt' => '',
    'rel' => '',
    'prefix' => '',
    'suffix' => '',
    'target' => '',
    'trim' => 0,
    'max_length' => '',
    'word_boundary' => 0,
    'ellipsis' => 0,
    'more_link' => 0,
    'more_link_text' => '',
    'more_link_path' => '',
    'html' => 0,
    'strip_tags' => 0,
    'preserve_tags' => '',
    'trim_whitespace' => 0,
    'nl2br' => 0,
  ),
  'empty' => '',
  'empty_zero' => 0,
  'hide_empty' => 0,
  'hide_alter_empty' => 0,
  'click_sort_column' => '',
  'type' => '',
  'field_api_classes' => 0,
);
/* Sort criterion: Entityform Submission: Date (field_date_call_to_battle) */
$handler->display->display_options['sorts']['field_date_call_to_battle_value']['id'] = 'field_date_call_to_battle_value';
$handler->display->display_options['sorts']['field_date_call_to_battle_value']['table'] = 'field_data_field_date_call_to_battle';
$handler->display->display_options['sorts']['field_date_call_to_battle_value']['field'] = 'field_date_call_to_battle_value';
$handler->display->display_options['sorts']['field_date_call_to_battle_value']['relationship'] = 'reverse_field_army_profile_node_entityform';
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
  'army_profile' => 'army_profile',
);

/* Display: Data export */
$handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'views_data_export_csv';
$handler->display->display_options['path'] = '_utility/%/timeline_data.csv';

/* Display: Manage Chronicle */
$handler = $view->new_display('page', 'Manage Chronicle', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Chronicle Entries';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Entityform Submission: Date */
$handler->display->display_options['fields']['field_date_call_to_battle']['id'] = 'field_date_call_to_battle';
$handler->display->display_options['fields']['field_date_call_to_battle']['table'] = 'field_data_field_date_call_to_battle';
$handler->display->display_options['fields']['field_date_call_to_battle']['field'] = 'field_date_call_to_battle';
$handler->display->display_options['fields']['field_date_call_to_battle']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_date_call_to_battle']['label'] = 'Event Date';
$handler->display->display_options['fields']['field_date_call_to_battle']['settings'] = array(
  'format_type' => 'uc_store',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = 'headline';
/* Field: Entityform Submission: Details */
$handler->display->display_options['fields']['field_details_ap_event_txt']['id'] = 'field_details_ap_event_txt';
$handler->display->display_options['fields']['field_details_ap_event_txt']['table'] = 'field_data_field_details_ap_event_txt';
$handler->display->display_options['fields']['field_details_ap_event_txt']['field'] = 'field_details_ap_event_txt';
$handler->display->display_options['fields']['field_details_ap_event_txt']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_details_ap_event_txt']['label'] = 'text';
$handler->display->display_options['fields']['field_details_ap_event_txt']['exclude'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_image']['label'] = 'media';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'custom_formatters_medium_file_url';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Entityform Submission: Focus */
$handler->display->display_options['fields']['field_focus']['id'] = 'field_focus';
$handler->display->display_options['fields']['field_focus']['table'] = 'field_data_field_focus';
$handler->display->display_options['fields']['field_focus']['field'] = 'field_focus';
$handler->display->display_options['fields']['field_focus']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_focus']['label'] = 'tag';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
$handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image_1']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['field_image_1']['label'] = 'thumbnail';
$handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image_1']['type'] = 'custom_formatters_clone_of_medium_file_url';
$handler->display->display_options['fields']['field_image_1']['settings'] = array(
  'relationship' => '',
  'ui_name' => '',
  'custom_label' => 0,
  'label' => '',
  'element_label_colon' => 0,
  'exclude' => 0,
  'element_type_enable' => 0,
  'element_type' => '',
  'element_class_enable' => 0,
  'element_class' => '',
  'element_label_type_enable' => 0,
  'element_label_type' => '',
  'element_label_class_enable' => 0,
  'element_label_class' => '',
  'element_wrapper_type_enable' => 0,
  'element_wrapper_type' => '',
  'element_wrapper_class_enable' => 0,
  'element_wrapper_class' => '',
  'element_default_classes' => 0,
  'alter' => array(
    'alter_text' => 0,
    'text' => '',
    'make_link' => 0,
    'path' => '',
    'absolute' => 0,
    'replace_spaces' => 0,
    'external' => 0,
    'path_case' => 'none',
    'link_class' => '',
    'alt' => '',
    'rel' => '',
    'prefix' => '',
    'suffix' => '',
    'target' => '',
    'trim' => 0,
    'max_length' => '',
    'word_boundary' => 0,
    'ellipsis' => 0,
    'more_link' => 0,
    'more_link_text' => '',
    'more_link_path' => '',
    'html' => 0,
    'strip_tags' => 0,
    'preserve_tags' => '',
    'trim_whitespace' => 0,
    'nl2br' => 0,
  ),
  'empty' => '',
  'empty_zero' => 0,
  'hide_empty' => 0,
  'hide_alter_empty' => 0,
  'click_sort_column' => '',
  'type' => '',
  'field_api_classes' => 0,
);
/* Field: Entityform Submission: Edit Link */
$handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
$handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['relationship'] = 'reverse_field_army_profile_node_entityform';
$handler->display->display_options['fields']['edit_entityform']['label'] = 'Edit';
$handler->display->display_options['fields']['edit_entityform']['text'] = 'Edit';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['path'] = 'dashboard/manage-chronicle';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Manage Chronicle';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Entity Reference */
$handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
  'field_date_call_to_battle' => 0,
  'field_title_chronicle' => 0,
  'field_details_ap_event_txt' => 0,
  'field_image' => 0,
  'field_focus' => 0,
  'field_image_1' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

/* Display: Army Profile List */
$handler = $view->new_display('panel_pane', 'Army Profile List', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_type'] = 'strong';
$handler->display->display_options['fields']['title']['element_class'] = 'menuicon';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'menuicon';
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Field: Content: Army */
$handler->display->display_options['fields']['field_army_profile']['id'] = 'field_army_profile';
$handler->display->display_options['fields']['field_army_profile']['table'] = 'field_data_field_army_profile';
$handler->display->display_options['fields']['field_army_profile']['field'] = 'field_army_profile';
$handler->display->display_options['fields']['field_army_profile']['label'] = '';
$handler->display->display_options['fields']['field_army_profile']['element_type'] = 'div';
$handler->display->display_options['fields']['field_army_profile']['element_class'] = 'menuicon';
$handler->display->display_options['fields']['field_army_profile']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_army_profile']['element_default_classes'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['pane_category']['name'] = 'Army Profile';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'date',
  3 => 'text',
  4 => 'image',
  5 => 'list',
  6 => 'views_content',
  7 => 'taxonomy',
);
