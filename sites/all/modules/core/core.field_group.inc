<?php
/**
 * @file
 * core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function core_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_caption|file|image|wysiwyg';
  $field_group->group_name = 'group_caption';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'wysiwyg';
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
  $field_groups['group_caption|file|image|wysiwyg'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_body|entityform|status_all_upload_image|default';
  $field_group->group_name = 'group_image_body';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'status_all_upload_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '6',
    'children' => array(
      0 => 'field_field_status_upload_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel-body',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_body|entityform|status_all_upload_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_header|entityform|status_all_upload_image|default';
  $field_group->group_name = 'group_image_header';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'status_all_upload_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '5',
    'children' => array(
      0 => 'group_image_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel-heading',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_header|entityform|status_all_upload_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_title|entityform|status_all_upload_image|default';
  $field_group->group_name = 'group_image_title';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'status_all_upload_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_image_header';
  $field_group->data = array(
    'label' => 'Title',
    'weight' => '3',
    'children' => array(
      0 => 'field_status_content_reference',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel-title',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_title|entityform|status_all_upload_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|entityform|status_all_upload_image|default';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'status_all_upload_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_image_header',
      1 => 'group_image_body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'panel panel-default',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_wrapper|entityform|status_all_upload_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_thumbnail|file|image|wysiwyg';
  $field_group->group_name = 'group_thumbnail';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'wysiwyg';
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
  $field_groups['group_thumbnail|file|image|wysiwyg'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Caption');
  t('Header');
  t('Thumbnail');
  t('Title');
  t('Wrapper');

  return $field_groups;
}
