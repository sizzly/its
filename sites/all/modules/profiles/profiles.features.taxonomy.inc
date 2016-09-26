<?php
/**
 * @file
 * profiles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function profiles_taxonomy_default_vocabularies() {
  return array(
    'armies' => array(
      'name' => 'Armies',
      'machine_name' => 'armies',
      'description' => 'A list of armies supported by iToysoldiers',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
