<?php
/**
 * @file
 * field_group.group_first_row_node_listcrit_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_first_row|node|listcrit|form';
$field_group->group_name = 'group_first_row';
$field_group->entity_type = 'node';
$field_group->bundle = 'listcrit';
$field_group->mode = 'form';
$field_group->parent_name = 'group_prop_wrapper';
$field_group->data = array(
  'label' => 'First Row',
  'weight' => '25',
  'children' => array(
    0 => 'field_camp',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'First Row',
    'instance_settings' => array(
      'required_fields' => 1,
      'classes' => 'col-xs-12 col-sm-6',
      'element' => 'div',
      'attributes' => '',
      'id' => 'node_listcrit_form_group_first_row',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
