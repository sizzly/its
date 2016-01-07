<?php
/**
 * @file
 * permission.create_game_results_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create game_results content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.game_results' => 'content_type.game_results',
);

$optional = array();

$modules = array(
  0 => 'node',
);
