<?php
/**
 * @file
 * permission.delete_own_gaming_club_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own gaming_club content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.gaming_club' => 'content_type.gaming_club',
);

$optional = array();

$modules = array(
  0 => 'node',
);
