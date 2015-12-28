<?php
/**
 * @file
 * permission.delete_any_army_profile_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any army_profile content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.army_profile' => 'content_type.army_profile',
);

$optional = array();

$modules = array(
  0 => 'node',
);
