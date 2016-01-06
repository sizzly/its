<?php
/**
 * @file
 * permission.delete_any_achievement_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any achievement content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.achievement' => 'content_type.achievement',
);

$optional = array();

$modules = array(
  0 => 'node',
);
