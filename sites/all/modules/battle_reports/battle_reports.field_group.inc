<?php
/**
 * @file
 * battle_reports.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function battle_reports_field_group_info() {
  $field_groups = array();

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
    'label' => 'Battle Meta',
    'weight' => '4',
    'children' => array(
      0 => 'field_mission',
      1 => 'field_battle_deployment',
      2 => 'field_battle_mission_rules',
      3 => 'field_battle_my_vc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Battle Meta',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-additional-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_additional_meta|node|game_result_system_|form'] = $field_group;

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
      0 => 'field_game_date',
      1 => 'field_your_army',
      2 => 'field_opponent_s_army',
      3 => 'field_your_results',
      4 => 'field_opponent',
      5 => 'field_location',
      6 => 'field_opponent_s_name',
      7 => 'field_points_per_army',
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
  $field_groups['group_battle_core|node|game_results|form'] = $field_group;

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
  $field_groups['group_battle_events_commander|node|game_results|form'] = $field_group;

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
    'label' => 'Battle Meta',
    'weight' => '4',
    'children' => array(
      0 => 'field_mission',
      1 => 'field_battle_deployment',
      2 => 'field_battle_mission_rules',
      3 => 'field_battle_my_vc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Battle Meta',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_battle_events|node|game_results|form'] = $field_group;

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
  $field_groups['group_battle_stats|node|game_result_system_|default'] = $field_group;

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
  $field_groups['group_battle_stats|node|game_results|default'] = $field_group;

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
      1 => 'field_verbose_teaser',
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
  $field_groups['group_body_wrapper|node|game_result_system_|teaser'] = $field_group;

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
  $field_groups['group_campaign|node|game_result_system_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|game_results|teaser';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Content Wrapper',
    'weight' => '8',
    'children' => array(
      0 => 'body',
      1 => 'field_verbose_teaser',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Content Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_content_wrapper|node|game_results|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core|node|game_result_system_|form';
  $field_group->group_name = 'group_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core',
    'weight' => '2',
    'children' => array(
      0 => 'field_game_date',
      1 => 'field_opponent',
      2 => 'field_your_results',
      3 => 'field_opponent_s_army',
      4 => 'field_your_army',
      5 => 'field_location',
      6 => 'field_points_per_army',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-core field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_core|node|game_result_system_|form'] = $field_group;

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
  $field_groups['group_display_order_of_battle|node|game_result_system_|default'] = $field_group;

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
  $field_groups['group_display_order_of_battle|node|game_results|default'] = $field_group;

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
  $field_groups['group_display_theater|node|game_result_system_|default'] = $field_group;

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
  $field_groups['group_display_theater|node|game_results|default'] = $field_group;

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
      0 => 'group_spacer',
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
  $field_groups['group_image_wrapper|node|game_result_system_|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|game_results|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'group_spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_wrapper|node|game_results|teaser'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_batteresult_commander',
      1 => 'field_battle_most_valuable_unit',
      2 => 'field_your_commander_survival',
      3 => 'field_enemy_commander_survival',
      4 => 'field_battleresult_enemy_command',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Order of Battle',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-order-of-battle field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_order_of_battle|node|game_result_system_|form'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_batteresult_commander',
      1 => 'field_battle_most_valuable_unit',
      2 => 'field_allied_detatchment',
      3 => 'field_opponent_s_allied_detachme',
      4 => 'field_your_commander_survival',
      5 => 'field_enemy_commander_survival',
      6 => 'field_battleresult_enemy_command',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Order of Battle',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-order-of-battle field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_order_of_battle|node|game_results|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|game_result_system_|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_result_system_';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '28',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'thumbnail',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spacer|node|game_result_system_|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|game_results|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '40',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'thumbnail',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spacer|node|game_results|teaser'] = $field_group;

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
      0 => 'group_body_wrapper',
      1 => 'group_image_wrapper',
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
  $field_groups['group_wrapper|node|game_result_system_|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|game_results|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game_results';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_content_wrapper',
      1 => 'group_image_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wrapper|node|game_results|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Battle Meta');
  t('Battle Stats');
  t('Body Wrapper');
  t('Campaign');
  t('Commanders Slain');
  t('Content Wrapper');
  t('Core');
  t('Image Wrapper');
  t('Order of Battle');
  t('Spacer');
  t('Theater of War');
  t('Wrapper');

  return $field_groups;
}
