<?php
/**
 * @file
 * views_view.war_zone_all_achievements.inc
 */

$api = '2.0.0';

$data = $view = new view();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'relation',
  2 => 'image',
  3 => 'text',
  4 => 'views_content',
);
