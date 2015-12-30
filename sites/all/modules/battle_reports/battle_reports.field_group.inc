<?php
/**
 * @file
 * battle_reports.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function battle_reports_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_meta|node|game_result_system_|form';
  $field_group->group_name = 'group_additional_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Meta',
    'weight' => '2',
    'children' => array(
      0 => 'field_battle_deployment',
      1 => 'field_battle_mission_rules',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional-meta field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional_meta|node|game_result_system_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_battle_core|node|game_results|form';
  $field_group->group_name = 'group_battle_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core',
    'weight' => '2',
    'children' => array(
      0 => 'field_mission',
      1 => 'field_game_date',
      2 => 'field_your_army',
      3 => 'field_opponent_s_army',
      4 => 'field_your_results',
      5 => 'field_opponent',
      6 => 'field_location',
      7 => 'field_opponent_s_name',
      8 => 'field_points_per_army',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Core',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-battle-core field-group-fieldset',
        'description' => 'These are the most important elements of your battle.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_battle_core|node|game_results|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_battle_events_commander|node|game_results|form';
  $field_group->group_name = 'group_battle_events_commander';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_order_of_battle';
  $field_group->data = array(
    'label' => 'Commanders Slain',
    'weight' => '39',
    'children' => array(
      0 => 'field_your_commander_survival',
      1 => 'field_enemy_commander_survival',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-battle-events-commander field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_battle_events_commander|node|game_results|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_battle_events|node|game_results|form';
  $field_group->group_name = 'group_battle_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Battle Events',
    'weight' => '3',
    'children' => array(
      0 => 'field_battle_deployment',
      1 => 'field_battle_mission_rules',
      2 => 'field_battle_my_vc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Battle Events',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => 'node_game_results_form_group_battle_events',
        'classes' => ' group-battle-events field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_battle_events|node|game_results|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_battle_stats|node|game_result_system_|default';
  $field_group->group_name = 'group_battle_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Battle Stats',
    'weight' => '2',
    'children' => array(
      0 => 'group_display_theater',
      1 => 'group_display_order_of_battle',
      2 => 'group_campaign',
      3 => 'group_battle_events',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-battle-stats field-group-div',
      ),
    ),
  );
  $export['group_battle_stats|node|game_result_system_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_battle_stats|node|game_results|default';
  $field_group->group_name = 'group_battle_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Battle Stats',
    'weight' => '2',
    'children' => array(
      0 => 'group_display_order_of_battle',
      1 => 'group_display_theater',
      2 => 'group_battle_events',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-battle-stats field-group-div',
      ),
    ),
  );
  $export['group_battle_stats|node|game_results|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|game_result_system_|teaser';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_body_wrapper|node|game_result_system_|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_campaign|node|game_result_system_|default';
  $field_group->group_name = 'group_campaign';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_battle_stats';
  $field_group->data = array(
    'label' => 'Campaign',
    'weight' => '14',
    'children' => array(
      0 => 'field_event_link',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-campaign field-group-fieldset',
      ),
    ),
  );
  $export['group_campaign|node|game_result_system_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_order_of_battle|node|game_result_system_|default';
  $field_group->group_name = 'group_display_order_of_battle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_battle_stats';
  $field_group->data = array(
    'label' => 'Order of Battle',
    'weight' => '13',
    'children' => array(
      0 => 'field_opponent',
      1 => 'field_your_results',
      2 => 'field_opponent_s_army',
      3 => 'field_your_army',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-display-order-of-battle field-group-fieldset',
      ),
    ),
  );
  $export['group_display_order_of_battle|node|game_result_system_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_order_of_battle|node|game_results|default';
  $field_group->group_name = 'group_display_order_of_battle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_battle_stats';
  $field_group->data = array(
    'label' => 'Order of Battle',
    'weight' => '11',
    'children' => array(
      0 => 'field_your_army',
      1 => 'field_opponent_s_army',
      2 => 'field_your_results',
      3 => 'field_opponent',
      4 => 'field_opponent_s_name',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-display-order-of-battle field-group-fieldset',
      ),
    ),
  );
  $export['group_display_order_of_battle|node|game_results|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_theater|node|game_result_system_|default';
  $field_group->group_name = 'group_display_theater';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_battle_stats';
  $field_group->data = array(
    'label' => 'Theater of War',
    'weight' => '16',
    'children' => array(
      0 => 'field_game_date',
      1 => 'field_game',
      2 => 'field_mission',
      3 => 'field_scale',
      4 => 'field_location',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-display-theater field-group-fieldset',
      ),
    ),
  );
  $export['group_display_theater|node|game_result_system_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_theater|node|game_results|default';
  $field_group->group_name = 'group_display_theater';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_battle_stats';
  $field_group->data = array(
    'label' => 'Theater of War',
    'weight' => '13',
    'children' => array(
      0 => 'field_game',
      1 => 'field_mission',
      2 => 'field_game_date',
      3 => 'field_scale',
      4 => 'field_location',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-display-theater field-group-fieldset',
      ),
    ),
  );
  $export['group_display_theater|node|game_results|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|game_result_system_|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_image_wrapper|node|game_result_system_|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_of_battle|node|game_result_system_|form';
  $field_group->group_name = 'group_order_of_battle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Order of Battle',
    'weight' => '1',
    'children' => array(
      0 => 'field_batteresult_commander',
      1 => 'field_battle_most_valuable_unit',
      2 => 'field_battleresult_enemy_command',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-order-of-battle field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_order_of_battle|node|game_result_system_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_of_battle|node|game_results|form';
  $field_group->group_name = 'group_order_of_battle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Order of Battle',
    'weight' => '4',
    'children' => array(
      0 => 'field_batteresult_commander',
      1 => 'field_battle_most_valuable_unit',
      2 => 'field_allied_detatchment',
      3 => 'field_opponent_s_allied_detachme',
      4 => 'field_battleresult_enemy_command',
      5 => 'group_battle_events_commander',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-order-of-battle field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_order_of_battle|node|game_results|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|game_result_system_|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_image_wrapper',
      1 => 'group_body_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_wrapper|node|game_result_system_|teaser'] = $field_group;

  return $export;
}
