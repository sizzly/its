<?php
/**
 * @file
 * games_and_armies.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function games_and_armies_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_battle_ranking'.
  $field_bases['field_battle_ranking'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_battle_ranking',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
