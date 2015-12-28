<?php
/**
 * @file
 * views_view.core_all_node_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'core_all_node_layout';
$view->description = 'Generates Page Elements that are global across nodes.';
$view->tag = 'Core 3.0';
$view->base_table = 'node';
$view->human_name = 'Core: All: Node Layout';
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

/* Display: Image */
$handler = $view->new_display('panel_pane', 'Image', 'panel_pane_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'thumbnail';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_class'] = 'text-center';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['pane_category']['name'] = 'Node';
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
/* Field: Content: Add comment link */
$handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['table'] = 'node';
$handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['label'] = '';
$handler->display->display_options['fields']['comments_link']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['comments_link']['alter']['preserve_tags'] = '<a>';
$handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
$handler->display->display_options['pane_category']['name'] = 'Node';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Body Panel */
$handler = $view->new_display('panel_pane', 'Body Panel', 'panel_pane_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Node';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Author Info */
$handler = $view->new_display('panel_pane', 'Author Info', 'panel_pane_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Player Info';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'panel';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Flags: follow */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'uid';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow';
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'main' => 'main',
);
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['exclude'] = TRUE;
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'pull-left';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '<div class="panel-body">
<div class="media">
<div class="pull-left">[picture]</div>
<div class="media-heading">
[name]
</div>
</div>';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: User Badges: Badge Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'user_badges_badges';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
/* Field: Profile: Bio */
$handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
$handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_bio']['label'] = '';
$handler->display->display_options['fields']['field_bio']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_bio']['type'] = 'smart_trim_format';
$handler->display->display_options['fields']['field_bio']['settings'] = array(
  'trim_link' => '0',
  'trim_length' => '125',
  'trim_type' => 'chars',
  'trim_suffix' => '...',
  'more_link' => '0',
  'more_text' => ' >>',
  'summary_handler' => 'full',
  'trim_options' => array(
    'text' => 'text',
  ),
  'trim_preserve_tags' => '<a>',
);
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['exclude'] = TRUE;
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-body">
<div class="media">
<div class="pull-left">
[picture]
</div>
<div class="media-heading">
  [name]<br>
  <small class="text-muted">[name_1]</small>
</div>
<div class="media-body">
[field_bio]<br>
<small class="text-muted">[ops]</small>
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
/* Filter criterion: User Badges: Badge Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'user_badges_badges';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['value'] = 'Level';
$handler->display->display_options['pane_category']['name'] = 'Node';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'image',
  4 => 'text',
);
