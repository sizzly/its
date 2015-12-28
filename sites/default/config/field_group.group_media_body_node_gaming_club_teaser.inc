<?php
/**
 * @file
 * field_group.group_media_body_node_gaming_club_teaser.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_media_body|node|gaming_club|teaser';
$field_group->group_name = 'group_media_body';
$field_group->entity_type = 'node';
$field_group->bundle = 'gaming_club';
$field_group->mode = 'teaser';
$field_group->parent_name = 'group_media_wrapper';
$field_group->data = array(
  'label' => 'Media Body',
  'weight' => '4',
  'children' => array(
    0 => 'body',
    1 => 'field_supported_games',
    2 => 'field_location',
    3 => 'field_radioactivity',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Media Body',
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
