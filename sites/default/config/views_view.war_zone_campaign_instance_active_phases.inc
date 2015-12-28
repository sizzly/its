<?php
/**
 * @file
 * views_view.war_zone_campaign_instance_active_phases.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_campaign_instance_active_phases';
$view->description = 'Displays on the "operations" page for a narrative campaign.  Should be in War Zones and not Narrative Campaigns.';
$view->tag = 'War Zones 4.1, Narrative Campaigns 1.0';
$view->base_table = 'relation';
$view->human_name = 'War Zone: Campaign Instance: Phase Displays';
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
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
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
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['r_index'] = '0';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['entity_deduplication_right'] = 1;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['exclude'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => '',
);
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Field: Field: Narrative text */
$handler->display->display_options['fields']['field_narrative_text']['id'] = 'field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['table'] = 'field_data_field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['field'] = 'field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_narrative_text']['label'] = '';
$handler->display->display_options['fields']['field_narrative_text']['element_label_colon'] = FALSE;
/* Sort criterion: Entityform Type: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'entityform_type';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['sorts']['weight']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
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
/* Filter criterion: Relation: Phase State (field_phase_state_narrative) */
$handler->display->display_options['filters']['field_phase_state_narrative_value']['id'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['field'] = 'field_phase_state_narrative_value';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_phase_state_narrative_value']['value'] = array(
  5 => '5',
);

/* Display: Completed Phases */
$handler = $view->new_display('panel_pane', 'Completed Phases', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Completed';
$handler->display->display_options['defaults']['relationships'] = FALSE;
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
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['r_index'] = '0';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['entity_deduplication_right'] = 1;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_victorious_faction_target_id']['id'] = 'field_victorious_faction_target_id';
$handler->display->display_options['relationships']['field_victorious_faction_target_id']['table'] = 'field_data_field_victorious_faction';
$handler->display->display_options['relationships']['field_victorious_faction_target_id']['field'] = 'field_victorious_faction_target_id';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['exclude'] = TRUE;
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_type'] = 'h4';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_title_chronicle']['element_default_classes'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_class'] = 'col-xs-2';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'user_avatar',
  'image_link' => '',
);
/* Field: Field: Narrative text */
$handler->display->display_options['fields']['field_narrative_text']['id'] = 'field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['table'] = 'field_data_field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['field'] = 'field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_narrative_text']['label'] = '';
$handler->display->display_options['fields']['field_narrative_text']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_narrative_text']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_narrative_text']['element_wrapper_class'] = 'col-xs-8';
$handler->display->display_options['fields']['field_narrative_text']['element_default_classes'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
$handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['field_image_1']['label'] = '';
$handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image_1']['settings'] = array(
  'image_style' => 'user_avatar',
  'image_link' => '',
);
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle_1']['id'] = 'field_title_chronicle_1';
$handler->display->display_options['fields']['field_title_chronicle_1']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle_1']['relationship'] = 'field_victorious_faction_target_id';
$handler->display->display_options['fields']['field_title_chronicle_1']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_chronicle_1']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_image_1]
<h4>[field_title_chronicle_1]</h4>
<span class="text-muted">Victor</span>';
$handler->display->display_options['fields']['nothing']['element_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_class'] = 'col-xs-2';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: In progress phases */
$handler = $view->new_display('panel_pane', 'In progress phases', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'In Progress';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['exclude'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => '',
);
/* Field: Field: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_type'] = 'h4';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Field: Field: Narrative text */
$handler->display->display_options['fields']['field_narrative_text']['id'] = 'field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['table'] = 'field_data_field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['field'] = 'field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_narrative_text']['label'] = '';
$handler->display->display_options['fields']['field_narrative_text']['element_label_colon'] = FALSE;
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
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'relation',
  2 => 'image',
  3 => 'text',
  4 => 'views_content',
);
