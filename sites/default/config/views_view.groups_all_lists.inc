<?php
/**
 * @file
 * views_view.groups_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'groups_all_lists';
$view->description = 'Assorted list of Clubs';
$view->tag = 'Clubs 1.0';
$view->base_table = 'node';
$view->human_name = 'Groups: All: Lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'All Clubs';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'field_supported_games_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'field_geofield_distance' => array(
    'bef_format' => 'default',
    'slider_options' => array(
      'bef_slider_min' => '0',
      'bef_slider_max' => '99999',
      'bef_slider_step' => '1',
      'bef_slider_animate' => '',
      'bef_slider_orientation' => 'horizontal',
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'secondary_label' => NULL,
  'collapsible_label' => NULL,
  'combine_rewrite' => NULL,
  'reset_label' => NULL,
  'bef_filter_description' => NULL,
  'any_label' => NULL,
  'filter_rewrite_values' => NULL,
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<h3>No Results Found</h3>
<p>There are no gaming clubs that match your criteria.</p>
<p>Is your gaming club represented on iToysoldiers? It should be.  Get started now.</p>';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
/* Relationship: Field: Battlefield (field_location) */
$handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
$handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Content: Supported Games */
$handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
$handler->display->display_options['fields']['field_supported_games']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_supported_games']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'gaming_club' => 'gaming_club',
);
$handler->display->display_options['filters']['type']['group'] = 1;
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
  'origin' => '',
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
/* Filter criterion: Supported Games (field_supported_games) (selective) */
$handler->display->display_options['filters']['field_supported_games_tid_selective']['id'] = 'field_supported_games_tid_selective';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['table'] = 'field_data_field_supported_games';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['field'] = 'field_supported_games_tid_selective';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['ui_name'] = 'Supported Games (field_supported_games) (selective)';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_supported_games_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['description'] = 'filter by games the club plays';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['identifier'] = 'field_supported_games_tid_selective';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_supported_games_tid_selective']['selective_display_field'] = 'field_supported_games';
$handler->display->display_options['filters']['field_supported_games_tid_selective']['selective_display_sort'] = 'ASC';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['path'] = 'order-of-battle/gaming-clubs/list';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All Clubs';
$handler->display->display_options['menu']['description'] = 'List of all Gaming Clubs on iToysoldiers';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Featured Clubs';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
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
  'gaming_club' => 'gaming_club',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['pane_category']['name'] = 'Organic Groups';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'views_content',
);
