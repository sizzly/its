<?php
/**
 * @file
 * its_media.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function its_media_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_file_comments'.
  $field_bases['field_file_comments'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_comments',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'reply',
    'settings' => array(
      'access' => -1,
      'allow_reply' => -1,
      'bundle' => 'file_comments',
      'display' => -1,
      'form' => -1,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'reply',
  );

  // Exported field_base: 'field_file_reference'.
  $field_bases['field_file_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'image' => 'image',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'file',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
