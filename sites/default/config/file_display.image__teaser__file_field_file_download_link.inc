<?php
/**
 * @file
 * file_display.image__teaser__file_field_file_download_link.inc
 */

$api = '2.0.0';

$data = $file_display = new stdClass();
$file_display->api_version = 1;
$file_display->name = 'image__teaser__file_field_file_download_link';
$file_display->weight = 0;
$file_display->status = FALSE;
$file_display->settings = array(
  'text' => 'Download [file:name]',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
