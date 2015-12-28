<?php
/**
 * @file
 * field_group.group_media_wrapper_node_special_event_teaser.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_media_wrapper|node|special_event|teaser';
$field_group->group_name = 'group_media_wrapper';
$field_group->entity_type = 'node';
$field_group->bundle = 'special_event';
$field_group->mode = 'teaser';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Wrapper',
  'weight' => '0',
  'children' => array(
    0 => 'group_media_body',
    1 => 'group_media_left',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Wrapper',
    'instance_settings' => array(
      'classes' => 'row',
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
