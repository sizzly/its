<?php
/**
 * @file
 * file_display.image__default__file_field_colorbox.inc
 */

$api = '2.0.0';

$data = $file_display = new stdClass();
$file_display->api_version = 1;
$file_display->name = 'image__default__file_field_colorbox';
$file_display->weight = 0;
$file_display->status = FALSE;
$file_display->settings = array(
  'colorbox_node_style' => '',
  'colorbox_node_style_first' => '',
  'colorbox_image_style' => '',
  'colorbox_gallery' => 'post',
  'colorbox_gallery_custom' => '',
  'colorbox_caption' => 'auto',
  'colorbox_caption_custom' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
