<?php
/**
 * @file
 * its_achievements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function its_achievements_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'achievements_modelling_rules';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Achievements: Modelling: Rules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Requisition */
  $handler = $view->new_display('views_rules', 'Requisition', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['rules_parameter'] = array(
    'uid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: Author uid',
      'name' => 'uid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_model_count' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Model Count',
      'name' => 'field_model_count',
    ),
    'nid' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Nid',
      'name' => 'nid',
    ),
  );

  /* Display: Uniform Regulations */
  $handler = $view->new_display('views_rules', 'Uniform Regulations', 'views_rules_2');
  $handler->display->display_options['pager']['type'] = 'some';
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
    'models' => 'models',
  );
  /* Filter criterion: Content: Completed Date (field_completed_date_models) */
  $handler->display->display_options['filters']['field_completed_date_models_value']['id'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['table'] = 'field_data_field_completed_date_models';
  $handler->display->display_options['filters']['field_completed_date_models_value']['field'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['operator'] = 'not empty';
  $handler->display->display_options['rules_parameter'] = array(
    'uid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: Author uid',
      'name' => 'uid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_model_count' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Model Count',
      'name' => 'field_model_count',
    ),
    'nid' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Nid',
      'name' => 'nid',
    ),
  );
  $export['achievements_modelling_rules'] = $view;

  $view = new view();
  $view->name = 'achievements_monthly_modelling_champion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Achievements: Monthly Modelling Champion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'field_model_count' => 'field_model_count',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_model_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Sort criterion: SUM(Content: Model Count (field_model_count)) */
  $handler->display->display_options['sorts']['field_model_count_value']['id'] = 'field_model_count_value';
  $handler->display->display_options['sorts']['field_model_count_value']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['sorts']['field_model_count_value']['field'] = 'field_model_count_value';
  $handler->display->display_options['sorts']['field_model_count_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_model_count_value']['order'] = 'DESC';
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
  /* Filter criterion: Content: Completed Date (field_completed_date_models) */
  $handler->display->display_options['filters']['field_completed_date_models_value']['id'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['table'] = 'field_data_field_completed_date_models';
  $handler->display->display_options['filters']['field_completed_date_models_value']['field'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_completed_date_models_value']['default_date'] = '-1 month';
  $handler->display->display_options['filters']['field_completed_date_models_value']['default_to_date'] = 'now';

  /* Display: Monthly Modelling Champion */
  $handler = $view->new_display('views_rules', 'Monthly Modelling Champion', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['rules_variables'] = array(
    'uid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'user',
      'label' => 'User',
      'name' => 'uid',
    ),
    'field_model_count' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Model Count',
      'name' => 'field_model_count',
    ),
  );
  $export['achievements_monthly_modelling_champion'] = $view;

  $view = new view();
  $view->name = 'utility_award_existing_modelling_achievements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Utility: Award Existing Modelling Achievements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: SUM(Content: Model Count) */
  $handler->display->display_options['fields']['field_model_count']['id'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['table'] = 'field_data_field_model_count';
  $handler->display->display_options['fields']['field_model_count']['field'] = 'field_model_count';
  $handler->display->display_options['fields']['field_model_count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_model_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
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

  /* Display: Requisition */
  $handler = $view->new_display('views_rules', 'Requisition', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['rules_parameter'] = array(
    'uid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: Author uid',
      'name' => 'uid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_model_count' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Model Count',
      'name' => 'field_model_count',
    ),
    'nid' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'uid' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Author uid',
      'name' => 'user',
    ),
  );

  /* Display: Uniform Regulations */
  $handler = $view->new_display('views_rules', 'Uniform Regulations', 'views_rules_2');
  $handler->display->display_options['pager']['type'] = 'some';
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
    'models' => 'models',
  );
  /* Filter criterion: Content: Completed Date (field_completed_date_models) */
  $handler->display->display_options['filters']['field_completed_date_models_value']['id'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['table'] = 'field_data_field_completed_date_models';
  $handler->display->display_options['filters']['field_completed_date_models_value']['field'] = 'field_completed_date_models_value';
  $handler->display->display_options['filters']['field_completed_date_models_value']['operator'] = 'not empty';
  $handler->display->display_options['rules_parameter'] = array(
    'uid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: Author uid',
      'name' => 'uid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_model_count' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Model Count',
      'name' => 'field_model_count',
    ),
    'uid' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Author uid',
      'name' => 'user',
    ),
  );

  /* Display: Has Submitted Project */
  $handler = $view->new_display('views_rules', 'Has Submitted Project', 'views_rules_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['rules_variables'] = array(
    'uid' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Author uid',
      'name' => 'name',
    ),
  );
  $export['utility_award_existing_modelling_achievements'] = $view;

  return $export;
}
