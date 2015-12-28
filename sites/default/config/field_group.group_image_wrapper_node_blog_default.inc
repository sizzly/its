<?php
/**
 * @file
 * field_group.group_image_wrapper_node_blog_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_image_wrapper|node|blog|default';
$field_group->group_name = 'group_image_wrapper';
$field_group->entity_type = 'node';
$field_group->bundle = 'blog';
$field_group->mode = 'default';
$field_group->parent_name = 'group_spacer';
$field_group->data = array(
  'label' => 'Image Wrapper',
  'weight' => '20',
  'children' => array(
    0 => 'field_image',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Image Wrapper',
    'instance_settings' => array(
      'classes' => 'thumbnail',
      'element' => 'div',
      'attributes' => '',
      'id' => 'node_blog_full_group_image_wrapper',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
