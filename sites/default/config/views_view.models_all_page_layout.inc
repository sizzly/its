<?php
/**
 * @file
 * views_view.models_all_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'models_all_page_layout';
$view->description = 'Page elements for modelling projects. ';
$view->tag = 'Model Projects 1.0';
$view->base_table = 'node';
$view->human_name = 'Models: All: Page Layout';
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
$handler->display->display_options['row_plugin'] = 'fields';
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
  'models' => 'models',
);

/* Display: Meta Data */
$handler = $view->new_display('panel_pane', 'Meta Data', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Model Count */
$handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
$handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
$handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
$handler->display->display_options['fields']['field_model_count']['label'] = '';
$handler->display->display_options['fields']['field_model_count']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_model_count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_model_count']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 0,
);
/* Field: Content: Army */
$handler->display->display_options['fields']['field_army_models']['id'] = 'field_army_models';
$handler->display->display_options['fields']['field_army_models']['table'] = 'field_data_field_army_models';
$handler->display->display_options['fields']['field_army_models']['field'] = 'field_army_models';
$handler->display->display_options['fields']['field_army_models']['label'] = '';
$handler->display->display_options['fields']['field_army_models']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_army_models']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-bookmark"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_army_models]</strong><br>
    </div>
</div>';
$handler->display->display_options['fields']['field_army_models']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_army_models']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_army_models']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_army_models']['hide_empty'] = TRUE;
/* Field: Content: Unit */
$handler->display->display_options['fields']['field_unit_models']['id'] = 'field_unit_models';
$handler->display->display_options['fields']['field_unit_models']['table'] = 'field_data_field_unit_models';
$handler->display->display_options['fields']['field_unit_models']['field'] = 'field_unit_models';
$handler->display->display_options['fields']['field_unit_models']['label'] = '';
$handler->display->display_options['fields']['field_unit_models']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_unit_models']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-arrows-alt"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_unit_models]</strong>
        <div class="text-muted">Model Count <span class="badge">[field_model_count]</span></div>
    </div>
</div>';
$handler->display->display_options['fields']['field_unit_models']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_unit_models']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_unit_models']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_unit_models']['hide_empty'] = TRUE;
/* Field: Content: Aquired Date */
$handler->display->display_options['fields']['field_aquired_date_models']['id'] = 'field_aquired_date_models';
$handler->display->display_options['fields']['field_aquired_date_models']['table'] = 'field_data_field_aquired_date_models';
$handler->display->display_options['fields']['field_aquired_date_models']['field'] = 'field_aquired_date_models';
$handler->display->display_options['fields']['field_aquired_date_models']['label'] = '';
$handler->display->display_options['fields']['field_aquired_date_models']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_aquired_date_models']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-calendar"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">Aquired [field_aquired_date_models]</strong>
    </div>
</div>';
$handler->display->display_options['fields']['field_aquired_date_models']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_aquired_date_models']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_aquired_date_models']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_aquired_date_models']['settings'] = array(
  'format_type' => 'uc_store',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Army Profile */
$handler->display->display_options['fields']['field_army_profile_models']['id'] = 'field_army_profile_models';
$handler->display->display_options['fields']['field_army_profile_models']['table'] = 'field_data_field_army_profile_models';
$handler->display->display_options['fields']['field_army_profile_models']['field'] = 'field_army_profile_models';
$handler->display->display_options['fields']['field_army_profile_models']['label'] = '';
$handler->display->display_options['fields']['field_army_profile_models']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_army_profile_models']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-chevron-circle-right"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">Aquired for [field_army_profile_models]</strong><br>
    </div>
</div>';
$handler->display->display_options['fields']['field_army_profile_models']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_army_profile_models']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_army_profile_models']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_army_profile_models']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Started Date */
$handler->display->display_options['fields']['field_started_date_models']['id'] = 'field_started_date_models';
$handler->display->display_options['fields']['field_started_date_models']['table'] = 'field_data_field_started_date_models';
$handler->display->display_options['fields']['field_started_date_models']['field'] = 'field_started_date_models';
$handler->display->display_options['fields']['field_started_date_models']['label'] = '';
$handler->display->display_options['fields']['field_started_date_models']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_started_date_models']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-cogs"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">Started [field_started_date_models]</strong>
    </div>
</div>';
$handler->display->display_options['fields']['field_started_date_models']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_started_date_models']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_started_date_models']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_started_date_models']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_started_date_models']['settings'] = array(
  'format_type' => 'uc_store',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Completed Date */
$handler->display->display_options['fields']['field_completed_date_models']['id'] = 'field_completed_date_models';
$handler->display->display_options['fields']['field_completed_date_models']['table'] = 'field_data_field_completed_date_models';
$handler->display->display_options['fields']['field_completed_date_models']['field'] = 'field_completed_date_models';
$handler->display->display_options['fields']['field_completed_date_models']['label'] = '';
$handler->display->display_options['fields']['field_completed_date_models']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_completed_date_models']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
        <i class="fa fa-check-circle"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">Completed [field_completed_date_models]</strong>
    </div>
</div>';
$handler->display->display_options['fields']['field_completed_date_models']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_completed_date_models']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_completed_date_models']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_completed_date_models']['settings'] = array(
  'format_type' => 'uc_store',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
$handler->display->display_options['pane_category']['name'] = 'Model Projects';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Image */
$handler = $view->new_display('panel_pane', 'Image', 'panel_pane_2');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['pane_category']['name'] = 'Model Projects';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Tools */
$handler = $view->new_display('panel_pane', 'Tools', 'panel_pane_3');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'panel panel-default';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'panel-body';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'glory';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: ShareThis Link */
$handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
$handler->display->display_options['fields']['sharethis']['table'] = 'node';
$handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
$handler->display->display_options['fields']['sharethis']['label'] = '';
$handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sharethis']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['sharethis']['element_wrapper_class'] = 'pull-right';
/* Field: Content: Models: All: Start Project */
$handler->display->display_options['fields']['models_all_start_project']['id'] = 'models_all_start_project';
$handler->display->display_options['fields']['models_all_start_project']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['models_all_start_project']['field'] = 'models_all_start_project';
$handler->display->display_options['fields']['models_all_start_project']['label'] = '';
$handler->display->display_options['fields']['models_all_start_project']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['models_all_start_project']['alter']['preserve_tags'] = '<a>';
$handler->display->display_options['fields']['models_all_start_project']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['models_all_start_project']['rules_link'] = array(
  'rules_link_parameters' => '',
  'rules_link_rewrite' => '',
);
/* Field: Content: Models: All: Complete Project */
$handler->display->display_options['fields']['models_all_complete_project']['id'] = 'models_all_complete_project';
$handler->display->display_options['fields']['models_all_complete_project']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['models_all_complete_project']['field'] = 'models_all_complete_project';
$handler->display->display_options['fields']['models_all_complete_project']['label'] = '';
$handler->display->display_options['fields']['models_all_complete_project']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['models_all_complete_project']['rules_link'] = array(
  'rules_link_parameters' => '',
  'rules_link_rewrite' => '',
);
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
$handler->display->display_options['pane_category']['name'] = 'Model Projects';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'number',
  4 => 'taxonomy',
  5 => 'date',
  6 => 'entityreference',
  7 => 'image',
);
