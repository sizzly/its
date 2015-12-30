<?php
/**
 * @file
 * field_group.group_battle_events_node_game_results_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
