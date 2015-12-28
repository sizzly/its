<?php
/**
 * @file
 * field_group.group_battle_core_node_game_results_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
