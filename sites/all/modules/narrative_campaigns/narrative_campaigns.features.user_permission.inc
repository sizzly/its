<?php
/**
 * @file
 * narrative_campaigns.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function narrative_campaigns_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access rules link warzone_campaign_launch_instance'.
  $permissions['access rules link warzone_campaign_launch_instance'] = array(
    'name' => 'access rules link warzone_campaign_launch_instance',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  return $permissions;
}
