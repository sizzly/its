<?php
/**
 * @file
 * views_view.war_zone_tournament_missions.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_tournament_missions';
$view->description = 'Displays the current round\'s mission on the Display Page';
$view->tag = 'War Zones 4.1';
$view->base_table = 'field_collection_item';
$view->human_name = 'War Zone: Tournament: Missions';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['label'] = 'No Available Missions';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h4>Mission Info</h4>
<p>See your event organizer for this round\'s mission.</p>';
/* Relationship: Field collection item: Entity with the Tournament Missions (field_tournament_missions) */
$handler->display->display_options['relationships']['field_tournament_missions_node']['id'] = 'field_tournament_missions_node';
$handler->display->display_options['relationships']['field_tournament_missions_node']['table'] = 'field_collection_item';
$handler->display->display_options['relationships']['field_tournament_missions_node']['field'] = 'field_tournament_missions_node';
$handler->display->display_options['relationships']['field_tournament_missions_node']['required'] = TRUE;
/* Field: Field collection item: Rendered Field collection item */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_field_collection_item';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 1;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_tournament_missions_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Field: Round (field_round_counter_tourney) */
$handler->display->display_options['arguments']['field_round_counter_tourney_value']['id'] = 'field_round_counter_tourney_value';
$handler->display->display_options['arguments']['field_round_counter_tourney_value']['table'] = 'field_data_field_round_counter_tourney';
$handler->display->display_options['arguments']['field_round_counter_tourney_value']['field'] = 'field_round_counter_tourney_value';
$handler->display->display_options['arguments']['field_round_counter_tourney_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_round_counter_tourney_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_round_counter_tourney_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_round_counter_tourney_value']['summary_options']['items_per_page'] = '25';

/* Display: Mission */
$handler = $view->new_display('panel_pane', 'Mission', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Mission';
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'nid' => array(
    'type' => 'none',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
  'field_round_counter_tourney_value' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Round',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'field_collection',
  2 => 'views_content',
);
