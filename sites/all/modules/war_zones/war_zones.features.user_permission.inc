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

  // Exported permission: 'access rules link war_zone_all_generate_comp'.
  $permissions['access rules link war_zone_all_generate_comp'] = array(
    'name' => 'access rules link war_zone_all_generate_comp',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link war_zone_all_generate_painting_s'.
  $permissions['access rules link war_zone_all_generate_painting_s'] = array(
    'name' => 'access rules link war_zone_all_generate_painting_s',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link war_zone_all_open_registration'.
  $permissions['access rules link war_zone_all_open_registration'] = array(
    'name' => 'access rules link war_zone_all_open_registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link war_zone_league_forfeit_match'.
  $permissions['access rules link war_zone_league_forfeit_match'] = array(
    'name' => 'access rules link war_zone_league_forfeit_match',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link war_zone_league_i_won_button'.
  $permissions['access rules link war_zone_league_i_won_button'] = array(
    'name' => 'access rules link war_zone_league_i_won_button',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link war_zone_league_next_round'.
  $permissions['access rules link war_zone_league_next_round'] = array(
    'name' => 'access rules link war_zone_league_next_round',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link war_zone_tournament_next_round'.
  $permissions['access rules link war_zone_tournament_next_round'] = array(
    'name' => 'access rules link war_zone_tournament_next_round',
    'roles' => array(
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

  // Exported permission: 'add war_zone_league node registration'.
  $permissions['add war_zone_league node registration'] = array(
    'name' => 'add war_zone_league node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'add war_zone_tournament node registration'.
  $permissions['add war_zone_tournament node registration'] = array(
    'name' => 'add war_zone_tournament node registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'administer node registration'.
  $permissions['administer node registration'] = array(
    'name' => 'administer node registration',
    'roles' => array(
      'Ironmonger' => 'Ironmonger',
      'administrator' => 'administrator',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'cancel own war_zone_league node registration'.
  $permissions['cancel own war_zone_league node registration'] = array(
    'name' => 'cancel own war_zone_league node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'cancel own war_zone_tournament node registration'.
  $permissions['cancel own war_zone_tournament node registration'] = array(
    'name' => 'cancel own war_zone_tournament node registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
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
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create special_event content'.
  $permissions['create special_event content'] = array(
    'name' => 'create special_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create war_zone_league content'.
  $permissions['create war_zone_league content'] = array(
    'name' => 'create war_zone_league content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create war_zone_tournament content'.
  $permissions['create war_zone_tournament content'] = array(
    'name' => 'create war_zone_tournament content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
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

  // Exported permission: 'delete any war_zone_league content'.
  $permissions['delete any war_zone_league content'] = array(
    'name' => 'delete any war_zone_league content',
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

  // Exported permission: 'delete own war_zone_league content'.
  $permissions['delete own war_zone_league content'] = array(
    'name' => 'delete own war_zone_league content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own war_zone_league node registration'.
  $permissions['delete own war_zone_league node registration'] = array(
    'name' => 'delete own war_zone_league node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'delete own war_zone_tournament content'.
  $permissions['delete own war_zone_tournament content'] = array(
    'name' => 'delete own war_zone_tournament content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own war_zone_tournament node registration'.
  $permissions['delete own war_zone_tournament node registration'] = array(
    'name' => 'delete own war_zone_tournament node registration',
    'roles' => array(),
    'module' => 'node_registration',
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

  // Exported permission: 'edit any war_zone_league content'.
  $permissions['edit any war_zone_league content'] = array(
    'name' => 'edit any war_zone_league content',
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
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own war_zone_league content'.
  $permissions['edit own war_zone_league content'] = array(
    'name' => 'edit own war_zone_league content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own war_zone_league node registration'.
  $permissions['edit own war_zone_league node registration'] = array(
    'name' => 'edit own war_zone_league node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'edit own war_zone_tournament content'.
  $permissions['edit own war_zone_tournament content'] = array(
    'name' => 'edit own war_zone_tournament content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own war_zone_tournament node registration'.
  $permissions['edit own war_zone_tournament node registration'] = array(
    'name' => 'edit own war_zone_tournament node registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'other node registration'.
  $permissions['other node registration'] = array(
    'name' => 'other node registration',
    'roles' => array(
      'Ironmonger' => 'Ironmonger',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'use Rules component rules_link_set_war_zone_all_open_registration'.
  $permissions['use Rules component rules_link_set_war_zone_all_open_registration'] = array(
    'name' => 'use Rules component rules_link_set_war_zone_all_open_registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_link_set_war_zone_league_forfeit_match'.
  $permissions['use Rules component rules_link_set_war_zone_league_forfeit_match'] = array(
    'name' => 'use Rules component rules_link_set_war_zone_league_forfeit_match',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_link_set_war_zone_league_next_round'.
  $permissions['use Rules component rules_link_set_war_zone_league_next_round'] = array(
    'name' => 'use Rules component rules_link_set_war_zone_league_next_round',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'view own war_zone_league node registration'.
  $permissions['view own war_zone_league node registration'] = array(
    'name' => 'view own war_zone_league node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view own war_zone_tournament node registration'.
  $permissions['view own war_zone_tournament node registration'] = array(
    'name' => 'view own war_zone_tournament node registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view war_zone_league node registration'.
  $permissions['view war_zone_league node registration'] = array(
    'name' => 'view war_zone_league node registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view war_zone_tournament node registration'.
  $permissions['view war_zone_tournament node registration'] = array(
    'name' => 'view war_zone_tournament node registration',
    'roles' => array(
      'Ironmonger' => 'Ironmonger',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  return $permissions;
}
