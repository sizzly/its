<?php
/**
 * @file
 * field.node.field_images.gallery.inc
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
            'field_data_field_images' => array(
              'fid' => 'field_images_fid',
              'alt' => 'field_images_alt',
              'title' => 'field_images_title',
              'width' => 'field_images_width',
              'height' => 'field_images_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_images' => array(
              'fid' => 'field_images_fid',
              'alt' => 'field_images_alt',
              'title' => 'field_images_title',
              'width' => 'field_images_width',
              'height' => 'field_images_height',
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
    'field_name' => 'field_images',
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
    'default_value' => array(),
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_its_gallery_2',
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '17',
        'settings' => array(),
      ),
    ),
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'file_directory' => 'user/u[current-user:uid]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1024x1024',
      'min_resolution' => '',
      'alt_field' => 1,
      'title_field' => 1,
      'default_image' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'weight' => '7',
      'type' => 'media_generic',
      'module' => 'media',
      'active' => 1,
      'settings' => array(
        'browser_plugins' => array(
          'upload' => 'upload',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_default--media_browser_1' => 0,
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
    'field_name' => 'field_images',
    'entity_type' => 'node',
    'bundle' => 'gallery',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.gallery' => 'content_type.gallery',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
  2 => 'media',
);
