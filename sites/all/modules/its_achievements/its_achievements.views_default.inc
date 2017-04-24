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
  $view->name = 'achievements_all_player_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Achievements: All: Player Lists';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'picture';
  $handler->display->display_options['style_options']['heading_field'] = 'name';
  $handler->display->display_options['style_options']['body_field'] = 'field_achievement_date';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Relation: Achievement (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_achievement']['id'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['field'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_left_achievement']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_left_achievement']['entity_deduplication_left'] = 1;
  /* Relationship: Relation: Relation: Achievement (relation → user) */
  $handler->display->display_options['relationships']['relation_base_achievement_user']['id'] = 'relation_base_achievement_user';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['field'] = 'relation_base_achievement_user';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['entity_deduplication_right'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Relation: Achievement Date */
  $handler->display->display_options['fields']['field_achievement_date']['id'] = 'field_achievement_date';
  $handler->display->display_options['fields']['field_achievement_date']['table'] = 'field_data_field_achievement_date';
  $handler->display->display_options['fields']['field_achievement_date']['field'] = 'field_achievement_date';
  $handler->display->display_options['fields']['field_achievement_date']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['fields']['field_achievement_date']['label'] = 'Awarded';
  $handler->display->display_options['fields']['field_achievement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Relation: Achievement Date (field_achievement_date) */
  $handler->display->display_options['sorts']['field_achievement_date_value']['id'] = 'field_achievement_date_value';
  $handler->display->display_options['sorts']['field_achievement_date_value']['table'] = 'field_data_field_achievement_date';
  $handler->display->display_options['sorts']['field_achievement_date_value']['field'] = 'field_achievement_date_value';
  $handler->display->display_options['sorts']['field_achievement_date_value']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['sorts']['field_achievement_date_value']['order'] = 'DESC';
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
    'achievement' => 'achievement',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'users';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['filters']['status_1']['value'] = '1';

  /* Display: Recent Achievements for Category */
  $handler = $view->new_display('panel_pane', 'Recent Achievements for Category', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Awards';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'picture';
  $handler->display->display_options['style_options']['heading_field'] = 'name';
  $handler->display->display_options['style_options']['body_field'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Relation: Achievement Date */
  $handler->display->display_options['fields']['field_achievement_date']['id'] = 'field_achievement_date';
  $handler->display->display_options['fields']['field_achievement_date']['table'] = 'field_data_field_achievement_date';
  $handler->display->display_options['fields']['field_achievement_date']['field'] = 'field_achievement_date';
  $handler->display->display_options['fields']['field_achievement_date']['relationship'] = 'relation_base_left_achievement';
  $handler->display->display_options['fields']['field_achievement_date']['label'] = 'Awarded';
  $handler->display->display_options['fields']['field_achievement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achievement_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_achievement_category) */
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['id'] = 'field_achievement_category_target_id';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['field'] = 'field_achievement_category_target_id';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Term';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Top Players */
  $handler = $view->new_display('panel_pane', 'Top Players', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Players';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Achievement Points (field_achievement_points) */
  $handler->display->display_options['sorts']['field_achievement_points_value']['id'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['table'] = 'field_data_field_achievement_points';
  $handler->display->display_options['sorts']['field_achievement_points_value']['field'] = 'field_achievement_points_value';
  $handler->display->display_options['sorts']['field_achievement_points_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_achievement_points_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_achievement_category) */
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['id'] = 'field_achievement_category_target_id';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['table'] = 'field_data_field_achievement_category';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['field'] = 'field_achievement_category_target_id';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_achievement_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Term';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Awarded Players */
  $handler = $view->new_display('panel_pane', 'Awarded Players', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Players';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="well well-sm"><strong>@total Players</strong> have earned this achievement.</div>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="well well-sm">
<strong>No Players</strong> have earned this achievement yet.
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'pure_html';
  $handler->display->display_options['empty']['area']['roles_fieldset'] = array(
    'roles' => array(
      'anonymous user' => 0,
      'authenticated user' => 0,
      'administrator' => 0,
      'verified' => 0,
      'Ironmonger' => 0,
      'System' => 0,
    ),
  );
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
  $handler->display->display_options['pane_category']['name'] = 'Achievements';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['achievements_all_player_lists'] = $view;

  $view = new view();
  $view->name = 'achievements_message_counts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Achievements: Message Counts';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: COUNT(DISTINCT Message: Message ID) */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Contextual filter: Message: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'message';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';

  /* Display: Rules */
  $handler = $view->new_display('views_rules', 'Rules', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['rules_parameter'] = array(
    'user' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Message: User uid',
      'name' => 'user',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'mid' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'COUNT(DISTINCT Message: Message ID)',
      'name' => 'mid',
    ),
  );
  $export['achievements_message_counts'] = $view;

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

  return $export;
}
