<?php
/**
 * @file
 * vocabulary.event_type.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '9',
  'name' => 'Event type',
  'machine_name' => 'event_type',
  'description' => 'For use in classifying events.',
  'hierarchy' => '1',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
