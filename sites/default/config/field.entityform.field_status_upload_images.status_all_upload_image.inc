<?php
/**
 * @file
 * field.entityform.field_status_upload_images.status_all_upload_image.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'uri_scheme' => 'public',
      'default_image' => 0,
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_status_upload_images' => array(
              'fid' => 'field_status_upload_images_fid',
              'alt' => 'field_status_upload_images_alt',
              'title' => 'field_status_upload_images_title',
              'width' => 'field_status_upload_images_width',
              'height' => 'field_status_upload_images_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_status_upload_images' => array(
              'fid' => 'field_status_upload_images_fid',
              'alt' => 'field_status_upload_images_alt',
              'title' => 'field_status_upload_images_title',
              'width' => 'field_status_upload_images_width',
              'height' => 'field_status_upload_images_height',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'fid' => array(
        'table' => 'file_managed',
        'columns' => array(
          'fid' => 'fid',
        ),
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'field_name' => 'field_status_upload_images',
    'type' => 'image',
    'module' => 'image',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'fid' => array(
        'description' => 'The {file_managed}.fid being referenced in this field.',
        'type' => 'int',
        'not null' => FALSE,
        'unsigned' => TRUE,
      ),
      'alt' => array(
        'description' => 'Alternative image text, for the image\'s \'alt\' attribute.',
        'type' => 'varchar',
        'length' => 512,
        'not null' => FALSE,
      ),
      'title' => array(
        'description' => 'Image title text, for the image\'s \'title\' attribute.',
        'type' => 'varchar',
        'length' => 1024,
        'not null' => FALSE,
      ),
      'width' => array(
        'description' => 'The width of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
      'height' => array(
        'description' => 'The height of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Upload',
    'widget' => array(
      'weight' => '2',
      'type' => 'media_generic',
      'module' => 'media',
      'active' => 1,
      'settings' => array(
        'browser_plugins' => array(
          'upload' => 'upload',
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
        ),
        'allowed_types' => array(
          'image' => 'image',
          'video' => 0,
          'audio' => 0,
          'document' => 0,
        ),
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'alt_field' => 0,
      'title_field' => 0,
      'default_image' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'colorbox',
        'weight' => '1',
        'settings' => array(
          'colorbox_node_style' => 'large_button',
          'colorbox_node_style_first' => '',
          'colorbox_image_style' => 'large',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_caption' => 'custom',
          'colorbox_caption_custom' => '[file:name]',
          'colorbox_multivalue_index' => NULL,
        ),
        'module' => 'colorbox',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_status_upload_images',
    'entity_type' => 'entityform',
    'bundle' => 'status_all_upload_image',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
  2 => 'media',
);
