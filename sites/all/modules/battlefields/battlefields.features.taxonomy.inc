<?php
/**
 * @file
 * battlefields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function battlefields_taxonomy_default_vocabularies() {
  return array(
    'location_type' => array(
      'name' => 'Location type',
      'machine_name' => 'location_type',
      'description' => 'A type of location, with an accompanying icon used for map display.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
