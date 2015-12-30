<?php
/**
 * @file
 * vocabulary.games.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '3',
  'name' => 'Games',
  'machine_name' => 'games',
  'description' => 'The games tracked by iToysoldiers',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
