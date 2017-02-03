<?php
/**
 * @file
 * events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add event node registration'.
  $permissions['add event node registration'] = array(
    'name' => 'add event node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'cancel own event node registration'.
  $permissions['cancel own event node registration'] = array(
    'name' => 'cancel own event node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'verified' => 'verified',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'verified' => 'verified',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event node registration'.
  $permissions['delete own event node registration'] = array(
    'name' => 'delete own event node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'verified' => 'verified',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event node registration'.
  $permissions['edit own event node registration'] = array(
    'name' => 'edit own event node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view event node registration'.
  $permissions['view event node registration'] = array(
    'name' => 'view event node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view own event node registration'.
  $permissions['view own event node registration'] = array(
    'name' => 'view own event node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  return $permissions;
}
