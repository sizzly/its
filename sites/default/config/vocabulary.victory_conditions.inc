<?php
/**
 * @file
 * vocabulary.victory_conditions.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '15',
  'name' => 'Victory Conditions',
  'machine_name' => 'victory_conditions',
  'description' => 'The mission objectives or victory conditions met',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
