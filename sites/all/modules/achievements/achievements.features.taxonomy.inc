<?php
/**
 * @file
 * achievements.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function achievements_taxonomy_default_vocabularies() {
  return array(
    'achievement_category' => array(
      'name' => 'Achievement Category',
      'machine_name' => 'achievement_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
