<?php
/**
 * @file
 * field_group.group_battle_events_node_game_results_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_battle_events|node|game_results|default';
$field_group->group_name = 'group_battle_events';
$field_group->entity_type = 'node';
$field_group->bundle = 'game_results';
$field_group->mode = 'default';
$field_group->parent_name = 'group_battle_stats';
$field_group->data = array(
  'label' => 'Battlefield Events',
  'weight' => '12',
  'children' => array(
    0 => 'field_enemy_commander',
    1 => 'field_your_commander',
  ),
  'format_type' => 'hidden',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => ' group-battle-events field-group-fieldset',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
