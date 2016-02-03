<?php
/**
 * @file
 * its_achievements.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function its_achievements_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|achievement|teaser';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'achievement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Content Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_short_description',
      2 => 'field_achievement_points',
      3 => 'group_label',
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
  $field_groups['group_content_wrapper|node|achievement|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|achievement|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'achievement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_image',
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
  $field_groups['group_image_wrapper|node|achievement|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_label|node|achievement|teaser';
  $field_group->group_name = 'group_label';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'achievement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Label Wrapper',
    'weight' => '22',
    'children' => array(
      0 => 'field_achievement_category',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Label Wrapper',
      'instance_settings' => array(
        'classes' => 'topboxhead',
        'element' => 'h3',
        'attributes' => '',
        'id' => 'node_achievement_teaser_group_label',
      ),
    ),
  );
  $field_groups['group_label|node|achievement|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|achievement|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'achievement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_image_wrapper',
      1 => 'group_content_wrapper',
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
  $field_groups['group_wrapper|node|achievement|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Wrapper');
  t('Image Wrapper');
  t('Label Wrapper');
  t('Wrapper');

  return $field_groups;
}
