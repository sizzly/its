<?php
/**
 * @file
 * narrative_campaigns.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function narrative_campaigns_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__campaign_reported_battle';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_message__campaign_reported_battle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_armies_pattern';
  $strongarm->value = 'armies/[term:name]';
  $export['pathauto_taxonomy_term_armies_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_missions_pattern';
  $strongarm->value = 'missions/[term:name]';
  $export['pathauto_taxonomy_term_missions_pattern'] = $strongarm;

  return $export;
}
