<?php
/**
 * @file
 * permission.create_listcrit_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create listcrit content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.listcrit' => 'content_type.listcrit',
);

$optional = array();

$modules = array(
  0 => 'node',
);
