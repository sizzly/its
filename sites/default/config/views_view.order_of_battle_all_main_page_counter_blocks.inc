<?php
/**
 * @file
 * views_view.order_of_battle_all_main_page_counter_blocks.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'order_of_battle_all_main_page_counter_blocks';
$view->description = 'Generates the content counts on the OOB landing page.';
$view->tag = 'Order of Battle 1.0';
$view->base_table = 'node';
$view->human_name = 'Order of Battle: All: Main Page Counter Blocks';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<h2 class="m2-top-none">[nid]</h2>
<h5>Army Profiles</h5>
<div class="stat-icon">
<i class="fa fa-bookmark fa-3x"></i>
</div>';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'order-of-battle/player-armies';
$handler->display->display_options['fields']['nid']['alter']['alt'] = 'Army Profiles';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'panel-stat3 bg-info ';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'col-sm-6 col-md-3';
$handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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

/* Display: Army Profiles */
$handler = $view->new_display('panel_pane', 'Army Profiles', 'panel_pane_1');

/* Display: List Crit */
$handler = $view->new_display('panel_pane', 'List Crit', 'panel_pane_2');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<h2 class="m2-top-none">[nid]</h2>
<h5>Army Lists</h5>
<div class="stat-icon">
<i class="fa fa-list fa-3x"></i>
</div>';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'order-of-battle/listcrit';
$handler->display->display_options['fields']['nid']['alter']['alt'] = 'Army Profiles';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'panel-stat3 bg-danger';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'col-sm-6 col-md-3';
$handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  'listcrit' => 'listcrit',
);

/* Display: Gaming Clubs */
$handler = $view->new_display('panel_pane', 'Gaming Clubs', 'panel_pane_3');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<h2 class="m2-top-none">[nid]</h2>
<h5>Gaming Clubs</h5>
<div class="stat-icon">
<i class="fa fa-users fa-3x"></i>
</div>';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'order-of-battle/gaming-clubs';
$handler->display->display_options['fields']['nid']['alter']['alt'] = 'Army Profiles';
$handler->display->display_options['fields']['nid']['element_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_class'] = 'panel-stat3 bg-success';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'col-sm-6 col-md-3';
$handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
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
  'gaming_club' => 'gaming_club',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
);
