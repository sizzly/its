<?php
/**
 * @file
 * views_view.war_zone_campaign_instance_phase_scoring.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_campaign_instance_phase_scoring';
$view->description = 'Should be separated out from rules and display.  Should also be part of War Zones.';
$view->tag = 'War Zones 4.1, Narrative Campaigns 1.0, Rules';
$view->base_table = 'relation';
$view->human_name = 'War Zone: Campaign Instance: Phase Stats';
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'rid' => 'rid',
  'field_title_chronicle' => 'field_title_chronicle',
  'field_campaign_points_narrative' => 'field_campaign_points_narrative',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'rid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_chronicle' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_campaign_points_narrative' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Relation: Relation: Campaign Phase Instance (relation → entityform) */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['id'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['field'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['r_index'] = '1';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['entity_deduplication_right'] = 1;
/* Relationship: Relation: Relation: campaign_phase_target (relation → node) */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['r_index'] = '0';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['entity_deduplication_right'] = 1;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_victorious_faction_target_id']['id'] = 'field_victorious_faction_target_id';
$handler->display->display_options['relationships']['field_victorious_faction_target_id']['table'] = 'field_data_field_victorious_faction';
$handler->display->display_options['relationships']['field_victorious_faction_target_id']['field'] = 'field_victorious_faction_target_id';
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Field: Entityform Submission: Campaign Points */
$handler->display->display_options['fields']['field_campaign_points_narrative']['id'] = 'field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['table'] = 'field_data_field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['field'] = 'field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_campaign_points_narrative']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle_1']['id'] = 'field_title_chronicle_1';
$handler->display->display_options['fields']['field_title_chronicle_1']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['field_title_chronicle_1']['label'] = 'Victorious Faction';
/* Field: Entityform Submission: Entityform submission ID */
$handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
$handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['entityform_id']['label'] = 'Faction ID';
$handler->display->display_options['fields']['entityform_id']['separator'] = '';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Relation: Relation type */
$handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['table'] = 'relation';
$handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['value'] = array(
  'campaign_phase_instance' => 'campaign_phase_instance',
);

/* Display: Dominate Factions */
$handler = $view->new_display('panel_pane', 'Dominate Factions', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Campaign Progress';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_title_chronicle';
$handler->display->display_options['style_options']['data_fields'] = array(
  'field_campaign_points_narrative' => 'field_campaign_points_narrative',
  'field_title_chronicle' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_title_chronicle' => '#2f7ed8',
  'field_campaign_points_narrative' => '#0d233a',
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
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = 'Victorious Faction';
$handler->display->display_options['fields']['field_title_chronicle']['empty'] = 'Contested';
/* Field: SUM(Entityform Submission: Campaign Points) */
$handler->display->display_options['fields']['field_campaign_points_narrative']['id'] = 'field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['table'] = 'field_data_field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['field'] = 'field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_campaign_points_narrative']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_campaign_points_narrative']['empty'] = '0';
$handler->display->display_options['fields']['field_campaign_points_narrative']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Relation: Relation type */
$handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['table'] = 'relation';
$handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['value'] = array(
  'campaign_phase_instance' => 'campaign_phase_instance',
);
/* Filter criterion: Relation: Phase State (field_phase_state_narrative) */
$handler->display->display_options['filters']['field_phase_state_narrative_value']['id'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['field'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['operator'] = 'not';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['value'] = array(
  11 => '11',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Final Scoring */
$handler = $view->new_display('views_rules', 'Final Scoring', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: SUM(Entityform Submission: Campaign Points) */
$handler->display->display_options['fields']['field_campaign_points_narrative']['id'] = 'field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['table'] = 'field_data_field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['field'] = 'field_campaign_points_narrative';
$handler->display->display_options['fields']['field_campaign_points_narrative']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_campaign_points_narrative']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_campaign_points_narrative']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle_1']['id'] = 'field_title_chronicle_1';
$handler->display->display_options['fields']['field_title_chronicle_1']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['field_title_chronicle_1']['label'] = 'Victorious Faction';
/* Field: Entityform Submission: Entityform submission ID */
$handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
$handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['entityform_id']['label'] = 'Faction ID';
$handler->display->display_options['fields']['entityform_id']['separator'] = '';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: SUM(Entityform Submission: Campaign Points (field_campaign_points_narrative)) */
$handler->display->display_options['sorts']['field_campaign_points_narrative_value']['id'] = 'field_campaign_points_narrative_value';
$handler->display->display_options['sorts']['field_campaign_points_narrative_value']['table'] = 'field_data_field_campaign_points_narrative';
$handler->display->display_options['sorts']['field_campaign_points_narrative_value']['field'] = 'field_campaign_points_narrative_value';
$handler->display->display_options['sorts']['field_campaign_points_narrative_value']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['sorts']['field_campaign_points_narrative_value']['group_type'] = 'sum';
$handler->display->display_options['sorts']['field_campaign_points_narrative_value']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Relation: Relation type */
$handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['table'] = 'relation';
$handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['value'] = array(
  'campaign_phase_instance' => 'campaign_phase_instance',
);
/* Filter criterion: Relation: Phase State (field_phase_state_narrative) */
$handler->display->display_options['filters']['field_phase_state_narrative_value']['id'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['field'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['value'] = array(
  10 => '10',
);
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => '(campaign_phase_target) Content: Nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'field_campaign_points_narrative' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Campaign Phase Instance) Campaign Points',
    'name' => 'field_campaign_points_narrative',
  ),
  'field_title_chronicle_1' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'text',
    'label' => '(Entityform Submission entity referenced from field_victorious_faction) Victorious Faction',
    'name' => 'field_title_chronicle_1',
  ),
  'entityform_id' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => '(Entityform Submission entity referenced from field_victorious_faction) Faction ID',
    'name' => 'entityform_id',
  ),
);

/* Display: Open Phases Rules */
$handler = $view->new_display('views_rules', 'Open Phases Rules', 'views_rules_3');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['separator'] = '';
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle_1']['id'] = 'field_title_chronicle_1';
$handler->display->display_options['fields']['field_title_chronicle_1']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['field_title_chronicle_1']['label'] = 'Victorious Faction';
/* Field: Relation: Phase State */
$handler->display->display_options['fields']['field_phase_state_narrative']['id'] = 'field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['field'] = 'field_phase_state_narrative';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Relation: Relation type */
$handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['table'] = 'relation';
$handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['value'] = array(
  'campaign_phase_instance' => 'campaign_phase_instance',
);
/* Filter criterion: Relation: Phase State (field_phase_state_narrative) */
$handler->display->display_options['filters']['field_phase_state_narrative_value']['id'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['field'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['value'] = array(
  0 => '0',
);
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => '(campaign_phase_target) Content: Nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'rid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Rid',
    'name' => 'rid',
  ),
  'field_title_chronicle' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Campaign Phase Instance) Field: Title',
    'name' => 'field_title_chronicle',
  ),
  'field_title_chronicle_1' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Entityform Submission entity referenced from field_victorious_faction) Victorious Faction',
    'name' => 'field_title_chronicle_1',
  ),
  'field_phase_state_narrative' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Phase State',
    'name' => 'field_phase_state_narrative',
  ),
);

/* Display: Score In Progress Phases */
$handler = $view->new_display('views_rules', 'Score In Progress Phases', 'views_rules_2');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['separator'] = '';
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle_1']['id'] = 'field_title_chronicle_1';
$handler->display->display_options['fields']['field_title_chronicle_1']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['field_title_chronicle_1']['label'] = 'Victorious Faction';
/* Field: Relation: Phase State */
$handler->display->display_options['fields']['field_phase_state_narrative']['id'] = 'field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['field'] = 'field_phase_state_narrative';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Relation: Relation type */
$handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['table'] = 'relation';
$handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
$handler->display->display_options['filters']['relation_type']['value'] = array(
  'campaign_phase_instance' => 'campaign_phase_instance',
);
/* Filter criterion: Relation: Phase State (field_phase_state_narrative) */
$handler->display->display_options['filters']['field_phase_state_narrative_value']['id'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['field'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['value'] = array(
  5 => '5',
);
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => '(campaign_phase_target) Content: Nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'rid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Rid',
    'name' => 'rid',
  ),
  'field_title_chronicle' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Campaign Phase Instance) Field: Title',
    'name' => 'field_title_chronicle',
  ),
  'field_title_chronicle_1' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => '(Entityform Submission entity referenced from field_victorious_faction) Victorious Faction',
    'name' => 'field_title_chronicle_1',
  ),
  'field_phase_state_narrative' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Phase State',
    'name' => 'field_phase_state_narrative',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'relation',
  2 => 'text',
  3 => 'number',
  4 => 'views_content',
  5 => 'list',
);
