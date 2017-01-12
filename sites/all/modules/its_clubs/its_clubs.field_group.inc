<?php
/**
 * @file
 * its_clubs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function its_clubs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_classification|node|gaming_club|form';
  $field_group->group_name = 'group_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gaming_club';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '3',
    'children' => array(
      0 => 'field_supported_games',
      1 => 'field_blog_army',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-classification field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_classification|node|gaming_club|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|gaming_club|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gaming_club';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_location',
      2 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_details|node|gaming_club|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_body|node|gaming_club|teaser';
  $field_group->group_name = 'group_media_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gaming_club';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_wrapper';
  $field_group->data = array(
    'label' => 'Media Body',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_location',
      2 => 'field_supported_games',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Body',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_body|node|gaming_club|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_left|node|gaming_club|teaser';
  $field_group->group_name = 'group_media_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gaming_club';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_wrapper';
  $field_group->data = array(
    'label' => 'Media Left',
    'weight' => '3',
    'children' => array(
      0 => 'group_spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Left',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_left|node|gaming_club|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_wrapper|node|gaming_club|teaser';
  $field_group->group_name = 'group_media_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gaming_club';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_media_body',
      1 => 'group_media_left',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_wrapper|node|gaming_club|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|gaming_club|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gaming_club';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_left';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '11',
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
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_spacer|node|gaming_club|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Classification');
  t('Details');
  t('Media Body');
  t('Media Left');
  t('Media Wrapper');
  t('Spacer');

  return $field_groups;
}
