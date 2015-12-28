<?php
/**
 * @file
 * permission.delete_own_blog_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own blog content',
  'roles' => array(
    0 => 'authenticated user',
    1 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.blog' => 'content_type.blog',
);

$optional = array();

$modules = array(
  0 => 'node',
);
