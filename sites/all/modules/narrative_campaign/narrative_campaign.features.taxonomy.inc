<?php
/**
 * @file
 * narrative_campaign.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function narrative_campaign_taxonomy_default_vocabularies() {
  return array(
    'armies' => array(
      'name' => 'Armies',
      'machine_name' => 'armies',
      'description' => 'A list of armies supported by iToysoldiers',
      'hierarchy' => 0,
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
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
