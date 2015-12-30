<?php
/**
 * @file
 * permission.edit_own_special_event_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own special_event content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.special_event' => 'content_type.special_event',
);

$optional = array();

$modules = array(
  0 => 'node',
);
