<?php
/**
 * @file
 * views_view.warzone_all_awards.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'warzone_all_awards';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'field_collection_item';
$view->human_name = 'Warzone: ALL: Awards';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Awards';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'list-group-item';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'list-group';
$handler->display->display_options['style_options']['wrapper_class'] = 'list-group';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['field_award_registration_target_id']['id'] = 'field_award_registration_target_id';
$handler->display->display_options['relationships']['field_award_registration_target_id']['table'] = 'field_data_field_award_registration';
$handler->display->display_options['relationships']['field_award_registration_target_id']['field'] = 'field_award_registration_target_id';
$handler->display->display_options['relationships']['field_award_registration_target_id']['label'] = 'Node registration entity referenced from field_award_registration';
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['field_award_achievement_target_id']['id'] = 'field_award_achievement_target_id';
$handler->display->display_options['relationships']['field_award_achievement_target_id']['table'] = 'field_data_field_award_achievement';
$handler->display->display_options['relationships']['field_award_achievement_target_id']['field'] = 'field_award_achievement_target_id';
$handler->display->display_options['relationships']['field_award_achievement_target_id']['label'] = 'Content entity referenced from field_award_achievement';
/* Relationship: Node registration: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'field_award_registration_target_id';
/* Field: Field collection item: Field collection item ID */
$handler->display->display_options['fields']['item_id']['id'] = 'item_id';
$handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
$handler->display->display_options['fields']['item_id']['field'] = 'item_id';
$handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_award_registration_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = '';
$handler->display->display_options['fields']['field_register_real_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_register_real_name']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_award_achievement_target_id';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'uc_thumbnail',
  'image_link' => '',
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
/* Field: Node registration: User uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node_registration';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'field_award_registration_target_id';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['uid']['empty'] = '[field_register_real_name]';
$handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_award_achievement_target_id';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Filter criterion: Field collection item: Field name */
$handler->display->display_options['filters']['field_name']['id'] = 'field_name';
$handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
$handler->display->display_options['filters']['field_name']['field'] = 'field_name';
$handler->display->display_options['filters']['field_name']['value'] = array(
  'field_awards_competitive' => 'field_awards_competitive',
);

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'War Zones';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'field_collection',
  2 => 'text',
  3 => 'image',
  4 => 'views_content',
);
