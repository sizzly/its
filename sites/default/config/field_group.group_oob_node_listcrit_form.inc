<?php
/**
 * @file
 * field_group.group_oob_node_listcrit_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_oob|node|listcrit|form';
$field_group->group_name = 'group_oob';
$field_group->entity_type = 'node';
$field_group->bundle = 'listcrit';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Order of Battle',
  'weight' => '2',
  'children' => array(
    0 => 'field_your_army',
    1 => 'field_points_per_army',
    2 => 'field_batteresult_commander',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-oob field-group-fieldset',
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
