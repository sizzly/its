<?php
/**
 * @file
 * blogs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function blogs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create remote_blog content'.
  $permissions['create remote_blog content'] = array(
    'name' => 'create remote_blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any remote_blog content'.
  $permissions['delete any remote_blog content'] = array(
    'name' => 'delete any remote_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own remote_blog content'.
  $permissions['delete own remote_blog content'] = array(
    'name' => 'delete own remote_blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any remote_blog content'.
  $permissions['edit any remote_blog content'] = array(
    'name' => 'edit any remote_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own remote_blog content'.
  $permissions['edit own remote_blog content'] = array(
    'name' => 'edit own remote_blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'verified' => 'verified',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search blog content'.
  $permissions['search blog content'] = array(
    'name' => 'search blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search remote_blog content'.
  $permissions['search remote_blog content'] = array(
    'name' => 'search remote_blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  return $permissions;
}
