<?php
/**
 * @file
 * views_view.decorations_renown_player_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'decorations_renown_player_lists';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Decorations: Renown: Player Lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Renown Leaderboard';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
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
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: Userpoints: Current renown in category */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['label'] = '';
$handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
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
    'text' => 'text',
  ),
  'trim_preserve_tags' => '<a>',
);
/* Sort criterion: Userpoints: Current renown in category */
$handler->display->display_options['sorts']['points']['id'] = 'points';
$handler->display->display_options['sorts']['points']['table'] = 'userpoints';
$handler->display->display_options['sorts']['points']['field'] = 'points';
$handler->display->display_options['sorts']['points']['order'] = 'DESC';
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
  1395 => '1395',
  894 => '894',
  1261 => '1261',
);

/* Display: Top Ten Players */
$handler = $view->new_display('panel_pane', 'Top Ten Players', 'panel_pane_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pane_category']['name'] = 'Decorations';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'text',
  3 => 'views_content',
);
