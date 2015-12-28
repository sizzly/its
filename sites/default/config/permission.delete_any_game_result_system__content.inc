<?php
/**
 * @file
 * permission.delete_any_game_result_system__content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any game_result_system_ content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.game_result_system_' => 'content_type.game_result_system_',
);

$optional = array();

$modules = array(
  0 => 'node',
);
