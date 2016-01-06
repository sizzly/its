<?php
/**
 * @file
 * views_view.war_zone_campaign_component_filters.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_campaign_component_filters';
$view->description = 'Generates component filters for Narrative campaign instances. Should be in War Zones and not NC.';
$view->tag = 'War Zones 4.1, Narrative Campaigns 1.0, Rules';
$view->base_table = 'entityform';
$view->human_name = 'War Zone: Campaign: Component Filters';
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
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
$handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['field_event_link_target_id']['label'] = 'campaign';
$handler->display->display_options['relationships']['field_event_link_target_id']['required'] = TRUE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['relationship'] = 'field_event_link_target_id';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['label'] = 'instance';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
/* Field: Entityform Submission: Entityform submission ID */
$handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
$handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
/* Field: Entityform Submission: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_event_link_node';
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
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'warzone_campaign_factions' => 'warzone_campaign_factions',
);

/* Display: Faction */
$handler = $view->new_display('entityreference', 'Faction', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'field_title_chronicle' => 'field_title_chronicle',
  'entityform_id' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'entityform',
  2 => 'text',
);
