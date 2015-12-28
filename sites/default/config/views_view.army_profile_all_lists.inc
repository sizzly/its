<?php
/**
 * @file
 * views_view.army_profile_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'army_profile_all_lists';
$view->description = 'Assorted lists of Army Profiles.';
$view->tag = 'Army Profiles 1.0';
$view->base_table = 'node';
$view->human_name = 'Army Profile: All: Lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Army Profiles';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'All Army Profiles';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
$handler->display->display_options['fields']['field_army_profile']['id'] = 'field_army_profile';
$handler->display->display_options['fields']['field_army_profile']['table'] = 'field_data_field_army_profile';
$handler->display->display_options['fields']['field_army_profile']['field'] = 'field_army_profile';
$handler->display->display_options['fields']['field_army_profile']['label'] = '';
$handler->display->display_options['fields']['field_army_profile']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_army_profile']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_army_profile']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_army_profile']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_army_profile']['delta_offset'] = '0';
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
  'army_profile' => 'army_profile',
);
/* Filter criterion: Army (field_army_profile) (selective) */
$handler->display->display_options['filters']['field_army_profile_tid_selective']['id'] = 'field_army_profile_tid_selective';
$handler->display->display_options['filters']['field_army_profile_tid_selective']['table'] = 'field_data_field_army_profile';
$handler->display->display_options['filters']['field_army_profile_tid_selective']['field'] = 'field_army_profile_tid_selective';
$handler->display->display_options['filters']['field_army_profile_tid_selective']['ui_name'] = 'Army (field_army_profile) (selective)';
$handler->display->display_options['filters']['field_army_profile_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_army_profile_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_army_profile_tid_selective']['expose']['label'] = 'Army/Faction';
$handler->display->display_options['filters']['field_army_profile_tid_selective']['expose']['identifier'] = 'field_army_profile_tid_selective';
$handler->display->display_options['filters']['field_army_profile_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_army_profile_tid_selective']['selective_display_field'] = 'field_army_profile';
$handler->display->display_options['filters']['field_army_profile_tid_selective']['selective_display_sort'] = 'ASC';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Browse Army Profiles';
$handler->display->display_options['path'] = 'order-of-battle/player-armies/list';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'List';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Newest Armies';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pane_category']['name'] = 'Army Profiles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Trending Army Profiles */
$handler = $view->new_display('panel_pane', 'Trending Army Profiles', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Army Profiles';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
$handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
$handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
$handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
$handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
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
  'army_profile' => 'army_profile',
);
$handler->display->display_options['pane_category']['name'] = 'Army Profiles';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'views_content',
);
