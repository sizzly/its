<?php
/**
 * @file
 * file_type.image.inc
 */

$api = '2.0.0';

$data = $file_type = new stdClass();
$file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
$file_type->api_version = 1;
$file_type->type = 'image';
$file_type->label = 'Image';
$file_type->description = 'An <em>Image</em> file is a still visual.';
$file_type->mimetypes = array(
  0 => 'image/*',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
