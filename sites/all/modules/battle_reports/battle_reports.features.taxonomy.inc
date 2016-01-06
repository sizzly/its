<?php
/**
 * @file
 * battle_reports.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function battle_reports_taxonomy_default_vocabularies() {
  return array(
    'custom_property' => array(
      'name' => 'Custom Property',
      'machine_name' => 'custom_property',
      'description' => 'Track whatever you\'d like.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'deployment' => array(
      'name' => 'Deployment',
      'machine_name' => 'deployment',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'scenario_special_rules' => array(
      'name' => 'Scenario Special Rules',
      'machine_name' => 'scenario_special_rules',
      'description' => 'The special rules in effect for the mission or scenario. ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'units' => array(
      'name' => 'Units',
      'machine_name' => 'units',
      'description' => 'Used to capture specifics about units',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'victory_conditions' => array(
      'name' => 'Victory Conditions',
      'machine_name' => 'victory_conditions',
      'description' => 'The mission objectives or victory conditions met',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
