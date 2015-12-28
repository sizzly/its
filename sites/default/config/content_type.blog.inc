<?php
/**
 * @file
 * content_type.blog.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'blog',
  'name' => 'Blog entry',
  'description' => 'Use for multi-user blogs. Every user gets a personal blog.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.blog' => 'field.node.body.blog',
  'field.node.field_blog_army.blog' => 'field.node.field_blog_army.blog',
  'field.node.field_rate_content.blog' => 'field.node.field_rate_content.blog',
  'field.node.field_image.blog' => 'field.node.field_image.blog',
  'field.node.field_radioactivity.blog' => 'field.node.field_radioactivity.blog',
  'permission.create_blog_content' => 'permission.create_blog_content',
  'permission.edit_own_blog_content' => 'permission.edit_own_blog_content',
  'permission.edit_any_blog_content' => 'permission.edit_any_blog_content',
  'permission.delete_own_blog_content' => 'permission.delete_own_blog_content',
  'permission.delete_any_blog_content' => 'permission.delete_any_blog_content',
);

$modules = array(
  0 => 'node',
);
