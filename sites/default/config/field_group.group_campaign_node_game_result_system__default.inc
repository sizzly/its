<?php
/**
 * @file
 * field_group.group_campaign_node_game_result_system__default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
