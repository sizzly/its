<?php
/**
 * @file
 * content_type.gallery.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'gallery',
  'name' => 'Gallery',
  'description' => 'Show off your toy soldiers.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.gallery' => 'field.node.body.gallery',
  'field.node.field_images.gallery' => 'field.node.field_images.gallery',
  'field.node.field_site_event.gallery' => 'field.node.field_site_event.gallery',
  'field.node.field_event_link.gallery' => 'field.node.field_event_link.gallery',
  'field.node.field_blog_army.gallery' => 'field.node.field_blog_army.gallery',
  'field.node.field_location.gallery' => 'field.node.field_location.gallery',
  'field.node.field_radioactivity.gallery' => 'field.node.field_radioactivity.gallery',
  'field.node.field_image.gallery' => 'field.node.field_image.gallery',
  'permission.create_gallery_content' => 'permission.create_gallery_content',
  'permission.edit_own_gallery_content' => 'permission.edit_own_gallery_content',
  'permission.edit_any_gallery_content' => 'permission.edit_any_gallery_content',
  'permission.delete_own_gallery_content' => 'permission.delete_own_gallery_content',
  'permission.delete_any_gallery_content' => 'permission.delete_any_gallery_content',
);

$modules = array(
  0 => 'node',
);
