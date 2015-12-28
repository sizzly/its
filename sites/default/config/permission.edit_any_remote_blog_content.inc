<?php
/**
 * @file
 * permission.edit_any_remote_blog_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any remote_blog content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.remote_blog' => 'content_type.remote_blog',
);

$optional = array();

$modules = array(
  0 => 'node',
);
