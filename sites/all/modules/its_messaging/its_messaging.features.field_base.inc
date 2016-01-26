<?php
/**
 * @file
 * its_messaging.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function its_messaging_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_field_status_upload_images'.
  $field_bases['field_field_status_upload_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_field_status_upload_images',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'profile2_private' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
