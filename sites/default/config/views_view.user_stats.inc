<?php
/**
 * @file
 * views_view.user_stats.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'user_stats';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'User: Stats';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 1,
    'secondary_label' => 'Additional Filters',
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'field_game_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_your_army_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_points_per_army_value_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_your_results_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_opponent_s_army_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_batteresult_commander_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_your_commander_survival_value_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_battleresult_enemy_command_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_enemy_commander_survival_value_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_battle_deployment_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_mission_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_battle_mission_rules_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_battle_my_vc_tid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_location_nid_selective' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'field_game_date_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 1,
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
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
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
  'secondary_label' => NULL,
  'collapsible_label' => NULL,
  'combine_rewrite' => NULL,
  'reset_label' => NULL,
  'bef_filter_description' => NULL,
  'any_label' => NULL,
  'filter_rewrite_values' => NULL,
);
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_aggregator';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'field_opponent_s_army' => 'field_opponent_s_army',
  'nid' => 'nid',
  'field_victory' => 'field_victory',
  'field_draw' => 'field_draw',
  'field_defeat' => 'field_defeat',
  'field_your_results' => 'field_your_results',
  'field_battle_deployment' => 'field_battle_deployment',
  'field_mission' => 'field_mission',
  'field_battle_mission_rules' => 'field_battle_mission_rules',
  'field_batteresult_commander' => 'field_batteresult_commander',
  'field_your_commander_survival' => 'field_your_commander_survival',
  'field_battleresult_enemy_command' => 'field_battleresult_enemy_command',
  'field_enemy_commander_survival' => 'field_enemy_commander_survival',
  'field_battle_my_vc' => 'field_battle_my_vc',
  'field_points_per_army' => 'field_points_per_army',
  'field_your_army' => 'field_your_army',
  'field_game' => 'field_game',
  'field_location' => 'field_location',
  'name' => 'name',
);
$handler->display->display_options['style_options']['default'] = 'field_your_results';
$handler->display->display_options['style_options']['info'] = array(
  'field_opponent_s_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 1,
    'aggr' => array(
      'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_count',
    'aggr_par_column' => '',
  ),
  'field_victory' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_draw' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_defeat' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_your_results' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_average',
    'aggr_par_column' => '',
  ),
  'field_battle_deployment' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_mission' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_battle_mission_rules' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_batteresult_commander' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_your_commander_survival' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_battleresult_enemy_command' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_enemy_commander_survival' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_battle_my_vc' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_points_per_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_your_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_game' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_location' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<div class="panel-body">
<h3>Insufficient Battle Results</h3>

<p>There are not enough battle results that match the criteria.</p>

<a href="/node/add/game-results" class="btn btn-default">Submit Battle</a>
</div>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
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
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_game_reference_node';
/* Field: Field: Opponent's Army */
$handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '# Battles';
/* Field: Field: Victory */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
/* Field: Field: Draw */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
/* Field: Field: Defeat */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Field: Content: Deployment */
$handler->display->display_options['fields']['field_battle_deployment']['id'] = 'field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['table'] = 'field_data_field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['field'] = 'field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['label'] = '';
$handler->display->display_options['fields']['field_battle_deployment']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_battle_deployment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_battle_deployment']['type'] = 'taxonomy_term_reference_plain';
/* Field: Field: Mission */
$handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
$handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mission']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Mission Rules in Effect */
$handler->display->display_options['fields']['field_battle_mission_rules']['id'] = 'field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['table'] = 'field_data_field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['field'] = 'field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_battle_mission_rules']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_battle_mission_rules']['delta_offset'] = '0';
/* Field: Content: Commander */
$handler->display->display_options['fields']['field_batteresult_commander']['id'] = 'field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['table'] = 'field_data_field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['field'] = 'field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['label'] = 'Player Commander';
$handler->display->display_options['fields']['field_batteresult_commander']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_batteresult_commander']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Your Commander Survival */
$handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['exclude'] = TRUE;
/* Field: Content: Enemy Commander */
$handler->display->display_options['fields']['field_battleresult_enemy_command']['id'] = 'field_battleresult_enemy_command';
$handler->display->display_options['fields']['field_battleresult_enemy_command']['table'] = 'field_data_field_battleresult_enemy_command';
$handler->display->display_options['fields']['field_battleresult_enemy_command']['field'] = 'field_battleresult_enemy_command';
$handler->display->display_options['fields']['field_battleresult_enemy_command']['label'] = 'Opponent Commander';
$handler->display->display_options['fields']['field_battleresult_enemy_command']['exclude'] = TRUE;
/* Field: Content: Enemy Commander Survival */
$handler->display->display_options['fields']['field_enemy_commander_survival']['id'] = 'field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['table'] = 'field_data_field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['field'] = 'field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['exclude'] = TRUE;
/* Field: Content: My Victory Conditions met */
$handler->display->display_options['fields']['field_battle_my_vc']['id'] = 'field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['table'] = 'field_data_field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['field'] = 'field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_battle_my_vc']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_battle_my_vc']['delta_offset'] = '0';
/* Field: Field: Points per army */
$handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_points_per_army']['type'] = 'number_unformatted';
$handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 0,
);
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_game']['id'] = 'field_game';
$handler->display->display_options['fields']['field_game']['table'] = 'field_data_field_game';
$handler->display->display_options['fields']['field_game']['field'] = 'field_game';
$handler->display->display_options['fields']['field_game']['label'] = 'Game';
$handler->display->display_options['fields']['field_game']['exclude'] = TRUE;
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Opponent';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_game_tid_selective']['id'] = 'field_game_tid_selective';
$handler->display->display_options['filters']['field_game_tid_selective']['table'] = 'field_data_field_game';
$handler->display->display_options['filters']['field_game_tid_selective']['field'] = 'field_game_tid_selective';
$handler->display->display_options['filters']['field_game_tid_selective']['ui_name'] = 'Game (field_game) (selective)';
$handler->display->display_options['filters']['field_game_tid_selective']['operator'] = 'in';
$handler->display->display_options['filters']['field_game_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_game_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_game_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_game_tid_selective']['expose']['label'] = 'Game';
$handler->display->display_options['filters']['field_game_tid_selective']['expose']['identifier'] = 'field_game_tid_selective';
$handler->display->display_options['filters']['field_game_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
/* Filter criterion: Your Army (field_your_army) (selective) */
$handler->display->display_options['filters']['field_your_army_tid_selective']['id'] = 'field_your_army_tid_selective';
$handler->display->display_options['filters']['field_your_army_tid_selective']['table'] = 'field_data_field_your_army';
$handler->display->display_options['filters']['field_your_army_tid_selective']['field'] = 'field_your_army_tid_selective';
$handler->display->display_options['filters']['field_your_army_tid_selective']['ui_name'] = 'Your Army (field_your_army) (selective)';
$handler->display->display_options['filters']['field_your_army_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_your_army_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_your_army_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_your_army_tid_selective']['expose']['label'] = 'Player\'s Army';
$handler->display->display_options['filters']['field_your_army_tid_selective']['expose']['identifier'] = 'field_your_army_tid_selective';
$handler->display->display_options['filters']['field_your_army_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_your_army_tid_selective']['selective_display_field'] = 'field_your_army';
$handler->display->display_options['filters']['field_your_army_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Points per army (field_points_per_army) (selective) */
$handler->display->display_options['filters']['field_points_per_army_value_selective']['id'] = 'field_points_per_army_value_selective';
$handler->display->display_options['filters']['field_points_per_army_value_selective']['table'] = 'field_data_field_points_per_army';
$handler->display->display_options['filters']['field_points_per_army_value_selective']['field'] = 'field_points_per_army_value_selective';
$handler->display->display_options['filters']['field_points_per_army_value_selective']['ui_name'] = 'Points per army (field_points_per_army) (selective)';
$handler->display->display_options['filters']['field_points_per_army_value_selective']['group'] = 1;
$handler->display->display_options['filters']['field_points_per_army_value_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_points_per_army_value_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_points_per_army_value_selective']['expose']['label'] = 'Points per army';
$handler->display->display_options['filters']['field_points_per_army_value_selective']['expose']['identifier'] = 'field_points_per_army_value_selective';
$handler->display->display_options['filters']['field_points_per_army_value_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_points_per_army_value_selective']['selective_display_field'] = 'field_points_per_army';
$handler->display->display_options['filters']['field_points_per_army_value_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Field: Your Results (field_your_results) */
$handler->display->display_options['filters']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['filters']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['filters']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['filters']['field_your_results_value']['group'] = 1;
$handler->display->display_options['filters']['field_your_results_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_your_results_value']['expose']['operator_id'] = 'field_your_results_value_op';
$handler->display->display_options['filters']['field_your_results_value']['expose']['label'] = 'Player\'s Results';
$handler->display->display_options['filters']['field_your_results_value']['expose']['operator'] = 'field_your_results_value_op';
$handler->display->display_options['filters']['field_your_results_value']['expose']['identifier'] = 'field_your_results_value';
$handler->display->display_options['filters']['field_your_results_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
/* Filter criterion: Opponent&amp;#039;s Army (field_opponent_s_army) (selective) */
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['id'] = 'field_opponent_s_army_tid_selective';
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['field'] = 'field_opponent_s_army_tid_selective';
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['ui_name'] = 'Opponent&#039;s Army (field_opponent_s_army) (selective)';
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['expose']['label'] = 'Opponent\'s Army';
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['expose']['identifier'] = 'field_opponent_s_army_tid_selective';
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['selective_display_field'] = 'field_opponent_s_army';
$handler->display->display_options['filters']['field_opponent_s_army_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Commander (field_batteresult_commander) (selective) */
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['id'] = 'field_batteresult_commander_tid_selective';
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['table'] = 'field_data_field_batteresult_commander';
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['field'] = 'field_batteresult_commander_tid_selective';
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['ui_name'] = 'Commander (field_batteresult_commander) (selective)';
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['expose']['label'] = 'Player\'s Commander';
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['expose']['identifier'] = 'field_batteresult_commander_tid_selective';
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['selective_display_field'] = 'field_batteresult_commander';
$handler->display->display_options['filters']['field_batteresult_commander_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Your Commander Survival (field_your_commander_survival) (selective) */
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['id'] = 'field_your_commander_survival_value_selective';
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['field'] = 'field_your_commander_survival_value_selective';
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['ui_name'] = 'Your Commander Survival (field_your_commander_survival) (selective)';
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['group'] = 1;
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['expose']['label'] = 'Player Commander Survival';
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['expose']['identifier'] = 'field_your_commander_survival_value_selective';
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['selective_display_field'] = 'field_your_commander_survival';
$handler->display->display_options['filters']['field_your_commander_survival_value_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Enemy Commander (field_battleresult_enemy_command) (selective) */
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['id'] = 'field_battleresult_enemy_command_tid_selective';
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['table'] = 'field_data_field_battleresult_enemy_command';
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['field'] = 'field_battleresult_enemy_command_tid_selective';
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['ui_name'] = 'Enemy Commander (field_battleresult_enemy_command) (selective)';
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['expose']['label'] = 'Enemy Commander';
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['expose']['identifier'] = 'field_battleresult_enemy_command_tid_selective';
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['selective_display_field'] = 'field_battleresult_enemy_command';
$handler->display->display_options['filters']['field_battleresult_enemy_command_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Enemy Commander Survival (field_enemy_commander_survival) (selective) */
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['id'] = 'field_enemy_commander_survival_value_selective';
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['table'] = 'field_data_field_enemy_commander_survival';
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['field'] = 'field_enemy_commander_survival_value_selective';
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['ui_name'] = 'Enemy Commander Survival (field_enemy_commander_survival) (selective)';
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['group'] = 1;
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['expose']['label'] = 'Enemy Commander Survival';
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['expose']['identifier'] = 'field_enemy_commander_survival_value_selective';
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['selective_display_field'] = 'field_enemy_commander_survival';
$handler->display->display_options['filters']['field_enemy_commander_survival_value_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Deployment (field_battle_deployment) (selective) */
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['id'] = 'field_battle_deployment_tid_selective';
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['table'] = 'field_data_field_battle_deployment';
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['field'] = 'field_battle_deployment_tid_selective';
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['ui_name'] = 'Deployment (field_battle_deployment) (selective)';
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['expose']['label'] = 'Deployment';
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['expose']['identifier'] = 'field_battle_deployment_tid_selective';
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['selective_display_field'] = 'field_battle_deployment';
$handler->display->display_options['filters']['field_battle_deployment_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Mission (field_mission) (selective) */
$handler->display->display_options['filters']['field_mission_tid_selective']['id'] = 'field_mission_tid_selective';
$handler->display->display_options['filters']['field_mission_tid_selective']['table'] = 'field_data_field_mission';
$handler->display->display_options['filters']['field_mission_tid_selective']['field'] = 'field_mission_tid_selective';
$handler->display->display_options['filters']['field_mission_tid_selective']['ui_name'] = 'Mission (field_mission) (selective)';
$handler->display->display_options['filters']['field_mission_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_mission_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mission_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_mission_tid_selective']['expose']['label'] = 'Mission';
$handler->display->display_options['filters']['field_mission_tid_selective']['expose']['identifier'] = 'field_mission_tid_selective';
$handler->display->display_options['filters']['field_mission_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_mission_tid_selective']['selective_display_field'] = 'field_mission';
$handler->display->display_options['filters']['field_mission_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Mission Rules in Effect (field_battle_mission_rules) (selective) */
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['id'] = 'field_battle_mission_rules_tid_selective';
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['table'] = 'field_data_field_battle_mission_rules';
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['field'] = 'field_battle_mission_rules_tid_selective';
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['ui_name'] = 'Mission Rules in Effect (field_battle_mission_rules) (selective)';
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['expose']['label'] = 'Mission Rules in Effect';
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['expose']['identifier'] = 'field_battle_mission_rules_tid_selective';
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['selective_display_field'] = 'field_battle_mission_rules';
$handler->display->display_options['filters']['field_battle_mission_rules_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: My Victory Conditions met (field_battle_my_vc) (selective) */
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['id'] = 'field_battle_my_vc_tid_selective';
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['table'] = 'field_data_field_battle_my_vc';
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['field'] = 'field_battle_my_vc_tid_selective';
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['ui_name'] = 'My Victory Conditions met (field_battle_my_vc) (selective)';
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['expose']['label'] = 'Victory Conditions';
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['expose']['identifier'] = 'field_battle_my_vc_tid_selective';
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['selective_display_field'] = 'field_battle_my_vc';
$handler->display->display_options['filters']['field_battle_my_vc_tid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Battlefield (field_location) (selective) */
$handler->display->display_options['filters']['field_location_nid_selective']['id'] = 'field_location_nid_selective';
$handler->display->display_options['filters']['field_location_nid_selective']['table'] = 'field_data_field_location';
$handler->display->display_options['filters']['field_location_nid_selective']['field'] = 'field_location_nid_selective';
$handler->display->display_options['filters']['field_location_nid_selective']['ui_name'] = 'Battlefield (field_location) (selective)';
$handler->display->display_options['filters']['field_location_nid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_location_nid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['label'] = 'Battlefield';
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['identifier'] = 'field_location_nid_selective';
$handler->display->display_options['filters']['field_location_nid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_location_nid_selective']['selective_display_field'] = 'field_location';
$handler->display->display_options['filters']['field_location_nid_selective']['selective_display_sort'] = 'ASC';
/* Filter criterion: Content: Date (field_game_date) */
$handler->display->display_options['filters']['field_game_date_value']['id'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['table'] = 'field_data_field_game_date';
$handler->display->display_options['filters']['field_game_date_value']['field'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['group'] = 1;
$handler->display->display_options['filters']['field_game_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_game_date_value']['expose']['operator_id'] = 'field_game_date_value_op';
$handler->display->display_options['filters']['field_game_date_value']['expose']['label'] = 'Year';
$handler->display->display_options['filters']['field_game_date_value']['expose']['operator'] = 'field_game_date_value_op';
$handler->display->display_options['filters']['field_game_date_value']['expose']['identifier'] = 'field_game_date_value';
$handler->display->display_options['filters']['field_game_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  7 => 0,
  9 => 0,
  8 => 0,
);
$handler->display->display_options['filters']['field_game_date_value']['granularity'] = 'year';
$handler->display->display_options['filters']['field_game_date_value']['year_range'] = '-10:+0';

/* Display: By Opponent Army Page */
$handler = $view->new_display('page', 'By Opponent Army Page', 'page_1');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['uid']['title'] = 'Stats: %1\'s Opponent\'s Armies';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
$handler->display->display_options['path'] = 'user/%/stats/by-opponent-army';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Opponent\'s Army';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: By Opponent Army Panel */
$handler = $view->new_display('panel_pane', 'By Opponent Army Panel', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Battle Score: Opponent\'s Army';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['type'] = 'bar';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_opponent_s_army';
$handler->display->display_options['style_options']['data_fields'] = array(
  'field_opponent_s_army' => 'field_opponent_s_army',
  'field_your_results' => 'field_your_results',
  'field_image' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_image' => '#2f7ed8',
  'field_opponent_s_army' => '#0d233a',
  'field_your_results' => '#428bca',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '300';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_max'] = '5';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
$handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
$handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_opponent_s_army_tid';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_class'] = 'col-xs-3 pull-left';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'user_avatar',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: Field: Opponent's Army */
$handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
$handler->display->display_options['fields']['field_opponent_s_army']['element_type'] = 'strong';
$handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Your Results (field_your_results) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';
$handler->display->display_options['pane_category']['name'] = 'Player';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Top Armies Panel */
$handler = $view->new_display('panel_pane', 'Top Armies Panel', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Battle Score by Army';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_2';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['type'] = 'bar';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_your_army';
$handler->display->display_options['style_options']['data_fields'] = array(
  'field_your_results' => 'field_your_results',
  'field_your_army' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_your_army' => '#2f7ed8',
  'field_your_results' => '#4288ca',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = '';
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '300';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_max'] = '5';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = '';
$handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Your Results (field_your_results) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';
$handler->display->display_options['pane_category']['name'] = 'Player';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Commander Kill Ratio */
$handler = $view->new_display('panel_pane', 'Commander Kill Ratio', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Commander Kill Ratio';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['separator'] = '';
/* Field: Content: Enemy Commander Survival */
$handler->display->display_options['fields']['field_enemy_commander_survival']['id'] = 'field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['table'] = 'field_data_field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['field'] = 'field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_enemy_commander_survival']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_enemy_commander_survival']['type'] = 'list_key';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '2';
$handler->display->display_options['fields']['expression']['expression'] = '[field_enemy_commander_survival] / [nid] * 100';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
$handler->display->display_options['fields']['expression_1']['table'] = 'views';
$handler->display->display_options['fields']['expression_1']['field'] = 'expression';
$handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression_1']['precision'] = '0';
$handler->display->display_options['fields']['expression_1']['expression'] = '[expression]';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression_1]" role="progressbar" aria-valuenow="[expression_1]" aria-valuemin="0" aria-valuemax="100">
    [expression]%
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Enemy Commander Survival (field_enemy_commander_survival) */
$handler->display->display_options['filters']['field_enemy_commander_survival_value']['id'] = 'field_enemy_commander_survival_value';
$handler->display->display_options['filters']['field_enemy_commander_survival_value']['table'] = 'field_data_field_enemy_commander_survival';
$handler->display->display_options['filters']['field_enemy_commander_survival_value']['field'] = 'field_enemy_commander_survival_value';
$handler->display->display_options['filters']['field_enemy_commander_survival_value']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Player';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Commander Death Ratio */
$handler = $view->new_display('panel_pane', 'Commander Death Ratio', 'panel_pane_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Commander Death Ratio';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['separator'] = '';
/* Field: Content: Enemy Commander Survival */
$handler->display->display_options['fields']['field_enemy_commander_survival']['id'] = 'field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['table'] = 'field_data_field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['field'] = 'field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_enemy_commander_survival']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_enemy_commander_survival']['type'] = 'list_key';
/* Field: Content: Your Commander Survival */
$handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_your_commander_survival']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_your_commander_survival']['type'] = 'list_key';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '2';
$handler->display->display_options['fields']['expression']['expression'] = '([nid] - [field_your_commander_survival]) / [nid] * 100';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
$handler->display->display_options['fields']['expression_1']['table'] = 'views';
$handler->display->display_options['fields']['expression_1']['field'] = 'expression';
$handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression_1']['precision'] = '0';
$handler->display->display_options['fields']['expression_1']['expression'] = '[expression]';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression_1]" role="progressbar" aria-valuenow="[expression_1]" aria-valuemin="0" aria-valuemax="100">
    [expression]%
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Your Commander Survival (field_your_commander_survival) */
$handler->display->display_options['filters']['field_your_commander_survival_value']['id'] = 'field_your_commander_survival_value';
$handler->display->display_options['filters']['field_your_commander_survival_value']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['filters']['field_your_commander_survival_value']['field'] = 'field_your_commander_survival_value';
$handler->display->display_options['filters']['field_your_commander_survival_value']['operator'] = 'not empty';
$handler->display->display_options['pane_category']['name'] = 'Player';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: By Mission Panel */
$handler = $view->new_display('panel_pane', 'By Mission Panel', 'panel_pane_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Missions and Scenarios';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_2';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['type'] = 'bar';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'field_mission';
$handler->display->display_options['style_options']['data_fields'] = array(
  'field_mission' => 'field_mission',
  'field_your_results' => 'field_your_results',
  'field_image' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'field_image' => '#2f7ed8',
  'field_mission' => '#0d233a',
  'field_your_results' => '#4288ca',
);
$handler->display->display_options['style_options']['title_position'] = '';
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '300';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_max'] = '5';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Mission (field_mission) */
$handler->display->display_options['relationships']['field_mission_tid']['id'] = 'field_mission_tid';
$handler->display->display_options['relationships']['field_mission_tid']['table'] = 'field_data_field_mission';
$handler->display->display_options['relationships']['field_mission_tid']['field'] = 'field_mission_tid';
$handler->display->display_options['relationships']['field_mission_tid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_mission_tid';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_type'] = 'span';
$handler->display->display_options['fields']['field_image']['element_class'] = 'col-xs-3 pull-left';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'user_avatar',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: Field: Mission */
$handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
$handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['label'] = '';
$handler->display->display_options['fields']['field_mission']['element_type'] = 'strong';
$handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_mission']['element_default_classes'] = FALSE;
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Your Results (field_your_results) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';
$handler->display->display_options['pane_category']['name'] = 'Player';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Top Opponent ID */
$handler = $view->new_display('panel_pane', 'Top Opponent ID', 'panel_pane_6');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Top Players';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'page_3';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'list-group-item clearfix';
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
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['reverse_field_game_reference_node']['required'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_game_reference_node';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'col-xs-3 pull-left';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Your Results (field_your_results) */
$handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
$handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
$handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
$handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '5';
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['relationship'] = 'uid';
$handler->display->display_options['filters']['rid']['operator'] = 'not';
$handler->display->display_options['filters']['rid']['value'] = array(
  8 => '8',
);
$handler->display->display_options['pane_category']['name'] = 'Armies';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Victory Percentage */
$handler = $view->new_display('panel_pane', 'Victory Percentage', 'panel_pane_7');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Victory Percentage';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['separator'] = '';
/* Field: Field: Victory */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_victory']['label'] = '';
$handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_victory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_victory']['type'] = 'computed_field_computed_value';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression']['id'] = 'expression';
$handler->display->display_options['fields']['expression']['table'] = 'views';
$handler->display->display_options['fields']['expression']['field'] = 'expression';
$handler->display->display_options['fields']['expression']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression']['precision'] = '2';
$handler->display->display_options['fields']['expression']['expression'] = '[field_victory] / [nid] * 100';
/* Field: Global: Math expression */
$handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
$handler->display->display_options['fields']['expression_1']['table'] = 'views';
$handler->display->display_options['fields']['expression_1']['field'] = 'expression';
$handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
$handler->display->display_options['fields']['expression_1']['precision'] = '0';
$handler->display->display_options['fields']['expression_1']['expression'] = '[expression]';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression_1]" role="progressbar" aria-valuenow="[expression_1]" aria-valuemin="0" aria-valuemax="100">
    [expression]%
  </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
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
  'game_result_system_' => 'game_result_system_',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['pane_category']['name'] = 'Player';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: By Player Army Page */
$handler = $view->new_display('page', 'By Player Army Page', 'page_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_aggregator';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'field_opponent_s_army' => 'field_opponent_s_army',
  'field_your_army' => 'field_your_army',
  'nid' => 'nid',
  'field_victory' => 'field_victory',
  'field_draw' => 'field_draw',
  'field_defeat' => 'field_defeat',
  'field_your_results' => 'field_your_results',
  'field_battle_deployment' => 'field_battle_deployment',
  'field_mission' => 'field_mission',
  'field_battle_mission_rules' => 'field_battle_mission_rules',
  'field_batteresult_commander' => 'field_batteresult_commander',
  'field_your_commander_survival' => 'field_your_commander_survival',
  'field_battleresult_enemy_command' => 'field_battleresult_enemy_command',
  'field_enemy_commander_survival' => 'field_enemy_commander_survival',
  'field_battle_my_vc' => 'field_battle_my_vc',
  'field_points_per_army' => 'field_points_per_army',
  'field_game' => 'field_game',
  'field_location' => 'field_location',
  'name' => 'name',
);
$handler->display->display_options['style_options']['default'] = 'field_your_results';
$handler->display->display_options['style_options']['info'] = array(
  'field_opponent_s_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_your_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 1,
    'aggr' => array(
      'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_count',
    'aggr_par_column' => '',
  ),
  'field_victory' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_draw' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_defeat' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_your_results' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_average',
    'aggr_par_column' => '',
  ),
  'field_battle_deployment' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_mission' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_battle_mission_rules' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_batteresult_commander' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_your_commander_survival' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_battleresult_enemy_command' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_enemy_commander_survival' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_battle_my_vc' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_points_per_army' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_game' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_location' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Opponent's Army */
$handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
$handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
/* Field: Field: Your Army */
$handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
$handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
$handler->display->display_options['fields']['field_your_army']['label'] = 'Player\'s Army';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '# Battles';
/* Field: Field: Victory */
$handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
$handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
$handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
/* Field: Field: Draw */
$handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
$handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
$handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
/* Field: Field: Defeat */
$handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
$handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
$handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
/* Field: Field: Your Results */
$handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
$handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
$handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
$handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
$handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
/* Field: Content: Deployment */
$handler->display->display_options['fields']['field_battle_deployment']['id'] = 'field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['table'] = 'field_data_field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['field'] = 'field_battle_deployment';
$handler->display->display_options['fields']['field_battle_deployment']['label'] = '';
$handler->display->display_options['fields']['field_battle_deployment']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_battle_deployment']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_battle_deployment']['type'] = 'taxonomy_term_reference_plain';
/* Field: Field: Mission */
$handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
$handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
$handler->display->display_options['fields']['field_mission']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mission']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Mission Rules in Effect */
$handler->display->display_options['fields']['field_battle_mission_rules']['id'] = 'field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['table'] = 'field_data_field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['field'] = 'field_battle_mission_rules';
$handler->display->display_options['fields']['field_battle_mission_rules']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_battle_mission_rules']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_battle_mission_rules']['delta_offset'] = '0';
/* Field: Content: Commander */
$handler->display->display_options['fields']['field_batteresult_commander']['id'] = 'field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['table'] = 'field_data_field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['field'] = 'field_batteresult_commander';
$handler->display->display_options['fields']['field_batteresult_commander']['label'] = 'Player Commander';
$handler->display->display_options['fields']['field_batteresult_commander']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_batteresult_commander']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Your Commander Survival */
$handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
$handler->display->display_options['fields']['field_your_commander_survival']['exclude'] = TRUE;
/* Field: Content: Enemy Commander */
$handler->display->display_options['fields']['field_battleresult_enemy_command']['id'] = 'field_battleresult_enemy_command';
$handler->display->display_options['fields']['field_battleresult_enemy_command']['table'] = 'field_data_field_battleresult_enemy_command';
$handler->display->display_options['fields']['field_battleresult_enemy_command']['field'] = 'field_battleresult_enemy_command';
$handler->display->display_options['fields']['field_battleresult_enemy_command']['label'] = 'Opponent Commander';
$handler->display->display_options['fields']['field_battleresult_enemy_command']['exclude'] = TRUE;
/* Field: Content: Enemy Commander Survival */
$handler->display->display_options['fields']['field_enemy_commander_survival']['id'] = 'field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['table'] = 'field_data_field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['field'] = 'field_enemy_commander_survival';
$handler->display->display_options['fields']['field_enemy_commander_survival']['exclude'] = TRUE;
/* Field: Content: My Victory Conditions met */
$handler->display->display_options['fields']['field_battle_my_vc']['id'] = 'field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['table'] = 'field_data_field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['field'] = 'field_battle_my_vc';
$handler->display->display_options['fields']['field_battle_my_vc']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_battle_my_vc']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_battle_my_vc']['delta_offset'] = '0';
/* Field: Field: Points per army */
$handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
$handler->display->display_options['fields']['field_points_per_army']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_points_per_army']['type'] = 'number_unformatted';
$handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 0,
);
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_game']['id'] = 'field_game';
$handler->display->display_options['fields']['field_game']['table'] = 'field_data_field_game';
$handler->display->display_options['fields']['field_game']['field'] = 'field_game';
$handler->display->display_options['fields']['field_game']['label'] = 'Game';
$handler->display->display_options['fields']['field_game']['exclude'] = TRUE;
/* Field: Field: Battlefield */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Opponent';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
$handler->display->display_options['path'] = 'user/%/stats/by-player-army';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Player\'s Army';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'computed_field',
  4 => 'list',
  5 => 'number',
  6 => 'node_reference',
  7 => 'views_content',
  8 => 'image',
);
