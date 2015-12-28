<?php
/**
 * @file
 * field_group.group_meta_node_special_event_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_meta|node|special_event|form';
$field_group->group_name = 'group_meta';
$field_group->entity_type = 'node';
$field_group->bundle = 'special_event';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Meta',
  'weight' => '8',
  'children' => array(
    0 => 'field_status',
    1 => 'field_event_type',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'label' => 'Meta',
    'instance_settings' => array(
      'required_fields' => 0,
      'classes' => 'group-meta field-group-fieldset',
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
