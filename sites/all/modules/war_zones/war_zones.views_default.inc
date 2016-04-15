<?php
/**
 * @file
 * war_zones.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function war_zones_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dashboard_managed_leagues';
  $view->description = 'Generates a list of War Zones the player has made';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: Dashboard Managed War Zones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage War Zones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    9 => '9',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_campaign_badge' => 'field_campaign_badge',
    'title' => 'title',
    'field_status' => 'field_status',
    'field_league_type' => 'field_league_type',
    'field_warzone_game' => 'field_warzone_game',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_campaign_badge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_league_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warzone_game' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Used slots */
  $handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['label'] = 'Players';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Manage';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Manage';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/management';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'war_zone_league' => 'war_zone_league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );

  /* Display: Manage Leagues */
  $handler = $view->new_display('panel_pane', 'Manage Leagues', 'panel_pane_1');
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'war_zone_league' => 'war_zone_league',
    'league' => 'league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    0 => '0',
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Dashboard';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'dashboard/manage-war-zones';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage War Zones';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['dashboard_managed_leagues'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_achievements';
  $view->description = 'Displays the achievements awarded at the War Zone';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'relation';
  $view->human_name = 'War Zone: All: Achievements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Achievements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Relation: Relation: Achievement (relation → node) */
  $handler->display->display_options['relationships']['relation_base_achievement_node']['id'] = 'relation_base_achievement_node';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['field'] = 'relation_base_achievement_node';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_achievement_node']['entity_deduplication_right'] = 1;
  /* Relationship: Relation: Relation: Achievement (relation → user) */
  $handler->display->display_options['relationships']['relation_base_achievement_user']['id'] = 'relation_base_achievement_user';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['field'] = 'relation_base_achievement_user';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_achievement_user']['entity_deduplication_right'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'user_avatar',
    'image_link' => '',
  );
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'relation_base_achievement_user';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  /* Field: Field: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
<span class="pull-left iconbuffer">[picture]</span>
<div class="media-body">
<h4 class="media-heading">[name]</h4>
<strong>[title]</strong><br>
[field_short_description]
<div class="seperator"></div>
</div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['relationship'] = 'relation_base_achievement_node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_link_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_event_link_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['validate_options']['types'] = array(
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'achievement' => 'achievement',
  );

  /* Display: Achievement Panel */
  $handler = $view->new_display('panel_pane', 'Achievement Panel', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_all_achievements'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_battles';
  $view->description = 'Generates a list of battles fought during a war zone. Needs a page.';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: Battles';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'war_zone_tournament' => 'war_zone_tournament',
  );
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
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'game_results' => 'game_results',
  );

  /* Display: Battle List Page Panel */
  $handler = $view->new_display('panel_pane', 'Battle List Page Panel', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['war_zone_all_battles'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_content_counts';
  $view->description = 'Generates the counts and pages for node content';
  $view->tag = '4.3';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: Content Counts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Updates */
  $handler = $view->new_display('panel_pane', 'Updates', 'panel_pane_1');
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
<span class="text">Updates</span>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/!1/warzone-updates';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['preserve_tags'] = '<span> <i> <a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '<span class="shortcut-icon">
     <i class="fa fa-file-text"></i>
</span>
<span class="text">Updates</span>';
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
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
    'article' => 'article',
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
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/!1/warzone-galleries';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['preserve_tags'] = '<span> <i> <a>';
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

  /* Display: Battle Stats */
  $handler = $view->new_display('panel_pane', 'Battle Stats', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="shortcut-icon">
     <i class="fa fa-line-chart"></i>
</span>
<span class="text">Battle Stats</span>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/!1/stats';
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
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/!1/warzone-new-content';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'game_result_system_' => 'game_result_system_',
  );

  /* Display: New Content Page */
  $handler = $view->new_display('page', 'New Content Page', 'page_1');
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
  /* Filter criterion: Content: Has new content */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'history';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['path'] = 'node/%/warzone-new-content';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'New Content';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Updates Page */
  $handler = $view->new_display('page', 'Updates Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Updates';
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
    'article' => 'article',
  );
  $handler->display->display_options['path'] = 'node/%/warzone-updates';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Updates';
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
  $handler->display->display_options['path'] = 'node/%/warzone-galleries';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Galleries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Battles */
  $handler = $view->new_display('panel_pane', 'Battles', 'panel_pane_7');
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
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/!1/battle-list';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['nid']['alter']['preserve_tags'] = '<span> <i> <a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
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

  /* Display: Players */
  $handler = $view->new_display('panel_pane', 'Players', 'panel_pane_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node registration: Registrations */
  $handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['node_registration_rel']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Node registration: Registration ID) */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['fields']['registration_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['text'] = '<span class="shortcut-icon">
     <i class="fa fa-users"></i>
     <span class="shortcut-alert">[registration_id]</span>
</span>
<span class="text">Players</span>';
  $handler->display->display_options['fields']['registration_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['path'] = 'node/!1/player-list';
  $handler->display->display_options['fields']['registration_id']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['separator'] = '';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['relationship'] = 'node_registration_rel';
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';

  /* Display: Latest Update Block */
  $handler = $view->new_display('block', 'Latest Update Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Updates';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = '';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'article' => 'article',
  );
  $export['war_zone_all_content_counts'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_in_progress_score';
  $view->description = 'Generates a table of ranks. Does NOT use registrations so no good for tournaments.';
  $view->tag = 'War Zones 4.1, Deprecate';
  $view->base_table = 'entityform';
  $view->human_name = 'War Zone: All: In Progress Score';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current Rankings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['label'] = 'Player Registration';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['required'] = TRUE;
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'field_registration_sc_target_id';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['label'] = 'W';
  $handler->display->display_options['fields']['field_victory']['empty'] = '0';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['label'] = 'L';
  $handler->display->display_options['fields']['field_defeat']['empty'] = '0';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['label'] = 'D';
  /* Field: SUM(Entityform Submission: Additional Points) */
  $handler->display->display_options['fields']['field_additional_points_sc']['id'] = 'field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['table'] = 'field_data_field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['field'] = 'field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_additional_points_sc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_additional_points_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Entityform Submission: Battle Points) */
  $handler->display->display_options['fields']['field_battle_points_sc']['id'] = 'field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['table'] = 'field_data_field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['field'] = 'field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_battle_points_sc']['exclude'] = TRUE;
  /* Field: SUM(Entityform Submission: Comp) */
  $handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_comp_sc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_comp_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Entityform Submission: Painting) */
  $handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_painting_sc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_painting_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Entityform Submission: Sportsmanship) */
  $handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Entityform Submission: Aggregate Score) */
  $handler->display->display_options['fields']['field_aggregate_score_sc']['id'] = 'field_aggregate_score_sc';
  $handler->display->display_options['fields']['field_aggregate_score_sc']['table'] = 'field_data_field_aggregate_score_sc';
  $handler->display->display_options['fields']['field_aggregate_score_sc']['field'] = 'field_aggregate_score_sc';
  $handler->display->display_options['fields']['field_aggregate_score_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_aggregate_score_sc']['label'] = 'Total Score';
  $handler->display->display_options['fields']['field_aggregate_score_sc']['empty'] = '0';
  /* Sort criterion: SUM(Entityform Submission: Aggregate Score (field_aggregate_score_sc)) */
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['id'] = 'field_aggregate_score_sc_value';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['table'] = 'field_data_field_aggregate_score_sc';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['field'] = 'field_aggregate_score_sc_value';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['order'] = 'DESC';
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );

  /* Display: Simple Ranks */
  $handler = $view->new_display('panel_pane', 'Simple Ranks', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_all_in_progress_score'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_lists';
  $view->description = 'Generates various lists of war zones.';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'War Zones';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
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
    'war_zone_league' => 'war_zone_league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_tournament' => 'war_zone_tournament',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'war-zone/list';

  /* Display: Special Events */
  $handler = $view->new_display('page', 'Special Events', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Special Events';
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
    'special_event' => 'special_event',
  );
  $handler->display->display_options['path'] = 'warzone/special-events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Special Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Upcoming War Zones */
  $handler = $view->new_display('panel_pane', 'Upcoming War Zones', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest War Zones';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_all_lists'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_management';
  $view->description = 'Generates the tool bar for managing a war zone.';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: Management';
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

  /* Display: Action Panel */
  $handler = $view->new_display('panel_pane', 'Action Panel', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: War Zone: All: Open Registration */
  $handler->display->display_options['fields']['war_zone_all_open_registration']['id'] = 'war_zone_all_open_registration';
  $handler->display->display_options['fields']['war_zone_all_open_registration']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['war_zone_all_open_registration']['field'] = 'war_zone_all_open_registration';
  $handler->display->display_options['fields']['war_zone_all_open_registration']['label'] = '';
  $handler->display->display_options['fields']['war_zone_all_open_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_open_registration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_open_registration']['alter']['text'] = '<li role="presentation">[war_zone_all_open_registration]</li>';
  $handler->display->display_options['fields']['war_zone_all_open_registration']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_open_registration']['alter']['preserve_tags'] = '<a> <li>';
  $handler->display->display_options['fields']['war_zone_all_open_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['war_zone_all_open_registration']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['war_zone_all_open_registration']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_open_registration']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: War Zone: All: Start */
  $handler->display->display_options['fields']['wz_start']['id'] = 'wz_start';
  $handler->display->display_options['fields']['wz_start']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['wz_start']['field'] = 'wz_start';
  $handler->display->display_options['fields']['wz_start']['label'] = '';
  $handler->display->display_options['fields']['wz_start']['exclude'] = TRUE;
  $handler->display->display_options['fields']['wz_start']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['wz_start']['alter']['text'] = '<li role="presentation">[wz_start]</li>';
  $handler->display->display_options['fields']['wz_start']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['wz_start']['alter']['preserve_tags'] = '<a> <li>';
  $handler->display->display_options['fields']['wz_start']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['wz_start']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['wz_start']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: War Zone: Tournament: Next Round */
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['id'] = 'war_zone_tournament_next_round';
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['field'] = 'war_zone_tournament_next_round';
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['label'] = '';
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['exclude'] = TRUE;
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['alter']['text'] = '<li role="presentation">[war_zone_tournament_next_round]</li>';
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['alter']['preserve_tags'] = '<a> <li>';
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['war_zone_tournament_next_round']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: War Zone: League: Next Round */
  $handler->display->display_options['fields']['war_zone_league_next_round']['id'] = 'war_zone_league_next_round';
  $handler->display->display_options['fields']['war_zone_league_next_round']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['war_zone_league_next_round']['field'] = 'war_zone_league_next_round';
  $handler->display->display_options['fields']['war_zone_league_next_round']['label'] = '';
  $handler->display->display_options['fields']['war_zone_league_next_round']['exclude'] = TRUE;
  $handler->display->display_options['fields']['war_zone_league_next_round']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['war_zone_league_next_round']['alter']['text'] = '<li role="presentation">[war_zone_league_next_round]</li>';
  $handler->display->display_options['fields']['war_zone_league_next_round']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['war_zone_league_next_round']['alter']['preserve_tags'] = '<a> <li>';
  $handler->display->display_options['fields']['war_zone_league_next_round']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['war_zone_league_next_round']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: War Zone: All: Complete */
  $handler->display->display_options['fields']['wz_complete']['id'] = 'wz_complete';
  $handler->display->display_options['fields']['wz_complete']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['wz_complete']['field'] = 'wz_complete';
  $handler->display->display_options['fields']['wz_complete']['label'] = '';
  $handler->display->display_options['fields']['wz_complete']['exclude'] = TRUE;
  $handler->display->display_options['fields']['wz_complete']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['wz_complete']['alter']['text'] = '<li role="presentation">[wz_complete]</li>';
  $handler->display->display_options['fields']['wz_complete']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['wz_complete']['alter']['preserve_tags'] = '<a> <li>';
  $handler->display->display_options['fields']['wz_complete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['wz_complete']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['wz_complete']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: War Zone: All: Generate Painting Scorecards */
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['id'] = 'war_zone_all_generate_painting_s';
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['field'] = 'war_zone_all_generate_painting_s';
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['label'] = '';
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['exclude'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['alter']['text'] = '<li role="presentation">[war_zone_all_generate_painting_s]</li>';
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['alter']['preserve_tags'] = '<a> <li>';
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['war_zone_all_generate_painting_s']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: War Zone: All: Generate Comp Scorecards */
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['id'] = 'war_zone_all_generate_comp';
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['field'] = 'war_zone_all_generate_comp';
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['label'] = '';
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['alter']['text'] = '<li role="presentation">[war_zone_all_generate_comp]</li>';
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['alter']['preserve_tags'] = '<a> <li>';
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['war_zone_all_generate_comp']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="nav nav-pills">
[war_zone_all_open_registration]
[wz_start]
[war_zone_tournament_next_round]
[war_zone_league_next_round]
[war_zone_all_generate_painting_s]
[war_zone_all_generate_comp]
[wz_complete]
</ul>
<div class="seperator"></div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_all_management'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_messaging';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: All: Messaging';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['email']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['email']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['email']['link_to_node_registration_email'] = 0;
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Rules */
  $handler = $view->new_display('views_rules', 'Rules', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'E-mail',
      'name' => 'email',
    ),
  );
  $export['war_zone_all_messaging'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_news';
  $view->description = 'Generates the Article views for a war zone.';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Updates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="panel-body">
<h4>No Updates Available</h4>
<p>There have been no updates for this War Zone.</p>
</div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_type'] = 'span';
  $handler->display->display_options['fields']['timestamp']['element_class'] = 'label label-info';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
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
    'article' => 'article',
    'gallery' => 'gallery',
  );

  /* Display: Front Page List */
  $handler = $view->new_display('panel_pane', 'Front Page List', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['link_url'] = 'node/!1/news-updates';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page View */
  $handler = $view->new_display('panel_pane', 'Page View', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['link_url'] = 'node/!1/news-updates';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['war_zone_all_news'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_page_layout';
  $view->description = 'General War Zone page layout elements.';
  $view->tag = 'War Zone, 4.3';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: Page Layout';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'lightbox2__lightbox__user_avatar__original';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Available slots */
  $handler->display->display_options['fields']['registration_available_slots']['id'] = 'registration_available_slots';
  $handler->display->display_options['fields']['registration_available_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_available_slots']['field'] = 'registration_available_slots';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Entry Fee */
  $handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  /* Field: Content: Used slots */
  $handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
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
    'narrative_campaign' => 'narrative_campaign',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'war_zone_tournament' => 'war_zone_tournament',
  );

  /* Display: Page Header */
  $handler = $view->new_display('panel_pane', 'Page Header', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['type'] = 'lightbox2__lightbox__large__original';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="thumbnail">[field_campaign_badge]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Event Details */
  $handler = $view->new_display('panel_pane', 'Event Details', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Details';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel-heading">
<h3 class="panel-title">Event Details</h3>
</div>
<div class="panel-body">
[body]
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Map */
  $handler = $view->new_display('panel_pane', 'Map', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'panel panel-default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geolocation']['type'] = 'geofield_openlayers';
  $handler->display->display_options['fields']['field_geolocation']['settings'] = array(
    'map_preset' => 'geofield_formatter_map',
    'data' => 'full',
  );
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="panel-footer">[field_location]</div>';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Player Count */
  $handler = $view->new_display('panel_pane', 'Player Count', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node registration: Registrations */
  $handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['fields']['registration_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['empty'] = '0';
  $handler->display->display_options['fields']['registration_id']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/!1/player-list">
        <div class="panel panel-overview">
            <div class="overview-icon bg-info">
                <i class="glyphicon glyphicon-user" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[registration_id]</h2>
                <div class="text-muted">Players</div>
            </div>
        </div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Recent Actions */
  $handler = $view->new_display('panel_pane', 'Recent Actions', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Actions';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="panel-body">
<div class="lead">No Recent Actions</div>
<p>This War Zone is still in <strong>Set Up</strong> mode.  No actions are generated until you open the War Zone for registration.</p>
</div>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['id'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['field'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['relationship'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'today time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: State */
  $handler = $view->new_display('panel_pane', 'State', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '        <div class="panel panel-overview">
            <div class="overview-icon bg-success">
                <i class="glyphicon glyphicon-time" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[field_status]</h2>
                <div class="text-muted">Status</div>
            </div>
        </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Meta */
  $handler = $view->new_display('panel_pane', 'Meta', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
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
  /* Field: Content: League Rule Set */
  $handler->display->display_options['fields']['field_league_rule_set']['id'] = 'field_league_rule_set';
  $handler->display->display_options['fields']['field_league_rule_set']['table'] = 'field_data_field_league_rule_set';
  $handler->display->display_options['fields']['field_league_rule_set']['field'] = 'field_league_rule_set';
  $handler->display->display_options['fields']['field_league_rule_set']['label'] = '';
  $handler->display->display_options['fields']['field_league_rule_set']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_league_rule_set']['element_label_colon'] = FALSE;
  /* Field: Content: Available slots */
  $handler->display->display_options['fields']['registration_available_slots']['id'] = 'registration_available_slots';
  $handler->display->display_options['fields']['registration_available_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_available_slots']['field'] = 'registration_available_slots';
  $handler->display->display_options['fields']['registration_available_slots']['label'] = '';
  $handler->display->display_options['fields']['registration_available_slots']['exclude'] = TRUE;
  $handler->display->display_options['fields']['registration_available_slots']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_available_slots']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['registration_available_slots']['unlimited_text'] = 'Unlimited';
  /* Field: Content: Register link */
  $handler->display->display_options['fields']['register_link']['id'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['register_link']['field'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['label'] = '';
  $handler->display->display_options['fields']['register_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['register_link']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-share"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[register_link]</strong>
        <div class="text-muted">Available Slots <span class="badge">[registration_available_slots]</span></div>
    </div>
</div>';
  $handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['register_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['register_link']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['register_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['register_link']['text'] = 'Register';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-spinner"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_status]</strong>
        <div class="text-muted">Status</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_status']['element_wrapper_class'] = 'list-group-item';
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_game_warzone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_game_warzone']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-book"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_game_warzone]</strong>
        <div class="text-muted">Game System</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_warzone']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_game_warzone']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_game_warzone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_game_warzone']['hide_empty'] = TRUE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-tag"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_event_type]</strong>
        <div class="text-muted">Event Type</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_type']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['hide_empty'] = TRUE;
  /* Field: Content: Tournament Type */
  $handler->display->display_options['fields']['field_tournament_type']['id'] = 'field_tournament_type';
  $handler->display->display_options['fields']['field_tournament_type']['table'] = 'field_data_field_tournament_type';
  $handler->display->display_options['fields']['field_tournament_type']['field'] = 'field_tournament_type';
  $handler->display->display_options['fields']['field_tournament_type']['label'] = '';
  $handler->display->display_options['fields']['field_tournament_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tournament_type']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-clipboard"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_tournament_type]</strong>
        <div class="text-muted">Format</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_tournament_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tournament_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_tournament_type']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_tournament_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tournament_type']['empty'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-clipboard"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_league_rule_set]</strong>
        <div class="text-muted">Format</div>
    </div>
</div>';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-calendar"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_event_date]</strong>

    </div>
</div>';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Entry Fee */
  $handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['label'] = '';
  $handler->display->display_options['fields']['field_entry_fee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_entry_fee']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-money"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_entry_fee]</strong>
        <div class="text-muted">Entry Free</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_entry_fee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_fee']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_entry_fee']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_entry_fee']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entry_fee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_entry_fee']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-globe"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_website]</strong>
    </div>
</div>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_website']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: Used slots */
  $handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['label'] = 'AUTOMATIC';
  $handler->display->display_options['fields']['registration_used_slots']['exclude'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Organizer */
  $handler = $view->new_display('panel_pane', 'Organizer', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organizer';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'ops' => 'ops',
    'privatemsg_link' => 'privatemsg_link',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'strong';
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
  /* Filter criterion: User Badges: Badge Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'user_badges_badges';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['value'] = 'level';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Battle Count */
  $handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/!1/battle-list">
        <div class="panel panel-overview">
            <div class="overview-icon bg-danger">
                <i class="glyphicon glyphicon-fire" aria-hidden="true"></i>
            </div>
            <div class="overview-value">
                <h2>[nid]</h2>
                <div class="text-muted">Battles</div>
            </div>
        </div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'game_results' => 'game_results',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Sharethis and Tools */
  $handler = $view->new_display('panel_pane', 'Sharethis and Tools', 'panel_pane_10');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comments_link']['alter']['preserve_tags'] = '<span> <a>';
  $handler->display->display_options['fields']['comments_link']['element_type'] = 'span';
  $handler->display->display_options['fields']['comments_link']['element_class'] = 'lead';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_type'] = 'span';
  $handler->display->display_options['fields']['ops']['element_class'] = 'lead';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Register link */
  $handler->display->display_options['fields']['register_link']['id'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['register_link']['field'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['label'] = '';
  $handler->display->display_options['fields']['register_link']['element_type'] = 'span';
  $handler->display->display_options['fields']['register_link']['element_class'] = 'lead';
  $handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['register_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['register_link']['text'] = 'Register';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Battle Count Buttons */
  $handler = $view->new_display('panel_pane', 'Battle Count Buttons', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="badge badge-danger">[nid]</span>
<strong class="m-left-xs m-right-sm"> Battles</strong>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/!1/battle-list';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '<span class="badge badge-danger">0</span>
<strong class="m-left-xs m-right-sm"> Battles</strong>';
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'game_results' => 'game_results',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Player Count Buttons */
  $handler = $view->new_display('panel_pane', 'Player Count Buttons', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node registration: Registrations */
  $handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['fields']['registration_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['text'] = '<span class="badge badge-info">[registration_id]</span>
<strong class="m-left-xs m-right-sm"> Players</strong>';
  $handler->display->display_options['fields']['registration_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['path'] = 'node/!1/player-list';
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['empty'] = '0';
  $handler->display->display_options['fields']['registration_id']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Theater */
  $handler = $view->new_display('panel_pane', 'Theater', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Theater';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-group';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Content */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Content from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
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
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-users"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[title]</strong>
        <div class="text-muted">Club Sponsor</div>
    </div>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: Battlefield (field_location) */
  $handler->display->display_options['filters']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_nid']['group'] = 1;
  /* Filter criterion: Field: Groups audience (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['og_group_ref_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_platers';
  $view->description = 'Generates the list of players in a war zone.';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: All: Players';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '36';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'picture';
  $handler->display->display_options['style_options']['heading_field'] = 'uid';
  $handler->display->display_options['style_options']['body_field'] = 'nothing';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['empty'] = '[field_register_real_name]';
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['empty'] = '[field_register_real_name]';
  $handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Field: Army */
  $handler->display->display_options['fields']['field_register_army']['id'] = 'field_register_army';
  $handler->display->display_options['fields']['field_register_army']['table'] = 'field_data_field_register_army';
  $handler->display->display_options['fields']['field_register_army']['field'] = 'field_register_army';
  $handler->display->display_options['fields']['field_register_army']['exclude'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  /* Field: Node registration: Cancel link */
  $handler->display->display_options['fields']['cancel_node_registration']['id'] = 'cancel_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['field'] = 'cancel_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['label'] = '';
  $handler->display->display_options['fields']['cancel_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cancel_node_registration']['element_label_colon'] = FALSE;
  /* Field: Node registration: Edit link */
  $handler->display->display_options['fields']['edit_node_registration']['id'] = 'edit_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['field'] = 'edit_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['label'] = '';
  $handler->display->display_options['fields']['edit_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_registration']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_register_army]
<br>[cancel_node_registration] [edit_node_registration]

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';

  /* Display: Player List */
  $handler = $view->new_display('panel_pane', 'Player List', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['war_zone_all_platers'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_player_dashboard';
  $view->description = 'War Zones a player is and has participated in.';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: All: Player Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My War Zones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'cancel_node_registration' => 'cancel_node_registration',
    'edit_node_registration' => 'cancel_node_registration',
    'field_event_type' => 'field_event_type',
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
    'cancel_node_registration' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'edit_node_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Relationship: Node registration: Event node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'War Zone';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_event_type']['label'] = 'War Zone type';
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'nid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Battle Commencement';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 1,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Node registration: Cancel link */
  $handler->display->display_options['fields']['cancel_node_registration']['id'] = 'cancel_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['field'] = 'cancel_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['label'] = 'Actions';
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Contextual filter: Node registration: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'all War Zones';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['pane_category']['name'] = 'Dashboard';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'War Zone';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_event_type']['label'] = 'War Zone type';
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'nid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Battle Commencement';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 1,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'dashboard/warzones';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'War Zones';
  $handler->display->display_options['menu']['description'] = 'The War Zones I\'ve registered for.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['war_zone_all_player_dashboard'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_player_final_scores';
  $view->description = 'Displays the scoring table for a war zone.';
  $view->tag = 'War Zone, 4.3';
  $view->base_table = 'entityform';
  $view->human_name = 'War Zone: All: Current Player Scores';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ranking';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_register_real_name' => 'field_register_real_name',
    'field_victory_points_sc' => 'field_victory_points_sc',
    'field_sportsmanship_sc' => 'field_sportsmanship_sc',
    'field_comp_sc' => 'field_comp_sc',
    'field_painting_sc' => 'field_painting_sc',
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
    'name' => 'field_register_real_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_register_real_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_victory_points_sc' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_sportsmanship_sc' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_comp_sc' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_painting_sc' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_victory' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_defeat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_draw' => array(
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
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['required'] = TRUE;
  /* Relationship: Field: Army (field_register_army) */
  $handler->display->display_options['relationships']['field_register_army_tid']['id'] = 'field_register_army_tid';
  $handler->display->display_options['relationships']['field_register_army_tid']['table'] = 'field_data_field_register_army';
  $handler->display->display_options['relationships']['field_register_army_tid']['field'] = 'field_register_army_tid';
  $handler->display->display_options['relationships']['field_register_army_tid']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_register_army_tid']['label'] = 'player_army';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
  $handler->display->display_options['fields']['field_register_real_name']['element_type'] = 'strong';
  /* Field: SUM(Entityform Submission: Victory Points) */
  $handler->display->display_options['fields']['field_victory_points_sc']['id'] = 'field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['table'] = 'field_data_field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['field'] = 'field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory_points_sc']['label'] = 'VP';
  $handler->display->display_options['fields']['field_victory_points_sc']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Entityform Submission: Sportsmanship) */
  $handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Entityform Submission: Comp) */
  $handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_comp_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Entityform Submission: Painting) */
  $handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_painting_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_register_army_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: SUM(Field: Victory (field_victory)) */
  $handler->display->display_options['sorts']['field_victory_value']['id'] = 'field_victory_value';
  $handler->display->display_options['sorts']['field_victory_value']['table'] = 'field_data_field_victory';
  $handler->display->display_options['sorts']['field_victory_value']['field'] = 'field_victory_value';
  $handler->display->display_options['sorts']['field_victory_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_victory_value']['order'] = 'DESC';
  /* Sort criterion: SUM(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
  /* Sort criterion: SUM(Entityform Submission: Victory Points (field_victory_points_sc)) */
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['id'] = 'field_victory_points_sc_value';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['table'] = 'field_data_field_victory_points_sc';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['field'] = 'field_victory_points_sc_value';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['order'] = 'DESC';
  /* Sort criterion: SUM(Entityform Submission: Army Points (field_army_points_sc)) */
  $handler->display->display_options['sorts']['field_army_points_sc_value']['id'] = 'field_army_points_sc_value';
  $handler->display->display_options['sorts']['field_army_points_sc_value']['table'] = 'field_data_field_army_points_sc';
  $handler->display->display_options['sorts']['field_army_points_sc_value']['field'] = 'field_army_points_sc_value';
  $handler->display->display_options['sorts']['field_army_points_sc_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_army_points_sc_value']['order'] = 'DESC';
  /* Sort criterion: SUM(Entityform Submission: Strength of schedule (field_strength_of_schedule_sc)) */
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['id'] = 'field_strength_of_schedule_sc_value';
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['table'] = 'field_data_field_strength_of_schedule_sc';
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['field'] = 'field_strength_of_schedule_sc_value';
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );

  /* Display: Ranking - Scorecard Based */
  $handler = $view->new_display('panel_pane', 'Ranking - Scorecard Based', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_all_player_final_scores'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_registration';
  $view->description = 'The player management table for a war zone.';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: All: Registration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Registrations';
  $handler->display->display_options['css_class'] = 'node-registration';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Registered Players</h3>
<p>No player registrations match the criteria you have provided.</p>';
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Node registration: Event node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Node registration: Attended */
  $handler->display->display_options['fields']['attended_1']['id'] = 'attended_1';
  $handler->display->display_options['fields']['attended_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['attended_1']['field'] = 'attended';
  $handler->display->display_options['fields']['attended_1']['label'] = '';
  $handler->display->display_options['fields']['attended_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['attended_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['attended_1']['type'] = 'y-n';
  $handler->display->display_options['fields']['attended_1']['not'] = 0;
  /* Field: Node registration: Cancelled */
  $handler->display->display_options['fields']['cancelled_1']['id'] = 'cancelled_1';
  $handler->display->display_options['fields']['cancelled_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['cancelled_1']['field'] = 'cancelled';
  $handler->display->display_options['fields']['cancelled_1']['label'] = '';
  $handler->display->display_options['fields']['cancelled_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cancelled_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancelled_1']['type'] = 'y-n';
  $handler->display->display_options['fields']['cancelled_1']['not'] = 0;
  /* Field: Node registration: Verified */
  $handler->display->display_options['fields']['verified_1']['id'] = 'verified_1';
  $handler->display->display_options['fields']['verified_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['verified_1']['field'] = 'verified';
  $handler->display->display_options['fields']['verified_1']['label'] = '';
  $handler->display->display_options['fields']['verified_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['verified_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['verified_1']['type'] = 'y-n';
  $handler->display->display_options['fields']['verified_1']['not'] = 0;
  /* Field: Node registration: Waitinglist */
  $handler->display->display_options['fields']['waitinglist_1']['id'] = 'waitinglist_1';
  $handler->display->display_options['fields']['waitinglist_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['waitinglist_1']['field'] = 'waitinglist';
  $handler->display->display_options['fields']['waitinglist_1']['label'] = '';
  $handler->display->display_options['fields']['waitinglist_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['waitinglist_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['waitinglist_1']['type'] = 'y-n';
  $handler->display->display_options['fields']['waitinglist_1']['not'] = 0;
  /* Field: Bulk operations: Node registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_registration';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '20';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_registration_attend_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_registration_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_registration_unattend_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_registration_unverify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_registration_verify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'ID';
  $handler->display->display_options['fields']['registration_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 1;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['email']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['email']['link_to_node_registration_edit'] = 1;
  $handler->display->display_options['fields']['email']['link_to_node_registration_email'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  /* Field: Node registration: Slots */
  $handler->display->display_options['fields']['slots']['id'] = 'slots';
  $handler->display->display_options['fields']['slots']['table'] = 'node_registration';
  $handler->display->display_options['fields']['slots']['field'] = 'slots';
  $handler->display->display_options['fields']['slots']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['slots']['separator'] = '';
  /* Field: Node registration: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node_registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Node registration: Cancelled */
  $handler->display->display_options['fields']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['fields']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['fields']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['fields']['cancelled']['element_class'] = 'cancelled [cancelled_1]';
  $handler->display->display_options['fields']['cancelled']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['cancelled']['not'] = 0;
  /* Field: Node registration: Waitinglist */
  $handler->display->display_options['fields']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['fields']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['fields']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['fields']['waitinglist']['element_class'] = 'waitinglist [waitinglist_1]';
  $handler->display->display_options['fields']['waitinglist']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['waitinglist']['not'] = 0;
  /* Field: Node registration: Verified */
  $handler->display->display_options['fields']['verified']['id'] = 'verified';
  $handler->display->display_options['fields']['verified']['table'] = 'node_registration';
  $handler->display->display_options['fields']['verified']['field'] = 'verified';
  $handler->display->display_options['fields']['verified']['element_class'] = 'verified [verified_1]';
  $handler->display->display_options['fields']['verified']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['verified']['not'] = 0;
  /* Field: Node registration: Attended */
  $handler->display->display_options['fields']['attended']['id'] = 'attended';
  $handler->display->display_options['fields']['attended']['table'] = 'node_registration';
  $handler->display->display_options['fields']['attended']['field'] = 'attended';
  $handler->display->display_options['fields']['attended']['element_class'] = 'attended [attended_1]';
  $handler->display->display_options['fields']['attended']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['attended']['not'] = 0;
  /* Field: Node registration: Edit link */
  $handler->display->display_options['fields']['edit_node_registration']['id'] = 'edit_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['field'] = 'edit_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['label'] = '';
  $handler->display->display_options['fields']['edit_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_registration']['element_default_classes'] = FALSE;
  /* Field: Node registration: View link */
  $handler->display->display_options['fields']['view_node_registration']['id'] = 'view_node_registration';
  $handler->display->display_options['fields']['view_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['view_node_registration']['field'] = 'view_node_registration';
  $handler->display->display_options['fields']['view_node_registration']['label'] = '';
  $handler->display->display_options['fields']['view_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_registration']['element_default_classes'] = FALSE;
  /* Field: Node registration: Cancel link */
  $handler->display->display_options['fields']['cancel_node_registration']['id'] = 'cancel_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['field'] = 'cancel_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['label'] = '';
  $handler->display->display_options['fields']['cancel_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cancel_node_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancel_node_registration']['element_default_classes'] = FALSE;
  /* Field: Node registration: Delete link */
  $handler->display->display_options['fields']['delete_node_registration']['id'] = 'delete_node_registration';
  $handler->display->display_options['fields']['delete_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['delete_node_registration']['field'] = 'delete_node_registration';
  $handler->display->display_options['fields']['delete_node_registration']['label'] = '';
  $handler->display->display_options['fields']['delete_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node_registration']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_node_registration] [edit_node_registration] [cancel_node_registration] [delete_node_registration]';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Node registration: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node_registration';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Node registration: Attended */
  $handler->display->display_options['filters']['attended']['id'] = 'attended';
  $handler->display->display_options['filters']['attended']['table'] = 'node_registration';
  $handler->display->display_options['filters']['attended']['field'] = 'attended';
  $handler->display->display_options['filters']['attended']['value'] = 'All';
  $handler->display->display_options['filters']['attended']['exposed'] = TRUE;
  $handler->display->display_options['filters']['attended']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['attended']['expose']['label'] = 'Attended';
  $handler->display->display_options['filters']['attended']['expose']['operator'] = 'attended_op';
  $handler->display->display_options['filters']['attended']['expose']['identifier'] = 'attended';
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = 'All';
  $handler->display->display_options['filters']['cancelled']['exposed'] = TRUE;
  $handler->display->display_options['filters']['cancelled']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['cancelled']['expose']['label'] = 'Cancelled';
  $handler->display->display_options['filters']['cancelled']['expose']['operator'] = 'cancelled_op';
  $handler->display->display_options['filters']['cancelled']['expose']['identifier'] = 'cancelled';

  /* Display: Manage Registrations */
  $handler = $view->new_display('panel_pane', 'Manage Registrations', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'attended_1' => 'attended_1',
    'cancelled_1' => 'cancelled_1',
    'verified_1' => 'verified_1',
    'waitinglist_1' => 'waitinglist_1',
    'views_bulk_operations' => 'views_bulk_operations',
    'registration_id' => 'registration_id',
    'email' => 'email',
    'field_register_real_name' => 'field_register_real_name',
    'name' => 'field_register_real_name',
    'title' => 'title',
    'slots' => 'slots',
    'created' => 'created',
    'cancelled' => 'cancelled',
    'waitinglist' => 'waitinglist',
    'verified' => 'verified',
    'attended' => 'attended',
    'edit_node_registration' => 'edit_node_registration',
    'view_node_registration' => 'view_node_registration',
    'cancel_node_registration' => 'cancel_node_registration',
    'delete_node_registration' => 'delete_node_registration',
    'ops' => 'ops',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'attended_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'cancelled_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'verified_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'waitinglist_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'slots' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'cancelled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'waitinglist' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'verified' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'attended' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'cancel_node_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="registrations"></a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Node registration: Event node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Flags: paid */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'paid';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Attended */
  $handler->display->display_options['fields']['attended_1']['id'] = 'attended_1';
  $handler->display->display_options['fields']['attended_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['attended_1']['field'] = 'attended';
  $handler->display->display_options['fields']['attended_1']['label'] = '';
  $handler->display->display_options['fields']['attended_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['attended_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['attended_1']['type'] = 'y-n';
  $handler->display->display_options['fields']['attended_1']['not'] = 0;
  /* Field: Node registration: Cancelled */
  $handler->display->display_options['fields']['cancelled_1']['id'] = 'cancelled_1';
  $handler->display->display_options['fields']['cancelled_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['cancelled_1']['field'] = 'cancelled';
  $handler->display->display_options['fields']['cancelled_1']['label'] = '';
  $handler->display->display_options['fields']['cancelled_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cancelled_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancelled_1']['type'] = 'y-n';
  $handler->display->display_options['fields']['cancelled_1']['not'] = 0;
  /* Field: Node registration: Verified */
  $handler->display->display_options['fields']['verified_1']['id'] = 'verified_1';
  $handler->display->display_options['fields']['verified_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['verified_1']['field'] = 'verified';
  $handler->display->display_options['fields']['verified_1']['label'] = '';
  $handler->display->display_options['fields']['verified_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['verified_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['verified_1']['type'] = 'y-n';
  $handler->display->display_options['fields']['verified_1']['not'] = 0;
  /* Field: Node registration: Waitinglist */
  $handler->display->display_options['fields']['waitinglist_1']['id'] = 'waitinglist_1';
  $handler->display->display_options['fields']['waitinglist_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['waitinglist_1']['field'] = 'waitinglist';
  $handler->display->display_options['fields']['waitinglist_1']['label'] = '';
  $handler->display->display_options['fields']['waitinglist_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['waitinglist_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['waitinglist_1']['type'] = 'y-n';
  $handler->display->display_options['fields']['waitinglist_1']['not'] = 0;
  /* Field: Bulk operations: Node registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_registration';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '20';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_registration_attend_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Mark Attendance',
    ),
    'action::node_registration_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Mark Cancelled',
    ),
    'action::node_registration_unattend_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Mark Absent',
    ),
    'action::node_registration_uncancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Reverse Cancellation',
    ),
    'action::node_registration_unwait_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Move out of waiting list',
    ),
    'action::node_registration_wait_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Move to waiting list',
    ),
  );
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'ID';
  $handler->display->display_options['fields']['registration_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 1;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['email']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['email']['link_to_node_registration_edit'] = 1;
  $handler->display->display_options['fields']['email']['link_to_node_registration_email'] = 0;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Account';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Node registration: Slots */
  $handler->display->display_options['fields']['slots']['id'] = 'slots';
  $handler->display->display_options['fields']['slots']['table'] = 'node_registration';
  $handler->display->display_options['fields']['slots']['field'] = 'slots';
  $handler->display->display_options['fields']['slots']['exclude'] = TRUE;
  $handler->display->display_options['fields']['slots']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['slots']['separator'] = '';
  /* Field: Node registration: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node_registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Node registration: Cancelled */
  $handler->display->display_options['fields']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['fields']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['fields']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['fields']['cancelled']['element_class'] = 'cancelled [cancelled_1]';
  $handler->display->display_options['fields']['cancelled']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['cancelled']['not'] = 0;
  /* Field: Node registration: Waitinglist */
  $handler->display->display_options['fields']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['fields']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['fields']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['fields']['waitinglist']['element_class'] = 'waitinglist [waitinglist_1]';
  $handler->display->display_options['fields']['waitinglist']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['waitinglist']['not'] = 0;
  /* Field: Node registration: Verified */
  $handler->display->display_options['fields']['verified']['id'] = 'verified';
  $handler->display->display_options['fields']['verified']['table'] = 'node_registration';
  $handler->display->display_options['fields']['verified']['field'] = 'verified';
  $handler->display->display_options['fields']['verified']['exclude'] = TRUE;
  $handler->display->display_options['fields']['verified']['element_class'] = 'verified [verified_1]';
  $handler->display->display_options['fields']['verified']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['verified']['not'] = 0;
  /* Field: Node registration: Attended */
  $handler->display->display_options['fields']['attended']['id'] = 'attended';
  $handler->display->display_options['fields']['attended']['table'] = 'node_registration';
  $handler->display->display_options['fields']['attended']['field'] = 'attended';
  $handler->display->display_options['fields']['attended']['element_class'] = 'attended [attended_1]';
  $handler->display->display_options['fields']['attended']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['attended']['not'] = 0;
  /* Field: Node registration: Edit link */
  $handler->display->display_options['fields']['edit_node_registration']['id'] = 'edit_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['field'] = 'edit_node_registration';
  $handler->display->display_options['fields']['edit_node_registration']['label'] = '';
  $handler->display->display_options['fields']['edit_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_registration']['element_default_classes'] = FALSE;
  /* Field: Node registration: View link */
  $handler->display->display_options['fields']['view_node_registration']['id'] = 'view_node_registration';
  $handler->display->display_options['fields']['view_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['view_node_registration']['field'] = 'view_node_registration';
  $handler->display->display_options['fields']['view_node_registration']['label'] = '';
  $handler->display->display_options['fields']['view_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_registration']['element_default_classes'] = FALSE;
  /* Field: Node registration: Cancel link */
  $handler->display->display_options['fields']['cancel_node_registration']['id'] = 'cancel_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['field'] = 'cancel_node_registration';
  $handler->display->display_options['fields']['cancel_node_registration']['label'] = '';
  $handler->display->display_options['fields']['cancel_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cancel_node_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancel_node_registration']['element_default_classes'] = FALSE;
  /* Field: Node registration: Delete link */
  $handler->display->display_options['fields']['delete_node_registration']['id'] = 'delete_node_registration';
  $handler->display->display_options['fields']['delete_node_registration']['table'] = 'views_entity_node_registration';
  $handler->display->display_options['fields']['delete_node_registration']['field'] = 'delete_node_registration';
  $handler->display->display_options['fields']['delete_node_registration']['label'] = '';
  $handler->display->display_options['fields']['delete_node_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node_registration']['element_default_classes'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Paid Fee';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_node_registration] [edit_node_registration] [cancel_node_registration] [delete_node_registration]';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['war_zone_all_registration'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_registrations';
  $view->description = 'Various Filters to apply to entity reference fields for war zones.';
  $view->tag = 'War Zones 4.1, Rules';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: All: Registration Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'field_register_real_name' => 'field_register_real_name',
  );
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = '';
  $handler->display->display_options['fields']['field_register_real_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_register_real_name']['alter']['text'] = '([field_register_real_name])';
  $handler->display->display_options['fields']['field_register_real_name']['element_label_colon'] = FALSE;
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_register_real_name' => 'field_register_real_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = '';
  $handler->display->display_options['fields']['field_register_real_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_register_real_name']['alter']['text'] = '([field_register_real_name])';
  $handler->display->display_options['fields']['field_register_real_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_register_real_name']['empty'] = 'real name not provided';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '0';

  /* Display: Page Visibility */
  $handler = $view->new_display('panel_pane', 'Page Visibility', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['text'] = '1';
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['empty'] = '0';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* Contextual filter: Node registration: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $export['war_zone_all_registrations'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_scorecard_rules';
  $view->description = '';
  $view->tag = '4.3';
  $view->base_table = 'entityform';
  $view->human_name = 'War Zone: All: Scorecard Rules';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['required'] = TRUE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'Reg ID';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  /* Field: SUM(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'Battle Score';
  $handler->display->display_options['fields']['field_your_results']['empty'] = '0';
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  /* Field: SUM(Entityform Submission: Victory Points) */
  $handler->display->display_options['fields']['field_victory_points_sc']['id'] = 'field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['table'] = 'field_data_field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['field'] = 'field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory_points_sc']['empty'] = '0';
  $handler->display->display_options['fields']['field_victory_points_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Entityform Submission: Army Points) */
  $handler->display->display_options['fields']['field_army_points_sc']['id'] = 'field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['table'] = 'field_data_field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['field'] = 'field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_army_points_sc']['empty'] = '0';
  $handler->display->display_options['fields']['field_army_points_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Entityform Submission: Sportsmanship) */
  $handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Entityform Submission: Painting) */
  $handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_painting_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Entityform Submission: Comp) */
  $handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_comp_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Entityform Submission: Additional Points) */
  $handler->display->display_options['fields']['field_additional_points_sc']['id'] = 'field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['table'] = 'field_data_field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['field'] = 'field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_additional_points_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Entityform Submission: Strength of schedule) */
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['id'] = 'field_strength_of_schedule_sc';
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['table'] = 'field_data_field_strength_of_schedule_sc';
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['field'] = 'field_strength_of_schedule_sc';
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Entityform Submission: Battle Points) */
  $handler->display->display_options['fields']['field_battle_points_sc']['id'] = 'field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['table'] = 'field_data_field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['field'] = 'field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_battle_points_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  /* Field: SUM(Entityform Submission: bye) */
  $handler->display->display_options['fields']['field_bye']['id'] = 'field_bye';
  $handler->display->display_options['fields']['field_bye']['table'] = 'field_data_field_bye';
  $handler->display->display_options['fields']['field_bye']['field'] = 'field_bye';
  $handler->display->display_options['fields']['field_bye']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_bye']['empty'] = '0';
  $handler->display->display_options['fields']['field_bye']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );

  /* Display: Generate Final Scorecards */
  $handler = $view->new_display('views_rules', 'Generate Final Scorecards', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_registration_sc) Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_registration_sc) Reg ID',
      'name' => 'registration_id',
    ),
    'field_your_results' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Battle Score',
      'name' => 'field_your_results',
    ),
    'field_victory_points_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Victory Points',
      'name' => 'field_victory_points_sc',
    ),
    'field_army_points_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Army Points',
      'name' => 'field_army_points_sc',
    ),
    'field_sportsmanship_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Sportsmanship',
      'name' => 'field_sportsmanship_sc',
    ),
    'field_painting_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Painting',
      'name' => 'field_painting_sc',
    ),
    'field_comp_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Comp',
      'name' => 'field_comp_sc',
    ),
    'field_additional_points_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Additional Points',
      'name' => 'field_additional_points_sc',
    ),
    'field_strength_of_schedule_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'decimal',
      'label' => 'Strength of schedule',
      'name' => 'field_strength_of_schedule_sc',
    ),
    'field_battle_points_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Battle Points',
      'name' => 'field_battle_points_sc',
    ),
    'field_defeat' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Defeat',
      'name' => 'field_defeat',
    ),
    'field_draw' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Draw',
      'name' => 'field_draw',
    ),
    'field_victory' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Victory',
      'name' => 'field_victory',
    ),
    'field_bye' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'bye',
      'name' => 'field_bye',
    ),
  );

  /* Display: Iterate Unplayed League Games */
  $handler = $view->new_display('views_rules', 'Iterate Unplayed League Games', 'views_rules_3');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'Reg ID';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: State */
  $handler->display->display_options['fields']['field_state_sc']['id'] = 'field_state_sc';
  $handler->display->display_options['fields']['field_state_sc']['table'] = 'field_data_field_state_sc';
  $handler->display->display_options['fields']['field_state_sc']['field'] = 'field_state_sc';
  /* Field: Entityform Submission: Round */
  $handler->display->display_options['fields']['field_round_sc']['id'] = 'field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['table'] = 'field_data_field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['field'] = 'field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );
  /* Filter criterion: Entityform Submission: Score Card Type (field_score_card_type) */
  $handler->display->display_options['filters']['field_score_card_type_value']['id'] = 'field_score_card_type_value';
  $handler->display->display_options['filters']['field_score_card_type_value']['table'] = 'field_data_field_score_card_type';
  $handler->display->display_options['filters']['field_score_card_type_value']['field'] = 'field_score_card_type_value';
  $handler->display->display_options['filters']['field_score_card_type_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Entityform Submission: State (field_state_sc) */
  $handler->display->display_options['filters']['field_state_sc_value']['id'] = 'field_state_sc_value';
  $handler->display->display_options['filters']['field_state_sc_value']['table'] = 'field_data_field_state_sc';
  $handler->display->display_options['filters']['field_state_sc_value']['field'] = 'field_state_sc_value';
  $handler->display->display_options['filters']['field_state_sc_value']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_registration_sc) Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_registration_sc) Reg ID',
      'name' => 'registration_id',
    ),
    'entityform_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Entityform submission ID',
      'name' => 'entityform_id',
    ),
    'field_state_sc' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'State',
      'name' => 'field_state_sc',
    ),
    'field_round_sc' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Round',
      'name' => 'field_round_sc',
    ),
  );

  /* Display: League: Award Achievements */
  $handler = $view->new_display('views_rules', 'League: Award Achievements', 'views_rules_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'Reg ID';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  /* Field: Node registration: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node_registration';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: SUM(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
  /* Sort criterion: SUM(Entityform Submission: Strength of schedule (field_strength_of_schedule_sc)) */
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['id'] = 'field_strength_of_schedule_sc_value';
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['table'] = 'field_data_field_strength_of_schedule_sc';
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['field'] = 'field_strength_of_schedule_sc_value';
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_strength_of_schedule_sc_value']['order'] = 'DESC';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_registration_sc) Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_registration_sc) Reg ID',
      'name' => 'registration_id',
    ),
    'field_your_results' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Battle Score',
      'name' => 'field_your_results',
    ),
    'field_victory_points_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Victory Points',
      'name' => 'field_victory_points_sc',
    ),
    'field_army_points_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Army Points',
      'name' => 'field_army_points_sc',
    ),
    'field_sportsmanship_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Sportsmanship',
      'name' => 'field_sportsmanship_sc',
    ),
    'field_painting_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Painting',
      'name' => 'field_painting_sc',
    ),
    'field_comp_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Comp',
      'name' => 'field_comp_sc',
    ),
    'field_additional_points_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Additional Points',
      'name' => 'field_additional_points_sc',
    ),
    'field_strength_of_schedule_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'decimal',
      'label' => 'Strength of schedule',
      'name' => 'field_strength_of_schedule_sc',
    ),
    'field_battle_points_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Battle Points',
      'name' => 'field_battle_points_sc',
    ),
    'field_defeat' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Defeat',
      'name' => 'field_defeat',
    ),
    'field_draw' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Draw',
      'name' => 'field_draw',
    ),
    'field_victory' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Victory',
      'name' => 'field_victory',
    ),
    'field_bye' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'bye',
      'name' => 'field_bye',
    ),
    'uid' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_registration_sc) User uid',
      'name' => 'uid',
    ),
  );
  $export['war_zone_all_scorecard_rules'] = $view;

  $view = new view();
  $view->name = 'war_zone_campaign_edit_players';
  $view->description = 'Lets admin edit a player\'s registration.  Should probably be consolidated into the Management panel list.';
  $view->tag = 'War Zones 4.1, Narrative Campaigns 1.0';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: Campaign: Edit Players';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Factions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'email' => 'email',
    'uid' => 'uid',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
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
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_register_faction_target_id']['id'] = 'field_register_faction_target_id';
  $handler->display->display_options['relationships']['field_register_faction_target_id']['table'] = 'field_data_field_register_faction';
  $handler->display->display_options['relationships']['field_register_faction_target_id']['field'] = 'field_register_faction_target_id';
  /* Field: Bulk operations: Node registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_registration';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change Faction',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'narrative_campaign_instance::field_register_faction' => 'narrative_campaign_instance::field_register_faction',
        ),
      ),
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Field: Army */
  $handler->display->display_options['fields']['field_register_army']['id'] = 'field_register_army';
  $handler->display->display_options['fields']['field_register_army']['table'] = 'field_data_field_register_army';
  $handler->display->display_options['fields']['field_register_army']['field'] = 'field_register_army';
  $handler->display->display_options['fields']['field_register_army']['element_label_colon'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_chronicle']['id'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['table'] = 'field_data_field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['field'] = 'field_title_chronicle';
  $handler->display->display_options['fields']['field_title_chronicle']['relationship'] = 'field_register_faction_target_id';
  $handler->display->display_options['fields']['field_title_chronicle']['label'] = 'Faction';
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Panel */
  $handler = $view->new_display('panel_pane', 'Panel', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['war_zone_campaign_edit_players'] = $view;

  $view = new view();
  $view->name = 'war_zone_email_player_rules';
  $view->description = 'Player lists for various war zone related rules.';
  $view->tag = 'War Zone, 4.3';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: All: Registration Rules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['group_type'] = 'count_distinct';
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';

  /* Display: Email on Article */
  $handler = $view->new_display('views_rules', 'Email on Article', 'views_rules_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'E-mail',
      'name' => 'email',
    ),
  );

  /* Display: Find Registration */
  $handler = $view->new_display('views_rules', 'Find Registration', 'views_rules_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Node registration: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
    'uid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: User uid',
      'name' => 'uid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'email' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'E-mail',
      'name' => 'email',
    ),
    'field_register_real_name' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Real Name',
      'name' => 'field_register_real_name',
    ),
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Registration ID',
      'name' => 'registration_id',
    ),
  );

  /* Display: Campaign: Final award achievement */
  $handler = $view->new_display('views_rules', 'Campaign: Final award achievement', 'views_rules_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'email' => 'email',
    'field_register_real_name' => 'field_register_real_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_register_faction_target_id']['id'] = 'field_register_faction_target_id';
  $handler->display->display_options['relationships']['field_register_faction_target_id']['table'] = 'field_data_field_register_faction';
  $handler->display->display_options['relationships']['field_register_faction_target_id']['field'] = 'field_register_faction_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  /* Field: Node registration: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node_registration';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['relationship'] = 'field_register_faction_target_id';
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'email' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'E-mail',
      'name' => 'email',
    ),
    'field_register_real_name' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Real Name',
      'name' => 'field_register_real_name',
    ),
    'uid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'User uid',
      'name' => 'uid',
    ),
    'entityform_id' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => '(Entityform Submission entity referenced from field_register_faction) Entityform submission ID',
      'name' => 'entityform_id',
    ),
  );

  /* Display: Generate Paining Scorecards */
  $handler = $view->new_display('views_rules', 'Generate Paining Scorecards', 'views_rules_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Attended */
  $handler->display->display_options['filters']['attended']['id'] = 'attended';
  $handler->display->display_options['filters']['attended']['table'] = 'node_registration';
  $handler->display->display_options['filters']['attended']['field'] = 'attended';
  $handler->display->display_options['filters']['attended']['value'] = '1';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'email' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'E-mail',
      'name' => 'email',
    ),
    'field_register_real_name' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Real Name',
      'name' => 'field_register_real_name',
    ),
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Registration ID',
      'name' => 'registration_id',
    ),
  );

  /* Display: Strength of Schedule Loop */
  $handler = $view->new_display('views_rules', 'Strength of Schedule Loop', 'views_rules_5');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Attended */
  $handler->display->display_options['filters']['attended']['id'] = 'attended';
  $handler->display->display_options['filters']['attended']['table'] = 'node_registration';
  $handler->display->display_options['filters']['attended']['field'] = 'attended';
  $handler->display->display_options['filters']['attended']['value'] = '1';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'email' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'E-mail',
      'name' => 'email',
    ),
    'field_register_real_name' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Real Name',
      'name' => 'field_register_real_name',
    ),
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Registration ID',
      'name' => 'registration_id',
    ),
  );

  /* Display: Set to Attended */
  $handler = $view->new_display('views_rules', 'Set to Attended', 'views_rules_6');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'email' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'E-mail',
      'name' => 'email',
    ),
    'field_register_real_name' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Real Name',
      'name' => 'field_register_real_name',
    ),
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Registration ID',
      'name' => 'registration_id',
    ),
  );

  /* Display: Player Count */
  $handler = $view->new_display('views_rules', 'Player Count', 'views_rules_7');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: E-mail */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'node_registration';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['email']['separator'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Waitinglist */
  $handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
  $handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
  $handler->display->display_options['filters']['waitinglist']['value'] = '0';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Player Count',
      'name' => 'player_count',
    ),
  );
  $export['war_zone_email_player_rules'] = $view;

  $view = new view();
  $view->name = 'war_zone_league_operations_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: League: Operations Page';
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
  $handler->display->display_options['pager']['type'] = 'none';
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
    'war_zone_league' => 'war_zone_league',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node registration: Registrations */
  $handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['node_registration_rel']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['id'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['field'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['relationship'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['required'] = TRUE;
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'field_registration_sc_target_id';
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'field_registration_sc_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['relationship'] = 'reverse_field_registration_sc_entityform';
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid_2']['id'] = 'uid_2';
  $handler->display->display_options['relationships']['uid_2']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid_2']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_2']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Player 1';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_2';
  $handler->display->display_options['fields']['name_1']['label'] = 'Player 2';
  $handler->display->display_options['fields']['name_1']['empty'] = 'Bye';
  /* Field: Entityform Submission: State */
  $handler->display->display_options['fields']['field_state_sc']['id'] = 'field_state_sc';
  $handler->display->display_options['fields']['field_state_sc']['table'] = 'field_data_field_state_sc';
  $handler->display->display_options['fields']['field_state_sc']['field'] = 'field_state_sc';
  $handler->display->display_options['fields']['field_state_sc']['relationship'] = 'reverse_field_registration_sc_entityform';
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
  /* Contextual filter: Entityform Submission: Round (field_round_sc) */
  $handler->display->display_options['arguments']['field_round_sc_value']['id'] = 'field_round_sc_value';
  $handler->display->display_options['arguments']['field_round_sc_value']['table'] = 'field_data_field_round_sc';
  $handler->display->display_options['arguments']['field_round_sc_value']['field'] = 'field_round_sc_value';
  $handler->display->display_options['arguments']['field_round_sc_value']['relationship'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['arguments']['field_round_sc_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_round_sc_value']['title'] = 'Round %2 Matches';
  $handler->display->display_options['arguments']['field_round_sc_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary_options']['items_per_page'] = '25';
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
    'war_zone_league' => 'war_zone_league',
  );
  /* Filter criterion: Entityform Submission: Display (field_display_sc) */
  $handler->display->display_options['filters']['field_display_sc_value']['id'] = 'field_display_sc_value';
  $handler->display->display_options['filters']['field_display_sc_value']['table'] = 'field_data_field_display_sc';
  $handler->display->display_options['filters']['field_display_sc_value']['field'] = 'field_display_sc_value';
  $handler->display->display_options['filters']['field_display_sc_value']['relationship'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['filters']['field_display_sc_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
    'field_round_sc_value' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Round',
    ),
  );
  $export['war_zone_league_operations_page'] = $view;

  $view = new view();
  $view->name = 'war_zone_league_scorecard_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'War Zone: League: Scorecard Filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['label'] = 'player registration';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['label'] = 'opponent';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = '';
  $handler->display->display_options['fields']['field_register_real_name']['element_label_colon'] = FALSE;
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Node registration: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );
  /* Filter criterion: Entityform Submission: State (field_state_sc) */
  $handler->display->display_options['filters']['field_state_sc_value']['id'] = 'field_state_sc_value';
  $handler->display->display_options['filters']['field_state_sc_value']['table'] = 'field_data_field_state_sc';
  $handler->display->display_options['filters']['field_state_sc_value']['field'] = 'field_state_sc_value';
  $handler->display->display_options['filters']['field_state_sc_value']['value'] = array(
    5 => '5',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_register_real_name' => 'field_register_real_name',
    'entityform_id' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['war_zone_league_scorecard_filter'] = $view;

  $view = new view();
  $view->name = 'war_zone_list2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'War Zone List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Leagues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'media-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Results</h3>
<p>There are no War Zones that meet your criteria</p>';
  /* Relationship: Field: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'apps_logo',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
<a href="[path]" class="pull-left col-md-2"><span class="media-object">[field_campaign_badge]</span></a>
<div class="media-body col-md-10">
   <h4 class="media-heading">[title]</h4>
   <p>
      [field_league_type]<br>
      [field_event_date]<br>
      [field_location] [field_address]
   </p>

</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
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
    'war_zone_league' => 'war_zone_league',
    'league' => 'league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: League Page */
  $handler = $view->new_display('page', 'League Page', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'war_zone_league' => 'war_zone_league',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'theater/warzone/league';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Leagues';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Warzones';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Tournament Page */
  $handler = $view->new_display('page', 'Tournament Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tournaments';
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
    'war_zone_tournament' => 'war_zone_tournament',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Field: Geolocation (field_geolocation) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['relationship'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '100',
    'distance2' => 200,
    'unit' => '6371',
    'origin' => ' ',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Proximity';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geolocation';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geolocation';
  $handler->display->display_options['path'] = 'theater/warzone/tournament';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tournaments';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Warzones';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: All Warzones */
  $handler = $view->new_display('page', 'All Warzones', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'War Zones';
  $handler->display->display_options['path'] = 'theater/warzone/all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All War Zones';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Narrative Campaign Instances */
  $handler = $view->new_display('page', 'Narrative Campaign Instances', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Operational Campaigns';
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
    'narrative_campaign_instance' => 'narrative_campaign_instance',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'theater/warzone/narrative-campaigns/operational';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Operational';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Campaigns */
  $handler = $view->new_display('page', 'Campaigns', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Campaigns';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
    'narrative_campaign' => 'narrative_campaign',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'warzone/narrative-campaigns/campaigns';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Campaigns';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Operational Pane */
  $handler = $view->new_display('panel_pane', 'Operational Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Operational Campaigns';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_4';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
    'narrative_campaign_instance' => 'narrative_campaign_instance',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Available Campaign Pane */
  $handler = $view->new_display('panel_pane', 'Available Campaign Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Available Campaigns';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_5';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
    'narrative_campaign' => 'narrative_campaign',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['war_zone_list2'] = $view;

  $view = new view();
  $view->name = 'war_zone_tournament_missions';
  $view->description = 'Displays the current round\'s mission on the Display Page';
  $view->tag = 'War Zones 4.1';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'War Zone: Tournament: Missions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'No Available Missions';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h4>Mission Info</h4>
<p>See your event organizer for this round\'s mission.</p>';
  /* Relationship: Field collection item: Entity with the Tournament Missions (field_tournament_missions) */
  $handler->display->display_options['relationships']['field_tournament_missions_node']['id'] = 'field_tournament_missions_node';
  $handler->display->display_options['relationships']['field_tournament_missions_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_tournament_missions_node']['field'] = 'field_tournament_missions_node';
  $handler->display->display_options['relationships']['field_tournament_missions_node']['required'] = TRUE;
  /* Field: Field collection item: Rendered Field collection item */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_tournament_missions_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field collection item: Round (field_round_counter_tourney) */
  $handler->display->display_options['arguments']['field_round_counter_tourney_value']['id'] = 'field_round_counter_tourney_value';
  $handler->display->display_options['arguments']['field_round_counter_tourney_value']['table'] = 'field_data_field_round_counter_tourney';
  $handler->display->display_options['arguments']['field_round_counter_tourney_value']['field'] = 'field_round_counter_tourney_value';
  $handler->display->display_options['arguments']['field_round_counter_tourney_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_round_counter_tourney_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_round_counter_tourney_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_round_counter_tourney_value']['summary_options']['items_per_page'] = '25';

  /* Display: Mission */
  $handler = $view->new_display('panel_pane', 'Mission', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mission';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
    'field_round_counter_tourney_value' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Round',
    ),
  );
  $export['war_zone_tournament_missions'] = $view;

  $view = new view();
  $view->name = 'war_zone_tournament_score_cards';
  $view->description = 'Tournament rules and displays.  Should separate out the rules from the displays.';
  $view->tag = 'War Zones 4.1, Rules';
  $view->base_table = 'entityform';
  $view->human_name = 'War Zone: Tournament: Score Cards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  /* Field: Entityform Submission: Round */
  $handler->display->display_options['fields']['field_round_sc']['id'] = 'field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['table'] = 'field_data_field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['field'] = 'field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player 1';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name_1']['id'] = 'field_register_real_name_1';
  $handler->display->display_options['fields']['field_register_real_name_1']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name_1']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name_1']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name_1']['label'] = 'Player 2';
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );

  /* Display: Current Matches */
  $handler = $view->new_display('panel_pane', 'Current Matches', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Matches';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_round_sc' => 'field_round_sc',
    'counter' => 'counter',
    'field_register_real_name' => 'field_register_real_name',
    'field_register_real_name_1' => 'field_register_real_name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_round_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player 1';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name_1']['id'] = 'field_register_real_name_1';
  $handler->display->display_options['fields']['field_register_real_name_1']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name_1']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name_1']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name_1']['label'] = 'Player 2';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Entityform Submission: Round (field_round_sc) */
  $handler->display->display_options['arguments']['field_round_sc_value']['id'] = 'field_round_sc_value';
  $handler->display->display_options['arguments']['field_round_sc_value']['table'] = 'field_data_field_round_sc';
  $handler->display->display_options['arguments']['field_round_sc_value']['field'] = 'field_round_sc_value';
  $handler->display->display_options['arguments']['field_round_sc_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );
  /* Filter criterion: Entityform Submission: Display (field_display_sc) */
  $handler->display->display_options['filters']['field_display_sc_value']['id'] = 'field_display_sc_value';
  $handler->display->display_options['filters']['field_display_sc_value']['table'] = 'field_data_field_display_sc';
  $handler->display->display_options['filters']['field_display_sc_value']['field'] = 'field_display_sc_value';
  $handler->display->display_options['filters']['field_display_sc_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_event_link_target_id' => array(
      'type' => 'none',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Event (field_event_link)',
    ),
    'field_round_sc_value' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Round',
    ),
  );

  /* Display: Current Round Score Cards */
  $handler = $view->new_display('panel_pane', 'Current Round Score Cards', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Score Cards';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_round_sc' => 'field_round_sc',
    'counter' => 'counter',
    'field_register_real_name' => 'field_register_real_name',
    'field_register_real_name_1' => 'field_register_real_name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_round_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'Results';
  /* Field: Entityform Submission: Army Points */
  $handler->display->display_options['fields']['field_army_points_sc']['id'] = 'field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['table'] = 'field_data_field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['field'] = 'field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Victory Points */
  $handler->display->display_options['fields']['field_victory_points_sc']['id'] = 'field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['table'] = 'field_data_field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['field'] = 'field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Sportsmanship */
  $handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Record Scores';
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Record';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Entityform Submission: Round (field_round_sc) */
  $handler->display->display_options['arguments']['field_round_sc_value']['id'] = 'field_round_sc_value';
  $handler->display->display_options['arguments']['field_round_sc_value']['table'] = 'field_data_field_round_sc';
  $handler->display->display_options['arguments']['field_round_sc_value']['field'] = 'field_round_sc_value';
  $handler->display->display_options['arguments']['field_round_sc_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_event_link_target_id' => array(
      'type' => 'none',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Event (field_event_link)',
    ),
    'field_round_sc_value' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Round',
    ),
  );

  /* Display: Painting Score Cards */
  $handler = $view->new_display('panel_pane', 'Painting Score Cards', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Painting Score';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_round_sc' => 'field_round_sc',
    'counter' => 'counter',
    'field_register_real_name' => 'field_register_real_name',
    'field_register_real_name_1' => 'field_register_real_name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_round_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
  /* Field: Entityform Submission: Painting */
  $handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['label'] = 'Painting Score';
  $handler->display->display_options['fields']['field_painting_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Record Scores';
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Record';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );
  /* Filter criterion: Entityform Submission: Score Card Type (field_score_card_type) */
  $handler->display->display_options['filters']['field_score_card_type_value']['id'] = 'field_score_card_type_value';
  $handler->display->display_options['filters']['field_score_card_type_value']['table'] = 'field_data_field_score_card_type';
  $handler->display->display_options['filters']['field_score_card_type_value']['field'] = 'field_score_card_type_value';
  $handler->display->display_options['filters']['field_score_card_type_value']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_event_link_target_id' => array(
      'type' => 'none',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Event (field_event_link)',
    ),
    'field_round_sc_value' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Round',
    ),
  );

  /* Display: Comp Score Cards */
  $handler = $view->new_display('panel_pane', 'Comp Score Cards', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Comp Score';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_round_sc' => 'field_round_sc',
    'counter' => 'counter',
    'field_register_real_name' => 'field_register_real_name',
    'field_register_real_name_1' => 'field_register_real_name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_round_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_register_real_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
  /* Field: Entityform Submission: Comp */
  $handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Record Scores';
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Record';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );
  /* Filter criterion: Entityform Submission: Score Card Type (field_score_card_type) */
  $handler->display->display_options['filters']['field_score_card_type_value']['id'] = 'field_score_card_type_value';
  $handler->display->display_options['filters']['field_score_card_type_value']['table'] = 'field_data_field_score_card_type';
  $handler->display->display_options['filters']['field_score_card_type_value']['field'] = 'field_score_card_type_value';
  $handler->display->display_options['filters']['field_score_card_type_value']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_event_link_target_id' => array(
      'type' => 'none',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Event (field_event_link)',
    ),
    'field_round_sc_value' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Round',
    ),
  );

  /* Display: Generate Battle Reports */
  $handler = $view->new_display('views_rules', 'Generate Battle Reports', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  /* Relationship: Field: Army (field_register_army) */
  $handler->display->display_options['relationships']['field_register_army_tid']['id'] = 'field_register_army_tid';
  $handler->display->display_options['relationships']['field_register_army_tid']['table'] = 'field_data_field_register_army';
  $handler->display->display_options['relationships']['field_register_army_tid']['field'] = 'field_register_army_tid';
  $handler->display->display_options['relationships']['field_register_army_tid']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_register_army_tid']['label'] = 'P2 Army';
  /* Relationship: Field: Army (field_register_army) */
  $handler->display->display_options['relationships']['field_register_army_tid_1']['id'] = 'field_register_army_tid_1';
  $handler->display->display_options['relationships']['field_register_army_tid_1']['table'] = 'field_data_field_register_army';
  $handler->display->display_options['relationships']['field_register_army_tid_1']['field'] = 'field_register_army_tid';
  $handler->display->display_options['relationships']['field_register_army_tid_1']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_register_army_tid_1']['label'] = 'P1 Army';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: User uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'node_registration';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['uid_1']['label'] = 'Player 1';
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_register_army_tid_1';
  $handler->display->display_options['fields']['tid_1']['label'] = 'P1 Army';
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Field: Node registration: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node_registration';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Player 2';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_register_army_tid';
  $handler->display->display_options['fields']['tid']['label'] = 'P2 Army';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'P1 Results';
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'P1 Name';
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name_1']['id'] = 'field_register_real_name_1';
  $handler->display->display_options['fields']['field_register_real_name_1']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name_1']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name_1']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name_1']['label'] = 'P2 Name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Entityform Submission: Round (field_round_sc) */
  $handler->display->display_options['arguments']['field_round_sc_value']['id'] = 'field_round_sc_value';
  $handler->display->display_options['arguments']['field_round_sc_value']['table'] = 'field_data_field_round_sc';
  $handler->display->display_options['arguments']['field_round_sc_value']['field'] = 'field_round_sc_value';
  $handler->display->display_options['arguments']['field_round_sc_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_round_sc_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );
  /* Filter criterion: Entityform Submission: Display (field_display_sc) */
  $handler->display->display_options['filters']['field_display_sc_value']['id'] = 'field_display_sc_value';
  $handler->display->display_options['filters']['field_display_sc_value']['table'] = 'field_data_field_display_sc';
  $handler->display->display_options['filters']['field_display_sc_value']['field'] = 'field_display_sc_value';
  $handler->display->display_options['filters']['field_display_sc_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'field_event_link_target_id' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Field: Event (field_event_link)',
      'name' => 'field_event_link_target_id',
    ),
    'field_round_sc_value' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Entityform Submission: Round (field_round_sc)',
      'name' => 'field_round_sc_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'uid_1' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_opponent_reg_sc) Player 1',
      'name' => 'puid1',
    ),
    'tid_1' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(P1 Army) P1 Army',
      'name' => 'tid_1',
    ),
    'uid' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(Node registration entity referenced from field_opponent_reg_sc) Player 2',
      'name' => 'puid2',
    ),
    'tid' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(P2 Army) P2 Army',
      'name' => 'tid',
    ),
    'field_your_results' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'P1 Results',
      'name' => 'field_your_results',
    ),
    'field_register_real_name' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'P1 Name',
      'name' => 'p1_real_name',
    ),
    'field_register_real_name_1' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'P2 Name',
      'name' => 'p2_real_name',
    ),
  );

  /* Display: Score Card Management */
  $handler = $view->new_display('panel_pane', 'Score Card Management', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Score Cards';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_register_real_name' => 'field_register_real_name',
    'field_your_results' => 'field_your_results',
    'field_army_points_sc' => 'field_army_points_sc',
    'field_victory_points_sc' => 'field_victory_points_sc',
    'field_sportsmanship_sc' => 'field_sportsmanship_sc',
    'field_additional_points_sc' => 'field_additional_points_sc',
    'field_comp_sc' => 'field_comp_sc',
    'field_painting_sc' => 'field_painting_sc',
    'field_phase_sc' => 'field_phase_sc',
    'field_round_sc' => 'field_round_sc',
    'field_score_card_type' => 'field_score_card_type',
    'field_strength_of_schedule_sc' => 'field_strength_of_schedule_sc',
    'edit_entityform' => 'edit_entityform',
  );
  $handler->display->display_options['style_options']['default'] = 'field_register_real_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_register_real_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_army_points_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_victory_points_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_sportsmanship_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_additional_points_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_comp_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_painting_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_phase_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_round_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_score_card_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_strength_of_schedule_sc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'No Results';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Score Cards Available</h3>
<p>This is either because there haven\'t been any score cards generated for this War Zone or your filter criteria has returned zero results.</p>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = 'Player';
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'Results';
  /* Field: Entityform Submission: Army Points */
  $handler->display->display_options['fields']['field_army_points_sc']['id'] = 'field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['table'] = 'field_data_field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['field'] = 'field_army_points_sc';
  $handler->display->display_options['fields']['field_army_points_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Victory Points */
  $handler->display->display_options['fields']['field_victory_points_sc']['id'] = 'field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['table'] = 'field_data_field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['field'] = 'field_victory_points_sc';
  $handler->display->display_options['fields']['field_victory_points_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Sportsmanship */
  $handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Additional Points */
  $handler->display->display_options['fields']['field_additional_points_sc']['id'] = 'field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['table'] = 'field_data_field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['field'] = 'field_additional_points_sc';
  $handler->display->display_options['fields']['field_additional_points_sc']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Comp */
  $handler->display->display_options['fields']['field_comp_sc']['id'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['table'] = 'field_data_field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['field'] = 'field_comp_sc';
  $handler->display->display_options['fields']['field_comp_sc']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Painting */
  $handler->display->display_options['fields']['field_painting_sc']['id'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['table'] = 'field_data_field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['field'] = 'field_painting_sc';
  $handler->display->display_options['fields']['field_painting_sc']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Phase */
  $handler->display->display_options['fields']['field_phase_sc']['id'] = 'field_phase_sc';
  $handler->display->display_options['fields']['field_phase_sc']['table'] = 'field_data_field_phase_sc';
  $handler->display->display_options['fields']['field_phase_sc']['field'] = 'field_phase_sc';
  $handler->display->display_options['fields']['field_phase_sc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phase_sc']['settings'] = array(
    'link' => 0,
  );
  /* Field: Entityform Submission: Round */
  $handler->display->display_options['fields']['field_round_sc']['id'] = 'field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['table'] = 'field_data_field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['field'] = 'field_round_sc';
  $handler->display->display_options['fields']['field_round_sc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_round_sc']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Score Card Type */
  $handler->display->display_options['fields']['field_score_card_type']['id'] = 'field_score_card_type';
  $handler->display->display_options['fields']['field_score_card_type']['table'] = 'field_data_field_score_card_type';
  $handler->display->display_options['fields']['field_score_card_type']['field'] = 'field_score_card_type';
  $handler->display->display_options['fields']['field_score_card_type']['exclude'] = TRUE;
  /* Field: Entityform Submission: Strength of schedule */
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['id'] = 'field_strength_of_schedule_sc';
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['table'] = 'field_data_field_strength_of_schedule_sc';
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['field'] = 'field_strength_of_schedule_sc';
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['label'] = 'SOS';
  $handler->display->display_options['fields']['field_strength_of_schedule_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Record Scores';
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Record';
  /* Field: Entityform Submission: State */
  $handler->display->display_options['fields']['field_state_sc']['id'] = 'field_state_sc';
  $handler->display->display_options['fields']['field_state_sc']['table'] = 'field_data_field_state_sc';
  $handler->display->display_options['fields']['field_state_sc']['field'] = 'field_state_sc';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Real Name (field_register_real_name) */
  $handler->display->display_options['sorts']['field_register_real_name_value']['id'] = 'field_register_real_name_value';
  $handler->display->display_options['sorts']['field_register_real_name_value']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['sorts']['field_register_real_name_value']['field'] = 'field_register_real_name_value';
  $handler->display->display_options['sorts']['field_register_real_name_value']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Event (field_event_link) */
  $handler->display->display_options['arguments']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['arguments']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_link_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_link_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'score_card' => 'score_card',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Real Name (field_register_real_name) (selective) */
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['id'] = 'field_register_real_name_value_selective';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['field'] = 'field_register_real_name_value_selective';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['ui_name'] = 'Real Name (field_register_real_name) (selective)';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['expose']['description'] = 'Player';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['expose']['identifier'] = 'field_register_real_name_value_selective';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['selective_display_field'] = 'field_register_real_name';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_register_real_name_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Score Card Type (field_score_card_type) (selective) */
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['id'] = 'field_score_card_type_value_selective';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['table'] = 'field_data_field_score_card_type';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['field'] = 'field_score_card_type_value_selective';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['ui_name'] = 'Score Card Type (field_score_card_type) (selective)';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['expose']['description'] = 'Score Card Type';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['expose']['identifier'] = 'field_score_card_type_value_selective';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['selective_display_field'] = 'field_score_card_type';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_score_card_type_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Round (field_round_sc) (selective) */
  $handler->display->display_options['filters']['field_round_sc_value_selective']['id'] = 'field_round_sc_value_selective';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['table'] = 'field_data_field_round_sc';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['field'] = 'field_round_sc_value_selective';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['ui_name'] = 'Round (field_round_sc) (selective)';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_round_sc_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_round_sc_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['expose']['description'] = 'Round';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['expose']['identifier'] = 'field_round_sc_value_selective';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_round_sc_value_selective']['selective_display_field'] = 'field_round_sc';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_round_sc_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Phase (field_phase_sc) (selective) */
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['id'] = 'field_phase_sc_target_id_selective';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['table'] = 'field_data_field_phase_sc';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['field'] = 'field_phase_sc_target_id_selective';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['ui_name'] = 'Phase (field_phase_sc) (selective)';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['expose']['description'] = 'Phase';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['expose']['identifier'] = 'field_phase_sc_target_id_selective';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['selective_display_field'] = 'field_phase_sc';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_phase_sc_target_id_selective']['selective_items_limit'] = '100';
  /* Filter criterion: State (field_state_sc) (selective) */
  $handler->display->display_options['filters']['field_state_sc_value_selective']['id'] = 'field_state_sc_value_selective';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['table'] = 'field_data_field_state_sc';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['field'] = 'field_state_sc_value_selective';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['ui_name'] = 'State (field_state_sc) (selective)';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_state_sc_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['expose']['description'] = 'Scorecard State';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['expose']['identifier'] = 'field_state_sc_value_selective';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_state_sc_value_selective']['selective_display_field'] = 'field_state_sc';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_state_sc_value_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_event_link_target_id' => array(
      'type' => 'none',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Event (field_event_link)',
    ),
    'field_round_sc_value' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Round',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Strength of Schedule */
  $handler = $view->new_display('views_rules', 'Strength of Schedule', 'views_rules_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['label'] = 'opponent';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Victory */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['type'] = 'computed_field_computed_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Node registration: Registration ID */
  $handler->display->display_options['arguments']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['arguments']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['arguments']['registration_id']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['arguments']['registration_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['registration_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['registration_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['registration_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['rules_parameter'] = array(
    'registration_id' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Opponent',
      'name' => 'opponent_id',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_victory' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Victory',
      'name' => 'field_victory',
    ),
  );

  /* Display: Opponents */
  $handler = $view->new_display('views_rules', 'Opponents', 'views_rules_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['id'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['table'] = 'field_data_field_opponent_reg_sc';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['field'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['label'] = 'opponent';
  $handler->display->display_options['relationships']['field_opponent_reg_sc_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['label'] = 'Player 1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'field_opponent_reg_sc_target_id';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Node registration: Registration ID */
  $handler->display->display_options['arguments']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['arguments']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['arguments']['registration_id']['relationship'] = 'field_registration_sc_target_id';
  $handler->display->display_options['arguments']['registration_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['registration_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['registration_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['registration_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['rules_parameter'] = array(
    'registration_id' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Player',
      'name' => 'player_id',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(opponent) Registration ID',
      'name' => 'registration_id',
    ),
  );
  $export['war_zone_tournament_score_cards'] = $view;

  $view = new view();
  $view->name = 'war_zone_tourney_registrations';
  $view->description = 'Scoring rules for Tournaments';
  $view->tag = 'War Zones 4.1, Rules';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: Tournament: Scoring Rules';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'email' => 'email',
    'registration_id' => 'registration_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['id'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['field'] = 'reverse_field_registration_sc_entityform';
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
  /* Sort criterion: SUM(Entityform Submission: Aggregate Score (field_aggregate_score_sc)) */
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['id'] = 'field_aggregate_score_sc_value';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['table'] = 'field_data_field_aggregate_score_sc';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['field'] = 'field_aggregate_score_sc_value';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['relationship'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_aggregate_score_sc_value']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Node registration: Node nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';
  /* Filter criterion: Node registration: Attended */
  $handler->display->display_options['filters']['attended']['id'] = 'attended';
  $handler->display->display_options['filters']['attended']['table'] = 'node_registration';
  $handler->display->display_options['filters']['attended']['field'] = 'attended';
  $handler->display->display_options['filters']['attended']['value'] = '1';

  /* Display: Matches */
  $handler = $view->new_display('views_rules', 'Matches', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: SUM(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['relationship'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
  /* Sort criterion: SUM(Entityform Submission: Victory Points (field_victory_points_sc)) */
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['id'] = 'field_victory_points_sc_value';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['table'] = 'field_data_field_victory_points_sc';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['field'] = 'field_victory_points_sc_value';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['relationship'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_victory_points_sc_value']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Node nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'registration_id' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'Registration ID',
      'name' => 'registration_id',
    ),
    'field_register_real_name' => array(
      'enabled' => 0,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Real Name',
      'name' => 'field_register_real_name',
    ),
    'uid' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'User uid',
      'name' => 'uid',
    ),
    'field_aggregate_score_sc' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => '(Entityform Submission referencing Node registration from field_registration_sc) Aggregate Score',
      'name' => 'field_aggregate_score_sc',
    ),
  );

  /* Display: Opponent List */
  $handler = $view->new_display('views_rules', 'Opponent List', 'views_rules_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['id'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['field'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['relationships']['reverse_field_registration_sc_entityform']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Opponent Registration */
  $handler->display->display_options['fields']['field_opponent_reg_sc']['id'] = 'field_opponent_reg_sc';
  $handler->display->display_options['fields']['field_opponent_reg_sc']['table'] = 'field_data_field_opponent_reg_sc';
  $handler->display->display_options['fields']['field_opponent_reg_sc']['field'] = 'field_opponent_reg_sc';
  $handler->display->display_options['fields']['field_opponent_reg_sc']['relationship'] = 'reverse_field_registration_sc_entityform';
  $handler->display->display_options['fields']['field_opponent_reg_sc']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_opponent_reg_sc']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Node registration: Registration ID */
  $handler->display->display_options['arguments']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['arguments']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['arguments']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['arguments']['registration_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['registration_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['registration_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['registration_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['rules_parameter'] = array(
    'registration_id' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Node registration: Registration ID',
      'name' => 'registration_id',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'registration_id' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Opponent ID',
      'name' => 'opponent_id',
    ),
    'field_opponent_reg_sc' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => '(Entityform Submission referencing Node registration from field_registration_sc) Opponent Registration',
      'name' => 'field_opponent_reg_sc',
    ),
  );
  $export['war_zone_tourney_registrations'] = $view;

  $view = new view();
  $view->name = 'warzone_all_awards';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Warzone: ALL: Awards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Awards';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = 'list-group';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_award_registration_target_id']['id'] = 'field_award_registration_target_id';
  $handler->display->display_options['relationships']['field_award_registration_target_id']['table'] = 'field_data_field_award_registration';
  $handler->display->display_options['relationships']['field_award_registration_target_id']['field'] = 'field_award_registration_target_id';
  $handler->display->display_options['relationships']['field_award_registration_target_id']['label'] = 'Node registration entity referenced from field_award_registration';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_award_achievement_target_id']['id'] = 'field_award_achievement_target_id';
  $handler->display->display_options['relationships']['field_award_achievement_target_id']['table'] = 'field_data_field_award_achievement';
  $handler->display->display_options['relationships']['field_award_achievement_target_id']['field'] = 'field_award_achievement_target_id';
  $handler->display->display_options['relationships']['field_award_achievement_target_id']['label'] = 'Content entity referenced from field_award_achievement';
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'field_award_registration_target_id';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: Field: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['relationship'] = 'field_award_registration_target_id';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = '';
  $handler->display->display_options['fields']['field_register_real_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_register_real_name']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_award_achievement_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'uc_thumbnail',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  /* Field: Node registration: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node_registration';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_award_registration_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['uid']['empty'] = '[field_register_real_name]';
  $handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_award_achievement_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'field_awards_competitive' => 'field_awards_competitive',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'War Zones';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['warzone_all_awards'] = $view;

  return $export;
}
