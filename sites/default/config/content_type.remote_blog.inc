<?php
/**
 * @file
 * content_type.remote_blog.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'remote_blog',
  'name' => 'Remote Blog',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.field_website.remote_blog' => 'field.node.field_website.remote_blog',
  'permission.create_remote_blog_content' => 'permission.create_remote_blog_content',
  'permission.edit_own_remote_blog_content' => 'permission.edit_own_remote_blog_content',
  'permission.edit_any_remote_blog_content' => 'permission.edit_any_remote_blog_content',
  'permission.delete_own_remote_blog_content' => 'permission.delete_own_remote_blog_content',
  'permission.delete_any_remote_blog_content' => 'permission.delete_any_remote_blog_content',
);

$modules = array(
  0 => 'node',
);
