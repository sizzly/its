<?php
/**
 * @file
 * permission.edit_own_game_result_system__content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own game_result_system_ content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.game_result_system_' => 'content_type.game_result_system_',
);

$optional = array();

$modules = array(
  0 => 'node',
);
