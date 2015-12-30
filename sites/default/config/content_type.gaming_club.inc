<?php
/**
 * @file
 * content_type.gaming_club.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'gaming_club',
  'name' => 'Gaming Club',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.group_group.gaming_club' => 'field.node.group_group.gaming_club',
  'field.node.body.gaming_club' => 'field.node.body.gaming_club',
  'field.node.field_image.gaming_club' => 'field.node.field_image.gaming_club',
  'field.node.field_supported_games.gaming_club' => 'field.node.field_supported_games.gaming_club',
  'field.node.field_location.gaming_club' => 'field.node.field_location.gaming_club',
  'field.node.field_website.gaming_club' => 'field.node.field_website.gaming_club',
  'field.node.field_group_contact.gaming_club' => 'field.node.field_group_contact.gaming_club',
  'field.node.group_access.gaming_club' => 'field.node.group_access.gaming_club',
  'field.node.field_radioactivity.gaming_club' => 'field.node.field_radioactivity.gaming_club',
  'permission.create_gaming_club_content' => 'permission.create_gaming_club_content',
  'permission.edit_own_gaming_club_content' => 'permission.edit_own_gaming_club_content',
  'permission.edit_any_gaming_club_content' => 'permission.edit_any_gaming_club_content',
  'permission.delete_own_gaming_club_content' => 'permission.delete_own_gaming_club_content',
  'permission.delete_any_gaming_club_content' => 'permission.delete_any_gaming_club_content',
);

$modules = array(
  0 => 'node',
);
