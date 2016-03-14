<?php
/**
 * @file
 * narrative_campaigns.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function narrative_campaigns_views_default_views() {
  $export = array();

  $view = new view();
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
  /* Field: Field: Title */
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
  $export['war_zone_campaign_component_filters'] = $view;

  $view = new view();
  $view->name = 'war_zone_campaign_components';
  $view->description = 'Shows the various campaign components including faction list and campaign phases.';
  $view->tag = 'Narrative Campaigns 1.0';
  $view->base_table = 'entityform';
  $view->human_name = 'War Zone: Campaign: Components';
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
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['required'] = TRUE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_event_link_target_id';
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
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'warzone_campaign_phase' => 'warzone_campaign_phase',
    'warzone_campaign_factions' => 'warzone_campaign_factions',
  );

  /* Display: Faction List */
  $handler = $view->new_display('panel_pane', 'Faction List', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Factions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'entityform';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: Delete Link */
  $handler->display->display_options['fields']['delete_entityform']['id'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['delete_entityform']['field'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['label'] = '';
  $handler->display->display_options['fields']['delete_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_entityform']['text'] = 'Delete';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = '';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Edit';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
  $handler->display->display_options['fields']['field_title_chronicle']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_chronicle']['element_default_classes'] = FALSE;
  /* Field: Field: Narrative text */
  $handler->display->display_options['fields']['field_narrative_text']['id'] = 'field_narrative_text';
  $handler->display->display_options['fields']['field_narrative_text']['table'] = 'field_data_field_narrative_text';
  $handler->display->display_options['fields']['field_narrative_text']['field'] = 'field_narrative_text';
  $handler->display->display_options['fields']['field_narrative_text']['label'] = '';
  $handler->display->display_options['fields']['field_narrative_text']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Mechanics text */
  $handler->display->display_options['fields']['field_mechanics_text']['id'] = 'field_mechanics_text';
  $handler->display->display_options['fields']['field_mechanics_text']['table'] = 'field_data_field_mechanics_text';
  $handler->display->display_options['fields']['field_mechanics_text']['field'] = 'field_mechanics_text';
  $handler->display->display_options['fields']['field_mechanics_text']['label'] = '';
  $handler->display->display_options['fields']['field_mechanics_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mechanics_text']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="nav nav-pills">
  <li role="presentation"><a href="#" data-toggle="modal" data-target="#faction-[entityform_id]">Details</a></li>
  <li role="presentation">[edit_entityform]</li>
  <li role="presentation">[delete_entityform]</li>
</ul>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="modal fade" id="faction-[entityform_id]" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <span class="close" data-dismiss="modal"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></span>
        <h4 class="modal-title" id="myModalLabel">Mechanics and Details</h4>
      </div>
      <div class="modal-body">
[field_mechanics_text]
      </div>
      <div class="modal-footer">
        <span class="btn btn-default" data-dismiss="modal">Close</span>
      </div>
    </div>
  </div></div>
';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'warzone_campaign_factions' => 'warzone_campaign_factions',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Campaign Chart */
  $handler = $view->new_display('panel_pane', 'Campaign Chart', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Campaign Chart';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'entityform';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: Delete Link */
  $handler->display->display_options['fields']['delete_entityform']['id'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['delete_entityform']['field'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_entityform']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['delete_entityform']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['delete_entityform']['text'] = 'Delete';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = '';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Mechanics text */
  $handler->display->display_options['fields']['field_mechanics_text']['id'] = 'field_mechanics_text';
  $handler->display->display_options['fields']['field_mechanics_text']['table'] = 'field_data_field_mechanics_text';
  $handler->display->display_options['fields']['field_mechanics_text']['field'] = 'field_mechanics_text';
  $handler->display->display_options['fields']['field_mechanics_text']['label'] = '';
  $handler->display->display_options['fields']['field_mechanics_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mechanics_text']['element_label_colon'] = FALSE;
  /* Field: Field: Round */
  $handler->display->display_options['fields']['field_warzone_round']['id'] = 'field_warzone_round';
  $handler->display->display_options['fields']['field_warzone_round']['table'] = 'field_data_field_warzone_round';
  $handler->display->display_options['fields']['field_warzone_round']['field'] = 'field_warzone_round';
  $handler->display->display_options['fields']['field_warzone_round']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_warzone_round']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Entityform Submission: Prerequisite */
  $handler->display->display_options['fields']['field_prerequisite_narrative']['id'] = 'field_prerequisite_narrative';
  $handler->display->display_options['fields']['field_prerequisite_narrative']['table'] = 'field_data_field_prerequisite_narrative';
  $handler->display->display_options['fields']['field_prerequisite_narrative']['field'] = 'field_prerequisite_narrative';
  $handler->display->display_options['fields']['field_prerequisite_narrative']['exclude'] = TRUE;
  /* Field: Entityform Submission: Campaign Points */
  $handler->display->display_options['fields']['field_campaign_points_narrative']['id'] = 'field_campaign_points_narrative';
  $handler->display->display_options['fields']['field_campaign_points_narrative']['table'] = 'field_data_field_campaign_points_narrative';
  $handler->display->display_options['fields']['field_campaign_points_narrative']['field'] = 'field_campaign_points_narrative';
  $handler->display->display_options['fields']['field_campaign_points_narrative']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_points_narrative']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
  $handler->display->display_options['fields']['field_title_chronicle']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_chronicle']['element_default_classes'] = FALSE;
  /* Field: Field: Narrative text */
  $handler->display->display_options['fields']['field_narrative_text']['id'] = 'field_narrative_text';
  $handler->display->display_options['fields']['field_narrative_text']['table'] = 'field_data_field_narrative_text';
  $handler->display->display_options['fields']['field_narrative_text']['field'] = 'field_narrative_text';
  $handler->display->display_options['fields']['field_narrative_text']['label'] = '';
  $handler->display->display_options['fields']['field_narrative_text']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="nav nav-pills">
  <li role="presentation"><a href="#" data-toggle="modal" data-target="#faction-[entityform_id]">Details</a></li>
  <li role="presentation">[edit_entityform]</li>
  <li role="presentation">[delete_entityform]</li>
</ul>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="modal fade" id="faction-[entityform_id]" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <span class="close" data-dismiss="modal"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></span>
        <h4 class="modal-title" id="myModalLabel">[field_title_chronicle]: Mechanics and Details</h4>
      </div>
      <div class="modal-body">
[field_mechanics_text]
<h4>Weight</h4>
<p>[field_warzone_round]</p>
<h4>Prerequisite</h4>
<p>[field_prerequisite_narrative]</p>
<h4>Campaign Points</h4>
<p>[field_campaign_points_narrative] </p>
      </div>
      <div class="modal-footer">
        <span class="btn btn-default" data-dismiss="modal">Close</span>
      </div>
    </div>
  </div></div>
';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'warzone_campaign_phase' => 'warzone_campaign_phase',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_campaign_components'] = $view;

  $view = new view();
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'field_title_chronicle';
  $handler->display->display_options['style_options']['body_field'] = 'field_narrative_text';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Relation: Relation: Campaign Phase Instance (relation → entityform) */
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['id'] = 'relation_base_campaign_phase_instance_entityform';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['field'] = 'relation_base_campaign_phase_instance_entityform';
  /* Relationship: Relation: Relation: campaign_phase_target (relation → node) */
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
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
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'field_title_chronicle';
  $handler->display->display_options['style_options']['body_field'] = 'nothing';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: Campaign Phase Instance (relation → entityform) */
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['id'] = 'relation_base_campaign_phase_instance_entityform';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_entityform']['field'] = 'relation_base_campaign_phase_instance_entityform';
  /* Relationship: Relation: Relation: campaign_phase_target (relation → node) */
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_victorious_faction_target_id']['id'] = 'field_victorious_faction_target_id';
  $handler->display->display_options['relationships']['field_victorious_faction_target_id']['table'] = 'field_data_field_victorious_faction';
  $handler->display->display_options['relationships']['field_victorious_faction_target_id']['field'] = 'field_victorious_faction_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_title_chronicle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_chronicle']['element_default_classes'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
  $handler->display->display_options['fields']['field_image']['label'] = '';
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
  $handler->display->display_options['fields']['field_narrative_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_narrative_text']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_narrative_text]
<span class="strong">[field_title_chronicle_1]</span>
<span class="text-muted">Victor</span>';
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
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'media_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
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
  $export['war_zone_campaign_instance_active_phases'] = $view;

  $view = new view();
  $view->name = 'war_zone_campaign_instance_page_layout';
  $view->description = 'Campaign Instance page layout elements. Should be part of War Zones and not Narrative Campaigns';
  $view->tag = 'War Zones 4.1, Narrative Campaigns 1.0';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: Campaign Instance: Page Layout';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'lightbox2__lightbox__user_avatar__original';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Available slots */
  $handler->display->display_options['fields']['registration_available_slots']['id'] = 'registration_available_slots';
  $handler->display->display_options['fields']['registration_available_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_available_slots']['field'] = 'registration_available_slots';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Entry Fee */
  $handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  /* Field: Content: Used slots */
  $handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
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
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'narrative_campaign_instance' => 'narrative_campaign_instance',
  );

  /* Display: Page Header */
  $handler = $view->new_display('panel_pane', 'Page Header', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['type'] = 'lightbox2__lightbox__medium__original';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_warzone_game']['id'] = 'field_warzone_game';
  $handler->display->display_options['fields']['field_warzone_game']['table'] = 'field_data_field_warzone_game';
  $handler->display->display_options['fields']['field_warzone_game']['field'] = 'field_warzone_game';
  $handler->display->display_options['fields']['field_warzone_game']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['fields']['field_warzone_game']['label'] = '';
  $handler->display->display_options['fields']['field_warzone_game']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_warzone_game']['element_label_colon'] = FALSE;
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_special_event_type']['id'] = 'field_special_event_type';
  $handler->display->display_options['fields']['field_special_event_type']['table'] = 'field_data_field_special_event_type';
  $handler->display->display_options['fields']['field_special_event_type']['field'] = 'field_special_event_type';
  $handler->display->display_options['fields']['field_special_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_special_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_special_event_type']['element_label_colon'] = FALSE;
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_game_warzone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-6 col-sm-12 col-md-6 text-center">
<span class="thumbnail">[field_campaign_badge]</span>
</div>
<div class="col-xs-6 col-sm-12 col-md-6">
<strong>[field_game_warzone]</strong></br>
<small>[field_special_event_type]</small></br>
<small>Salutes <span class="badge">[count]</span></small>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Logistics */
  $handler = $view->new_display('panel_pane', 'Logistics', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Logistics';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Event Details</h3>
</div>
<div class="panel-body">
[body]
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Map */
  $handler = $view->new_display('panel_pane', 'Map', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'panel panel-default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geolocation']['type'] = 'geofield_openlayers';
  $handler->display->display_options['fields']['field_geolocation']['settings'] = array(
    'map_preset' => 'geofield_formatter_map',
    'data' => 'full',
  );
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="panel-body">[field_location]</div>';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Capacity Chart */
  $handler = $view->new_display('panel_pane', 'Capacity Chart', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slots */
  $handler->display->display_options['fields']['field_slots_warzone']['id'] = 'field_slots_warzone';
  $handler->display->display_options['fields']['field_slots_warzone']['table'] = 'field_data_field_slots_warzone';
  $handler->display->display_options['fields']['field_slots_warzone']['field'] = 'field_slots_warzone';
  $handler->display->display_options['fields']['field_slots_warzone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slots_warzone']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Used slots */
  $handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['exclude'] = TRUE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([registration_used_slots] / [field_slots_warzone]) * 100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression]" role="progressbar" aria-valuenow="[expression]" aria-valuemin="0" aria-valuemax="100" style="width: [expression]%;">
    [expression]%
  </div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'special_event' => 'special_event',
  );
  /* Filter criterion: Content: Slots (field_slots_warzone) */
  $handler->display->display_options['filters']['field_slots_warzone_value']['id'] = 'field_slots_warzone_value';
  $handler->display->display_options['filters']['field_slots_warzone_value']['table'] = 'field_data_field_slots_warzone';
  $handler->display->display_options['filters']['field_slots_warzone_value']['field'] = 'field_slots_warzone_value';
  $handler->display->display_options['filters']['field_slots_warzone_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_slots_warzone_value']['value']['value'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Player Count */
  $handler = $view->new_display('panel_pane', 'Player Count', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node registration: Registrations */
  $handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['fields']['registration_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['empty'] = '0';
  $handler->display->display_options['fields']['registration_id']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/!1/player-list">
        <div class="panel panel-overview">
            <div class="overview-icon bg-info">
                <i class="glyphicon glyphicon-user" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[registration_id]</h2>
                <div class="text-muted">Players</div>
            </div>
        </div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Recent Actions */
  $handler = $view->new_display('panel_pane', 'Recent Actions', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'panel panel-default';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="panel-heading">
<h3 class="panel-title">Recent Actions</h3>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['roles_fieldset'] = array(
    'roles' => array(
      'anonymous user' => 0,
      'authenticated user' => 0,
      'administrator' => 0,
      'verified' => 0,
      'Ironmonger' => 0,
      'System' => 0,
    ),
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['id'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['field'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['relationship'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'today time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
    'special_event' => 'special_event',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: State */
  $handler = $view->new_display('panel_pane', 'State', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="panel panel-overview">
            <div class="overview-icon bg-success">
                <i class="glyphicon glyphicon-time" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[field_status]</h2>
                <div class="text-muted">Status</div>
            </div>
        </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Meta */
  $handler = $view->new_display('panel_pane', 'Meta', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Summary';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_type']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_event_type']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_type']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['fields']['field_game_warzone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_game_warzone']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_game_warzone']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_game_warzone']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_warzone']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_event_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_date']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_location']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Entry Fee */
  $handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_entry_fee']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_entry_fee']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_entry_fee']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_entry_fee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_fee']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entry_fee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_entry_fee']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = 'More Info';
  $handler->display->display_options['fields']['field_website']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_website']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_website']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_website']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: Available slots */
  $handler->display->display_options['fields']['registration_available_slots']['id'] = 'registration_available_slots';
  $handler->display->display_options['fields']['registration_available_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_available_slots']['field'] = 'registration_available_slots';
  $handler->display->display_options['fields']['registration_available_slots']['element_type'] = 'div';
  $handler->display->display_options['fields']['registration_available_slots']['element_class'] = 'lead';
  $handler->display->display_options['fields']['registration_available_slots']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['registration_available_slots']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['registration_available_slots']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_available_slots']['unlimited_text'] = 'Unlimited';
  /* Field: Content: Used slots */
  $handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['label'] = 'Registered Players';
  $handler->display->display_options['fields']['registration_used_slots']['element_type'] = 'div';
  $handler->display->display_options['fields']['registration_used_slots']['element_class'] = 'lead';
  $handler->display->display_options['fields']['registration_used_slots']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['registration_used_slots']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['registration_used_slots']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_used_slots']['element_default_classes'] = FALSE;
  /* Field: Content: Registration Deadline */
  $handler->display->display_options['fields']['field_registration_deadline']['id'] = 'field_registration_deadline';
  $handler->display->display_options['fields']['field_registration_deadline']['table'] = 'field_data_field_registration_deadline';
  $handler->display->display_options['fields']['field_registration_deadline']['field'] = 'field_registration_deadline';
  $handler->display->display_options['fields']['field_registration_deadline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_registration_deadline']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_registration_deadline']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_registration_deadline']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_registration_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registration_deadline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_registration_deadline']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_registration_deadline']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_registration_deadline']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Register link */
  $handler->display->display_options['fields']['register_link']['id'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['register_link']['field'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['label'] = '';
  $handler->display->display_options['fields']['register_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['register_link']['element_class'] = 'lead';
  $handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['register_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['register_link']['text'] = 'Register';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Organizer */
  $handler = $view->new_display('panel_pane', 'Organizer', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organizer';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: follow */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$target = user_load($row-uid);
$url = privatemsg_get_link($target);
$link = l(t(\'Message\'), $url, array(\'query\' => drupal_get_destination()));
print $link;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
  <div class="pull-left iconbuffer">[picture]</div>
  <div class="media-body">
    <h4 class="media-heading">[name]</h4>
    [ops] [php] 
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Campaign Brief */
  $handler = $view->new_display('panel_pane', 'Campaign Brief', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Campaign Brief';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail iconbuffer';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'user_avatar',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Event Details</h3>
</div>
<div class="panel-body">
[body]
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Faction List */
  $handler = $view->new_display('panel_pane', 'Faction List', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Belligerents';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_event_link_entityform']['id'] = 'reverse_field_event_link_entityform';
  $handler->display->display_options['relationships']['reverse_field_event_link_entityform']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_event_link_entityform']['field'] = 'reverse_field_event_link_entityform';
  $handler->display->display_options['relationships']['reverse_field_event_link_entityform']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'reverse_field_event_link_entityform';
  $handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
  $handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_event_link_entityform';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'narrative_campaign_instance' => 'narrative_campaign_instance',
  );
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'entityform';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_event_link_entityform';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'warzone_campaign_factions' => 'warzone_campaign_factions',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Victor */
  $handler = $view->new_display('panel_pane', 'Victor', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Victor */
  $handler->display->display_options['fields']['field_victor_narrative']['id'] = 'field_victor_narrative';
  $handler->display->display_options['fields']['field_victor_narrative']['table'] = 'field_data_field_victor_narrative';
  $handler->display->display_options['fields']['field_victor_narrative']['field'] = 'field_victor_narrative';
  $handler->display->display_options['fields']['field_victor_narrative']['label'] = '';
  $handler->display->display_options['fields']['field_victor_narrative']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_victor_narrative']['alter']['text'] = '        <div class="panel panel-overview">
            <div class="overview-icon bg-success">
                <i class="glyphicon glyphicon-flag" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[field_victor_narrative]</h2>
                <div class="text-muted">Victor</div>
            </div>
        </div>';
  $handler->display->display_options['fields']['field_victor_narrative']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_victor_narrative']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_victor_narrative']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Used slots */
  $handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['label'] = 'AUTOMATIC';
  $handler->display->display_options['fields']['registration_used_slots']['exclude'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_campaign_instance_page_layout'] = $view;

  $view = new view();
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
  /* Relationship: Relation: Relation: campaign_phase_target (relation → node) */
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
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
  $export['war_zone_campaign_instance_phase_scoring'] = $view;

  $view = new view();
  $view->name = 'war_zone_campaign_instance_report_battle';
  $view->description = 'Generates the report battle panel for a campaign instance. Should be part of War Zones and not Narrative Campaign';
  $view->tag = 'War Zones 4.1, Narrative Campaigns 1.0';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: Campaign Instance: Report Battle';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['email']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['email']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['email']['link_to_node_registration_email'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<p class="text-center"><button type="button" class="btn btn-default" data-toggle="collapse" data-target="#battle">
  Report Battle
</button>
</p>

<div id="battle" class="collapse">
    <div class="panel panel-default">
      <div class="panel-heading">
        <span class="pull-right">
          <span class="glyphicon glyphicon-question-sign" data-toggle="popover" title="Chronicle" data-content="Chronicle your army\'s deeds. This will also generate an item on your feed."></span>
          </span>
        <h3 class="panel-title">Report Battle</h3>
      </div>
      <div class="panel-body">
<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'warzone_campaign_report_battle_p\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
      </div>
    </div>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Node registration: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';

  /* Display: Registration Required Form */
  $handler = $view->new_display('panel_pane', 'Registration Required Form', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_campaign_instance_report_battle'] = $view;

  $view = new view();
  $view->name = 'war_zone_campaign_lists';
  $view->description = 'Various lists for Narrative Campaigns.';
  $view->tag = 'Narrative Campaigns 1.0';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: Campaign: Lists';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Master List */
  $handler = $view->new_display('panel_pane', 'Master List', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Campaigns for Game */
  $handler = $view->new_display('panel_pane', 'Campaigns for Game', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'armies' => 'armies',
  );
  $handler->display->display_options['pane_category']['name'] = 'Games';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_campaign_lists'] = $view;

  $view = new view();
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
  /* Relationship: Relation: Relation: campaign_phase_target (relation → node) */
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
  /* Relationship: Relation: Relation: campaign_phase_target (relation → node) */
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
  /* Relationship: Relation: Relation: Campaign Phase Instance (relation → entityform) */
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
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
  $handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
  $handler->display->display_options['fields']['field_title_chronicle']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Round (field_warzone_round) */
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
  /* Relationship: Relation: Relation: campaign_phase_target (relation → node) */
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
  /* Relationship: Relation: Relation: Campaign Phase Instance (relation → entityform) */
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
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
  /* Field: Entityform Submission: Prerequisite */
  $handler->display->display_options['fields']['field_prerequisite_narrative']['id'] = 'field_prerequisite_narrative';
  $handler->display->display_options['fields']['field_prerequisite_narrative']['table'] = 'field_data_field_prerequisite_narrative';
  $handler->display->display_options['fields']['field_prerequisite_narrative']['field'] = 'field_prerequisite_narrative';
  $handler->display->display_options['fields']['field_prerequisite_narrative']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
  $handler->display->display_options['fields']['field_prerequisite_narrative']['empty'] = 'Victor: [field_victorious_faction] ';
  /* Field: Relation: Phase State */
  $handler->display->display_options['fields']['field_phase_state_narrative']['id'] = 'field_phase_state_narrative';
  $handler->display->display_options['fields']['field_phase_state_narrative']['table'] = 'field_data_field_phase_state_narrative';
  $handler->display->display_options['fields']['field_phase_state_narrative']['field'] = 'field_phase_state_narrative';
  /* Field: Relation: Warzone: Campaign: Skip Phase */
  $handler->display->display_options['fields']['warzone_campaign_skip_phase']['id'] = 'warzone_campaign_skip_phase';
  $handler->display->display_options['fields']['warzone_campaign_skip_phase']['table'] = 'views_entity_relation';
  $handler->display->display_options['fields']['warzone_campaign_skip_phase']['field'] = 'warzone_campaign_skip_phase';
  $handler->display->display_options['fields']['warzone_campaign_skip_phase']['label'] = '';
  $handler->display->display_options['fields']['warzone_campaign_skip_phase']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['warzone_campaign_skip_phase']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Relation: Warzone: Campaign: Open Phase */
  $handler->display->display_options['fields']['warzone_campaign_open_phase']['id'] = 'warzone_campaign_open_phase';
  $handler->display->display_options['fields']['warzone_campaign_open_phase']['table'] = 'views_entity_relation';
  $handler->display->display_options['fields']['warzone_campaign_open_phase']['field'] = 'warzone_campaign_open_phase';
  $handler->display->display_options['fields']['warzone_campaign_open_phase']['label'] = '';
  $handler->display->display_options['fields']['warzone_campaign_open_phase']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['warzone_campaign_open_phase']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Relation: Warzone: Campaign: Close and Score Phase */
  $handler->display->display_options['fields']['warzone_campaign_close_and_score']['id'] = 'warzone_campaign_close_and_score';
  $handler->display->display_options['fields']['warzone_campaign_close_and_score']['table'] = 'views_entity_relation';
  $handler->display->display_options['fields']['warzone_campaign_close_and_score']['field'] = 'warzone_campaign_close_and_score';
  $handler->display->display_options['fields']['warzone_campaign_close_and_score']['label'] = '';
  $handler->display->display_options['fields']['warzone_campaign_close_and_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['warzone_campaign_close_and_score']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
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
  /* Relationship: Relation: Relation: campaign_phase_target (relation → node) */
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['id'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['field'] = 'relation_base_campaign_phase_instance_node';
  $handler->display->display_options['relationships']['relation_base_campaign_phase_instance_node']['required'] = TRUE;
  /* Relationship: Relation: Relation: Campaign Phase Instance (relation → entityform) */
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
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'relation_base_campaign_phase_instance_entityform';
  $handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
  $handler->display->display_options['fields']['field_title_chronicle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
  /* Field: Field: Narrative text */
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
  $export['war_zone_campaign_phase_rules'] = $view;

  $view = new view();
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
  $export['war_zone_campaign_phase_scoring'] = $view;

  $view = new view();
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
  /* Field: COUNT(DISTINCT Content: Nid) */
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
  /* Field: COUNT(Content: Nid) */
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
  /* Field: COUNT(DISTINCT Content: Nid) */
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
  /* Sort criterion: COUNT(Content: Nid) */
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
  /* Field: COUNT(DISTINCT Content: Nid) */
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
  /* Field: Field: Title */
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
  $export['war_zone_campaign_summary'] = $view;

  $view = new view();
  $view->name = 'warzone_campaign_page_layout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Warzone: Campaign: Page Layout';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'narrative_campaign' => 'narrative_campaign',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'narrative_campaign' => 'narrative_campaign',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
  );

  /* Display: Header Image */
  $handler = $view->new_display('block', 'Header Image', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_header_image']['element_class'] = 'text-center';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );

  /* Display: Page Header: Campaign */
  $handler = $view->new_display('panel_pane', 'Page Header: Campaign', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'col-xs-6 col-sm-12 col-md-6 pull-left text-center';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'lightbox2__lightbox__user_avatar__original';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_game_warzone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['empty'] = '0';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-6 col-sm-12 col-md-6 text-center">
<span class="thumbnail">[field_image]</span>
</div>
<div class="col-xs-6 col-sm-12 col-md-6">
<strong>[field_game_warzone]</strong></br>
<small>Salutes <span class="badge">[count]</span></small>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'narrative_campaign' => 'narrative_campaign',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['warzone_campaign_page_layout'] = $view;

  $view = new view();
  $view->name = 'warzone_campaign_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Warzone: Campaign: Pages';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $export['warzone_campaign_pages'] = $view;

  $view = new view();
  $view->name = 'warzone_campaign_timeline';
  $view->description = 'Generates the Chronicle page and views for Narrative Campaign instances. Should be in War Zones and not Narrative Campaign.';
  $view->tag = 'War Zones 4.1, Narrative Campaigns 1.0';
  $view->base_table = 'message';
  $view->human_name = 'War Zone: Campaign: Timeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'timeline-wrapper';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'timeline-item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['required'] = TRUE;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['exclude'] = TRUE;
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'uc_product_list',
    'image_link' => '',
  );
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = '';
  $handler->display->display_options['fields']['timestamp_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
  /* Field: Field: Chronicle Icon */
  $handler->display->display_options['fields']['field_chronicle_icon']['id'] = 'field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['table'] = 'field_data_field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['field'] = 'field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['label'] = '';
  $handler->display->display_options['fields']['field_chronicle_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chronicle_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chronicle_icon']['type'] = 'text_plain';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['label'] = '';
  $handler->display->display_options['fields']['field_title_chronicle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_chronicle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_chronicle']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="timeline-icon bg-grey">
  <span class="glyphicon glyphicon-[field_chronicle_icon]" aria-hidden="true"></span>
</div>
<div class="time">
[timestamp]
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'timeline-info';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="panel-heading">
[field_title_chronicle]
<small class="pull-right text-muted">[timestamp_1]</small>
</div>
<div class="panel-body">
[message_render]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'panel panel-default timeline-panel';
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_stream_node_ref_target_id';
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
  /* Filter criterion: Message: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'message';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'campaign_reported_battle' => 'campaign_reported_battle',
  );

  /* Display: Chronicle Page */
  $handler = $view->new_display('panel_pane', 'Chronicle Page', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['warzone_campaign_timeline'] = $view;

  return $export;
}
