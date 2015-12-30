<?php
/**
 * @file
 * field_group.group_meta_node_war_zone_tournament_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_meta|node|war_zone_tournament|form';
$field_group->group_name = 'group_meta';
$field_group->entity_type = 'node';
$field_group->bundle = 'war_zone_tournament';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Meta',
  'weight' => '9',
  'children' => array(
    0 => 'field_status',
    1 => 'field_event_type',
    2 => 'field_event_date',
    3 => 'field_warzone_round',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-meta field-group-fieldset',
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
