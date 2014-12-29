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
  $field_group->identifier = 'group_identification_sc|entityform|score_card|form';
  $field_group->group_name = 'group_identification_sc';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'score_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identification',
    'weight' => '0',
    'children' => array(
      0 => 'field_round_sc',
      1 => 'field_state_sc',
      2 => 'field_registration_sc',
      3 => 'field_phase_sc',
      4 => 'field_explanation_sc',
      5 => 'field_event_link',
      6 => 'field_opponent_reg_sc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-identification-sc field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_identification_sc|entityform|score_card|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_website',
      1 => 'field_event_date',
      2 => 'field_location',
      3 => 'field_entry_fee',
      4 => 'field_game_warzone',
      5 => 'field_slots_warzone',
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
  $field_group->identifier = 'group_logistics|node|special_event|form';
  $field_group->group_name = 'group_logistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'special_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logistics',
    'weight' => '7',
    'children' => array(
      0 => 'field_location',
      1 => 'field_website',
      2 => 'field_entry_fee',
      3 => 'field_event_date',
      4 => 'field_slots_warzone',
      5 => 'field_registration_deadline',
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
  $export['group_logistics|node|special_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|special_event|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'special_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '8',
    'children' => array(
      0 => 'field_status',
      1 => 'field_event_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_meta|node|special_event|form'] = $field_group;

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
    'weight' => '7',
    'children' => array(
      0 => 'field_eligible_battles_narrative',
      1 => 'field_allow_sign_up_narrative',
      2 => 'field_registration_deadline',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_points_sc|entityform|score_card|form';
  $field_group->group_name = 'group_points_sc';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'score_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Points',
    'weight' => '24',
    'children' => array(
      0 => 'field_victory_points_sc',
      1 => 'field_army_points_sc',
      2 => 'field_sportsmanship_sc',
      3 => 'field_painting_sc',
      4 => 'field_comp_sc',
      5 => 'field_additional_points_sc',
      6 => 'field_strength_of_schedule_sc',
      7 => 'field_battle_points_sc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-points-sc field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_points_sc|entityform|score_card|form'] = $field_group;

  return $export;
}
