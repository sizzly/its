<?php
/**
 * @file
 * vocabulary.armies.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '2',
  'name' => 'Armies',
  'machine_name' => 'armies',
  'description' => 'A list of armies supported by iToysoldiers',
  'hierarchy' => '1',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
