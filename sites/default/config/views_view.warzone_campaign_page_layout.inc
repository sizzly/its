<?php
/**
 * @file
 * views_view.warzone_campaign_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'warzone_campaign_page_layout';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Warzone: Campaign: Page Layout';
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
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
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
  'narrative_campaign' => 'narrative_campaign',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'narrative_campaign' => 'narrative_campaign',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);

/* Display: Header Image */
$handler = $view->new_display('block', 'Header Image', 'block_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Header Image */
$handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
$handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
$handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
$handler->display->display_options['fields']['field_header_image']['label'] = '';
$handler->display->display_options['fields']['field_header_image']['element_type'] = 'p';
$handler->display->display_options['fields']['field_header_image']['element_class'] = 'text-center';
$handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_header_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_header_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);

/* Display: Page Header: Campaign */
$handler = $view->new_display('panel_pane', 'Page Header: Campaign', 'panel_pane_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'col-xs-6 col-sm-12 col-md-6 pull-left text-center';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'lightbox2__lightbox__user_avatar__original';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Field: Game */
$handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['label'] = '';
$handler->display->display_options['fields']['field_game_warzone']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
/* Field: Flags: Flag counter */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'flag_counts';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
$handler->display->display_options['fields']['count']['label'] = '';
$handler->display->display_options['fields']['count']['exclude'] = TRUE;
$handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['count']['empty'] = '0';
$handler->display->display_options['fields']['count']['separator'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-6 col-sm-12 col-md-6 text-center">
<span class="thumbnail">[field_image]</span>
</div>
<div class="col-xs-6 col-sm-12 col-md-6">
<strong>[field_game_warzone]</strong></br>
<small>Salutes <span class="badge">[count]</span></small>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'narrative_campaign' => 'narrative_campaign',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
  3 => 'views_content',
  4 => 'taxonomy',
);
