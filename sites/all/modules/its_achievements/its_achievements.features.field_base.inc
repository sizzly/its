<?php
/**
 * @file
 * its_achievements.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function its_achievements_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_medal_name'.
  $field_bases['field_medal_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_medal_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
