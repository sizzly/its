<?php
/**
 * @file
 * file_display.image__preview__file_field_colorbox.inc
 */

$api = '2.0.0';

$data = $file_display = new stdClass();
$file_display->api_version = 1;
$file_display->name = 'image__preview__file_field_colorbox';
$file_display->weight = 0;
$file_display->status = FALSE;
$file_display->settings = array(
  'colorbox_node_style' => 'avatar_small',
  'colorbox_node_style_first' => '',
  'colorbox_image_style' => '',
  'colorbox_gallery' => 'post',
  'colorbox_gallery_custom' => '',
  'colorbox_caption' => 'none',
  'colorbox_caption_custom' => '[file:field_description_image]',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
