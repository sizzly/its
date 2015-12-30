<?php
/**
 * @file
 * permission.edit_own_achievement_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own achievement content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.achievement' => 'content_type.achievement',
);

$optional = array();

$modules = array(
  0 => 'node',
);
