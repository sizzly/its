<?php
/**
 * @file
 * views_view.war_zone_campaign_components.inc
 */

$api = '2.0.0';

$data = $view = new view();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'entityform',
  2 => 'views_content',
  3 => 'image',
  4 => 'text',
  5 => 'number',
);
