<?php
/**
 * @file
 * content_type.event.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'event',
  'name' => 'Event',
  'description' => 'Let the gaming world know about your miniature wargaming <em>Event</em>. This is a simple calendar entry and is perfect for open game days, regular events, and the like.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => 'Give your event a title and an optional description.',
);

$dependencies = array();

$optional = array(
  'field.node.body.event' => 'field.node.body.event',
  'field.node.field_event_date.event' => 'field.node.field_event_date.event',
  'field.node.field_event_type.event' => 'field.node.field_event_type.event',
  'field.node.field_location.event' => 'field.node.field_location.event',
  'field.node.field_image.event' => 'field.node.field_image.event',
  'field.node.field_event_link.event' => 'field.node.field_event_link.event',
  'field.node.field_supported_games.event' => 'field.node.field_supported_games.event',
  'field.node.field_website.event' => 'field.node.field_website.event',
  'permission.create_event_content' => 'permission.create_event_content',
  'permission.edit_own_event_content' => 'permission.edit_own_event_content',
  'permission.edit_any_event_content' => 'permission.edit_any_event_content',
  'permission.delete_own_event_content' => 'permission.delete_own_event_content',
  'permission.delete_any_event_content' => 'permission.delete_any_event_content',
);

$modules = array(
  0 => 'node',
);
