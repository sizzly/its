<?php
/**
 * @file
 * views_view.war_zone_all_management.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_all_management';
$view->description = 'Generates the tool bar for managing a war zone.';
$view->tag = 'War Zones 4.1';
$view->base_table = 'node';
$view->human_name = 'War Zone: All: Management';
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
$handler->display->display_options['row_plugin'] = 'fields';
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

/* Display: Action Panel */
$handler = $view->new_display('panel_pane', 'Action Panel', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: War Zone: All: Open Registration */
$handler->display->display_options['fields']['war_zone_all_open_registration']['id'] = 'war_zone_all_open_registration';
$handler->display->display_options['fields']['war_zone_all_open_registration']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['war_zone_all_open_registration']['field'] = 'war_zone_all_open_registration';
$handler->display->display_options['fields']['war_zone_all_open_registration']['label'] = '';
$handler->display->display_options['fields']['war_zone_all_open_registration']['exclude'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_open_registration']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_open_registration']['alter']['text'] = '<li role="presentation">[war_zone_all_open_registration]</li>';
$handler->display->display_options['fields']['war_zone_all_open_registration']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_open_registration']['alter']['preserve_tags'] = '<a> <li>';
$handler->display->display_options['fields']['war_zone_all_open_registration']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['war_zone_all_open_registration']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['war_zone_all_open_registration']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_open_registration']['rules_link'] = array(
  'rules_link_parameters' => '',
  'rules_link_rewrite' => '',
);
/* Field: Content: War Zone: All: Start */
$handler->display->display_options['fields']['wz_start']['id'] = 'wz_start';
$handler->display->display_options['fields']['wz_start']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['wz_start']['field'] = 'wz_start';
$handler->display->display_options['fields']['wz_start']['label'] = '';
$handler->display->display_options['fields']['wz_start']['exclude'] = TRUE;
$handler->display->display_options['fields']['wz_start']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['wz_start']['alter']['text'] = '<li role="presentation">[wz_start]</li>';
$handler->display->display_options['fields']['wz_start']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['wz_start']['alter']['preserve_tags'] = '<a> <li>';
$handler->display->display_options['fields']['wz_start']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['wz_start']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['wz_start']['rules_link'] = array(
  'rules_link_parameters' => '',
  'rules_link_rewrite' => '',
);
/* Field: Content: War Zone: Tournament: Next Round */
$handler->display->display_options['fields']['war_zone_tournament_next_round']['id'] = 'war_zone_tournament_next_round';
$handler->display->display_options['fields']['war_zone_tournament_next_round']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['war_zone_tournament_next_round']['field'] = 'war_zone_tournament_next_round';
$handler->display->display_options['fields']['war_zone_tournament_next_round']['label'] = '';
$handler->display->display_options['fields']['war_zone_tournament_next_round']['exclude'] = TRUE;
$handler->display->display_options['fields']['war_zone_tournament_next_round']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['war_zone_tournament_next_round']['alter']['text'] = '<li role="presentation">[war_zone_tournament_next_round]</li>';
$handler->display->display_options['fields']['war_zone_tournament_next_round']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['war_zone_tournament_next_round']['alter']['preserve_tags'] = '<a> <li>';
$handler->display->display_options['fields']['war_zone_tournament_next_round']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['war_zone_tournament_next_round']['rules_link'] = array(
  'rules_link_parameters' => '',
  'rules_link_rewrite' => '',
);
/* Field: Content: War Zone: All: Complete */
$handler->display->display_options['fields']['wz_complete']['id'] = 'wz_complete';
$handler->display->display_options['fields']['wz_complete']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['wz_complete']['field'] = 'wz_complete';
$handler->display->display_options['fields']['wz_complete']['label'] = '';
$handler->display->display_options['fields']['wz_complete']['exclude'] = TRUE;
$handler->display->display_options['fields']['wz_complete']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['wz_complete']['alter']['text'] = '<li role="presentation">[wz_complete]</li>';
$handler->display->display_options['fields']['wz_complete']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['wz_complete']['alter']['preserve_tags'] = '<a> <li>';
$handler->display->display_options['fields']['wz_complete']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['wz_complete']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['wz_complete']['rules_link'] = array(
  'rules_link_parameters' => '',
  'rules_link_rewrite' => '',
);
/* Field: Content: War Zone: All: Generate Painting Scorecards */
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['id'] = 'war_zone_all_generate_painting_s';
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['field'] = 'war_zone_all_generate_painting_s';
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['label'] = '';
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['exclude'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['alter']['text'] = '<li role="presentation">[war_zone_all_generate_painting_s]</li>';
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['alter']['preserve_tags'] = '<a> <li>';
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['war_zone_all_generate_painting_s']['rules_link'] = array(
  'rules_link_parameters' => '',
  'rules_link_rewrite' => '',
);
/* Field: Content: War Zone: All: Generate Comp Scorecards */
$handler->display->display_options['fields']['war_zone_all_generate_comp']['id'] = 'war_zone_all_generate_comp';
$handler->display->display_options['fields']['war_zone_all_generate_comp']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['war_zone_all_generate_comp']['field'] = 'war_zone_all_generate_comp';
$handler->display->display_options['fields']['war_zone_all_generate_comp']['label'] = '';
$handler->display->display_options['fields']['war_zone_all_generate_comp']['exclude'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_generate_comp']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_generate_comp']['alter']['text'] = '<li role="presentation">[war_zone_all_generate_comp]</li>';
$handler->display->display_options['fields']['war_zone_all_generate_comp']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['war_zone_all_generate_comp']['alter']['preserve_tags'] = '<a> <li>';
$handler->display->display_options['fields']['war_zone_all_generate_comp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['war_zone_all_generate_comp']['rules_link'] = array(
  'rules_link_parameters' => '',
  'rules_link_rewrite' => '',
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="nav nav-pills">
[war_zone_all_open_registration]
[wz_start]
[war_zone_tournament_next_round]
[war_zone_all_generate_painting_s]
[war_zone_all_generate_comp]
[wz_complete]
</ul>
<div class="seperator"></div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
);
