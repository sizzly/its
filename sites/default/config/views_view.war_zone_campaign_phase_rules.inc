<?php
/**
 * @file
 * views_view.war_zone_campaign_phase_rules.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_campaign_phase_rules';
$view->description = 'Should be part of War Zones and not Narrative Campaigns. Various rules for handling campaign instance management.';
$view->tag = 'War Zones 4.1, Narrative Campaigns 1.0, Rules';
$view->base_table = 'relation';
$view->human_name = 'War Zone: Campaign: Phase Rules';
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
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
/* Field: Relation: Phase State */
$handler->display->display_options['fields']['field_phase_state_narrative']['id'] = 'field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['field'] = 'field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['type'] = 'list_key';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
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

/* Display: All Phases */
$handler = $view->new_display('views_rules', 'All Phases', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
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
  'field_phase_state_narrative' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Phase State',
    'name' => 'field_phase_state_narrative',
  ),
);

/* Display: Entity Reference */
$handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'field_title_chronicle' => 'field_title_chronicle',
  'rid' => 0,
  'field_phase_state_narrative' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['id'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['field'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['exclude'] = TRUE;
/* Field: Entityform Submission: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_type'] = 'strong';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Round (field_warzone_round) */
$handler->display->display_options['sorts']['field_warzone_round_value']['id'] = 'field_warzone_round_value';
$handler->display->display_options['sorts']['field_warzone_round_value']['table'] = 'field_data_field_warzone_round';
$handler->display->display_options['sorts']['field_warzone_round_value']['field'] = 'field_warzone_round_value';
$handler->display->display_options['sorts']['field_warzone_round_value']['relationship'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);
$handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
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

/* Display: Phase Management */
$handler = $view->new_display('panel_pane', 'Phase Management', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Phase Management';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_warzone_round' => 'field_warzone_round',
  'rid' => 'rid',
  'field_victorious_faction' => 'field_victorious_faction',
  'field_title_chronicle' => 'field_title_chronicle',
  'field_prerequisite_narrative' => 'field_title_chronicle',
  'field_phase_state_narrative' => 'field_phase_state_narrative',
  'warzone_campaign_skip_phase' => 'warzone_campaign_skip_phase',
  'warzone_campaign_open_phase' => 'warzone_campaign_skip_phase',
  'warzone_campaign_close_and_score' => 'warzone_campaign_skip_phase',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_warzone_round' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'rid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_victorious_faction' => array(
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
    'separator' => '<br>',
    'empty_column' => 0,
  ),
  'field_prerequisite_narrative' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_phase_state_narrative' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'warzone_campaign_skip_phase' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'warzone_campaign_open_phase' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'warzone_campaign_close_and_score' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['id'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['field'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['exclude'] = TRUE;
/* Field: Relation: Victorious Faction */
$handler->display->display_options['fields']['field_victorious_faction']['id'] = 'field_victorious_faction';
$handler->display->display_options['fields']['field_victorious_faction']['table'] = 'field_data_field_victorious_faction';
$handler->display->display_options['fields']['field_victorious_faction']['field'] = 'field_victorious_faction';
$handler->display->display_options['fields']['field_victorious_faction']['label'] = '';
$handler->display->display_options['fields']['field_victorious_faction']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_victorious_faction']['element_type'] = 'strong';
$handler->display->display_options['fields']['field_victorious_faction']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_victorious_faction']['settings'] = array(
  'link' => 0,
);
/* Field: Entityform Submission: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_prerequisite_narrative']['id'] = 'field_prerequisite_narrative';
$handler->display->display_options['fields']['field_prerequisite_narrative']['table'] = 'field_data_field_prerequisite_narrative';
$handler->display->display_options['fields']['field_prerequisite_narrative']['field'] = 'field_prerequisite_narrative';
$handler->display->display_options['fields']['field_prerequisite_narrative']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_prerequisite_narrative']['empty'] = 'Victor: [field_victorious_faction] ';
/* Field: Relation: Phase State */
$handler->display->display_options['fields']['field_phase_state_narrative']['id'] = 'field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['table'] = 'field_data_field_phase_state_narrative';
$handler->display->display_options['fields']['field_phase_state_narrative']['field'] = 'field_phase_state_narrative';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['warzone_campaign_skip_phase']['id'] = 'warzone_campaign_skip_phase';
$handler->display->display_options['fields']['warzone_campaign_skip_phase']['table'] = 'views_entity_relation';
$handler->display->display_options['fields']['warzone_campaign_skip_phase']['field'] = 'warzone_campaign_skip_phase';
$handler->display->display_options['fields']['warzone_campaign_skip_phase']['label'] = '';
$handler->display->display_options['fields']['warzone_campaign_skip_phase']['element_label_colon'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['warzone_campaign_open_phase']['id'] = 'warzone_campaign_open_phase';
$handler->display->display_options['fields']['warzone_campaign_open_phase']['table'] = 'views_entity_relation';
$handler->display->display_options['fields']['warzone_campaign_open_phase']['field'] = 'warzone_campaign_open_phase';
$handler->display->display_options['fields']['warzone_campaign_open_phase']['label'] = '';
$handler->display->display_options['fields']['warzone_campaign_open_phase']['element_label_colon'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['warzone_campaign_close_and_score']['id'] = 'warzone_campaign_close_and_score';
$handler->display->display_options['fields']['warzone_campaign_close_and_score']['table'] = 'views_entity_relation';
$handler->display->display_options['fields']['warzone_campaign_close_and_score']['field'] = 'warzone_campaign_close_and_score';
$handler->display->display_options['fields']['warzone_campaign_close_and_score']['label'] = '';
$handler->display->display_options['fields']['warzone_campaign_close_and_score']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Current Phase */
$handler = $view->new_display('panel_pane', 'Current Phase', 'panel_pane_3');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'media';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['id'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['field'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['exclude'] = TRUE;
/* Field: Relation: Victorious Faction */
$handler->display->display_options['fields']['field_victorious_faction']['id'] = 'field_victorious_faction';
$handler->display->display_options['fields']['field_victorious_faction']['table'] = 'field_data_field_victorious_faction';
$handler->display->display_options['fields']['field_victorious_faction']['field'] = 'field_victorious_faction';
$handler->display->display_options['fields']['field_victorious_faction']['label'] = '';
$handler->display->display_options['fields']['field_victorious_faction']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_victorious_faction']['element_type'] = 'strong';
$handler->display->display_options['fields']['field_victorious_faction']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_victorious_faction']['settings'] = array(
  'link' => 0,
);
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'uc_product_list',
  'image_link' => '',
);
/* Field: Entityform Submission: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Field: Relation: Narrative text */
$handler->display->display_options['fields']['field_narrative_text']['id'] = 'field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['table'] = 'field_data_field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['field'] = 'field_narrative_text';
$handler->display->display_options['fields']['field_narrative_text']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
$handler->display->display_options['fields']['field_narrative_text']['label'] = '';
$handler->display->display_options['fields']['field_narrative_text']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_narrative_text']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '  <span class="pull-left">
    [field_image]
  </span>
  <div class="media-body">
    <h4 class="media-heading">[field_title_chronicle]</h4>
<ul class="nav nav-pills">
  <li role="presentation" class="active"><a href="#">Stats</a></li>
  <li role="presentation"><a href="#">Narrative</a></li>
  <li role="presentation"><a href="#">Mechanics</a></li>
</ul>
   [field_narrative_text]
  </div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign_instance' => 'narrative_campaign_instance',
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
  2 => 'list',
  3 => 'text',
  4 => 'views_content',
  5 => 'entityreference',
  6 => 'image',
);
