<?php
/**
 * @file
 * permission.edit_any_blog_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any blog content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.blog' => 'content_type.blog',
);

$optional = array();

$modules = array(
  0 => 'node',
);
