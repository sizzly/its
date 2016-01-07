<?php
/**
 * @file
 * content_type.location.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'location',
  'name' => 'Battlefield',
  'description' => 'A physical location.',
  'has_title' => '1',
  'title_label' => 'Name',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.field_geolocation.location' => 'field.node.field_geolocation.location',
  'field.node.field_location_type.location' => 'field.node.field_location_type.location',
  'field.node.field_image.location' => 'field.node.field_image.location',
  'field.node.body.location' => 'field.node.body.location',
  'field.node.field_website.location' => 'field.node.field_website.location',
  'field.node.field_supported_games.location' => 'field.node.field_supported_games.location',
  'field.node.field_phone.location' => 'field.node.field_phone.location',
  'field.node.field_address_battlefield.location' => 'field.node.field_address_battlefield.location',
  'field.node.field_radioactivity.location' => 'field.node.field_radioactivity.location',
  'field.node.field_prestige.location' => 'field.node.field_prestige.location',
  'permission.create_location_content' => 'permission.create_location_content',
  'permission.edit_own_location_content' => 'permission.edit_own_location_content',
  'permission.edit_any_location_content' => 'permission.edit_any_location_content',
  'permission.delete_own_location_content' => 'permission.delete_own_location_content',
  'permission.delete_any_location_content' => 'permission.delete_any_location_content',
);

$modules = array(
  0 => 'node',
);
