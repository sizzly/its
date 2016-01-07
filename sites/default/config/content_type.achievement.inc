<?php
/**
 * @file
 * content_type.achievement.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'achievement',
  'name' => 'Achievement',
  'description' => 'System content type to allow for sharing of achievements',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.achievement' => 'field.node.body.achievement',
  'field.node.field_image.achievement' => 'field.node.field_image.achievement',
  'field.node.field_event_date.achievement' => 'field.node.field_event_date.achievement',
  'field.node.field_event_type.achievement' => 'field.node.field_event_type.achievement',
  'field.node.field_short_description.achievement' => 'field.node.field_short_description.achievement',
  'field.node.field_achievement_hidden.achievement' => 'field.node.field_achievement_hidden.achievement',
  'field.node.field_requirements.achievement' => 'field.node.field_requirements.achievement',
  'field.node.field_achievement_category.achievement' => 'field.node.field_achievement_category.achievement',
  'field.node.field_achievement_unique.achievement' => 'field.node.field_achievement_unique.achievement',
  'field.node.field_achievement_points.achievement' => 'field.node.field_achievement_points.achievement',
  'field.node.field_event_link.achievement' => 'field.node.field_event_link.achievement',
  'field.node.field_requirements_achievement.achievement' => 'field.node.field_requirements_achievement.achievement',
  'permission.create_achievement_content' => 'permission.create_achievement_content',
  'permission.edit_own_achievement_content' => 'permission.edit_own_achievement_content',
  'permission.edit_any_achievement_content' => 'permission.edit_any_achievement_content',
  'permission.delete_own_achievement_content' => 'permission.delete_own_achievement_content',
  'permission.delete_any_achievement_content' => 'permission.delete_any_achievement_content',
);

$modules = array(
  0 => 'node',
);
