<?php
/**
 * @file
 * permission.create_forum_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create forum content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.forum' => 'content_type.forum',
);

$optional = array();

$modules = array(
  0 => 'node',
);
