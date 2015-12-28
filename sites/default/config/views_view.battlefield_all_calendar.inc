<?php
/**
 * @file
 * views_view.battlefield_all_calendar.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'battlefield_all_calendar';
$view->description = 'Generates the calendar for Battlefields.';
$view->tag = 'Battlefields 2.0';
$view->base_table = 'node';
$view->human_name = 'Battlefield: All: Calendar';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Calendar';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['date_id'] = 'month';
$handler->display->display_options['style_plugin'] = 'calendar_style';
$handler->display->display_options['style_options']['name_size'] = '3';
$handler->display->display_options['style_options']['mini'] = '0';
$handler->display->display_options['style_options']['with_weekno'] = '0';
$handler->display->display_options['style_options']['multiday_theme'] = '0';
$handler->display->display_options['style_options']['theme_style'] = '1';
$handler->display->display_options['style_options']['max_items'] = '0';
$handler->display->display_options['row_plugin'] = 'calendar_entity';
$handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
$handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
  'achievement' => '#ffffff',
  'army_profile' => '#ffffff',
  'article' => '#ffffff',
  'game_results' => '#ffffff',
  'location' => '#ffffff',
  'blog' => '#ffffff',
  'challenge' => '#ffffff',
  'club' => '#ffffff',
  'event' => '#ffffff',
  'faq' => '#ffffff',
  'gallery' => '#ffffff',
  'game_result_system_' => '#ffffff',
  'war_zone_league' => '#ffffff',
  'listcrit' => '#ffffff',
  'narrative_campaign' => '#ffffff',
  'product' => '#ffffff',
  'question' => '#ffffff',
  'remote_blog' => '#ffffff',
  'simplenews' => '#ffffff',
  'special_event' => '#ffffff',
  'war_zone_tournament' => '#ffffff',
  'tournament_score_card' => '#ffffff',
  'webform' => '#ffffff',
);
$handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_type';
$handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
  'field_event_type' => '9',
);
$handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
  152 => '#A52A2A',
  1030 => '#4866ba',
  163 => '#00FF00',
  1029 => '#456149',
  1028 => '#e1f27f',
  158 => '#0000FF',
  1034 => '#1649d2',
  1032 => '#ffffff',
  1033 => '#ffffff',
  1031 => '#ffffff',
  154 => '#FF00FF',
  212 => '#ffffff',
  153 => '#FF0000',
);
$handler->display->display_options['row_options']['colors']['calendar_colors_group'] = array(
  4559 => '#ffffff',
);
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'event_time',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
/* Sort criterion: Content: Date -  start date (field_event_date) */
$handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'achievement' => 'achievement',
  'event' => 'event',
  'war_zone_league' => 'war_zone_league',
  'special_event' => 'special_event',
);
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Type';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_type';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';

/* Display: Battlefield: Upcoming Events */
$handler = $view->new_display('panel_pane', 'Battlefield: Upcoming Events', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Upcoming Events';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'See more';
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['link_url'] = 'node/!1/calendar';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix list-group';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No scheduled events found.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
$handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left iconbuffer';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['empty'] = '[field_campaign_badge]';
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'medium',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
/* Field: Content: Event type */
$handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
$handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
$handler->display->display_options['fields']['field_event_type']['label'] = '';
$handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_games_played']['id'] = 'field_games_played';
$handler->display->display_options['fields']['field_games_played']['table'] = 'field_data_field_games_played';
$handler->display->display_options['fields']['field_games_played']['field'] = 'field_games_played';
$handler->display->display_options['fields']['field_games_played']['label'] = '';
$handler->display->display_options['fields']['field_games_played']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_games_played']['element_label_colon'] = FALSE;
/* Field: Field: Game */
$handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
$handler->display->display_options['fields']['field_game_warzone']['label'] = '';
$handler->display->display_options['fields']['field_game_warzone']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_game_warzone']['empty'] = '[field_games_played]';
$handler->display->display_options['fields']['field_game_warzone']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Register link */
$handler->display->display_options['fields']['register_link']['id'] = 'register_link';
$handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['register_link']['field'] = 'register_link';
$handler->display->display_options['fields']['register_link']['label'] = '';
$handler->display->display_options['fields']['register_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['text'] = 'Details';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
  <div class="pull-right"><strong>[field_event_date]</strong></div>
  <div><h4>[title]</h4></div>
</div>

<div>
  <div class="pull-right">
    <ul class="nav nav-pills">
      <li role="presentation">[register_link]</li>
      <li role="presentation">[view_node]</li>
    </ul>
  </div>
  <div>
    <strong>[field_event_type]</strong><br>
    [field_game_warzone]
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Battlefield (field_location) */
$handler->display->display_options['arguments']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['arguments']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['arguments']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['arguments']['field_location_nid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_location_nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_location_nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_location_nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_location_nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
  'war_zone_league' => 'war_zone_league',
  'league' => 'league',
  'narrative_campaign_instance' => 'narrative_campaign_instance',
  'special_event' => 'special_event',
  'war_zone_tournament' => 'war_zone_tournament',
);
/* Filter criterion: Content: Date -  start date (field_event_date) */
$handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
$handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
$handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-0:+3';
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'field_location_nid' => array(
    'type' => 'panel',
    'context' => 'entity:node.nid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Location (field_location)',
  ),
);

/* Display: Battlefield Calendar */
$handler = $view->new_display('panel_pane', 'Battlefield Calendar', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Battlefield (field_location) */
$handler->display->display_options['arguments']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['arguments']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['arguments']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['arguments']['field_location_nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_location_nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_location_nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_location_nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_location_nid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
);
$handler->display->display_options['pane_category']['name'] = 'Battlefields';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'date',
  4 => 'views_content',
  5 => 'image',
);
