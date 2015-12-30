<?php
/**
 * @file
 * content_type.army_profile.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'army_profile',
  'name' => 'Army Profile',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Army Name',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.army_profile' => 'field.node.body.army_profile',
  'field.node.field_image.army_profile' => 'field.node.field_image.army_profile',
  'field.node.field_army_profile.army_profile' => 'field.node.field_army_profile.army_profile',
  'field.node.field_army_profile_elements.army_profile' => 'field.node.field_army_profile_elements.army_profile',
  'field.node.field_radioactivity.army_profile' => 'field.node.field_radioactivity.army_profile',
  'permission.create_army_profile_content' => 'permission.create_army_profile_content',
  'permission.edit_own_army_profile_content' => 'permission.edit_own_army_profile_content',
  'permission.edit_any_army_profile_content' => 'permission.edit_any_army_profile_content',
  'permission.delete_own_army_profile_content' => 'permission.delete_own_army_profile_content',
  'permission.delete_any_army_profile_content' => 'permission.delete_any_army_profile_content',
);

$modules = array(
  0 => 'node',
);
