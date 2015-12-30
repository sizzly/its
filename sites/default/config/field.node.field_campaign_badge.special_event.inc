<?php
/**
 * @file
 * field.node.field_campaign_badge.special_event.inc
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
      'default_image' => 0,
      'profile2_private' => FALSE,
      'uri_scheme' => 'public',
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
            'field_data_field_campaign_badge' => array(
              'fid' => 'field_campaign_badge_fid',
              'alt' => 'field_campaign_badge_alt',
              'title' => 'field_campaign_badge_title',
              'width' => 'field_campaign_badge_width',
              'height' => 'field_campaign_badge_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_campaign_badge' => array(
              'fid' => 'field_campaign_badge_fid',
              'alt' => 'field_campaign_badge_alt',
              'title' => 'field_campaign_badge_title',
              'width' => 'field_campaign_badge_width',
              'height' => 'field_campaign_badge_height',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_campaign_badge',
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
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '1',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'module' => 'image',
      ),
    ),
    'label' => 'Campaign Badge',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'campaign',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => '3',
    ),
    'field_name' => 'field_campaign_badge',
    'entity_type' => 'node',
    'bundle' => 'special_event',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.special_event' => 'content_type.special_event',
  'image_style.medium' => 'image_style.medium',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
);
