<?php
/**
 * @file
 * field_group.group_battle_stats_node_game_result_system__default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
