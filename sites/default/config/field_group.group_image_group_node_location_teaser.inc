<?php
/**
 * @file
 * field_group.group_image_group_node_location_teaser.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_image_group|node|location|teaser';
$field_group->group_name = 'group_image_group';
$field_group->entity_type = 'node';
$field_group->bundle = 'location';
$field_group->mode = 'teaser';
$field_group->parent_name = 'group_wrapper';
$field_group->data = array(
  'label' => 'Image Group',
  'weight' => '1',
  'children' => array(
    0 => 'field_image',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Image Group',
    'instance_settings' => array(
      'classes' => 'col-sm-3 text-center',
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
