<?php
/**
 * @file
 * field_group.group_image_group_node_question_teaser.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_image_group|node|question|teaser';
$field_group->group_name = 'group_image_group';
$field_group->entity_type = 'node';
$field_group->bundle = 'question';
$field_group->mode = 'teaser';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Image Group',
  'weight' => '0',
  'children' => array(
    0 => 'field_image',
  ),
  'format_type' => 'div',
  'format_settings' => array(
    'label' => 'Image Group',
    'instance_settings' => array(
      'classes' => 'aboutp1',
      'description' => '',
      'show_label' => '0',
      'label_element' => 'h3',
      'effect' => 'none',
      'speed' => 'fast',
      'id' => 'node_question_teaser_group_image_group',
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
