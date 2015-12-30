<?php
/**
 * @file
 * field_group.group_label_node_achievement_teaser.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_label|node|achievement|teaser';
$field_group->group_name = 'group_label';
$field_group->entity_type = 'node';
$field_group->bundle = 'achievement';
$field_group->mode = 'teaser';
$field_group->parent_name = 'group_content_wrapper';
$field_group->data = array(
  'label' => 'Label Wrapper',
  'weight' => '22',
  'children' => array(
    0 => 'field_achievement_category',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Label Wrapper',
    'instance_settings' => array(
      'classes' => 'topboxhead',
      'element' => 'h3',
      'attributes' => '',
      'id' => 'node_achievement_teaser_group_label',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
