<?php
/**
 * @file
 * field.node.field_image.listcrit.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
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
    'settings' => array(
      'uri_scheme' => 'public',
      'default_image' => '21790',
      'profile2_private' => FALSE,
    ),
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_image' => array(
              'fid' => 'field_image_fid',
              'alt' => 'field_image_alt',
              'title' => 'field_image_title',
              'width' => 'field_image_width',
              'height' => 'field_image_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_image' => array(
              'fid' => 'field_image_fid',
              'alt' => 'field_image_alt',
              'title' => 'field_image_title',
              'width' => 'field_image_width',
              'height' => 'field_image_height',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_image',
    'type' => 'image',
    'module' => 'image',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
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
    'label' => 'Image',
    'widget' => array(
      'weight' => '1',
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
    'settings' => array(
      'file_directory' => 'user/u[current-user:uid]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'alt_field' => 0,
      'title_field' => 0,
      'default_image' => '21780',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '11',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '1',
        'settings' => array(
          'image_style' => 'medium',
          'image_link' => 'content',
        ),
        'module' => 'image',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(),
    'field_name' => 'field_image',
    'entity_type' => 'node',
    'bundle' => 'listcrit',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.listcrit' => 'content_type.listcrit',
  'image_style.medium' => 'image_style.medium',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
  2 => 'media',
);
