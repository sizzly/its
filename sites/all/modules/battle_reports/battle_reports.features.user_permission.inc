<?php
/**
 * @file
 * battle_reports.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function battle_reports_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create game_result_system_ content'.
  $permissions['create game_result_system_ content'] = array(
    'name' => 'create game_result_system_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create game_results content'.
  $permissions['create game_results content'] = array(
    'name' => 'create game_results content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any game_result_system_ content'.
  $permissions['delete any game_result_system_ content'] = array(
    'name' => 'delete any game_result_system_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any game_results content'.
  $permissions['delete any game_results content'] = array(
    'name' => 'delete any game_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own game_result_system_ content'.
  $permissions['delete own game_result_system_ content'] = array(
    'name' => 'delete own game_result_system_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own game_results content'.
  $permissions['delete own game_results content'] = array(
    'name' => 'delete own game_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any game_result_system_ content'.
  $permissions['edit any game_result_system_ content'] = array(
    'name' => 'edit any game_result_system_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any game_results content'.
  $permissions['edit any game_results content'] = array(
    'name' => 'edit any game_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own game_result_system_ content'.
  $permissions['edit own game_result_system_ content'] = array(
    'name' => 'edit own game_result_system_ content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own game_results content'.
  $permissions['edit own game_results content'] = array(
    'name' => 'edit own game_results content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
