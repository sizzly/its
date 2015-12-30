<?php
/**
 * @file
 * views_view.listcrit_all_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'listcrit_all_page_layout';
$view->description = 'Page elements for listcrit nodes.';
$view->tag = 'ListCrit 2.0';
$view->base_table = 'node';
$view->human_name = 'ListCrit: All: Page Layout';
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
  'listcrit' => 'listcrit',
);

/* Display: Primary Meta */
$handler = $view->new_display('panel_pane', 'Primary Meta', 'panel_pane_1');
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
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = '';
$handler->display->display_options['fields']['field_your_army']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_your_army']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-bookmark"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_your_army]</strong>
        <div class="text-muted">Army</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_your_army']['alter']['path'] = 'taxonomy/term/[field_your_army-tid]';
$handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_army']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_your_army']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_your_army']['element_default_classes'] = FALSE;
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
        <div class="text-muted">Points</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_points_per_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_points_per_army']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_points_per_army']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_points_per_army']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_points_per_army']['empty'] = '<div class="hidden-xs hidden-sm col-md-6">
<div class="panel-stat3 bg-grey">
  <h2 class="m-top-none">[Redacted]</h2>
  <h5>Points per Army</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-list fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>
';
$handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 0,
);
/* Field: Content: Commander */
$handler->display->display_options['fields']['field_batteresult_commander']['id'] = 'field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['table'] = 'field_data_field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['field'] = 'field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['label'] = '';
$handler->display->display_options['fields']['field_batteresult_commander']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_batteresult_commander']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-star"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_batteresult_commander]</strong>
        <div class="text-muted">Commander</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_batteresult_commander']['alter']['path'] = 'taxonomy/term/[field_batteresult_commander-tid]';
$handler->display->display_options['fields']['field_batteresult_commander']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_batteresult_commander']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_batteresult_commander']['hide_empty'] = TRUE;
/* Field: Content: Tactical Focus */
$handler->display->display_options['fields']['field_tactical_focus']['id'] = 'field_tactical_focus';
$handler->display->display_options['fields']['field_tactical_focus']['table'] = 'field_data_field_tactical_focus';
$handler->display->display_options['fields']['field_tactical_focus']['field'] = 'field_tactical_focus';
$handler->display->display_options['fields']['field_tactical_focus']['label'] = '';
$handler->display->display_options['fields']['field_tactical_focus']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_tactical_focus']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-eye"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_tactical_focus]</strong>
        <div class="text-muted">Tactical Focus</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_tactical_focus']['alter']['path'] = 'taxonomy/term/[field_tactical_focus-tid] ';
$handler->display->display_options['fields']['field_tactical_focus']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_tactical_focus']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_tactical_focus']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_tactical_focus']['element_default_classes'] = FALSE;
/* Field: Content: Doctrine */
$handler->display->display_options['fields']['field_doctrine']['id'] = 'field_doctrine';
$handler->display->display_options['fields']['field_doctrine']['table'] = 'field_data_field_doctrine';
$handler->display->display_options['fields']['field_doctrine']['field'] = 'field_doctrine';
$handler->display->display_options['fields']['field_doctrine']['label'] = '';
$handler->display->display_options['fields']['field_doctrine']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_doctrine']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-arrows"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_doctrine]</strong>
        <div class="text-muted">Doctrine</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_doctrine']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doctrine']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_doctrine']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_doctrine']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_doctrine']['hide_empty'] = TRUE;
$handler->display->display_options['pane_category']['name'] = 'ListCrit';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Shortcuts */
$handler = $view->new_display('panel_pane', 'Shortcuts', 'panel_pane_3');
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
/* Relationship: Content: Vote results */
$handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
$handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
$handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
$handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
  'value_type' => '',
  'tag' => '',
  'function' => 'sum',
);
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
/* Field: Vote results: Value */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
$handler->display->display_options['fields']['value']['label'] = '';
$handler->display->display_options['fields']['value']['exclude'] = TRUE;
$handler->display->display_options['fields']['value']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['value']['alter']['text'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-asterisk" aria-hidden="true"></span>
      <span class="shortcut-alert">[value]</span>
    </span>
    <span class="text">Rating</span>
  </a>';
$handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['value']['precision'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
[comment_count]
[count]
[value]
</div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'ListCrit';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Sharethis and Tools */
$handler = $view->new_display('panel_pane', 'Sharethis and Tools', 'panel_pane_9');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
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
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ops']['hide_empty'] = TRUE;
/* Field: Content: Rate List */
$handler->display->display_options['fields']['field_rate_content']['id'] = 'field_rate_content';
$handler->display->display_options['fields']['field_rate_content']['table'] = 'field_data_field_rate_content';
$handler->display->display_options['fields']['field_rate_content']['field'] = 'field_rate_content';
$handler->display->display_options['fields']['field_rate_content']['label'] = '';
$handler->display->display_options['fields']['field_rate_content']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_rate_content']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_rate_content']['element_wrapper_class'] = 'text-center center-block';
$handler->display->display_options['fields']['field_rate_content']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_rate_content']['click_sort_column'] = 'vud_widget';
$handler->display->display_options['pane_category']['name'] = 'ListCrit';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Secondary Meta */
$handler = $view->new_display('panel_pane', 'Secondary Meta', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Secondary Meta';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Camp */
$handler->display->display_options['fields']['field_camp']['id'] = 'field_camp';
$handler->display->display_options['fields']['field_camp']['table'] = 'field_data_field_camp';
$handler->display->display_options['fields']['field_camp']['field'] = 'field_camp';
$handler->display->display_options['fields']['field_camp']['label'] = '';
$handler->display->display_options['fields']['field_camp']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_camp']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-bank"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_camp]</strong>
        <div class="text-muted">Camp</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_camp']['alter']['path'] = 'taxonomy/term/[field_camp-tid]';
$handler->display->display_options['fields']['field_camp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_camp']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_camp']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_camp']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_camp']['hide_empty'] = TRUE;
/* Field: Content: Primary Role */
$handler->display->display_options['fields']['field_primary_role']['id'] = 'field_primary_role';
$handler->display->display_options['fields']['field_primary_role']['table'] = 'field_data_field_primary_role';
$handler->display->display_options['fields']['field_primary_role']['field'] = 'field_primary_role';
$handler->display->display_options['fields']['field_primary_role']['label'] = '';
$handler->display->display_options['fields']['field_primary_role']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_primary_role']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-dot-circle-o"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_primary_role]</strong>
        <div class="text-muted">Primary Role</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_primary_role']['alter']['path'] = 'taxonomy/term/[field_primary_role-tid]';
$handler->display->display_options['fields']['field_primary_role']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_primary_role']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_primary_role']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_primary_role']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_primary_role']['hide_empty'] = TRUE;
/* Field: Field: Opponent's Army */
$handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
$handler->display->display_options['fields']['field_opponent_s_army']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_opponent_s_army']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-times-circle"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_opponent_s_army]</strong>
        <div class="text-muted">Designed to Defeat</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_opponent_s_army']['alter']['path'] = 'taxonomy/term/[field_opponent_s_army-tid]';
$handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_opponent_s_army']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_opponent_s_army']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_opponent_s_army']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_opponent_s_army']['hide_empty'] = TRUE;
/* Field: Content: Auxillary */
$handler->display->display_options['fields']['field_aux']['id'] = 'field_aux';
$handler->display->display_options['fields']['field_aux']['table'] = 'field_data_field_aux';
$handler->display->display_options['fields']['field_aux']['field'] = 'field_aux';
$handler->display->display_options['fields']['field_aux']['label'] = '';
$handler->display->display_options['fields']['field_aux']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_aux']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-tags"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_aux]</strong>
        <div class="text-muted">Auxillary</div>
    </div>
</div>';
$handler->display->display_options['fields']['field_aux']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_aux']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_aux']['element_wrapper_class'] = 'list-group-item';
$handler->display->display_options['fields']['field_aux']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_aux']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_aux']['separator'] = '';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
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
  'listcrit' => 'listcrit',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Camp (field_camp) */
$handler->display->display_options['filters']['field_camp_tid']['id'] = 'field_camp_tid';
$handler->display->display_options['filters']['field_camp_tid']['table'] = 'field_data_field_camp';
$handler->display->display_options['filters']['field_camp_tid']['field'] = 'field_camp_tid';
$handler->display->display_options['filters']['field_camp_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_camp_tid']['value'] = '';
$handler->display->display_options['filters']['field_camp_tid']['group'] = 2;
$handler->display->display_options['filters']['field_camp_tid']['vocabulary'] = 'list_crit_tags';
/* Filter criterion: Content: Auxillary (field_aux) */
$handler->display->display_options['filters']['field_aux_tid']['id'] = 'field_aux_tid';
$handler->display->display_options['filters']['field_aux_tid']['table'] = 'field_data_field_aux';
$handler->display->display_options['filters']['field_aux_tid']['field'] = 'field_aux_tid';
$handler->display->display_options['filters']['field_aux_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_aux_tid']['value'] = '';
$handler->display->display_options['filters']['field_aux_tid']['group'] = 2;
$handler->display->display_options['filters']['field_aux_tid']['vocabulary'] = 'list_crit_tags';
/* Filter criterion: Field: Opponent&#039;s Army (field_opponent_s_army) */
$handler->display->display_options['filters']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['value'] = '';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['group'] = 2;
$handler->display->display_options['filters']['field_opponent_s_army_tid']['type'] = 'textfield';
$handler->display->display_options['filters']['field_opponent_s_army_tid']['vocabulary'] = 'armies';
/* Filter criterion: Content: Primary Role (field_primary_role) */
$handler->display->display_options['filters']['field_primary_role_tid']['id'] = 'field_primary_role_tid';
$handler->display->display_options['filters']['field_primary_role_tid']['table'] = 'field_data_field_primary_role';
$handler->display->display_options['filters']['field_primary_role_tid']['field'] = 'field_primary_role_tid';
$handler->display->display_options['filters']['field_primary_role_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_primary_role_tid']['value'] = '';
$handler->display->display_options['filters']['field_primary_role_tid']['group'] = 2;
$handler->display->display_options['filters']['field_primary_role_tid']['vocabulary'] = 'list_crit_tags';
$handler->display->display_options['pane_category']['name'] = 'ListCrit';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'taxonomy',
  4 => 'number',
  5 => 'vud_field',
);
