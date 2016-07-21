<?php
/**
 * @file
 * war_zones.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function war_zones_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:gaming_club:create war_zone_tournament content'
  $permissions['node:gaming_club:create war_zone_tournament content'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
      'Recruiter' => 'Recruiter',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gaming_club:delete any war_zone_tournament content'
  $permissions['node:gaming_club:delete any war_zone_tournament content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:delete own war_zone_tournament content'
  $permissions['node:gaming_club:delete own war_zone_tournament content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:update any war_zone_tournament content'
  $permissions['node:gaming_club:update any war_zone_tournament content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gaming_club:update own war_zone_tournament content'
  $permissions['node:gaming_club:update own war_zone_tournament content'] = array(
    'roles' => array(
      'HQ' => 'HQ',
      'Officer' => 'Officer',
      'Recruiter' => 'Recruiter',
      'member' => 'member',
    ),
  );

  return $permissions;
}
