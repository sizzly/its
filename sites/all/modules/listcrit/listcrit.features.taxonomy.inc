<?php
/**
 * @file
 * listcrit.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function listcrit_taxonomy_default_vocabularies() {
  return array(
    'list_crit_tags' => array(
      'name' => 'ListCrit Classification',
      'machine_name' => 'list_crit_tags',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
