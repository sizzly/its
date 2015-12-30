<?php
/**
 * @file
 * permission.delete_own_army_profile_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own army_profile content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.army_profile' => 'content_type.army_profile',
);

$optional = array();

$modules = array(
  0 => 'node',
);
