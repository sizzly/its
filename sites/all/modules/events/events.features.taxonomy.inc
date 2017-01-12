<?php
/**
 * @file
 * events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function events_taxonomy_default_vocabularies() {
  return array(
    'event_type' => array(
      'name' => 'Event type',
      'machine_name' => 'event_type',
      'description' => 'For use in classifying events.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
