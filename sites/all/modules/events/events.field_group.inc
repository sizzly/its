<?php
/**
 * @file
 * events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_classification|node|event|form';
  $field_group->group_name = 'group_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '4',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_supported_games',
      2 => 'field_blog_army',
      3 => 'field_event_organizer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Classification',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-classification field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_classification|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|event|teaser';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Content Wrapper',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'field_event_type',
      2 => 'field_location',
      3 => 'field_event_date_warzone',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Content Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_content_wrapper|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|event|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_website',
      2 => 'field_entry_fee',
      3 => 'og_group_ref',
      4 => 'field_points_per_army',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|event|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '8',
    'children' => array(
      0 => 'group_spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_wrapper|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leagueruleset|node|event|form';
  $field_group->group_name = 'group_leagueruleset';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_warzone_settings';
  $field_group->data = array(
    'label' => 'League Ruleset',
    'weight' => '16',
    'children' => array(
      0 => 'field_round_duration',
      1 => 'field_event_league_rules',
      2 => 'field_league_report_requirement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-leagueruleset field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_leagueruleset|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|event|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '16',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'thumbnail',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spacer|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warzone_settings|node|event|form';
  $field_group->group_name = 'group_warzone_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'War Zone Settings',
    'weight' => '6',
    'children' => array(
      0 => 'field_enable_its_features',
      1 => 'field_campaign_badge',
      2 => 'field_registration_deadline',
      3 => 'field_slots_warzone',
      4 => 'field_warzone_scheduling',
      5 => 'field_open_registration',
      6 => 'field_enable_its_league_mangemen',
      7 => 'group_leagueruleset',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'War Zone Settings',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-warzone-settings field-group-fieldset',
        'description' => 'War Zone Settings are enabled when you enable iToysoldiers Event Features.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_warzone_settings|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|event|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_content_wrapper',
      1 => 'group_image_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wrapper|node|event|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Classification');
  t('Content Wrapper');
  t('Details');
  t('Image Wrapper');
  t('League Ruleset');
  t('Spacer');
  t('War Zone Settings');
  t('Wrapper');

  return $field_groups;
}
