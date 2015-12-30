<?php
/**
 * @file
 * field_group.group_display_theater_node_game_results_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
