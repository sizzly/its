<?php
/**
 * @file
 * permission.delete_own_listcrit_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own listcrit content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.listcrit' => 'content_type.listcrit',
);

$optional = array();

$modules = array(
  0 => 'node',
);
