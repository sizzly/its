<?php
/**
 * @file
 * its_media.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function its_media_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_caption|file|image|default';
  $field_group->group_name = 'group_caption';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_thumbnail';
  $field_group->data = array(
    'label' => 'Caption',
    'weight' => '2',
    'children' => array(
      0 => 'field_description_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Caption',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'caption',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_caption|file|image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_caption|file|image|full';
  $field_group->group_name = 'group_caption';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_thumbnail';
  $field_group->data = array(
    'label' => 'Caption',
    'weight' => '2',
    'children' => array(
      0 => 'field_description_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Caption',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'caption',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_caption|file|image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_thumbnail|file|image|default';
  $field_group->group_name = 'group_thumbnail';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thumbnail',
    'weight' => '0',
    'children' => array(
      0 => 'file',
      1 => 'group_caption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Thumbnail',
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
  $field_groups['group_thumbnail|file|image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_thumbnail|file|image|full';
  $field_group->group_name = 'group_thumbnail';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thumbnail',
    'weight' => '0',
    'children' => array(
      0 => 'file',
      1 => 'group_caption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Thumbnail',
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
  $field_groups['group_thumbnail|file|image|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Caption');
  t('Thumbnail');

  return $field_groups;
}
