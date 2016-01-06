<?php
/**
 * @file
 * views_view.war_zone_all_platers.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_all_platers';
$view->description = 'Generates the list of players in a war zone.';
$view->tag = 'War Zones 4.1';
$view->base_table = 'node_registration';
$view->human_name = 'War Zone: All: Players';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '36';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'pull-left col-xs-12 col-sm-6';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Node registration: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['exclude'] = TRUE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['empty'] = '[field_register_real_name]';
$handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['empty'] = '[field_register_real_name]';
$handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Field: Army */
$handler->display->display_options['fields']['field_register_army']['id'] = 'field_register_army';
$handler->display->display_options['fields']['field_register_army']['table'] = 'field_data_field_register_army';
$handler->display->display_options['fields']['field_register_army']['field'] = 'field_register_army';
$handler->display->display_options['fields']['field_register_army']['exclude'] = TRUE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['exclude'] = TRUE;
$handler->display->display_options['fields']['picture']['image_style'] = 'button';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel panel-default">
<div class="panel-body">
<div class="pull-left iconbuffer">
[picture]
</div>
<strong>[uid]</strong><br>
<small class="text-muted">[field_register_army]</small>
</div>
</div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_league' => 'war_zone_league',
  'war_zone_tournament' => 'war_zone_tournament',
);
/* Filter criterion: Node registration: Waitinglist */
$handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
$handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
$handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
$handler->display->display_options['filters']['waitinglist']['value'] = '0';
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';

/* Display: Player List */
$handler = $view->new_display('panel_pane', 'Player List', 'panel_pane_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'row';
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node_registration',
  2 => 'text',
  3 => 'taxonomy',
  4 => 'views_content',
);
