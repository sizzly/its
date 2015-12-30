<?php
/**
 * @file
 * permission.create_location_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create location content',
  'roles' => array(
    0 => 'authenticated user',
    1 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.location' => 'content_type.location',
);

$optional = array();

$modules = array(
  0 => 'node',
);
