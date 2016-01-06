<?php
/**
 * @file
 * permission.edit_own_location_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own location content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.location' => 'content_type.location',
);

$optional = array();

$modules = array(
  0 => 'node',
);
