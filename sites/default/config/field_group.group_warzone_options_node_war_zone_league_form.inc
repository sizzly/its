<?php
/**
 * @file
 * field_group.group_warzone_options_node_war_zone_league_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_warzone_options|node|war_zone_league|form';
$field_group->group_name = 'group_warzone_options';
$field_group->entity_type = 'node';
$field_group->bundle = 'war_zone_league';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Options',
  'weight' => '8',
  'children' => array(
    0 => 'group_warzone_swiss',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-warzone-options field-group-fieldset',
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
