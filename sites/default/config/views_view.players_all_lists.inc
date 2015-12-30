<?php
/**
 * @file
 * views_view.players_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'players_all_lists';
$view->description = 'Various lists of players';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Players: All: Lists';
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
$handler->display->display_options['style_options']['image_field'] = 'picture';
$handler->display->display_options['style_options']['heading_field'] = 'name';
$handler->display->display_options['style_options']['body_field'] = 'field_bio';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'main' => 'main',
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['image_style'] = 'button';
/* Field: Profile: Bio */
$handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
$handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_bio']['label'] = '';
$handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_bio']['type'] = 'smart_trim_format';
$handler->display->display_options['fields']['field_bio']['settings'] = array(
  'trim_link' => '0',
  'trim_length' => '125',
  'trim_type' => 'chars',
  'trim_suffix' => '...',
  'more_link' => '0',
  'more_text' => 'Read more',
  'summary_handler' => 'full',
  'trim_options' => array(
    'text' => 0,
  ),
  'trim_preserve_tags' => '<a>',
);
/* Sort criterion: User: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'users';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);

/* Display: OOB Landing Page */
$handler = $view->new_display('panel_pane', 'OOB Landing Page', 'panel_pane_1');
$handler->display->display_options['display_description'] = 'Generates the stat block user count';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = '<h2 class="m2-top-none">[uid]</h2>
<h5>Players</h5>
<div class="stat-icon">
<i class="fa fa-user fa-3x"></i>
</div>';
$handler->display->display_options['fields']['uid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['path'] = 'order-of-battle/players';
$handler->display->display_options['fields']['uid']['element_type'] = 'div';
$handler->display->display_options['fields']['uid']['element_class'] = 'panel-stat3 bg-primary';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['uid']['element_wrapper_class'] = 'col-sm-6 col-md-3';
$handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;

/* Display: Trending Players */
$handler = $view->new_display('panel_pane', 'Trending Players', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Trending Players';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Userpoints Transactions: Points */
$handler->display->display_options['sorts']['points']['id'] = 'points';
$handler->display->display_options['sorts']['points']['table'] = 'userpoints_txn';
$handler->display->display_options['sorts']['points']['field'] = 'points';
$handler->display->display_options['sorts']['points']['group_type'] = 'sum';
$handler->display->display_options['sorts']['points']['order'] = 'DESC';
$handler->display->display_options['pane_category']['name'] = 'Players';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Player List */
$handler = $view->new_display('panel_pane', 'Player List', 'panel_pane_3');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
/* Filter criterion: User: Last login */
$handler->display->display_options['filters']['login']['id'] = 'login';
$handler->display->display_options['filters']['login']['table'] = 'users';
$handler->display->display_options['filters']['login']['field'] = 'login';
$handler->display->display_options['filters']['login']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Players';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['inherit_panels_path'] = '1';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'text',
  3 => 'views_content',
);
