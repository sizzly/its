<?php
/**
 * @file
 * field_group.group_content_wrapper_node_achievement_teaser.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_content_wrapper|node|achievement|teaser';
$field_group->group_name = 'group_content_wrapper';
$field_group->entity_type = 'node';
$field_group->bundle = 'achievement';
$field_group->mode = 'teaser';
$field_group->parent_name = 'group_wrapper';
$field_group->data = array(
  'label' => 'Content Wrapper',
  'weight' => '5',
  'children' => array(
    0 => 'body',
    1 => 'field_short_description',
    2 => 'field_achievement_points',
    3 => 'group_label',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Content Wrapper',
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
