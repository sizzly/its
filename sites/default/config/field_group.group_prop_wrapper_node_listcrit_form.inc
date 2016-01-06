<?php
/**
 * @file
 * field_group.group_prop_wrapper_node_listcrit_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_prop_wrapper|node|listcrit|form';
$field_group->group_name = 'group_prop_wrapper';
$field_group->entity_type = 'node';
$field_group->bundle = 'listcrit';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Classification',
  'weight' => '3',
  'children' => array(
    0 => 'field_doctrine',
    1 => 'field_primary_role',
    2 => 'group_first_row',
    3 => 'group_second_row',
    4 => 'group_third_row',
    5 => 'group_sixth_row',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'label' => 'Classification',
    'instance_settings' => array(
      'required_fields' => 1,
      'classes' => '',
      'description' => '',
    ),
    'formatter' => 'open',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
