<?php
/**
 * @file
 * war_zones.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function war_zones_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access rules link war_zone_all_open_registration'.
  $permissions['access rules link war_zone_all_open_registration'] = array(
    'name' => 'access rules link war_zone_all_open_registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link wz_complete'.
  $permissions['access rules link wz_complete'] = array(
    'name' => 'access rules link wz_complete',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link wz_start'.
  $permissions['access rules link wz_start'] = array(
    'name' => 'access rules link wz_start',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'add league node registration'.
  $permissions['add league node registration'] = array(
    'name' => 'add league node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'create league content'.
  $permissions['create league content'] = array(
    'name' => 'create league content',
    'roles' => array(),
    'module' => 'node',
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
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create special_event content'.
  $permissions['create special_event content'] = array(
    'name' => 'create special_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create war_zone_tournament content'.
  $permissions['create war_zone_tournament content'] = array(
    'name' => 'create war_zone_tournament content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any league content'.
  $permissions['delete any league content'] = array(
    'name' => 'delete any league content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any narrative_campaign content'.
  $permissions['delete any narrative_campaign content'] = array(
    'name' => 'delete any narrative_campaign content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any narrative_campaign_instance content'.
  $permissions['delete any narrative_campaign_instance content'] = array(
    'name' => 'delete any narrative_campaign_instance content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any special_event content'.
  $permissions['delete any special_event content'] = array(
    'name' => 'delete any special_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any war_zone_tournament content'.
  $permissions['delete any war_zone_tournament content'] = array(
    'name' => 'delete any war_zone_tournament content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own league content'.
  $permissions['delete own league content'] = array(
    'name' => 'delete own league content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own narrative_campaign content'.
  $permissions['delete own narrative_campaign content'] = array(
    'name' => 'delete own narrative_campaign content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own narrative_campaign_instance content'.
  $permissions['delete own narrative_campaign_instance content'] = array(
    'name' => 'delete own narrative_campaign_instance content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own special_event content'.
  $permissions['delete own special_event content'] = array(
    'name' => 'delete own special_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own war_zone_tournament content'.
  $permissions['delete own war_zone_tournament content'] = array(
    'name' => 'delete own war_zone_tournament content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any league content'.
  $permissions['edit any league content'] = array(
    'name' => 'edit any league content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any narrative_campaign content'.
  $permissions['edit any narrative_campaign content'] = array(
    'name' => 'edit any narrative_campaign content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any narrative_campaign_instance content'.
  $permissions['edit any narrative_campaign_instance content'] = array(
    'name' => 'edit any narrative_campaign_instance content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any special_event content'.
  $permissions['edit any special_event content'] = array(
    'name' => 'edit any special_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any war_zone_tournament content'.
  $permissions['edit any war_zone_tournament content'] = array(
    'name' => 'edit any war_zone_tournament content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own league content'.
  $permissions['edit own league content'] = array(
    'name' => 'edit own league content',
    'roles' => array(),
    'module' => 'node',
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

  // Exported permission: 'edit own special_event content'.
  $permissions['edit own special_event content'] = array(
    'name' => 'edit own special_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own war_zone_tournament content'.
  $permissions['edit own war_zone_tournament content'] = array(
    'name' => 'edit own war_zone_tournament content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
