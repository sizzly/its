<?php
/**
 * @file
 * war_zones.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function war_zones_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logistics|node|war_zone_tournament|form';
  $field_group->group_name = 'group_logistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_tournament';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logistics',
    'weight' => '6',
    'children' => array(
      0 => 'field_event_date_warzone',
      1 => 'field_location',
      2 => 'field_more_info_link',
      3 => 'field_slots_warzone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-logistics field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_logistics|node|war_zone_tournament|form'] = $field_group;

  return $export;
}
