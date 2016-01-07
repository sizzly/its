<?php
/**
 * @file
 * permission.edit_any_game_results_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any game_results content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.game_results' => 'content_type.game_results',
);

$optional = array();

$modules = array(
  0 => 'node',
);
