<?php
/**
 * @file
 * file_display.image__default__file_field_image.inc
 */

$api = '2.0.0';

$data = $file_display = new stdClass();
$file_display->api_version = 1;
$file_display->name = 'image__default__file_field_image';
$file_display->weight = 48;
$file_display->status = TRUE;
$file_display->settings = array(
  'image_style' => '',
  'image_link' => 'content',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
