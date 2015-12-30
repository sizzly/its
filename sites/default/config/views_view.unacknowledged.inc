<?php
/**
 * @file
 * views_view.unacknowledged.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'unacknowledged';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Unacknowledged';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Unacknowledged Battles';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'field_opponent_s_name_value' => array(
    'more_options' => array(
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'uid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'field_game_date_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'secondary_label' => NULL,
  'collapsible_label' => NULL,
  'combine_rewrite' => NULL,
  'reset_label' => NULL,
  'bef_filter_description' => NULL,
  'any_label' => NULL,
  'filter_rewrite_values' => NULL,
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_game_date' => 'field_game_date',
  'field_your_army' => 'field_your_army',
  'field_opponent_s_army' => 'field_your_army',
  'name' => 'name',
  'field_location' => 'field_location',
  'field_opponent_s_name' => 'field_opponent_s_name',
  'field_opponent' => 'field_opponent_s_name',
  'ops' => 'ops',
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
  'field_game_date' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_your_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' vs ',
    'empty_column' => 0,
  ),
  'field_opponent_s_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_location' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_opponent_s_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' : ',
    'empty_column' => 0,
  ),
  'field_opponent' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'ops' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['override'] = FALSE;
/* Relationship: Flags: acknowledge_battle */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'acknowledge_battle';
$handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_opponent_target_id']['id'] = 'field_opponent_target_id';
$handler->display->display_options['relationships']['field_opponent_target_id']['table'] = 'field_data_field_opponent';
$handler->display->display_options['relationships']['field_opponent_target_id']['field'] = 'field_opponent_target_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
$handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['settings'] = array(
  'format_type' => 'uc_store',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = 'Armies';
/* Field: Field: Opponent's Army */
$handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Reporting Player';
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
/* Field: Content: Opponent's Name */
$handler->display->display_options['fields']['field_opponent_s_name']['id'] = 'field_opponent_s_name';
$handler->display->display_options['fields']['field_opponent_s_name']['table'] = 'field_data_field_opponent_s_name';
$handler->display->display_options['fields']['field_opponent_s_name']['field'] = 'field_opponent_s_name';
$handler->display->display_options['fields']['field_opponent_s_name']['label'] = 'Is this you?';
$handler->display->display_options['fields']['field_opponent_s_name']['alter']['text'] = '[field_opponent_s_name]<br>';
$handler->display->display_options['fields']['field_opponent_s_name']['hide_empty'] = TRUE;
/* Field: Content: Opponent */
$handler->display->display_options['fields']['field_opponent']['id'] = 'field_opponent';
$handler->display->display_options['fields']['field_opponent']['table'] = 'field_data_field_opponent';
$handler->display->display_options['fields']['field_opponent']['field'] = 'field_opponent';
$handler->display->display_options['fields']['field_opponent']['settings'] = array(
  'link' => 1,
);
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = 'Acknowledge';
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
  'game_results' => 'game_results',
);
/* Filter criterion: Flags: Flagged */
$handler->display->display_options['filters']['flagged']['id'] = 'flagged';
$handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
$handler->display->display_options['filters']['flagged']['field'] = 'flagged';
$handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
$handler->display->display_options['filters']['flagged']['value'] = '0';
/* Filter criterion: Content: Opponent&#039;s Name (field_opponent_s_name) */
$handler->display->display_options['filters']['field_opponent_s_name_value']['id'] = 'field_opponent_s_name_value';
$handler->display->display_options['filters']['field_opponent_s_name_value']['table'] = 'field_data_field_opponent_s_name';
$handler->display->display_options['filters']['field_opponent_s_name_value']['field'] = 'field_opponent_s_name_value';
$handler->display->display_options['filters']['field_opponent_s_name_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_opponent_s_name_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_opponent_s_name_value']['expose']['operator_id'] = 'field_opponent_s_name_value_op';
$handler->display->display_options['filters']['field_opponent_s_name_value']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['field_opponent_s_name_value']['expose']['description'] = 'Provided by the reporting player. Usually a first name or handle';
$handler->display->display_options['filters']['field_opponent_s_name_value']['expose']['operator'] = 'field_opponent_s_name_value_op';
$handler->display->display_options['filters']['field_opponent_s_name_value']['expose']['identifier'] = 'field_opponent_s_name_value';
$handler->display->display_options['filters']['field_opponent_s_name_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'field_opponent_target_id';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'ID';
$handler->display->display_options['filters']['uid']['expose']['description'] = 'Opponent\'s iToysoldiers ID';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
/* Filter criterion: Content: Date (field_game_date) */
$handler->display->display_options['filters']['field_game_date_value']['id'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['table'] = 'field_data_field_game_date';
$handler->display->display_options['filters']['field_game_date_value']['field'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_game_date_value']['expose']['operator_id'] = 'field_game_date_value_op';
$handler->display->display_options['filters']['field_game_date_value']['expose']['label'] = 'Game Date';
$handler->display->display_options['filters']['field_game_date_value']['expose']['description'] = 'The date the game was played';
$handler->display->display_options['filters']['field_game_date_value']['expose']['operator'] = 'field_game_date_value_op';
$handler->display->display_options['filters']['field_game_date_value']['expose']['identifier'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_game_date_value']['year_range'] = '-5:+0';

/* Display: Main Page */
$handler = $view->new_display('page', 'Main Page', 'page_1');
$handler->display->display_options['path'] = 'battle-reports/unacknowledged-battles';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Unacknowledged';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Main Panel */
$handler = $view->new_display('panel_pane', 'Main Panel', 'panel_pane_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Opponent (field_opponent) */
$handler->display->display_options['arguments']['field_opponent_target_id']['id'] = 'field_opponent_target_id';
$handler->display->display_options['arguments']['field_opponent_target_id']['table'] = 'field_data_field_opponent';
$handler->display->display_options['arguments']['field_opponent_target_id']['field'] = 'field_opponent_target_id';
$handler->display->display_options['arguments']['field_opponent_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_opponent_target_id']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['field_opponent_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_opponent_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_opponent_target_id']['summary_options']['items_per_page'] = '25';
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
  'game_results' => 'game_results',
);
/* Filter criterion: Flags: Flagged */
$handler->display->display_options['filters']['flagged']['id'] = 'flagged';
$handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
$handler->display->display_options['filters']['flagged']['field'] = 'flagged';
$handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
$handler->display->display_options['filters']['flagged']['value'] = '0';
/* Filter criterion: Content: Date (field_game_date) */
$handler->display->display_options['filters']['field_game_date_value']['id'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['table'] = 'field_data_field_game_date';
$handler->display->display_options['filters']['field_game_date_value']['field'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_game_date_value']['expose']['operator_id'] = 'field_game_date_value_op';
$handler->display->display_options['filters']['field_game_date_value']['expose']['label'] = 'Game Date';
$handler->display->display_options['filters']['field_game_date_value']['expose']['description'] = 'The date the game was played';
$handler->display->display_options['filters']['field_game_date_value']['expose']['operator'] = 'field_game_date_value_op';
$handler->display->display_options['filters']['field_game_date_value']['expose']['identifier'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_game_date_value']['year_range'] = '-5:+0';
$handler->display->display_options['pane_category']['name'] = 'Dashboard';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Club Panel */
$handler = $view->new_display('panel_pane', 'Club Panel', 'panel_pane_2');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: acknowledge_battle */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'acknowledge_battle';
$handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_opponent_target_id']['id'] = 'field_opponent_target_id';
$handler->display->display_options['relationships']['field_opponent_target_id']['table'] = 'field_data_field_opponent';
$handler->display->display_options['relationships']['field_opponent_target_id']['field'] = 'field_opponent_target_id';
/* Relationship: Flags: membership */
$handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
$handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Club';
$handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'membership';
$handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Club';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'date',
  3 => 'taxonomy',
  4 => 'node_reference',
  5 => 'text',
  6 => 'entityreference',
  7 => 'views_content',
);
