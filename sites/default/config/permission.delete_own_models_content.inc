<?php
/**
 * @file
 * permission.delete_own_models_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own models content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.models' => 'content_type.models',
);

$optional = array();

$modules = array(
  0 => 'node',
);
