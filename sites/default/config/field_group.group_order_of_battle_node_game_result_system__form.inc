<?php
/**
 * @file
 * field_group.group_order_of_battle_node_game_result_system__form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
