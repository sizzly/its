<?php
/**
 * @file
 * narrative_campaigns.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function narrative_campaigns_taxonomy_default_vocabularies() {
  return array(
    'armies' => array(
      'name' => 'Armies',
      'machine_name' => 'armies',
      'description' => 'A list of armies supported by iToysoldiers',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'missions' => array(
      'name' => 'Missions',
      'machine_name' => 'missions',
      'description' => 'The missions and scenarios that have been played',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
