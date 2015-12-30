<?php
/**
 * @file
 * field.node.field_campaign_badge.war_zone_league.inc
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
    'label' => 'Campaign Badge',
    'widget' => array(
      'weight' => '5',
      'type' => 'image_image',
      'module' => 'image',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
        'preview_image_style' => 'thumbnail',
        'dragdropfile_enabled' => 0,
        'filefield_sources' => array(
          'filefield_sources' => array(
            'imce' => 'imce',
            'upload' => 0,
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
            'imce_mode' => '1',
          ),
        ),
      ),
    ),
    'settings' => array(
      'file_directory' => 'campaign',
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
        'type' => 'hidden',
        'weight' => '5',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '26',
        'settings' => array(
          'image_style' => 'medium',
          'image_link' => 'content',
        ),
        'module' => 'image',
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_campaign_badge',
    'entity_type' => 'node',
    'bundle' => 'war_zone_league',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.war_zone_league' => 'content_type.war_zone_league',
  'image_style.medium' => 'image_style.medium',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
);
