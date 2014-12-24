<?php
/**
 * @file
 * narrative_campaign.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function narrative_campaign_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logistics|node|narrative_campaign_instance|form';
  $field_group->group_name = 'group_logistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logistics',
    'weight' => '9',
    'children' => array(
      0 => 'field_website',
      1 => 'field_event_date',
      2 => 'field_location',
      3 => 'field_entry_fee',
      4 => 'field_game_warzone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Logistics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-logistics field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_logistics|node|narrative_campaign_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|narrative_campaign_instance|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '17',
    'children' => array(
      0 => 'field_status',
      1 => 'field_round_warzone',
      2 => 'field_event_type',
      3 => 'field_event_link',
      4 => 'field_campaign_badge',
      5 => 'field_victor_narrative',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta|node|narrative_campaign_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|narrative_campaign_instance|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '14',
    'children' => array(
      0 => 'field_eligible_battles_narrative',
      1 => 'field_allow_sign_up_narrative',
      2 => 'field_registration_deadline',
      3 => 'field_round_duration',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-options field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_options|node|narrative_campaign_instance|form'] = $field_group;

  return $export;
}
