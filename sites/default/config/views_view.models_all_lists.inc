<?php
/**
 * @file
 * views_view.models_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'models_all_lists';
$view->description = 'Generates lists of modelling projects. ';
$view->tag = 'Model Projects 1.0';
$view->base_table = 'node';
$view->human_name = 'Models: All: Lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Modeling Projects';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Content: Army */
$handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
$handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
$handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
$handler->display->display_options['fields']['field_army_models']['label'] = '';
$handler->display->display_options['fields']['field_army_models']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_army_models']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_army_models']['type'] = 'taxonomy_term_reference_plain';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'models' => 'models',
);
/* Filter criterion: Army (field_army_models) (selective) */
$handler->display->display_options['filters']['field_army_models_tid_selective']['id'] = 'field_army_models_tid_selective';
$handler->display->display_options['filters']['field_army_models_tid_selective']['table'] = 'field_data_field_army_models';
$handler->display->display_options['filters']['field_army_models_tid_selective']['field'] = 'field_army_models_tid_selective';
$handler->display->display_options['filters']['field_army_models_tid_selective']['ui_name'] = 'Army (field_army_models) (selective)';
$handler->display->display_options['filters']['field_army_models_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_army_models_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_army_models_tid_selective']['expose']['label'] = 'Army';
$handler->display->display_options['filters']['field_army_models_tid_selective']['expose']['identifier'] = 'field_army_models_tid_selective';
$handler->display->display_options['filters']['field_army_models_tid_selective']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_army_models_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_army_models_tid_selective']['selective_display_field'] = 'field_army_models';
$handler->display->display_options['filters']['field_army_models_tid_selective']['selective_display_sort'] = 'ASC';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'modeling-projects';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
);
