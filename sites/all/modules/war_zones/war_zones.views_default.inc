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
  $view->name = 'war_zone_all_achievements';
  $view->description = '';
  $view->tag = 'default';
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-12">
<div class="media">
<span class="pull-left iconbuffer">[picture]</span>
<div class="media-body">
<h4 class="media-heading">[name]</h4>
<strong>[title]</strong><br>
[field_short_description]
<div class="seperator"></div>
</div>
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
  $view->description = '';
  $view->tag = 'default';
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
  /* Field: Content: Rendered Node */
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
  $view->name = 'war_zone_all_in_progress_score';
  $view->description = '';
  $view->tag = 'default';
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
  $handler->display->display_options['fields']['field_battle_points_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'War Zones';
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
  $export['war_zone_all_lists'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message_type';
  $view->human_name = 'War Zone: All: Messages';
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
  /* Field: Message type: Internal, numeric message type ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'message_type';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $export['war_zone_all_messages'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_news';
  $view->description = '';
  $view->tag = 'default';
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
  /* Contextual filter: Content: Related to (field_attach_to) */
  $handler->display->display_options['arguments']['field_attach_to_target_id']['id'] = 'field_attach_to_target_id';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['table'] = 'field_data_field_attach_to';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['field'] = 'field_attach_to_target_id';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_attach_to_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_attach_to_target_id']['validate_options']['types'] = array(
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  $handler->display->display_options['arguments']['field_attach_to_target_id']['validate']['fail'] = 'empty';
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
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Page View */
  $handler = $view->new_display('panel_pane', 'Page View', 'panel_pane_2');
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
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'War Zone: All: Page Layout';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
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
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['type'] = 'lightbox2__lightbox__medium__original';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_warzone_game']['id'] = 'field_warzone_game';
  $handler->display->display_options['fields']['field_warzone_game']['table'] = 'field_data_field_warzone_game';
  $handler->display->display_options['fields']['field_warzone_game']['field'] = 'field_warzone_game';
  $handler->display->display_options['fields']['field_warzone_game']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['fields']['field_warzone_game']['label'] = '';
  $handler->display->display_options['fields']['field_warzone_game']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_warzone_game']['element_label_colon'] = FALSE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* Field: Field: Game */
  $handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_game_warzone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-6 col-sm-12 col-md-6 text-center">
<span class="thumbnail">[field_campaign_badge]</span>
</div>
<div class="col-xs-6 col-sm-12 col-md-6">
<strong>[field_game_warzone]</strong></br>
<small>[field_event_type]</small></br>
<small>Salutes <span class="badge">[count]</span></small>
</div>
';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['id'] = 'reverse_field_stream_node_ref_message';
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_stream_node_ref_message']['field'] = 'reverse_field_stream_node_ref_message';
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
  $handler->display->display_options['title'] = 'Summary';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_type']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_event_type']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_type']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  /* Field: Field: Game */
  $handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['fields']['field_game_warzone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_game_warzone']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_game_warzone']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_game_warzone']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_warzone']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_event_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_date']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_location']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  /* Field: Content: Entry Fee */
  $handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_entry_fee']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_entry_fee']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_entry_fee']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_entry_fee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_fee']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entry_fee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_entry_fee']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = 'More Info';
  $handler->display->display_options['fields']['field_website']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_website']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_website']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_website']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: Available slots */
  $handler->display->display_options['fields']['registration_available_slots']['id'] = 'registration_available_slots';
  $handler->display->display_options['fields']['registration_available_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_available_slots']['field'] = 'registration_available_slots';
  $handler->display->display_options['fields']['registration_available_slots']['element_type'] = 'div';
  $handler->display->display_options['fields']['registration_available_slots']['element_class'] = 'lead';
  $handler->display->display_options['fields']['registration_available_slots']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['registration_available_slots']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['registration_available_slots']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_available_slots']['unlimited_text'] = 'Unlimited';
  /* Field: Content: Used slots */
  $handler->display->display_options['fields']['registration_used_slots']['id'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['table'] = 'node';
  $handler->display->display_options['fields']['registration_used_slots']['field'] = 'registration_used_slots';
  $handler->display->display_options['fields']['registration_used_slots']['label'] = 'Registered Players';
  $handler->display->display_options['fields']['registration_used_slots']['element_type'] = 'div';
  $handler->display->display_options['fields']['registration_used_slots']['element_class'] = 'lead';
  $handler->display->display_options['fields']['registration_used_slots']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['registration_used_slots']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['registration_used_slots']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_used_slots']['element_default_classes'] = FALSE;
  /* Field: Content: Registration Deadline */
  $handler->display->display_options['fields']['field_registration_deadline']['id'] = 'field_registration_deadline';
  $handler->display->display_options['fields']['field_registration_deadline']['table'] = 'field_data_field_registration_deadline';
  $handler->display->display_options['fields']['field_registration_deadline']['field'] = 'field_registration_deadline';
  $handler->display->display_options['fields']['field_registration_deadline']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_registration_deadline']['element_class'] = 'lead';
  $handler->display->display_options['fields']['field_registration_deadline']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_registration_deadline']['element_label_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_registration_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registration_deadline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_registration_deadline']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_registration_deadline']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_registration_deadline']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['pane_category']['name'] = 'War Zone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Organizer */
  $handler = $view->new_display('panel_pane', 'Organizer', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organizer';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
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
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$value = "";
$target = user_load($row->uid);
$url = privatemsg_get_link($target);
if (!empty($url)) {
  $link = l(t(\'Message\'), $url, array(\'query\' => drupal_get_destination()));
  $value = $link;
}
return $value;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print $value;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
  <div class="pull-left iconbuffer">[picture]</div>
  <div class="media-body">
    <h4 class="media-heading">[name]</h4>
    [ops] [php] 
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
  $export['war_zone_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_platers';
  $view->description = '';
  $view->tag = 'default';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pull-left col-md-4 col-xs-12 col-sm-4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Node registration: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Node registration: Real Name */
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
  /* Field: Node registration: Army */
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel panel-default">
<div class="panel-body">
<div class="pull-left iconbuffer">
[picture]
</div>
<strong>[name]</strong><br>
<small class="text-muted">[field_register_army]</small>
</div>
</div>
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
  $view->name = 'war_zone_all_player_final_scores';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'War Zone: All: Player Final Scores';
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
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['id'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['table'] = 'field_data_field_registration_sc';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['field'] = 'field_registration_sc_target_id';
  $handler->display->display_options['relationships']['field_registration_sc_target_id']['required'] = TRUE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'reverse_field_register_faction_node_registration';
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
  $handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
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
  /* Field: SUM(Entityform Submission: Battle Points) */
  $handler->display->display_options['fields']['field_battle_points_sc']['id'] = 'field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['table'] = 'field_data_field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['field'] = 'field_battle_points_sc';
  $handler->display->display_options['fields']['field_battle_points_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_battle_points_sc']['settings'] = array(
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
  /* Field: SUM(Entityform Submission: Sportsmanship) */
  $handler->display->display_options['fields']['field_sportsmanship_sc']['id'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['table'] = 'field_data_field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['field'] = 'field_sportsmanship_sc';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_sportsmanship_sc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_event_link_target_id';
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
  $export['war_zone_all_player_final_scores'] = $view;

  $view = new view();
  $view->name = 'war_zone_all_registration';
  $view->description = '';
  $view->tag = 'node_registration';
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
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_registration_cancel_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_registration_send_mail_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_registration_unattend_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_registration_unverify_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_registration_verify_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
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
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_registration_send_mail_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
    'action::node_registration_unverify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_registration_unwait_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Move out of waiting list',
    ),
    'rules_component::rules_update_game_result' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_registration_verify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
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
  /* Field: Node registration: Real Name */
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
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_registration';
  $view->human_name = 'War Zone: All: Registrations';
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
  /* Field: Node registration: Real Name */
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
  /* Field: Node registration: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['label'] = '';
  $handler->display->display_options['fields']['field_register_real_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_register_real_name']['alter']['text'] = '([field_register_real_name])';
  $handler->display->display_options['fields']['field_register_real_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_register_real_name']['empty'] = 'real name not provided';

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
  $view->name = 'war_zone_email_player_rules';
  $view->description = '';
  $view->tag = 'default';
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
  /* Field: Node registration: Real Name */
  $handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
  $handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
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
    'field_register_real_name' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Real Name',
      'name' => 'field_register_real_name',
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
  /* Field: Node registration: Real Name */
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
  /* Field: Node registration: Real Name */
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
  $export['war_zone_email_player_rules'] = $view;

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
  /* Field: Content: League Type */
  $handler->display->display_options['fields']['field_league_type']['id'] = 'field_league_type';
  $handler->display->display_options['fields']['field_league_type']['table'] = 'field_data_field_league_type';
  $handler->display->display_options['fields']['field_league_type']['field'] = 'field_league_type';
  $handler->display->display_options['fields']['field_league_type']['label'] = '';
  $handler->display->display_options['fields']['field_league_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_league_type']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_league_type']['element_label_colon'] = FALSE;
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
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '([field_address-locality], [field_address-administrative_area], [field_address-country])';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
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
  /* Filter criterion: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_address_locality']['group_info']['label'] = 'Address (field_address:locality)';
  $handler->display->display_options['filters']['field_address_locality']['group_info']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_address_locality']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: League Page */
  $handler = $view->new_display('page', 'League Page', 'page_1');
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
    'league' => 'league',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_address_locality']['group_info']['label'] = 'Address (field_address:locality)';
  $handler->display->display_options['filters']['field_address_locality']['group_info']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_address_locality']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'warzone/leagues';
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
  /* Filter criterion: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_address_locality']['group_info']['label'] = 'Address (field_address:locality)';
  $handler->display->display_options['filters']['field_address_locality']['group_info']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_address_locality']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'warzone/tournaments';
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
  $handler->display->display_options['path'] = 'warzone/all';

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
  /* Filter criterion: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_address_locality']['group_info']['label'] = 'Address (field_address:locality)';
  $handler->display->display_options['filters']['field_address_locality']['group_info']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_address_locality']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'warzone/narrative-campaigns/operational';
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

  return $export;
}
