<?php
/**
 * @file
 * file_display.image__preview__file_field_media_large_icon.inc
 */

$api = '2.0.0';

$data = $file_display = new stdClass();
$file_display->api_version = 1;
$file_display->name = 'image__preview__file_field_media_large_icon';
$file_display->weight = 49;
$file_display->status = FALSE;
$file_display->settings = array(
  'image_style' => 'media_thumbnail',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
