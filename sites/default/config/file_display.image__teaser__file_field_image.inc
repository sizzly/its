<?php
/**
 * @file
 * file_display.image__teaser__file_field_image.inc
 */

$api = '2.0.0';

$data = $file_display = new stdClass();
$file_display->api_version = 1;
$file_display->name = 'image__teaser__file_field_image';
$file_display->weight = 48;
$file_display->status = TRUE;
$file_display->settings = array(
  'image_style' => 'large',
  'image_link' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
