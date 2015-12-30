<?php
/**
 * @file
 * permission.create_remote_blog_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create remote_blog content',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.remote_blog' => 'content_type.remote_blog',
);

$optional = array();

$modules = array(
  0 => 'node',
);
