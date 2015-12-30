<?php
/**
 * @file
 * permission.delete_any_special_event_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any special_event content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.special_event' => 'content_type.special_event',
);

$optional = array();

$modules = array(
  0 => 'node',
);
