<?php
/**
 * @file
 * field.node.field_image.army_profile.inc
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
    'label' => 'Iconography',
    'widget' => array(
      'weight' => '2',
      'type' => 'image_image',
      'module' => 'image',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
        'preview_image_style' => 'thumbnail',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'filefield_sources' => array(
          'filefield_sources' => array(
            'upload' => 'upload',
            'imce' => 0,
            'remote' => 0,
            'clipboard' => 0,
            'reference' => 0,
            'attach' => 0,
          ),
          'source_attach' => array(
            'path' => 'file_attach',
            'absolute' => '0',
            'attach_mode' => 'move',
          ),
          'source_reference' => array(
            'autocomplete' => '0',
          ),
          'source_imce' => array(
            'imce_mode' => '0',
          ),
        ),
      ),
    ),
    'settings' => array(
      'file_directory' => 'user/u[current-user:uid]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1024x1024',
      'min_resolution' => '200x200',
      'alt_field' => 0,
      'title_field' => 0,
      'default_image' => '20914',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'image',
        'settings' => array(
          'image_style' => '',
          'image_link' => '',
        ),
        'module' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '6',
        'settings' => array(
          'image_style' => 'medium',
          'image_link' => 'content',
        ),
        'module' => 'image',
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_image',
    'entity_type' => 'node',
    'bundle' => 'army_profile',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.army_profile' => 'content_type.army_profile',
  'image_style.medium' => 'image_style.medium',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
);
