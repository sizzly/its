<?php
/**
 * @file
 * core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function core_views_default_views() {
  $export = array();

  $view = new view();
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
    'accuracy' => '80',
  );
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
  $export['core_all_node_layout'] = $view;

  $view = new view();
  $view->name = 'core_all_node_timeline';
  $view->description = 'Generates the global timeline for any node ';
  $view->tag = 'Core 3.0';
  $view->base_table = 'message';
  $view->human_name = 'Core: All: Node Timeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Activity';
  $handler->display->display_options['css_class'] = 'timeline-wrapper';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'timestamp_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'timeline-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['id'] = 'field_associated_nodes_stream_target_id';
  $handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['table'] = 'field_data_field_associated_nodes_stream';
  $handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['field'] = 'field_associated_nodes_stream_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_update_reference_target_id']['id'] = 'field_update_reference_target_id';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['table'] = 'field_data_field_update_reference';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['field'] = 'field_update_reference_target_id';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['label'] = 'status_update';
  /* Relationship: Flags: messages_all_salute */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'message';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'messages_all_salute';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['id'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['table'] = 'field_data_field_message_comment_reference';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['field'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['label'] = 'comment';
  /* Field: Message: Stream Node */
  $handler->display->display_options['fields']['field_stream_node_ref']['id'] = 'field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['field'] = 'field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['label'] = '';
  $handler->display->display_options['fields']['field_stream_node_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stream_node_ref']['alter']['text'] = '<small class="text-muted">in reply to [field_stream_node_ref]</small>';
  $handler->display->display_options['fields']['field_stream_node_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stream_node_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_stream_node_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_stream_node_ref']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['text'] = '[field_stream_node_ref]
';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['expression']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '!1 - [nid]';
  /* Field: Comment: Rendered Comment */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_comment';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['empty'] = '[expression]';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Entityform Submission: Rendered Entityform Submission */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'field_update_reference_target_id';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['empty'] = '[rendered_entity]';
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  /* Field: Message: Timeline Icon */
  $handler->display->display_options['fields']['field_timeline_icon']['id'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['table'] = 'field_data_field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['field'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['label'] = '';
  $handler->display->display_options['fields']['field_timeline_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_timeline_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_icon']['empty'] = 'fa-plus-square';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reply_form']['id'] = 'field_reply_form';
  $handler->display->display_options['fields']['field_reply_form']['table'] = 'field_data_field_reply_form';
  $handler->display->display_options['fields']['field_reply_form']['field'] = 'field_reply_form';
  $handler->display->display_options['fields']['field_reply_form']['label'] = '';
  $handler->display->display_options['fields']['field_reply_form']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reply_form']['element_label_colon'] = FALSE;
  /* Field: Message: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = '';
  $handler->display->display_options['fields']['timestamp_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp_1']['alter']['text'] = '<div class="timeline-icon bg-grey">
<i class="fa fa-file-text-o"></i>
</div>
<div class="time">[timestamp_1]</div>';
  $handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['timestamp_1']['element_wrapper_class'] = 'timeline-info';
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'event_time';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['exclude'] = TRUE;
  $handler->display->display_options['fields']['message_render']['alter']['text'] = '<div class="panel panel-default timeline-panel">
  <div class="panel-heading">
     [message_render]
     <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
  </div>
</div>';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '1';
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp_2']['id'] = 'timestamp_2';
  $handler->display->display_options['fields']['timestamp_2']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp_2']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_2']['label'] = '';
  $handler->display->display_options['fields']['timestamp_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['timestamp_2']['alter']['text'] = '<div class="timeline-date">
[timestamp_2]
</div>';
  $handler->display->display_options['fields']['timestamp_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['timestamp_2']['element_wrapper_class'] = 'timeline-date';
  $handler->display->display_options['fields']['timestamp_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['timestamp_2']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['timestamp_2']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp_2']['format_date_sql'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="timeline-info">
            <div class="timeline-icon bg-grey">
                <i class="fa [field_timeline_icon]"></i>
            </div>
            <div class="time">[timestamp_1]</div>
        </div>
        <div class="panel panel-default timeline-panel">
            <div class="panel-heading">
                [message_render]
                <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
            </div>
            <div class="panel-body">
            [rendered_entity_1]
            </div>
        </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_associated_nodes_stream_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['nid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['breadcrumb'] = 'All Activity';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'node/%/timeline';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Timeline';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Home Page */
  $handler = $view->new_display('panel_pane', 'Home Page', 'panel_pane_2');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_update_reference_target_id']['id'] = 'field_update_reference_target_id';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['table'] = 'field_data_field_update_reference';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['field'] = 'field_update_reference_target_id';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['label'] = 'status_update';
  /* Relationship: Flags: messages_all_salute */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'message';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'messages_all_salute';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['id'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['table'] = 'field_data_field_message_comment_reference';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['field'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['label'] = 'comment';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  /* Field: Message: Stream Node */
  $handler->display->display_options['fields']['field_stream_node_ref']['id'] = 'field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['field'] = 'field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['label'] = '';
  $handler->display->display_options['fields']['field_stream_node_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stream_node_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stream_node_ref']['alter']['text'] = '<small class="text-muted">in reply to [field_stream_node_ref]</small>';
  $handler->display->display_options['fields']['field_stream_node_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stream_node_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_stream_node_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Comment: Rendered Comment */
  $handler->display->display_options['fields']['rendered_entity_2']['id'] = 'rendered_entity_2';
  $handler->display->display_options['fields']['rendered_entity_2']['table'] = 'views_entity_comment';
  $handler->display->display_options['fields']['rendered_entity_2']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_2']['relationship'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['fields']['rendered_entity_2']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_2']['empty'] = '[rendered_entity_1]';
  $handler->display->display_options['fields']['rendered_entity_2']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_2']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_2']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity_2']['bypass_access'] = 0;
  /* Field: Entityform Submission: Rendered Entityform Submission */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_update_reference_target_id';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['alter']['text'] = '[rendered_entity]

';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['empty'] = '[rendered_entity_2]';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Message: Timeline Icon */
  $handler->display->display_options['fields']['field_timeline_icon']['id'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['table'] = 'field_data_field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['field'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['label'] = '';
  $handler->display->display_options['fields']['field_timeline_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_timeline_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_icon']['empty'] = 'fa-plus-square';
  /* Field: Message: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Entityform Submission: Write something... */
  $handler->display->display_options['fields']['field_status_body']['id'] = 'field_status_body';
  $handler->display->display_options['fields']['field_status_body']['table'] = 'field_data_field_status_body';
  $handler->display->display_options['fields']['field_status_body']['field'] = 'field_status_body';
  $handler->display->display_options['fields']['field_status_body']['relationship'] = 'field_update_reference_target_id';
  $handler->display->display_options['fields']['field_status_body']['label'] = '';
  $handler->display->display_options['fields']['field_status_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status_body']['alter']['text'] = '<div class="panel-body">
[rendered_entity]
[field_stream_node_ref]
</div>';
  $handler->display->display_options['fields']['field_status_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status_body']['hide_empty'] = TRUE;
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = '';
  $handler->display->display_options['fields']['timestamp_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp_1']['alter']['text'] = '<div class="timeline-icon bg-grey">
<i class="fa fa-file-text-o"></i>
</div>
<div class="time">[timestamp_1]</div>';
  $handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['timestamp_1']['element_wrapper_class'] = 'timeline-info';
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'event_time';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['exclude'] = TRUE;
  $handler->display->display_options['fields']['message_render']['alter']['text'] = '<div class="panel panel-default timeline-panel">
  <div class="panel-heading">
     [message_render]
     <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
  </div>
</div>';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '1';
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp_2']['id'] = 'timestamp_2';
  $handler->display->display_options['fields']['timestamp_2']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp_2']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_2']['label'] = '';
  $handler->display->display_options['fields']['timestamp_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['timestamp_2']['alter']['text'] = '<div class="timeline-date">
[timestamp_2]
</div>';
  $handler->display->display_options['fields']['timestamp_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['timestamp_2']['element_wrapper_class'] = 'timeline-date';
  $handler->display->display_options['fields']['timestamp_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['timestamp_2']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['timestamp_2']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp_2']['format_date_sql'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="timeline-info">
            <div class="timeline-icon bg-grey">
                <i class="fa [field_timeline_icon]"></i>
            </div>
            <div class="time">[timestamp_1]</div>
        </div>
        <div class="panel panel-default timeline-panel">
            <div class="panel-heading">
                [message_render]
                <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
            </div>
            <div class="panel-body">
            [rendered_entity]
            </div>
        </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Home Page';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Term Page */
  $handler = $view->new_display('panel_pane', 'Term Page', 'panel_pane_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['id'] = 'field_associated_nodes_stream_target_id';
  $handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['table'] = 'field_data_field_associated_nodes_stream';
  $handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['field'] = 'field_associated_nodes_stream_target_id';
  $handler->display->display_options['relationships']['field_associated_nodes_stream_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['id'] = 'field_stream_node_ref_target_id';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['relationships']['field_stream_node_ref_target_id']['field'] = 'field_stream_node_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_update_reference_target_id']['id'] = 'field_update_reference_target_id';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['table'] = 'field_data_field_update_reference';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['field'] = 'field_update_reference_target_id';
  $handler->display->display_options['relationships']['field_update_reference_target_id']['label'] = 'status_update';
  /* Relationship: Flags: messages_all_salute */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'message';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'messages_all_salute';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['id'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['table'] = 'field_data_field_message_comment_reference';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['field'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['relationships']['field_message_comment_reference_target_id']['label'] = 'comment';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['relationship'] = 'field_associated_nodes_stream_target_id';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['pane_category']['name'] = 'Term';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Recent Node Activity Block */
  $handler = $view->new_display('block', 'Recent Node Activity Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Timeline';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'node/!1/timeline';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_timeline_icon';
  $handler->display->display_options['style_options']['heading_field'] = '';
  $handler->display->display_options['style_options']['body_field'] = 'message_render';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Message: Stream Node */
  $handler->display->display_options['fields']['field_stream_node_ref']['id'] = 'field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['table'] = 'field_data_field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['field'] = 'field_stream_node_ref';
  $handler->display->display_options['fields']['field_stream_node_ref']['label'] = '';
  $handler->display->display_options['fields']['field_stream_node_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stream_node_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stream_node_ref']['alter']['text'] = '<small class="text-muted">in reply to [field_stream_node_ref]</small>';
  $handler->display->display_options['fields']['field_stream_node_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stream_node_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_stream_node_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'field_associated_nodes_stream_target_id';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['empty'] = '[rendered_entity_1]';
  /* Field: Comment: Rendered Comment */
  $handler->display->display_options['fields']['rendered_entity_2']['id'] = 'rendered_entity_2';
  $handler->display->display_options['fields']['rendered_entity_2']['table'] = 'views_entity_comment';
  $handler->display->display_options['fields']['rendered_entity_2']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_2']['relationship'] = 'field_message_comment_reference_target_id';
  $handler->display->display_options['fields']['rendered_entity_2']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_2']['empty'] = '[rendered_entity_1]';
  $handler->display->display_options['fields']['rendered_entity_2']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_2']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_2']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity_2']['bypass_access'] = 0;
  /* Field: Entityform Submission: Rendered Entityform Submission */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_update_reference_target_id';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['alter']['text'] = '<div class="panel-body">
[rendered_entity]
[field_stream_node_ref]
</div>';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['empty'] = '[rendered_entity_2]';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Message: Timeline Icon */
  $handler->display->display_options['fields']['field_timeline_icon']['id'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['table'] = 'field_data_field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['field'] = 'field_timeline_icon';
  $handler->display->display_options['fields']['field_timeline_icon']['label'] = '';
  $handler->display->display_options['fields']['field_timeline_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_timeline_icon']['alter']['text'] = '<i class="fa [field_timeline_icon]"></i>

';
  $handler->display->display_options['fields']['field_timeline_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_icon']['empty'] = '<i class="fa fa-plus-square"></i>';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reply_form']['id'] = 'field_reply_form';
  $handler->display->display_options['fields']['field_reply_form']['table'] = 'field_data_field_reply_form';
  $handler->display->display_options['fields']['field_reply_form']['field'] = 'field_reply_form';
  $handler->display->display_options['fields']['field_reply_form']['label'] = '';
  $handler->display->display_options['fields']['field_reply_form']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reply_form']['element_label_colon'] = FALSE;
  /* Field: Message: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  $handler->display->display_options['fields']['mid']['label'] = '';
  $handler->display->display_options['fields']['mid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mid']['separator'] = '';
  /* Field: Entityform Submission: Write something... */
  $handler->display->display_options['fields']['field_status_body']['id'] = 'field_status_body';
  $handler->display->display_options['fields']['field_status_body']['table'] = 'field_data_field_status_body';
  $handler->display->display_options['fields']['field_status_body']['field'] = 'field_status_body';
  $handler->display->display_options['fields']['field_status_body']['relationship'] = 'field_update_reference_target_id';
  $handler->display->display_options['fields']['field_status_body']['label'] = '';
  $handler->display->display_options['fields']['field_status_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status_body']['alter']['text'] = '<div class="panel-body">
[rendered_entity]
[field_stream_node_ref]
</div>';
  $handler->display->display_options['fields']['field_status_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status_body']['hide_empty'] = TRUE;
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = '';
  $handler->display->display_options['fields']['timestamp_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp_1']['alter']['text'] = '<div class="timeline-icon bg-grey">
<i class="fa fa-file-text-o"></i>
</div>
<div class="time">[timestamp_1]</div>';
  $handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['timestamp_1']['element_wrapper_class'] = 'timeline-info';
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'event_time';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['exclude'] = TRUE;
  $handler->display->display_options['fields']['message_render']['alter']['text'] = '<div class="panel panel-default timeline-panel">
  <div class="panel-heading">
     [message_render]
     <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
  </div>
</div>';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '1';
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp_2']['id'] = 'timestamp_2';
  $handler->display->display_options['fields']['timestamp_2']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp_2']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_2']['label'] = '';
  $handler->display->display_options['fields']['timestamp_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['timestamp_2']['alter']['text'] = '<div class="timeline-date">
[timestamp_2]
</div>';
  $handler->display->display_options['fields']['timestamp_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['timestamp_2']['element_wrapper_class'] = 'timeline-date';
  $handler->display->display_options['fields']['timestamp_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['timestamp_2']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['timestamp_2']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['timestamp_2']['format_date_sql'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="timeline-info">
            <div class="timeline-icon bg-grey">
                <i class="fa [field_timeline_icon]"></i>
            </div>
            <div class="time">[timestamp_1]</div>
        </div>
        <div class="panel panel-default timeline-panel">
            <div class="panel-heading">
                [message_render]
                <small class="pull-right text-muted"><i class="fa fa-clock-o"></i> [timestamp]</small>
            </div>
            [rendered_entity]

            <div class="panel-footer">
            <p><a class="btn btn-default btn-xs" role="button" data-toggle="collapse" href="#collapseForm-[mid]" aria-expanded="false" aria-controls="collapseForm-[mid]"><i class="fa fa-comment"></i> Reply</a> <i class="fa fa-flag"></i> [ops]
</p>
                [field_reply_form]
            </div>
        </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'timestamp_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'timeline-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'TestMessages';
  $export['core_all_node_timeline'] = $view;

  $view = new view();
  $view->name = 'core_node_trending_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Core: Node: Trending Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'large_button',
    'image_link' => 'content',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '[field_campaign_badge]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large_button',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
  /* Sort criterion: Content statistics: Views this week */
  $handler->display->display_options['sorts']['weekcount']['id'] = 'weekcount';
  $handler->display->display_options['sorts']['weekcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['weekcount']['field'] = 'weekcount';
  $handler->display->display_options['sorts']['weekcount']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Cool Stuff */
  $handler = $view->new_display('panel_pane', 'Cool Stuff', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More Cool Stuff';
  $handler->display->display_options['pane_category']['name'] = 'Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: No Node Cool Stuff */
  $handler = $view->new_display('panel_pane', 'No Node Cool Stuff', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Galleries Cool Stuff */
  $handler = $view->new_display('panel_pane', 'Galleries Cool Stuff', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trending Galleries';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'gallery' => 'gallery',
  );
  $handler->display->display_options['pane_category']['name'] = 'Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Blogs Cool Stuff */
  $handler = $view->new_display('panel_pane', 'Blogs Cool Stuff', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trending Blog Posts';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'blog' => 'blog',
  );
  $handler->display->display_options['pane_category']['name'] = 'Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Discussions Cool Stuff */
  $handler = $view->new_display('panel_pane', 'Discussions Cool Stuff', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trending Discussions';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'forum' => 'forum',
  );
  $handler->display->display_options['pane_category']['name'] = 'Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Modeling Projects Cool Stuff */
  $handler = $view->new_display('panel_pane', 'Modeling Projects Cool Stuff', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trending Modeling Projects';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['pane_category']['name'] = 'Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Game Stores Cool Stuff */
  $handler = $view->new_display('panel_pane', 'Game Stores Cool Stuff', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trending Game Stores';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: battlefield_closed counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'battlefield_closed';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'location' => 'location',
  );
  /* Filter criterion: Flags: Flag counter */
  $handler->display->display_options['filters']['count']['id'] = 'count';
  $handler->display->display_options['filters']['count']['table'] = 'flag_counts';
  $handler->display->display_options['filters']['count']['field'] = 'count';
  $handler->display->display_options['filters']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['filters']['count']['operator'] = 'empty';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '136',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'location_type';
  $handler->display->display_options['pane_category']['name'] = 'Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['core_node_trending_content'] = $view;

  $view = new view();
  $view->name = 'core_taxonomy_content_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Core: Taxonomy: Content Count';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="shortcut-icon">
     <i class="fa fa-envelope-o"></i>
     <span class="shortcut-alert">[nid]</span>
</span>
<span class="text">Content Type</span>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = '#';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['value'] = '';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Blog */
  $handler = $view->new_display('panel_pane', 'Blog', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="shortcut-icon">
     <i class="fa fa-file-text"></i>
     <span class="shortcut-alert">[nid]</span>
</span>
<span class="text">Blog Posts</span>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'taxonomy/term/!1/blogs';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
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
    'blog' => 'blog',
  );

  /* Display: Gallery */
  $handler = $view->new_display('panel_pane', 'Gallery', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="shortcut-icon">
     <i class="fa fa-picture-o"></i>
     <span class="shortcut-alert">[nid]</span>
</span>
<span class="text">Galleries</span>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'taxonomy/term/!1/galleries';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
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
    'gallery' => 'gallery',
  );

  /* Display: Battles */
  $handler = $view->new_display('panel_pane', 'Battles', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="shortcut-icon">
     <i class="fa fa-fire"></i>
     <span class="shortcut-alert">[nid]</span>
</span>
<span class="text">Battles</span>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'taxonomy/term/!1/battles';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
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

  /* Display: New Content */
  $handler = $view->new_display('panel_pane', 'New Content', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="shortcut-icon">
     <i class="fa fa-exclamation-circle"></i>
     <span class="shortcut-alert">[nid]</span>
</span>
<span class="text">New</span>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'taxonomy/term/!1/new-content';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has new content */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'history';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';

  /* Display: New Content */
  $handler = $view->new_display('page', 'New Content', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Content';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['value'] = '';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = 'New Content for %1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb'] = 'New Content';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'game_result_system_' => 'game_result_system_',
    'remote_blog' => 'remote_blog',
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%/new-content';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'New Content';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Blog Page */
  $handler = $view->new_display('page', 'Blog Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Content';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['value'] = '';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = 'Blogs for %1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb'] = 'Blogs';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
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
    'blog' => 'blog',
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%/blogs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Blogs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Gallery Page */
  $handler = $view->new_display('page', 'Gallery Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Content';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['value'] = '';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = 'Galleries for %1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb'] = 'Galleries';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
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
    'gallery' => 'gallery',
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%/galleries';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Galleries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Battle Page */
  $handler = $view->new_display('page', 'Battle Page', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Content';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['value'] = '';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = 'Battles for %1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb'] = 'Battles';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
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
  $handler->display->display_options['path'] = 'taxonomy/term/%/battles';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Battles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;
  $export['core_taxonomy_content_count'] = $view;

  return $export;
}
