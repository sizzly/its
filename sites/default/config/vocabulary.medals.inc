<?php
/**
 * @file
 * vocabulary.medals.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '33',
  'name' => 'Medals',
  'machine_name' => 'medals',
  'description' => 'Links to User Badges.',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
