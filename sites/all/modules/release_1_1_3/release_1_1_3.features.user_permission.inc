<?php
/**
 * @file
 * release_1_1_3.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function release_1_1_3_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access rules link war_zone_campaign_start'.
  $permissions['access rules link war_zone_campaign_start'] = array(
    'name' => 'access rules link war_zone_campaign_start',
    'roles' => array(),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link warzone_campaign_close_and_score'.
  $permissions['access rules link warzone_campaign_close_and_score'] = array(
    'name' => 'access rules link warzone_campaign_close_and_score',
    'roles' => array(),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link warzone_campaign_launch_instance'.
  $permissions['access rules link warzone_campaign_launch_instance'] = array(
    'name' => 'access rules link warzone_campaign_launch_instance',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link warzone_campaign_open_phase'.
  $permissions['access rules link warzone_campaign_open_phase'] = array(
    'name' => 'access rules link warzone_campaign_open_phase',
    'roles' => array(),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link warzone_campaign_skip_phase'.
  $permissions['access rules link warzone_campaign_skip_phase'] = array(
    'name' => 'access rules link warzone_campaign_skip_phase',
    'roles' => array(),
    'module' => 'rules_link',
  );

  // Exported permission: 'add narrative_campaign_instance node registration'.
  $permissions['add narrative_campaign_instance node registration'] = array(
    'name' => 'add narrative_campaign_instance node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'cancel own narrative_campaign_instance node registration'.
  $permissions['cancel own narrative_campaign_instance node registration'] = array(
    'name' => 'cancel own narrative_campaign_instance node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'create narrative_campaign content'.
  $permissions['create narrative_campaign content'] = array(
    'name' => 'create narrative_campaign content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create narrative_campaign_instance content'.
  $permissions['create narrative_campaign_instance content'] = array(
    'name' => 'create narrative_campaign_instance content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own narrative_campaign content'.
  $permissions['edit own narrative_campaign content'] = array(
    'name' => 'edit own narrative_campaign content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own narrative_campaign_instance content'.
  $permissions['edit own narrative_campaign_instance content'] = array(
    'name' => 'edit own narrative_campaign_instance content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own narrative_campaign_instance node registration'.
  $permissions['edit own narrative_campaign_instance node registration'] = array(
    'name' => 'edit own narrative_campaign_instance node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'use Rules component rules_link_set_warzone_campaign_launch_instance'.
  $permissions['use Rules component rules_link_set_warzone_campaign_launch_instance'] = array(
    'name' => 'use Rules component rules_link_set_warzone_campaign_launch_instance',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'view narrative_campaign_instance node registration'.
  $permissions['view narrative_campaign_instance node registration'] = array(
    'name' => 'view narrative_campaign_instance node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own narrative_campaign_instance node registration'.
  $permissions['view own narrative_campaign_instance node registration'] = array(
    'name' => 'view own narrative_campaign_instance node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  return $permissions;
}
