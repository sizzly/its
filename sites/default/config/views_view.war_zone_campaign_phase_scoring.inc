<?php
/**
 * @file
 * views_view.war_zone_campaign_phase_scoring.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_campaign_phase_scoring';
$view->description = 'Should be in War Zones AND should separate out displays and rules.';
$view->tag = 'War Zones 4.1, Narrative Campaigns 1.0, Rules';
$view->base_table = 'entityform';
$view->human_name = 'War Zone: Campaign: Phase Scoring';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
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
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
$handler->display->display_options['relationships']['field_registration_sc_target_id']['required'] = TRUE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_register_faction_target_id']['id'] = 'field_register_faction_target_id';
$handler->display->display_options['relationships']['field_register_faction_target_id']['table'] = 'field_data_field_register_faction';
$handler->display->display_options['relationships']['field_register_faction_target_id']['field'] = 'field_register_faction_target_id';
$handler->display->display_options['relationships']['field_register_faction_target_id']['relationship'] = 'field_registration_sc_target_id';
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'field_register_faction_target_id';
/* Field: Entityform Submission: Entityform submission ID */
$handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
$handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['relationship'] = 'field_register_faction_target_id';
$handler->display->display_options['fields']['entityform_id']['separator'] = '';
/* Field: SUM(Field: Your Results) */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_your_results']['label'] = 'Battle Score';
/* Sort criterion: SUM(Field: Your Results (field_your_results)) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
/* Contextual filter: Entityform Submission: Phase (field_phase_sc) */
$handler->display->display_options['arguments']['field_phase_sc_target_id']['id'] = 'field_phase_sc_target_id';
$handler->display->display_options['arguments']['field_phase_sc_target_id']['table'] = 'field_data_field_phase_sc';
$handler->display->display_options['arguments']['field_phase_sc_target_id']['field'] = 'field_phase_sc_target_id';
$handler->display->display_options['arguments']['field_phase_sc_target_id']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_phase_sc_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_phase_sc_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_phase_sc_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_phase_sc_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_phase_sc_target_id']['specify_validation'] = TRUE;
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'score_card' => 'score_card',
);

/* Display: Score Phase */
$handler = $view->new_display('views_rules', 'Score Phase', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'field_phase_sc_target_id' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Entityform Submission: Phase (field_phase_sc)',
    'name' => 'field_phase_sc_target_id',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'field_title_chronicle' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Entityform Submission entity referenced from field_register_faction) Title',
    'name' => 'field_title_chronicle',
  ),
  'field_aggregate_score_sc' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Aggregate Score',
    'name' => 'field_aggregate_score_sc',
  ),
  'entityform_id' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => '(Entityform Submission entity referenced from field_register_faction) Entityform submission ID',
    'name' => 'entityform_id',
  ),
  'field_your_results' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Entityform Submission entity referenced from field_register_faction) Battle Score',
    'name' => 'field_your_results',
  ),
);

/* Display: Phase Victory */
$handler = $view->new_display('panel_pane', 'Phase Victory', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_title_chronicle';
$handler->display->display_options['style_options']['data_fields'] = array(
  'field_aggregate_score_sc' => 'field_aggregate_score_sc',
  'field_title_chronicle' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_title_chronicle' => '#2f7ed8',
  'field_aggregate_score_sc' => '#0d233a',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'field_register_faction_target_id';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = 'Faction';
/* Field: SUM(Entityform Submission: Aggregate Score) */
$handler->display->display_options['fields']['field_aggregate_score_sc']['id'] = 'field_aggregate_score_sc';
$handler->display->display_options['fields']['field_aggregate_score_sc']['table'] = 'field_data_field_aggregate_score_sc';
$handler->display->display_options['fields']['field_aggregate_score_sc']['field'] = 'field_aggregate_score_sc';
$handler->display->display_options['fields']['field_aggregate_score_sc']['group_type'] = 'sum';
$handler->display->display_options['pane_category']['name'] = 'View Panes';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'entityform',
  2 => 'text',
  3 => 'list',
  4 => 'views_content',
  5 => 'computed_field',
);
