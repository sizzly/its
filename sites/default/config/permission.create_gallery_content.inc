<?php
/**
 * @file
 * permission.create_gallery_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create gallery content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.gallery' => 'content_type.gallery',
);

$optional = array();

$modules = array(
  0 => 'node',
);
