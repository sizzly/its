<?php
/**
 * @file
 * its_clubs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function its_clubs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gaming_club content'.
  $permissions['create gaming_club content'] = array(
    'name' => 'create gaming_club content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gaming_club content'.
  $permissions['delete any gaming_club content'] = array(
    'name' => 'delete any gaming_club content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own gaming_club content'.
  $permissions['delete own gaming_club content'] = array(
    'name' => 'delete own gaming_club content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any gaming_club content'.
  $permissions['edit any gaming_club content'] = array(
    'name' => 'edit any gaming_club content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own gaming_club content'.
  $permissions['edit own gaming_club content'] = array(
    'name' => 'edit own gaming_club content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
