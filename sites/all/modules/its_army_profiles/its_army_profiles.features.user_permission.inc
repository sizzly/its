<?php
/**
 * @file
 * its_army_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function its_army_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create army_profile content'.
  $permissions['create army_profile content'] = array(
    'name' => 'create army_profile content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any army_profile content'.
  $permissions['delete any army_profile content'] = array(
    'name' => 'delete any army_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own army_profile content'.
  $permissions['delete own army_profile content'] = array(
    'name' => 'delete own army_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any army_profile content'.
  $permissions['edit any army_profile content'] = array(
    'name' => 'edit any army_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own army_profile content'.
  $permissions['edit own army_profile content'] = array(
    'name' => 'edit own army_profile content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
