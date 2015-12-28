<?php
/**
 * @file
 * views_view.battles_all_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'battles_all_page_layout';
$view->description = 'Page Elements for the Battle node pages.';
$view->tag = 'Battles 2.0';
$view->base_table = 'node';
$view->human_name = 'Battles: All: Page Layout';
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
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);

/* Display: Battle Meta */
$handler = $view->new_display('panel_pane', 'Battle Meta', 'panel_pane_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Your Army (field_your_army) */
$handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Game System */
$handler->display->display_options['fields']['field_game_system_armies']['id'] = 'field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['table'] = 'field_data_field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['field'] = 'field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['relationship'] = 'field_your_army_tid';
$handler->display->display_options['fields']['field_game_system_armies']['label'] = '';
$handler->display->display_options['fields']['field_game_system_armies']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_game_system_armies']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-book"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_game_system_armies]</strong>
        <div class="text-muted">Game System</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_game_system_armies']['alter']['path'] = 'taxonomy/term/[field_game_system_armies-tid]';
$handler->display->display_options['fields']['field_game_system_armies']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_game_system_armies']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_game_system_armies']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_game_system_armies']['hide_empty'] = TRUE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
$handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['label'] = '';
$handler->display->display_options['fields']['field_game_date']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_game_date']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-calendar-o"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_game_date]</strong>
        <div class="text-muted">Date</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_game_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_game_date']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_game_date']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_game_date']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_game_date']['settings'] = array(
  'format_type' => 'uc_store',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Field: Points per army */
$handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['label'] = '';
$handler->display->display_options['fields']['field_points_per_army']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_points_per_army']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-list"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_points_per_army]</strong>
        <div class="text-muted">Points per Army</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_points_per_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_points_per_army']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_points_per_army']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_points_per_army']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_points_per_army']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_points_per_army']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 0,
);
/* Field: Content: Deployment */
$handler->display->display_options['fields']['field_battle_deployment']['id'] = 'field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['table'] = 'field_data_field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['field'] = 'field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['label'] = '';
$handler->display->display_options['fields']['field_battle_deployment']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_battle_deployment']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-compress"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_deployment]</strong>
        <div class="text-muted">Deployment</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_battle_deployment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_battle_deployment']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_battle_deployment']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_battle_deployment']['hide_empty'] = TRUE;
/* Field: Field: Mission */
$handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
$handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['label'] = '';
$handler->display->display_options['fields']['field_mission']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_mission']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-folder-open"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_mission]</strong>
        <div class="text-muted">Mission</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_mission']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_mission']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_mission']['hide_empty'] = TRUE;
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Player 1 */
$handler = $view->new_display('panel_pane', 'Player 1', 'panel_pane_2');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['exclude'] = TRUE;
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'battles_all_page_layout';
$handler->display->display_options['fields']['view']['display'] = 'panel_pane_10';
$handler->display->display_options['fields']['view']['arguments'] = '!1';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = '';
$handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['exclude'] = TRUE;
$handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['picture']['alter']['link_class'] = 'pull-left avatar';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['image_style'] = 'avatar_small';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel panel-default bg-primary">
    <div class="panel-body">
        <span class="pull-left">[picture]</span>
        <div class="pull-left">
            <strong class="font-18">[name]</strong>
            <br>
            <span class="font-16">[field_your_army]</span>
        </div>
    </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Shortcuts */
$handler = $view->new_display('panel_pane', 'Shortcuts', 'panel_pane_3');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
/* Relationship: Flags: acknowledge_battle counter */
$handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
$handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'acknowledged';
$handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'acknowledge_battle';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = '';
$handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
$handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['comment_count']['alter']['text'] = '  <a href="#comments" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
      <span class="shortcut-alert">[comment_count]</span>
    </span>
    <span class="text">Comments</span>
  </a>';
$handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['comment_count']['empty'] = '  <a href="#add-comment" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
    </span>
    <span class="text">Add Comment</span>
  </a>';
$handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
/* Field: Salutes */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'flag_counts';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
$handler->display->display_options['fields']['count']['ui_name'] = 'Salutes';
$handler->display->display_options['fields']['count']['label'] = '';
$handler->display->display_options['fields']['count']['exclude'] = TRUE;
$handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['count']['alter']['text'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-flag" aria-hidden="true"></span>
      <span class="shortcut-alert">[count]</span>
    </span>
    <span class="text">Salutes</span>
  </a>';
$handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['count']['hide_alter_empty'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body_1']['id'] = 'body_1';
$handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_1']['field'] = 'body';
$handler->display->display_options['fields']['body_1']['relationship'] = 'reverse_field_game_reference_node';
$handler->display->display_options['fields']['body_1']['label'] = '';
$handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['body_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body_1']['alter']['text'] = '  <a href="#commentary" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-folder-open" aria-hidden="true"></span>
    </span>
    <span class="text">Commentary</span>
  </a>';
$handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['body_1']['empty_zero'] = TRUE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '  <a href="#commentary" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-folder-open" aria-hidden="true"></span>
    </span>
    <span class="text">Commentary</span>
  </a>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['empty'] = '[body_1]';
$handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
/* Field: Flags: Flag counter */
$handler->display->display_options['fields']['count_1']['id'] = 'count_1';
$handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
$handler->display->display_options['fields']['count_1']['field'] = 'count';
$handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
$handler->display->display_options['fields']['count_1']['label'] = '';
$handler->display->display_options['fields']['count_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['count_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['count_1']['alter']['text'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-check" aria-hidden="true"></span>
    </span>
    <span class="text">Acknowledged</span>
  </a>';
$handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['count_1']['empty'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-unchecked" aria-hidden="true"></span>
    </span>
    <span class="text">Acknowledge</span>
  </a>';
$handler->display->display_options['fields']['count_1']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['count_1']['separator'] = '';
/* Field: Content: Images */
$handler->display->display_options['fields']['field_images_1']['id'] = 'field_images_1';
$handler->display->display_options['fields']['field_images_1']['table'] = 'field_data_field_images';
$handler->display->display_options['fields']['field_images_1']['field'] = 'field_images';
$handler->display->display_options['fields']['field_images_1']['relationship'] = 'reverse_field_game_reference_node';
$handler->display->display_options['fields']['field_images_1']['label'] = '';
$handler->display->display_options['fields']['field_images_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_images_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_images_1']['alter']['text'] = '  <a href="#recon" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-picture" aria-hidden="true"></span>
    </span>
    <span class="text">Images</span>
  </a>';
$handler->display->display_options['fields']['field_images_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_images_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_images_1']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_images_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_images_1']['type'] = 'single_image';
$handler->display->display_options['fields']['field_images_1']['settings'] = array(
  'image_style' => 'avatar_small',
  'image_link' => '',
  'single_image_delta' => '',
);
$handler->display->display_options['fields']['field_images_1']['delta_offset'] = '0';
/* Field: Content: Images */
$handler->display->display_options['fields']['field_images']['id'] = 'field_images';
$handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
$handler->display->display_options['fields']['field_images']['field'] = 'field_images';
$handler->display->display_options['fields']['field_images']['label'] = '';
$handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_images']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_images']['alter']['text'] = '  <a href="#recon" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-picture" aria-hidden="true"></span>
    </span>
    <span class="text">Images</span>
  </a>';
$handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_images']['empty'] = '[field_images_1]';
$handler->display->display_options['fields']['field_images']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_images']['type'] = 'single_image';
$handler->display->display_options['fields']['field_images']['settings'] = array(
  'image_style' => 'avatar_small',
  'image_link' => '',
  'single_image_delta' => '',
);
$handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
[comment_count]
[count]
[body]
[field_images]
[count_1]
</div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Player 1 Commentary */
$handler = $view->new_display('panel_pane', 'Player 1 Commentary', 'panel_pane_5');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<a name="commentary"></a>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[name]\'s Commentary';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">[name]</h3>
  </div>
  <div class="panel-body">
    [body]
  </div>
</div>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
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
/* Filter criterion: Content: Body (body) */
$handler->display->display_options['filters']['body_value']['id'] = 'body_value';
$handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
$handler->display->display_options['filters']['body_value']['field'] = 'body_value';
$handler->display->display_options['filters']['body_value']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Images */
$handler = $view->new_display('panel_pane', 'Images', 'panel_pane_6');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'photo-stream';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<a name="recon"></a>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Images */
$handler->display->display_options['fields']['field_images']['id'] = 'field_images';
$handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
$handler->display->display_options['fields']['field_images']['field'] = 'field_images';
$handler->display->display_options['fields']['field_images']['label'] = '';
$handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_images']['type'] = 'lightbox2__lightbox__button__original';
$handler->display->display_options['fields']['field_images']['settings'] = array(
  'image_style' => 'button',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_images']['group_column'] = 'fid';
$handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: Content: Images (field_images:delta) */
$handler->display->display_options['filters']['delta']['id'] = 'delta';
$handler->display->display_options['filters']['delta']['table'] = 'field_data_field_images';
$handler->display->display_options['filters']['delta']['field'] = 'delta';
$handler->display->display_options['filters']['delta']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'nid' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
);

/* Display: Completeness */
$handler = $view->new_display('panel_pane', 'Completeness', 'panel_pane_7');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'ops' => 'ops',
  'nothing' => 'nothing',
);
$handler->display->display_options['row_options']['separator'] = ' ';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: meta_complete */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'meta_complete';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content Complete: Completeness */
$handler->display->display_options['fields']['completeness']['id'] = 'completeness';
$handler->display->display_options['fields']['completeness']['table'] = 'content_complete';
$handler->display->display_options['fields']['completeness']['field'] = 'completeness';
$handler->display->display_options['fields']['completeness']['label'] = '';
$handler->display->display_options['fields']['completeness']['exclude'] = TRUE;
$handler->display->display_options['fields']['completeness']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['completeness']['element_wrapper_type'] = 'p';
$handler->display->display_options['fields']['completeness']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['completeness']['next'] = 1;
$handler->display->display_options['fields']['completeness']['display_as'] = 'bar';
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['ops']['alter']['text'] = '<h2 class="pane-title">Report Status</h2>
[completeness]
<p>
<span class="pull-right">
  <span class="badge" data-container="body" data-toggle="popover" data-placement="top" data-content="Click Mark Complete when you are satisfied with the meta values for this battle. You will no longer be prompted to complete the battle meta."><span class="glyphicon glyphicon-question-sign" aria-hidden="true"></span></span>
</span>
[ops]
</p>';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ops']['hide_empty'] = TRUE;
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'nid' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
);

/* Display: Player 2 Commentary */
$handler = $view->new_display('panel_pane', 'Player 2 Commentary', 'panel_pane_8');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<a name="commentary"></a>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_game_reference_node';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[name]\'s Commentary';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_game_reference_node';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">[name]</h3>
  </div>
  <div class="panel-body">
    [body]
  </div>
</div>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
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
/* Filter criterion: Content: Body (body) */
$handler->display->display_options['filters']['body_value']['id'] = 'body_value';
$handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
$handler->display->display_options['filters']['body_value']['field'] = 'body_value';
$handler->display->display_options['filters']['body_value']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Sharethis and Tools */
$handler = $view->new_display('panel_pane', 'Sharethis and Tools', 'panel_pane_9');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'ops' => 'ops',
  'ops_1' => 'ops_1',
  'edit_node' => 'edit_node',
  'edit_node_1' => 'edit_node_1',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<a name="tools"></a>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'glory';
/* Relationship: Flags: acknowledge_battle */
$handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
$handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'acknowledge';
$handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'acknowledge_battle';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: ShareThis Link */
$handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
$handler->display->display_options['fields']['sharethis']['table'] = 'node';
$handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
$handler->display->display_options['fields']['sharethis']['label'] = '';
$handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sharethis']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['sharethis']['element_wrapper_class'] = 'pull-right';
$handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
/* Field: Content: Add comment link */
$handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['table'] = 'node';
$handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['label'] = '';
$handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ops']['hide_empty'] = TRUE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
$handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops_1']['field'] = 'ops';
$handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
$handler->display->display_options['fields']['ops_1']['label'] = '';
$handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ops_1']['hide_empty'] = TRUE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit Battle';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
$handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node_1']['relationship'] = 'reverse_field_game_reference_node';
$handler->display->display_options['fields']['edit_node_1']['label'] = '';
$handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit Battle';
/* Field: Content: Radioactivity */
$handler->display->display_options['fields']['field_radioactivity']['id'] = 'field_radioactivity';
$handler->display->display_options['fields']['field_radioactivity']['table'] = 'field_data_field_radioactivity';
$handler->display->display_options['fields']['field_radioactivity']['field'] = 'field_radioactivity';
$handler->display->display_options['fields']['field_radioactivity']['label'] = '';
$handler->display->display_options['fields']['field_radioactivity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_radioactivity']['click_sort_column'] = 'radioactivity_energy';
$handler->display->display_options['fields']['field_radioactivity']['settings'] = array(
  'energy' => '10',
  'type' => 'none',
  'accuracy' => '100',
);
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Commander Survival */
$handler = $view->new_display('panel_pane', 'Commander Survival', 'panel_pane_10');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Your Commander Survival */
$handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['label'] = '';
$handler->display->display_options['fields']['field_your_commander_survival']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_your_commander_survival']['alter']['text'] = '<span class="glyphicon glyphicon-remove" aria-hidden="true"></span> Slain';
$handler->display->display_options['fields']['field_your_commander_survival']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_commander_survival']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_your_commander_survival']['empty'] = '<span class="glyphicon glyphicon-heart-empty" aria-hidden="true"></span> Survived';
$handler->display->display_options['fields']['field_your_commander_survival']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_your_commander_survival']['type'] = 'list_key';
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
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: Content: Your Commander Survival (field_your_commander_survival) */
$handler->display->display_options['filters']['field_your_commander_survival_value']['id'] = 'field_your_commander_survival_value';
$handler->display->display_options['filters']['field_your_commander_survival_value']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['filters']['field_your_commander_survival_value']['field'] = 'field_your_commander_survival_value';
$handler->display->display_options['filters']['field_your_commander_survival_value']['operator'] = 'not empty';

/* Display: Player Battle Score */
$handler = $view->new_display('panel_pane', 'Player Battle Score', 'panel_pane_11');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Player Battle Score';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group clearfix';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: User: Content authored */
$handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['relationships']['uid_1']['table'] = 'users';
$handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
$handler->display->display_options['relationships']['uid_1']['relationship'] = 'uid';
$handler->display->display_options['relationships']['uid_1']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'pull-left iconbuffer';
$handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'span';
$handler->display->display_options['fields']['name']['element_class'] = 'lead';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['label'] = '';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '0';
$handler->display->display_options['fields']['expression']['separator'] = '';
$handler->display->display_options['fields']['expression']['expression'] = '([field_your_results]/5) * 100';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression]" role="progressbar" aria-valuenow="[expression]" aria-valuemin="0" aria-valuemax="100">
    [field_your_results]
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
$handler->display->display_options['filters']['type']['relationship'] = 'uid_1';
$handler->display->display_options['filters']['type']['value'] = array(
  'game_results' => 'game_results',
  'game_result_system_' => 'game_result_system_',
);
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'nid' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
);

/* Display: Army Battle Scores */
$handler = $view->new_display('panel_pane', 'Army Battle Scores', 'panel_pane_12');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Army Battle Score';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group clearfix';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Your Army (field_your_army) */
$handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_your_army_tid';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left iconbuffer';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'button',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_your_army_tid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'span';
$handler->display->display_options['fields']['name']['element_class'] = 'lead';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '0';
$handler->display->display_options['fields']['expression']['expression'] = '([field_your_results]/5) * 100';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression]" role="progressbar" aria-valuenow="[expression]" aria-valuemin="0" aria-valuemax="100">
    [field_your_results]
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Your Results (field_your_results) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Your Army (field_your_army) */
$handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_your_army_tid']['break_phrase'] = TRUE;
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_your_army_tid' => array(
    'type' => 'user',
    'context' => 'entity:uc_cart_item.cart-id',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Your Army (field_your_army)',
  ),
);

/* Display: Mission Rules in Effect */
$handler = $view->new_display('panel_pane', 'Mission Rules in Effect', 'panel_pane_14');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Mission Rules in Effect */
$handler->display->display_options['fields']['field_battle_mission_rules']['id'] = 'field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['table'] = 'field_data_field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['field'] = 'field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['label'] = '';
$handler->display->display_options['fields']['field_battle_mission_rules']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_battle_mission_rules']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_battle_mission_rules']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-sm-12 col-md-12">
<div class="panel-stat3 bg-primary">
  <h4 class="m-top-none">[field_battle_mission_rules]</h5>
  <h5>Mission Rules</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-list-alt fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
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
  'game_results' => 'game_results',
);
/* Filter criterion: Content: Mission Rules in Effect (field_battle_mission_rules) */
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['id'] = 'field_battle_mission_rules_tid';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['table'] = 'field_data_field_battle_mission_rules';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['field'] = 'field_battle_mission_rules_tid';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['value'] = '';
$handler->display->display_options['filters']['field_battle_mission_rules_tid']['vocabulary'] = 'scenario_special_rules';

/* Display: Battle Meta */
$handler = $view->new_display('panel_pane', 'Battle Meta', 'panel_pane_13');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Your Army (field_your_army) */
$handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
$handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
$handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Game System */
$handler->display->display_options['fields']['field_game_system_armies']['id'] = 'field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['table'] = 'field_data_field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['field'] = 'field_game_system_armies';
$handler->display->display_options['fields']['field_game_system_armies']['relationship'] = 'field_your_army_tid';
$handler->display->display_options['fields']['field_game_system_armies']['label'] = '';
$handler->display->display_options['fields']['field_game_system_armies']['element_label_colon'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
$handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
$handler->display->display_options['fields']['field_game_date']['label'] = '';
$handler->display->display_options['fields']['field_game_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_game_date']['settings'] = array(
  'format_type' => 'uc_store',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 1,
);
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['label'] = '';
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
/* Field: Content: Deployment */
$handler->display->display_options['fields']['field_battle_deployment']['id'] = 'field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['table'] = 'field_data_field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['field'] = 'field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['label'] = '';
$handler->display->display_options['fields']['field_battle_deployment']['element_label_colon'] = FALSE;
/* Field: Content: Mission Rules in Effect */
$handler->display->display_options['fields']['field_battle_mission_rules']['id'] = 'field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['table'] = 'field_data_field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['field'] = 'field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['label'] = '';
$handler->display->display_options['fields']['field_battle_mission_rules']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_battle_mission_rules']['delta_offset'] = '0';
/* Field: Field: Mission */
$handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
$handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['label'] = '';
$handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
/* Field: Field: Points per army */
$handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['label'] = '';
$handler->display->display_options['fields']['field_points_per_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Player 1 Meta */
$handler = $view->new_display('panel_pane', 'Player 1 Meta', 'panel_pane_15');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['exclude'] = TRUE;
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'battles_all_page_layout';
$handler->display->display_options['fields']['view']['display'] = 'panel_pane_10';
$handler->display->display_options['fields']['view']['arguments'] = '!1';
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = '';
$handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['label'] = '';
$handler->display->display_options['fields']['field_your_results']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_your_results']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-balance-scale"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_your_results]</strong>
        <div class="text-muted">Results</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_results']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_your_results']['element_wrapper_class'] = 'list-group-item';
/* Field: Content: Commander */
$handler->display->display_options['fields']['field_batteresult_commander']['id'] = 'field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['table'] = 'field_data_field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['field'] = 'field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['label'] = '';
$handler->display->display_options['fields']['field_batteresult_commander']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_batteresult_commander']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-flag"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_batteresult_commander]</strong>
        <div class="text-muted">Commander <span class="badge">[view]</span></div>
    </div>
</div>';
$handler->display->display_options['fields']['field_batteresult_commander']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_batteresult_commander']['hide_empty'] = TRUE;
/* Field: Content: Your Allied Detatchment */
$handler->display->display_options['fields']['field_allied_detatchment']['id'] = 'field_allied_detatchment';
$handler->display->display_options['fields']['field_allied_detatchment']['table'] = 'field_data_field_allied_detatchment';
$handler->display->display_options['fields']['field_allied_detatchment']['field'] = 'field_allied_detatchment';
$handler->display->display_options['fields']['field_allied_detatchment']['label'] = '';
$handler->display->display_options['fields']['field_allied_detatchment']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_allied_detatchment']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_allied_detatchment']['alter']['text'] = '<div class="list-group-item">
<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-arrows-alt"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_allied_detatchment]</strong>
        <div class="text-muted">Allied Detatchment</div>
    </div>
</div>
</div>';
$handler->display->display_options['fields']['field_allied_detatchment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_allied_detatchment']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_allied_detatchment']['delta_offset'] = '0';
/* Field: Content: Most Valuable Unit */
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['id'] = 'field_battle_most_valuable_unit';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['table'] = 'field_data_field_battle_most_valuable_unit';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['field'] = 'field_battle_most_valuable_unit';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['label'] = '';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-trophy"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_most_valuable_unit]</strong>
        <div class="text-muted">Most Valuable Unit</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['path'] = 'taxonomy/term/[field_battle_most_valuable_unit-tid]';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['link_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_battle_most_valuable_unit']['hide_empty'] = TRUE;
/* Field: Content: My Victory Conditions met */
$handler->display->display_options['fields']['field_battle_my_vc']['id'] = 'field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['table'] = 'field_data_field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['field'] = 'field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['label'] = '';
$handler->display->display_options['fields']['field_battle_my_vc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_battle_my_vc']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_battle_my_vc']['alter']['text'] = '<div class="list-group-item">
<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-arrows-alt"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_my_vc]</strong>
        <div class="text-muted">Victory Condition Met</div>
    </div>
</div>
</div>';
$handler->display->display_options['fields']['field_battle_my_vc']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_battle_my_vc']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_battle_my_vc']['delta_offset'] = '0';
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Theater */
$handler = $view->new_display('panel_pane', 'Theater', 'panel_pane_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Theater';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['label'] = '';
$handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-map-marker"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_location]</strong>
        <div class="text-muted">Battlefield</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_location']['alter']['path'] = 'node/[field_location-nid]';
$handler->display->display_options['fields']['field_location']['alter']['max_length'] = '17';
$handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_location']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-crosshairs"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_event_link]</strong>
        <div class="text-muted">War Zone</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_event_link']['alter']['path'] = 'node/[field_event_link-target_id]';
$handler->display->display_options['fields']['field_event_link']['alter']['alt'] = '[field_event_link]';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_event_link']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_event_link']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 1,
);
$handler->display->display_options['pane_category']['name'] = 'Battles';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'taxonomy',
  4 => 'date',
  5 => 'number',
  6 => 'text',
  7 => 'image',
  8 => 'radioactivity',
  9 => 'list',
  10 => 'entityreference',
  11 => 'node_reference',
);
