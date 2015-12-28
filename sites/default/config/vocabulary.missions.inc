<?php
/**
 * @file
 * vocabulary.missions.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '4',
  'name' => 'Missions',
  'machine_name' => 'missions',
  'description' => 'The missions and scenarios that have been played',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
