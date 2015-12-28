<?php
/**
 * @file
 * permission.delete_any_forum_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any forum content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.forum' => 'content_type.forum',
);

$optional = array();

$modules = array(
  0 => 'node',
);
