<?php
/**
 * @file
 * views_view.profiles_all_trophy_room.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'profiles_all_trophy_room';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Profiles: All: Trophy Room';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Trophy Cards */
$handler = $view->new_display('panel_pane', 'Trophy Cards', 'panel_pane_1');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Relation: Achievement (user → node) */
$handler->display->display_options['relationships']['relation_achievement_node']['id'] = 'relation_achievement_node';
$handler->display->display_options['relationships']['relation_achievement_node']['table'] = 'users';
$handler->display->display_options['relationships']['relation_achievement_node']['field'] = 'relation_achievement_node';
$handler->display->display_options['relationships']['relation_achievement_node']['r_index'] = '-1';
$handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_left'] = 0;
$handler->display->display_options['relationships']['relation_achievement_node']['entity_deduplication_right'] = 0;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Userpoints: Current renown in category */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['label'] = '';
$handler->display->display_options['fields']['points']['exclude'] = TRUE;
$handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['exclude'] = TRUE;
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'profiles_all_registrations';
$handler->display->display_options['fields']['view']['display'] = 'panel_pane_2';
$handler->display->display_options['fields']['view']['arguments'] = '!1';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'relation_achievement_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Achievement Points */
$handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_achievement_node';
$handler->display->display_options['fields']['field_achievement_points']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_achievement_points']['label'] = '';
$handler->display->display_options['fields']['field_achievement_points']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_points']['empty'] = '0';
$handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 0,
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[points]</h2>
  <h5>Renown</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-flash" aria-hidden="true"></span>
  </div>
</div>
</div>

<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[view]</h2>
  <h5>Campaign Badges</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-screenshot" aria-hidden="true"></span>
  </div>
</div>
</div>

<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-success">
  <h2 class="m-top-none">[nid]</h2>
  <h5>Achivements Earned</h5>
  <div class="stat-icon">
    <i class="fa fa-certificate fa-3x" aria-hidden="true"></i>
  </div>
</div>
</div>

<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-danger">
  <h2 class="m-top-none">[field_achievement_points]</h2>
  <h5>Achievement Points</h5>
  <div class="stat-icon">
    <i class="fa fa-signal fa-3x" aria-hidden="true"></i>
  </div>
</div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Userpoints: Points category */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'userpoints';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['operator'] = 'not in';
$handler->display->display_options['filters']['tid']['value'] = array(
  894 => '894',
  1261 => '1261',
);
$handler->display->display_options['pane_category']['name'] = 'Profiles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Medals */
$handler = $view->new_display('panel_pane', 'Medals', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Medals';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'photo-stream-lg';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<a name="medals"></a>';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<div class="panel-body">
  <h4>%1 has not medals.</h4>
</div>';
$handler->display->display_options['empty']['area']['format'] = 'pure_html';
$handler->display->display_options['empty']['area']['tokenize'] = TRUE;
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
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User Badges: Badge Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'user_badges_badges';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['name_1']['empty_zero'] = TRUE;
/* Field: User Badges: Badge */
$handler->display->display_options['fields']['badge']['id'] = 'badge';
$handler->display->display_options['fields']['badge']['table'] = 'user_badges_badges';
$handler->display->display_options['fields']['badge']['field'] = 'badge';
$handler->display->display_options['fields']['badge']['label'] = '';
$handler->display->display_options['fields']['badge']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['badge']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['badge']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['badge']['empty_zero'] = TRUE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: User Badges: Badge Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'user_badges_badges';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Profiles';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Achievements */
$handler = $view->new_display('panel_pane', 'Achievements', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Achievements';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'infinite_scroll';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<a name="achievements"></a>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Relation: Achievement (user → relation) */
$handler->display->display_options['relationships']['relation_base_right_achievement']['id'] = 'relation_base_right_achievement';
$handler->display->display_options['relationships']['relation_base_right_achievement']['table'] = 'users';
$handler->display->display_options['relationships']['relation_base_right_achievement']['field'] = 'relation_base_right_achievement';
$handler->display->display_options['relationships']['relation_base_right_achievement']['r_index'] = '1';
$handler->display->display_options['relationships']['relation_base_right_achievement']['entity_deduplication_left'] = 0;
/* Relationship: Relation: Relation: Achievement (relation → node) */
$handler->display->display_options['relationships']['relation_base_achievement_node']['id'] = 'relation_base_achievement_node';
$handler->display->display_options['relationships']['relation_base_achievement_node']['table'] = 'relation';
$handler->display->display_options['relationships']['relation_base_achievement_node']['field'] = 'relation_base_achievement_node';
$handler->display->display_options['relationships']['relation_base_achievement_node']['relationship'] = 'relation_base_right_achievement';
$handler->display->display_options['relationships']['relation_base_achievement_node']['required'] = TRUE;
$handler->display->display_options['relationships']['relation_base_achievement_node']['r_index'] = '-1';
$handler->display->display_options['relationships']['relation_base_achievement_node']['entity_deduplication_right'] = 1;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_achievement_node';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'relation_base_achievement_node';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_type'] = 'h4';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Relation: Create Date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'relation';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['relationship'] = 'relation_base_right_achievement';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="Awarded"><i class="icon glyphicon glyphicon-time iconbuffer" aria-hidden="true" aria-hidden="true" ></i> [created]</span>';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'uc_store';
$handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['created']['format_date_sql'] = 0;
/* Field: Content: Category */
$handler->display->display_options['fields']['field_achievement_category']['id'] = 'field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['table'] = 'field_data_field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['field'] = 'field_achievement_category';
$handler->display->display_options['fields']['field_achievement_category']['relationship'] = 'relation_base_achievement_node';
$handler->display->display_options['fields']['field_achievement_category']['label'] = '';
$handler->display->display_options['fields']['field_achievement_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_category']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_category']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Short Description */
$handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
$handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
$handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
$handler->display->display_options['fields']['field_short_description']['relationship'] = 'relation_base_achievement_node';
$handler->display->display_options['fields']['field_short_description']['label'] = '';
$handler->display->display_options['fields']['field_short_description']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
/* Field: Content: Achievement Points */
$handler->display->display_options['fields']['field_achievement_points']['id'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['table'] = 'field_data_field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['field'] = 'field_achievement_points';
$handler->display->display_options['fields']['field_achievement_points']['relationship'] = 'relation_base_achievement_node';
$handler->display->display_options['fields']['field_achievement_points']['label'] = '';
$handler->display->display_options['fields']['field_achievement_points']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_points']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_achievement_points']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="Achievement Points"><i class="icon glyphicon glyphicon-signal" aria-hidden="true" aria-hidden="true" ></i> <span class="badge iconbuffer">[field_achievement_points-value]</span></span>';
$handler->display->display_options['fields']['field_achievement_points']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_points']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 0,
);
/* Field: Content: Achievement Unique */
$handler->display->display_options['fields']['field_achievement_unique']['id'] = 'field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['table'] = 'field_data_field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['field'] = 'field_achievement_unique';
$handler->display->display_options['fields']['field_achievement_unique']['relationship'] = 'relation_base_achievement_node';
$handler->display->display_options['fields']['field_achievement_unique']['label'] = '';
$handler->display->display_options['fields']['field_achievement_unique']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['alter']['text'] = '<i class="icon glyphicon glyphicon-star-empty iconbuffer" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="Unique Achievement"></i>';
$handler->display->display_options['fields']['field_achievement_unique']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_achievement_unique']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_achievement_unique']['type'] = 'list_key';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
  <div class="pull-left">
    <span class="thumbnail">[field_image]</span>
  </div>
  <div class="media-body">
<div>
  <div class="pull-right"><strong>[field_achievement_category]</strong></div>
  <div><h4 class="media-heading">[title]</h4></div>
</div>

<div>
  <div>
    <strong>[field_short_description]</strong>
  </div>
  <div class="well well-sm">
    [field_achievement_points]
    [created]
    <span class="pull-right">[field_achievement_unique]</span>
  </div>
</div>
</div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Relation: Create Date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'relation';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'relation_base_right_achievement';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Profiles';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'views_content',
  3 => 'number',
  4 => 'image',
  5 => 'entityreference',
  6 => 'text',
  7 => 'list',
);
