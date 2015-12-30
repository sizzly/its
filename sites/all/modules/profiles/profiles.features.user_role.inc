<?php
/**
 * @file
 * profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function profiles_user_default_roles() {
  $roles = array();

  // Exported role: Ironmonger.
  $roles['Ironmonger'] = array(
    'name' => 'Ironmonger',
    'weight' => 5,
  );

  // Exported role: System.
  $roles['System'] = array(
    'name' => 'System',
    'weight' => 15,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
