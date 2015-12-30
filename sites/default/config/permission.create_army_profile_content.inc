<?php
/**
 * @file
 * permission.create_army_profile_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create army_profile content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.army_profile' => 'content_type.army_profile',
);

$optional = array();

$modules = array(
  0 => 'node',
);
