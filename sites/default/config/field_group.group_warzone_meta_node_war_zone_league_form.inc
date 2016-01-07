<?php
/**
 * @file
 * field_group.group_warzone_meta_node_war_zone_league_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_warzone_meta|node|war_zone_league|form';
$field_group->group_name = 'group_warzone_meta';
$field_group->entity_type = 'node';
$field_group->bundle = 'war_zone_league';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Meta',
  'weight' => '9',
  'children' => array(
    0 => 'field_status',
    1 => 'field_warzone_game',
    2 => 'field_event_type',
    3 => 'field_warzone_round',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'label' => 'Meta',
    'instance_settings' => array(
      'required_fields' => 0,
      'classes' => 'group-warzone-meta field-group-fieldset',
      'description' => '',
    ),
    'formatter' => 'collapsed',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
