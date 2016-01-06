<?php
/**
 * @file
 * views_view.war_zone_campaign_summary.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_campaign_summary';
$view->description = 'Displays info about instances associated with a campaign.';
$view->tag = 'Narrative Campaigns 1.0';
$view->base_table = 'node';
$view->human_name = 'War Zone: Campaign: Summary';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign' => 'narrative_campaign',
);
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
  'narrative_campaign' => 'narrative_campaign',
);

/* Display: Instance Count */
$handler = $view->new_display('panel_pane', 'Instance Count', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['empty'] = '0';
$handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;

/* Display: Player Count */
$handler = $view->new_display('panel_pane', 'Player Count', 'panel_pane_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
/* Relationship: Node registration: Registrations */
$handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
$handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
$handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
$handler->display->display_options['relationships']['node_registration_rel']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['node_registration_rel']['required'] = TRUE;
/* Relationship: Node registration: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'node_registration_rel';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['empty'] = '0';
$handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'narrative_campaign' => 'narrative_campaign',
);
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['relationship'] = 'node_registration_rel';
$handler->display->display_options['filters']['cancelled']['value'] = '0';

/* Display: Battle Count */
$handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_3');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['id'] = 'reverse_field_event_link_node_1';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_event_link_node_1';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['empty'] = '0';
$handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
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
  'narrative_campaign' => 'narrative_campaign',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_event_link_node_1';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'game_results' => 'game_results',
);

/* Display: Victor */
$handler = $view->new_display('panel_pane', 'Victor', 'panel_pane_4');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Victor */
$handler->display->display_options['fields']['field_victor_narrative']['id'] = 'field_victor_narrative';
$handler->display->display_options['fields']['field_victor_narrative']['table'] = 'field_data_field_victor_narrative';
$handler->display->display_options['fields']['field_victor_narrative']['field'] = 'field_victor_narrative';
$handler->display->display_options['fields']['field_victor_narrative']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['fields']['field_victor_narrative']['label'] = '';
$handler->display->display_options['fields']['field_victor_narrative']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_victor_narrative']['empty'] = 'Undecided';
$handler->display->display_options['fields']['field_victor_narrative']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_victor_narrative']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Nid */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['sorts']['nid']['group_type'] = 'count';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
  'narrative_campaign' => 'narrative_campaign',
);
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['filters']['field_status_value']['value'] = array(
  10 => '10',
  15 => '15',
);

/* Display: Instance Battle Count */
$handler = $view->new_display('panel_pane', 'Instance Battle Count', 'panel_pane_5');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['empty'] = '0';
$handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
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
);
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
  'narrative_campaign_instance' => 'narrative_campaign_instance',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'game_results' => 'game_results',
);

/* Display: Instances Page */
$handler = $view->new_display('page', 'Instances Page', 'page_1');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'infinite_scroll';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['nid']['title'] = '%1 Instances';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign' => 'narrative_campaign',
);
$handler->display->display_options['path'] = 'node/%/instances';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Instances';
$handler->display->display_options['menu']['weight'] = '10';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Battles Page */
$handler = $view->new_display('page', 'Battles Page', 'page_2');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'infinite_scroll';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['id'] = 'reverse_field_event_link_node_1';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['label'] = 'Battles';
$handler->display->display_options['relationships']['reverse_field_event_link_node_1']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_event_link_node_1';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_event_link_node_1';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['nid']['title'] = '%1 Battles';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign' => 'narrative_campaign',
);
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
  'narrative_campaign' => 'narrative_campaign',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_event_link_node_1';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'game_results' => 'game_results',
);
$handler->display->display_options['path'] = 'node/%/campaign-battles';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Battles';
$handler->display->display_options['menu']['weight'] = '11';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Player Page */
$handler = $view->new_display('page', 'Player Page', 'page_3');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'infinite_scroll';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'title',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
/* Relationship: Node registration: Registrations */
$handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
$handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
$handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
$handler->display->display_options['relationships']['node_registration_rel']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['relationships']['node_registration_rel']['required'] = TRUE;
/* Relationship: Node registration: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'node_registration_rel';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_register_faction_target_id']['id'] = 'field_register_faction_target_id';
$handler->display->display_options['relationships']['field_register_faction_target_id']['table'] = 'field_data_field_register_faction';
$handler->display->display_options['relationships']['field_register_faction_target_id']['field'] = 'field_register_faction_target_id';
$handler->display->display_options['relationships']['field_register_faction_target_id']['relationship'] = 'node_registration_rel';
$handler->display->display_options['relationships']['field_register_faction_target_id']['label'] = 'Faction';
$handler->display->display_options['relationships']['field_register_faction_target_id']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Field: Army */
$handler->display->display_options['fields']['field_register_army']['id'] = 'field_register_army';
$handler->display->display_options['fields']['field_register_army']['table'] = 'field_data_field_register_army';
$handler->display->display_options['fields']['field_register_army']['field'] = 'field_register_army';
$handler->display->display_options['fields']['field_register_army']['relationship'] = 'node_registration_rel';
$handler->display->display_options['fields']['field_register_army']['label'] = '';
$handler->display->display_options['fields']['field_register_army']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_register_army']['element_label_colon'] = FALSE;
/* Field: Entityform Submission: Title */
$handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
$handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'field_register_faction_target_id';
$handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
$handler->display->display_options['fields']['field_title_chronicle']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['exclude'] = TRUE;
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
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
<strong>[name]</strong><br>
<small class="text-muted">[field_title_chronicle]</small><br>
<small class="text-muted">[field_register_army]</small>
</div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['nid']['title'] = '%1 Players';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'narrative_campaign' => 'narrative_campaign',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_event_link_node';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'narrative_campaign' => 'narrative_campaign',
);
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['relationship'] = 'node_registration_rel';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
$handler->display->display_options['path'] = 'node/%/campaign-players';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Players';
$handler->display->display_options['menu']['weight'] = '12';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'field_hidden',
  4 => 'taxonomy',
  5 => 'text',
);
