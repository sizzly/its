<?php
/**
 * @file
 * field_group.group_display_order_of_battle_node_game_results_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
