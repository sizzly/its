<?php
/**
 * @file
 * field_group.group_battle_events_commander_node_game_results_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
