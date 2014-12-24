<?php
/**
 * @file
 * release_1_1_3.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function release_1_1_3_taxonomy_default_vocabularies() {
  return array(
    'armies' => array(
      'name' => 'Armies',
      'machine_name' => 'armies',
      'description' => 'A list of armies supported by iToysoldiers',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'event_type' => array(
      'name' => 'Event type',
      'machine_name' => 'event_type',
      'description' => 'For use in classifying events.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'games' => array(
      'name' => 'Games',
      'machine_name' => 'games',
      'description' => 'The games tracked by iToysoldiers',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
