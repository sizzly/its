<?php
/**
 * @file
 * its_clubs.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function its_clubs_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:gaming_club:add user'
  $permissions['node:gaming_club:add user'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:administer group'
  $permissions['node:gaming_club:administer group'] = array(
    'roles' => array(
      'HQ' => 'HQ',
    ),
  );

  // Exported og permission: 'node:gaming_club:approve and deny subscription'
  $permissions['node:gaming_club:approve and deny subscription'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
      'Recruiter' => 'Recruiter',
    ),
  );

  // Exported og permission: 'node:gaming_club:create article content'
  $permissions['node:gaming_club:create article content'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
    ),
  );

  // Exported og permission: 'node:gaming_club:create forum content'
  $permissions['node:gaming_club:create forum content'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
      'Recruiter' => 'Recruiter',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gaming_club:delete any article content'
  $permissions['node:gaming_club:delete any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:delete any forum content'
  $permissions['node:gaming_club:delete any forum content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:delete own article content'
  $permissions['node:gaming_club:delete own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:delete own forum content'
  $permissions['node:gaming_club:delete own forum content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:manage members'
  $permissions['node:gaming_club:manage members'] = array(
    'roles' => array(
      'HQ' => 'HQ',
    ),
  );

  // Exported og permission: 'node:gaming_club:manage permissions'
  $permissions['node:gaming_club:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:manage roles'
  $permissions['node:gaming_club:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:moderate'
  $permissions['node:gaming_club:moderate'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:subscribe'
  $permissions['node:gaming_club:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:gaming_club:subscribe without approval'
  $permissions['node:gaming_club:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:unsubscribe'
  $permissions['node:gaming_club:unsubscribe'] = array(
    'roles' => array(
      'Officer' => 'Officer',
      'Recruiter' => 'Recruiter',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gaming_club:update any article content'
  $permissions['node:gaming_club:update any article content'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
    ),
  );

  // Exported og permission: 'node:gaming_club:update any forum content'
  $permissions['node:gaming_club:update any forum content'] = array(
    'roles' => array(
      'HQ' => 'HQ',
    ),
  );

  // Exported og permission: 'node:gaming_club:update group'
  $permissions['node:gaming_club:update group'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
    ),
  );

  // Exported og permission: 'node:gaming_club:update own article content'
  $permissions['node:gaming_club:update own article content'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
    ),
  );

  // Exported og permission: 'node:gaming_club:update own forum content'
  $permissions['node:gaming_club:update own forum content'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
      'Recruiter' => 'Recruiter',
      'member' => 'member',
    ),
  );

  return $permissions;
}
