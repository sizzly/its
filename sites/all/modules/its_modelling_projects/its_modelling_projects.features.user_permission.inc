<?php
/**
 * @file
 * its_modelling_projects.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function its_modelling_projects_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access rules link models_all_complete_project'.
  $permissions['access rules link models_all_complete_project'] = array(
    'name' => 'access rules link models_all_complete_project',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link models_all_start_project'.
  $permissions['access rules link models_all_start_project'] = array(
    'name' => 'access rules link models_all_start_project',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'create models content'.
  $permissions['create models content'] = array(
    'name' => 'create models content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any models content'.
  $permissions['delete any models content'] = array(
    'name' => 'delete any models content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own models content'.
  $permissions['delete own models content'] = array(
    'name' => 'delete own models content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any models content'.
  $permissions['edit any models content'] = array(
    'name' => 'edit any models content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own models content'.
  $permissions['edit own models content'] = array(
    'name' => 'edit own models content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
