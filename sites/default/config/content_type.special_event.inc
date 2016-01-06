<?php
/**
 * @file
 * content_type.special_event.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'special_event',
  'name' => 'Special Event',
  'description' => 'Create a <em>Special Event</em> to use iToysoldiers features with an event that doesn\'t quite line up with the structured events offered on the site. ',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.special_event' => 'field.node.body.special_event',
  'field.node.field_game_warzone.special_event' => 'field.node.field_game_warzone.special_event',
  'field.node.field_location.special_event' => 'field.node.field_location.special_event',
  'field.node.field_campaign_badge.special_event' => 'field.node.field_campaign_badge.special_event',
  'field.node.field_website.special_event' => 'field.node.field_website.special_event',
  'field.node.field_entry_fee.special_event' => 'field.node.field_entry_fee.special_event',
  'field.node.field_points_per_army.special_event' => 'field.node.field_points_per_army.special_event',
  'field.node.field_event_date.special_event' => 'field.node.field_event_date.special_event',
  'field.node.field_slots_warzone.special_event' => 'field.node.field_slots_warzone.special_event',
  'field.node.field_status.special_event' => 'field.node.field_status.special_event',
  'field.node.field_special_event_type.special_event' => 'field.node.field_special_event_type.special_event',
  'field.node.field_event_type.special_event' => 'field.node.field_event_type.special_event',
  'field.node.field_registration_deadline.special_event' => 'field.node.field_registration_deadline.special_event',
  'field.node.field_warzone_scheduling.special_event' => 'field.node.field_warzone_scheduling.special_event',
  'field.node.field_radioactivity.special_event' => 'field.node.field_radioactivity.special_event',
  'permission.create_special_event_content' => 'permission.create_special_event_content',
  'permission.edit_own_special_event_content' => 'permission.edit_own_special_event_content',
  'permission.edit_any_special_event_content' => 'permission.edit_any_special_event_content',
  'permission.delete_own_special_event_content' => 'permission.delete_own_special_event_content',
  'permission.delete_any_special_event_content' => 'permission.delete_any_special_event_content',
);

$modules = array(
  0 => 'node',
);
