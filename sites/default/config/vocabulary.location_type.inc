<?php
/**
 * @file
 * vocabulary.location_type.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '8',
  'name' => 'Location type',
  'machine_name' => 'location_type',
  'description' => 'A type of location, with an accompanying icon used for map display.',
  'hierarchy' => '1',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
