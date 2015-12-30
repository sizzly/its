<?php
/**
 * @file
 * permission.delete_own_gallery_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own gallery content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.gallery' => 'content_type.gallery',
);

$optional = array();

$modules = array(
  0 => 'node',
);
