<?php
/**
 * @file
 * vocabulary.forums.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '31',
  'name' => 'Forums',
  'machine_name' => 'forums',
  'description' => 'Forum navigation vocabulary',
  'hierarchy' => '0',
  'module' => 'forum',
  'weight' => '-10',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'forum',
);
