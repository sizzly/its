<?php
/**
 * @file
 * views_view.events_all_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'events_all_page_layout';
$view->description = 'Page Elements for the Event pages.';
$view->tag = 'Events 2.0';
$view->base_table = 'node';
$view->human_name = 'Events: All: Page Layout';
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
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'event' => 'event',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);

/* Display: Image and Date */
$handler = $view->new_display('panel_pane', 'Image and Date', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['pane_category']['name'] = 'Events';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Meta */
$handler = $view->new_display('panel_pane', 'Meta', 'panel_pane_2');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Supported Games */
$handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['label'] = '';
$handler->display->display_options['fields']['field_supported_games']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_supported_games']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_supported_games']['empty'] = 'Other';
$handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[field_supported_games]</h2>
  <h5>Game System</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-book fa-3" aria-hidden="true"></span>
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['label'] = '';
$handler->display->display_options['fields']['field_event_type']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_type']['alter']['text'] = '<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[field_event_type]</h2>
  <h5>Category</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-tag" aria-hidden="true"></span>
  </div>
</div>';
$handler->display->display_options['fields']['field_event_type']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_event_type']['alter']['path'] = 'taxonomy/term/[field_event_type-tid]';
$handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['label'] = '';
$handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="panel-stat3 bg-success">
  <h2 class="m-top-none">[field_location]</h2>
  <h5>Battlefield</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-globe fa-3" aria-hidden="true"></span>
  </div>
</div>';
$handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_location']['alter']['path'] = 'node/[field_location-nid]';
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[field_event_link]</h2>
  <h5>War Zone</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-screenshot fa-3" aria-hidden="true"></span>
  </div>
</div>';
$handler->display->display_options['fields']['field_event_link']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['path'] = 'node/[field_event_link-target_id]';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['pane_category']['name'] = 'Events';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Share This and Tools */
$handler = $view->new_display('panel_pane', 'Share This and Tools', 'panel_pane_3');
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
$handler->display->display_options['fields']['sharethis']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['sharethis']['element_wrapper_class'] = 'pull-right';
$handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
/* Field: Content: Add comment link */
$handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['table'] = 'node';
$handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
$handler->display->display_options['fields']['comments_link']['label'] = '';
$handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['comments_link']['empty'] = '<ul class="links list-inline"><li class="comment-add first last">Comments Locked</li>
</ul>';
$handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Events';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: About the Organizer */
$handler = $view->new_display('panel_pane', 'About the Organizer', 'panel_pane_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'About the Organizer';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group clearfix';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name_1' => 'name_1',
  'ops' => 'ops',
  'privatemsg_link' => 'privatemsg_link',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
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
/* Field: User Badges: Badge Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'user_badges_badges';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
/* Field: Privatemsg: Send Privatemsg link */
$handler->display->display_options['fields']['privatemsg_link']['id'] = 'privatemsg_link';
$handler->display->display_options['fields']['privatemsg_link']['table'] = 'users';
$handler->display->display_options['fields']['privatemsg_link']['field'] = 'privatemsg_link';
$handler->display->display_options['fields']['privatemsg_link']['relationship'] = 'uid';
$handler->display->display_options['fields']['privatemsg_link']['label'] = '';
$handler->display->display_options['fields']['privatemsg_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['privatemsg_link']['text'] = 'Message';
$handler->display->display_options['fields']['privatemsg_link']['return'] = 1;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
/* Filter criterion: User Badges: Badge Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'user_badges_badges';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['value'] = 'Level';
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
$handler->display->display_options['pane_category']['name'] = 'Events';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Shortcuts */
$handler = $view->new_display('panel_pane', 'Shortcuts', 'panel_pane_5');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Flags: glory counter */
$handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
$handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
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
$handler->display->display_options['fields']['comment_count']['empty'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
    </span>
    <span class="text">Comments</span>
  </a>';
$handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
/* Field: Flags: Flag counter */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'flag_counts';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
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
/* Field: Field: Event */
$handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
$handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
$handler->display->display_options['fields']['field_event_link']['label'] = '';
$handler->display->display_options['fields']['field_event_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['text'] = '    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-screenshot" aria-hidden="true"></span>
    </span>
    <span class="text">War Zone</span>';
$handler->display->display_options['fields']['field_event_link']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['alter']['path'] = 'node/[field_event_link-target_id]';
$handler->display->display_options['fields']['field_event_link']['alter']['link_class'] = 'shortcut-link';
$handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_link']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_event_link']['settings'] = array(
  'link' => 0,
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
[comment_count]
[count]
[field_event_link]
</div>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Events';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Details */
$handler = $view->new_display('panel_pane', 'Details', 'panel_pane_6');
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
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
<div class="lead">[field_event_date]</div>
</div>';
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = 'strong';
$handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '2',
  'multiple_from' => 'now',
  'multiple_to' => '',
  'show_repeat_rule' => 'show',
);
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_event_date']['separator'] = '<br>';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_type'] = 'span';
$handler->display->display_options['fields']['title']['element_class'] = 'lead';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_address']['id'] = 'field_address';
$handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address']['field'] = 'field_address';
$handler->display->display_options['fields']['field_address']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['field_address']['label'] = '';
$handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
/* Field: Content: Phone */
$handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
$handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
$handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
$handler->display->display_options['fields']['field_phone']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['field_phone']['label'] = '';
$handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_phone']['alter']['text'] = '<span class="glyphicon glyphicon-earphone iconbuffer" aria-hidden="true"></span>[field_phone]';
$handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website']['id'] = 'field_website';
$handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website']['relationship'] = 'field_location_nid';
$handler->display->display_options['fields']['field_website']['label'] = '';
$handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_website']['alter']['text'] = '<span class="glyphicon glyphicon-link iconbuffer" aria-hidden="true"></span>[field_website]';
$handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
$handler->display->display_options['pane_category']['name'] = 'Events';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
  3 => 'image',
  4 => 'taxonomy',
  5 => 'node_reference',
  6 => 'entityreference',
  7 => 'date',
  8 => 'text',
  9 => 'link',
);
