<?php
/**
 * @file
 * its_clubs.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function its_clubs_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:gaming_club:HQ'.
  $roles['node:gaming_club:HQ'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'gaming_club',
    'name' => 'HQ',
  );

  return $roles;
}
