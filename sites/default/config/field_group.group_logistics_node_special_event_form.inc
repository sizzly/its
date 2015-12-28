<?php
/**
 * @file
 * field_group.group_logistics_node_special_event_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_logistics|node|special_event|form';
$field_group->group_name = 'group_logistics';
$field_group->entity_type = 'node';
$field_group->bundle = 'special_event';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Logistics',
  'weight' => '7',
  'children' => array(
    0 => 'field_location',
    1 => 'field_website',
    2 => 'field_entry_fee',
    3 => 'field_event_date',
    4 => 'field_slots_warzone',
    5 => 'field_registration_deadline',
    6 => 'field_warzone_scheduling',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-logistics field-group-fieldset',
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
