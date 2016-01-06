<?php
/**
 * @file
 * vocabulary.scenario_special_rules.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '16',
  'name' => 'Scenario Special Rules',
  'machine_name' => 'scenario_special_rules',
  'description' => 'The special rules in effect for the mission or scenario. ',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
