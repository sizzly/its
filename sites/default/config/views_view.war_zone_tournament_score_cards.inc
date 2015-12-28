<?php
/**
 * @file
 * views_view.war_zone_tournament_score_cards.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_tournament_score_cards';
$view->description = 'Tournament rules and displays.  Should separate out the rules from the displays.';
$view->tag = 'War Zones 4.1, Rules';
$view->base_table = 'entityform';
$view->human_name = 'War Zone: Tournament: Score Cards';
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
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'entityform_id' => 'entityform_id',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'entityform_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 0,
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
/* Field: Entityform Submission: Round */
$handler->display->display_options['fields']['field_round_sc']['id'] = 'field_round_sc';
$handler->display->display_options['fields']['field_round_sc']['table'] = 'field_data_field_round_sc';
$handler->display->display_options['fields']['field_round_sc']['field'] = 'field_round_sc';
$handler->display->display_options['fields']['field_round_sc']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 0,
);
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player 1';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name_1']['id'] = 'field_register_real_name_1';
$handler->display->display_options['fields']['field_register_real_name_1']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name_1']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name_1']['relationship'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name_1']['label'] = 'Player 2';
/* Contextual filter: Field: Event (field_event_link) */
$handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);

/* Display: Current Matches */
$handler = $view->new_display('panel_pane', 'Current Matches', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Matches';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_round_sc' => 'field_round_sc',
  'counter' => 'counter',
  'field_register_real_name' => 'field_register_real_name',
  'field_register_real_name_1' => 'field_register_real_name_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_round_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'counter' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 'striped',
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = '';
$handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 0;
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player 1';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name_1']['id'] = 'field_register_real_name_1';
$handler->display->display_options['fields']['field_register_real_name_1']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name_1']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name_1']['relationship'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name_1']['label'] = 'Player 2';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Event (field_event_link) */
$handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Entityform Submission: Round (field_round_sc) */
$handler->display->display_options['arguments']['field_round_sc_value']['id'] = 'field_round_sc_value';
$handler->display->display_options['arguments']['field_round_sc_value']['table'] = 'field_data_field_round_sc';
$handler->display->display_options['arguments']['field_round_sc_value']['field'] = 'field_round_sc_value';
$handler->display->display_options['arguments']['field_round_sc_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_round_sc_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_round_sc_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_round_sc_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);
/* Filter criterion: Entityform Submission: Display (field_display_sc) */
$handler->display->display_options['filters']['field_display_sc_value']['id'] = 'field_display_sc_value';
$handler->display->display_options['filters']['field_display_sc_value']['table'] = 'field_data_field_display_sc';
$handler->display->display_options['filters']['field_display_sc_value']['field'] = 'field_display_sc_value';
$handler->display->display_options['filters']['field_display_sc_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_event_link_target_id' => array(
    'type' => 'none',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Field: Event (field_event_link)',
  ),
  'field_round_sc_value' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Round',
  ),
);

/* Display: Current Round Score Cards */
$handler = $view->new_display('panel_pane', 'Current Round Score Cards', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Score Cards';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_round_sc' => 'field_round_sc',
  'counter' => 'counter',
  'field_register_real_name' => 'field_register_real_name',
  'field_register_real_name_1' => 'field_register_real_name_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_round_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'counter' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 'striped',
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['label'] = 'Results';
/* Field: Entityform Submission: Army Points */
$handler->display->display_options['fields']['field_army_points_sc']['id'] = 'field_army_points_sc';
$handler->display->display_options['fields']['field_army_points_sc']['table'] = 'field_data_field_army_points_sc';
$handler->display->display_options['fields']['field_army_points_sc']['field'] = 'field_army_points_sc';
$handler->display->display_options['fields']['field_army_points_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Victory Points */
$handler->display->display_options['fields']['field_victory_points_sc']['id'] = 'field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['table'] = 'field_data_field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['field'] = 'field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Sportsmanship */
$handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Edit Link */
$handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
$handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['label'] = 'Record Scores';
$handler->display->display_options['fields']['edit_entityform']['text'] = 'Record';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Event (field_event_link) */
$handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Entityform Submission: Round (field_round_sc) */
$handler->display->display_options['arguments']['field_round_sc_value']['id'] = 'field_round_sc_value';
$handler->display->display_options['arguments']['field_round_sc_value']['table'] = 'field_data_field_round_sc';
$handler->display->display_options['arguments']['field_round_sc_value']['field'] = 'field_round_sc_value';
$handler->display->display_options['arguments']['field_round_sc_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_round_sc_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_round_sc_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_round_sc_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_event_link_target_id' => array(
    'type' => 'none',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Field: Event (field_event_link)',
  ),
  'field_round_sc_value' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Round',
  ),
);

/* Display: Painting Score Cards */
$handler = $view->new_display('panel_pane', 'Painting Score Cards', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Painting Score';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_round_sc' => 'field_round_sc',
  'counter' => 'counter',
  'field_register_real_name' => 'field_register_real_name',
  'field_register_real_name_1' => 'field_register_real_name_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_round_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'counter' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 'striped',
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
/* Field: Entityform Submission: Painting */
$handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['label'] = 'Painting Score';
$handler->display->display_options['fields']['field_painting_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Edit Link */
$handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
$handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['label'] = 'Record Scores';
$handler->display->display_options['fields']['edit_entityform']['text'] = 'Record';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Event (field_event_link) */
$handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);
/* Filter criterion: Entityform Submission: Score Card Type (field_score_card_type) */
$handler->display->display_options['filters']['field_score_card_type_value']['id'] = 'field_score_card_type_value';
$handler->display->display_options['filters']['field_score_card_type_value']['table'] = 'field_data_field_score_card_type';
$handler->display->display_options['filters']['field_score_card_type_value']['field'] = 'field_score_card_type_value';
$handler->display->display_options['filters']['field_score_card_type_value']['value'] = array(
  5 => '5',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_event_link_target_id' => array(
    'type' => 'none',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Field: Event (field_event_link)',
  ),
  'field_round_sc_value' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Round',
  ),
);

/* Display: Comp Score Cards */
$handler = $view->new_display('panel_pane', 'Comp Score Cards', 'panel_pane_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Comp Score';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_round_sc' => 'field_round_sc',
  'counter' => 'counter',
  'field_register_real_name' => 'field_register_real_name',
  'field_register_real_name_1' => 'field_register_real_name_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_round_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'counter' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 'striped',
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
/* Field: Entityform Submission: Comp */
$handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Edit Link */
$handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
$handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['label'] = 'Record Scores';
$handler->display->display_options['fields']['edit_entityform']['text'] = 'Record';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Event (field_event_link) */
$handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);
/* Filter criterion: Entityform Submission: Score Card Type (field_score_card_type) */
$handler->display->display_options['filters']['field_score_card_type_value']['id'] = 'field_score_card_type_value';
$handler->display->display_options['filters']['field_score_card_type_value']['table'] = 'field_data_field_score_card_type';
$handler->display->display_options['filters']['field_score_card_type_value']['field'] = 'field_score_card_type_value';
$handler->display->display_options['filters']['field_score_card_type_value']['value'] = array(
  10 => '10',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_event_link_target_id' => array(
    'type' => 'none',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Field: Event (field_event_link)',
  ),
  'field_round_sc_value' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Round',
  ),
);

/* Display: Generate Battle Reports */
$handler = $view->new_display('views_rules', 'Generate Battle Reports', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
/* Relationship: Field: Army (field_register_army) */
$handler->display->display_options['relationships']['field_register_army_tid']['id'] = 'field_register_army_tid';
$handler->display->display_options['relationships']['field_register_army_tid']['table'] = 'field_data_field_register_army';
$handler->display->display_options['relationships']['field_register_army_tid']['field'] = 'field_register_army_tid';
$handler->display->display_options['relationships']['field_register_army_tid']['relationship'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['relationships']['field_register_army_tid']['label'] = 'P2 Army';
/* Relationship: Field: Army (field_register_army) */
$handler->display->display_options['relationships']['field_register_army_tid_1']['id'] = 'field_register_army_tid_1';
$handler->display->display_options['relationships']['field_register_army_tid_1']['table'] = 'field_data_field_register_army';
$handler->display->display_options['relationships']['field_register_army_tid_1']['field'] = 'field_register_army_tid';
$handler->display->display_options['relationships']['field_register_army_tid_1']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_register_army_tid_1']['label'] = 'P1 Army';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node registration: User uid */
$handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['fields']['uid_1']['table'] = 'node_registration';
$handler->display->display_options['fields']['uid_1']['field'] = 'uid';
$handler->display->display_options['fields']['uid_1']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['uid_1']['label'] = 'Player 1';
$handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'field_register_army_tid_1';
$handler->display->display_options['fields']['tid_1']['label'] = 'P1 Army';
$handler->display->display_options['fields']['tid_1']['separator'] = '';
/* Field: Node registration: User uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node_registration';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['fields']['uid']['label'] = 'Player 2';
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'field_register_army_tid';
$handler->display->display_options['fields']['tid']['label'] = 'P2 Army';
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['label'] = 'P1 Results';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = 'P1 Name';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name_1']['id'] = 'field_register_real_name_1';
$handler->display->display_options['fields']['field_register_real_name_1']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name_1']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name_1']['relationship'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name_1']['label'] = 'P2 Name';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Event (field_event_link) */
$handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Entityform Submission: Round (field_round_sc) */
$handler->display->display_options['arguments']['field_round_sc_value']['id'] = 'field_round_sc_value';
$handler->display->display_options['arguments']['field_round_sc_value']['table'] = 'field_data_field_round_sc';
$handler->display->display_options['arguments']['field_round_sc_value']['field'] = 'field_round_sc_value';
$handler->display->display_options['arguments']['field_round_sc_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_round_sc_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_round_sc_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_round_sc_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);
/* Filter criterion: Entityform Submission: Display (field_display_sc) */
$handler->display->display_options['filters']['field_display_sc_value']['id'] = 'field_display_sc_value';
$handler->display->display_options['filters']['field_display_sc_value']['table'] = 'field_data_field_display_sc';
$handler->display->display_options['filters']['field_display_sc_value']['field'] = 'field_display_sc_value';
$handler->display->display_options['filters']['field_display_sc_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['rules_parameter'] = array(
  'field_event_link_target_id' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Field: Event (field_event_link)',
    'name' => 'field_event_link_target_id',
  ),
  'field_round_sc_value' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Entityform Submission: Round (field_round_sc)',
    'name' => 'field_round_sc_value',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'uid_1' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => '(Node registration entity referenced from field_opponent_reg_sc) Player 1',
    'name' => 'puid1',
  ),
  'tid_1' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => '(P1 Army) P1 Army',
    'name' => 'tid_1',
  ),
  'uid' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => '(Node registration entity referenced from field_opponent_reg_sc) Player 2',
    'name' => 'puid2',
  ),
  'tid' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => '(P2 Army) P2 Army',
    'name' => 'tid',
  ),
  'field_your_results' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => 'P1 Results',
    'name' => 'field_your_results',
  ),
  'field_register_real_name' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'P1 Name',
    'name' => 'p1_real_name',
  ),
  'field_register_real_name_1' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'P2 Name',
    'name' => 'p2_real_name',
  ),
);

/* Display: Score Card Management */
$handler = $view->new_display('panel_pane', 'Score Card Management', 'panel_pane_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Score Cards';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_register_real_name' => 'field_register_real_name',
  'field_your_results' => 'field_your_results',
  'field_army_points_sc' => 'field_army_points_sc',
  'field_victory_points_sc' => 'field_victory_points_sc',
  'field_sportsmanship_sc' => 'field_sportsmanship_sc',
  'field_additional_points_sc' => 'field_additional_points_sc',
  'field_comp_sc' => 'field_comp_sc',
  'field_painting_sc' => 'field_painting_sc',
  'field_phase_sc' => 'field_phase_sc',
  'field_round_sc' => 'field_round_sc',
  'field_score_card_type' => 'field_score_card_type',
  'field_strength_of_schedule_sc' => 'field_strength_of_schedule_sc',
  'edit_entityform' => 'edit_entityform',
);
$handler->display->display_options['style_options']['default'] = 'field_register_real_name';
$handler->display->display_options['style_options']['info'] = array(
  'field_register_real_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_your_results' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_army_points_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_victory_points_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_sportsmanship_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_additional_points_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_comp_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_painting_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_phase_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_round_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_score_card_type' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_strength_of_schedule_sc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'edit_entityform' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 'striped',
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['label'] = 'No Results';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Score Cards Available</h3>
<p>This is either because there haven\'t been any score cards generated for this War Zone or your filter criteria has returned zero results.</p>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['label'] = 'Results';
/* Field: Entityform Submission: Army Points */
$handler->display->display_options['fields']['field_army_points_sc']['id'] = 'field_army_points_sc';
$handler->display->display_options['fields']['field_army_points_sc']['table'] = 'field_data_field_army_points_sc';
$handler->display->display_options['fields']['field_army_points_sc']['field'] = 'field_army_points_sc';
$handler->display->display_options['fields']['field_army_points_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Victory Points */
$handler->display->display_options['fields']['field_victory_points_sc']['id'] = 'field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['table'] = 'field_data_field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['field'] = 'field_victory_points_sc';
$handler->display->display_options['fields']['field_victory_points_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Sportsmanship */
$handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
$handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Additional Points */
$handler->display->display_options['fields']['field_additional_points_sc']['id'] = 'field_additional_points_sc';
$handler->display->display_options['fields']['field_additional_points_sc']['table'] = 'field_data_field_additional_points_sc';
$handler->display->display_options['fields']['field_additional_points_sc']['field'] = 'field_additional_points_sc';
$handler->display->display_options['fields']['field_additional_points_sc']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Comp */
$handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
$handler->display->display_options['fields']['field_comp_sc']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Painting */
$handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
$handler->display->display_options['fields']['field_painting_sc']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Phase */
$handler->display->display_options['fields']['field_phase_sc']['id'] = 'field_phase_sc';
$handler->display->display_options['fields']['field_phase_sc']['table'] = 'field_data_field_phase_sc';
$handler->display->display_options['fields']['field_phase_sc']['field'] = 'field_phase_sc';
$handler->display->display_options['fields']['field_phase_sc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_phase_sc']['settings'] = array(
  'link' => 0,
);
/* Field: Entityform Submission: Round */
$handler->display->display_options['fields']['field_round_sc']['id'] = 'field_round_sc';
$handler->display->display_options['fields']['field_round_sc']['table'] = 'field_data_field_round_sc';
$handler->display->display_options['fields']['field_round_sc']['field'] = 'field_round_sc';
$handler->display->display_options['fields']['field_round_sc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_round_sc']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Score Card Type */
$handler->display->display_options['fields']['field_score_card_type']['id'] = 'field_score_card_type';
$handler->display->display_options['fields']['field_score_card_type']['table'] = 'field_data_field_score_card_type';
$handler->display->display_options['fields']['field_score_card_type']['field'] = 'field_score_card_type';
$handler->display->display_options['fields']['field_score_card_type']['exclude'] = TRUE;
/* Field: Entityform Submission: Strength of schedule */
$handler->display->display_options['fields']['field_strength_of_schedule_sc']['id'] = 'field_strength_of_schedule_sc';
$handler->display->display_options['fields']['field_strength_of_schedule_sc']['table'] = 'field_data_field_strength_of_schedule_sc';
$handler->display->display_options['fields']['field_strength_of_schedule_sc']['field'] = 'field_strength_of_schedule_sc';
$handler->display->display_options['fields']['field_strength_of_schedule_sc']['label'] = 'SOS';
$handler->display->display_options['fields']['field_strength_of_schedule_sc']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Entityform Submission: Edit Link */
$handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
$handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
$handler->display->display_options['fields']['edit_entityform']['label'] = 'Record Scores';
$handler->display->display_options['fields']['edit_entityform']['text'] = 'Record';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Real Name (field_register_real_name) */
$handler->display->display_options['sorts']['field_register_real_name_value']['id'] = 'field_register_real_name_value';
$handler->display->display_options['sorts']['field_register_real_name_value']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['sorts']['field_register_real_name_value']['field'] = 'field_register_real_name_value';
$handler->display->display_options['sorts']['field_register_real_name_value']['relationship'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Event (field_event_link) */
$handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Real Name (field_register_real_name) (selective) */
$handler->display->display_options['filters']['field_register_real_name_value_selective']['id'] = 'field_register_real_name_value_selective';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['field'] = 'field_register_real_name_value_selective';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['ui_name'] = 'Real Name (field_register_real_name) (selective)';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['group'] = 1;
$handler->display->display_options['filters']['field_register_real_name_value_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_register_real_name_value_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['expose']['label'] = 'Player';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['expose']['identifier'] = 'field_register_real_name_value_selective';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_register_real_name_value_selective']['selective_display_field'] = 'field_register_real_name';
$handler->display->display_options['filters']['field_register_real_name_value_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Score Card Type (field_score_card_type) (selective) */
$handler->display->display_options['filters']['field_score_card_type_value_selective']['id'] = 'field_score_card_type_value_selective';
$handler->display->display_options['filters']['field_score_card_type_value_selective']['table'] = 'field_data_field_score_card_type';
$handler->display->display_options['filters']['field_score_card_type_value_selective']['field'] = 'field_score_card_type_value_selective';
$handler->display->display_options['filters']['field_score_card_type_value_selective']['ui_name'] = 'Score Card Type (field_score_card_type) (selective)';
$handler->display->display_options['filters']['field_score_card_type_value_selective']['group'] = 1;
$handler->display->display_options['filters']['field_score_card_type_value_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_score_card_type_value_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_score_card_type_value_selective']['expose']['label'] = 'Score Card Type';
$handler->display->display_options['filters']['field_score_card_type_value_selective']['expose']['identifier'] = 'field_score_card_type_value_selective';
$handler->display->display_options['filters']['field_score_card_type_value_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_score_card_type_value_selective']['selective_display_field'] = 'field_score_card_type';
$handler->display->display_options['filters']['field_score_card_type_value_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Round (field_round_sc) (selective) */
$handler->display->display_options['filters']['field_round_sc_value_selective']['id'] = 'field_round_sc_value_selective';
$handler->display->display_options['filters']['field_round_sc_value_selective']['table'] = 'field_data_field_round_sc';
$handler->display->display_options['filters']['field_round_sc_value_selective']['field'] = 'field_round_sc_value_selective';
$handler->display->display_options['filters']['field_round_sc_value_selective']['ui_name'] = 'Round (field_round_sc) (selective)';
$handler->display->display_options['filters']['field_round_sc_value_selective']['group'] = 1;
$handler->display->display_options['filters']['field_round_sc_value_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_round_sc_value_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_round_sc_value_selective']['expose']['label'] = 'Round';
$handler->display->display_options['filters']['field_round_sc_value_selective']['expose']['identifier'] = 'field_round_sc_value_selective';
$handler->display->display_options['filters']['field_round_sc_value_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_round_sc_value_selective']['selective_display_field'] = 'field_round_sc';
$handler->display->display_options['filters']['field_round_sc_value_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Phase (field_phase_sc) (selective) */
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['id'] = 'field_phase_sc_target_id_selective';
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['table'] = 'field_data_field_phase_sc';
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['field'] = 'field_phase_sc_target_id_selective';
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['ui_name'] = 'Phase (field_phase_sc) (selective)';
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['group'] = 1;
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['expose']['label'] = 'Phase';
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['expose']['identifier'] = 'field_phase_sc_target_id_selective';
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['selective_display_field'] = 'field_phase_sc';
$handler->display->display_options['filters']['field_phase_sc_target_id_selective']['selective_display_sort'] = 'ASC';
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_event_link_target_id' => array(
    'type' => 'none',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Field: Event (field_event_link)',
  ),
  'field_round_sc_value' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Round',
  ),
);
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Strength of Schedule */
$handler = $view->new_display('views_rules', 'Strength of Schedule', 'views_rules_2');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['label'] = 'opponent';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Victory */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['type'] = 'computed_field_computed_value';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Node registration: Registration ID */
$handler->display->display_options['arguments']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['arguments']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['arguments']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['arguments']['registration_id']['relationship'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['arguments']['registration_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['registration_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['registration_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['registration_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['rules_parameter'] = array(
  'registration_id' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Opponent',
    'name' => 'opponent_id',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'field_victory' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => 'Victory',
    'name' => 'field_victory',
  ),
);

/* Display: Opponents */
$handler = $view->new_display('views_rules', 'Opponents', 'views_rules_3');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['label'] = 'opponent';
$handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['required'] = TRUE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['label'] = 'Player 1';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['relationship'] = 'field_opponent_reg_sc_target_id';
$handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Node registration: Registration ID */
$handler->display->display_options['arguments']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['arguments']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['arguments']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['arguments']['registration_id']['relationship'] = 'field_registration_sc_target_id';
$handler->display->display_options['arguments']['registration_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['registration_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['registration_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['registration_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['rules_parameter'] = array(
  'registration_id' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Player',
    'name' => 'player_id',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'registration_id' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => '(opponent) Registration ID',
    'name' => 'registration_id',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'entityform',
  2 => 'number',
  3 => 'text',
  4 => 'views_content',
  5 => 'list',
  6 => 'entityreference',
  7 => 'computed_field',
);
