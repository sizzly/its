<?php
/**
 * @file
 * permission.delete_any_location_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any location content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.location' => 'content_type.location',
);

$optional = array();

$modules = array(
  0 => 'node',
);
