<?php
/**
 * @file
 * field_group.group_body_wrapper_node_army_profile_teaser.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_body_wrapper|node|army_profile|teaser';
$field_group->group_name = 'group_body_wrapper';
$field_group->entity_type = 'node';
$field_group->bundle = 'army_profile';
$field_group->mode = 'teaser';
$field_group->parent_name = 'group_wrapper';
$field_group->data = array(
  'label' => 'Body Wrapper',
  'weight' => '4',
  'children' => array(
    0 => 'body',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Body Wrapper',
    'instance_settings' => array(
      'classes' => 'col-sm-9',
      'element' => 'div',
      'show_label' => '0',
      'label_element' => 'div',
      'attributes' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
