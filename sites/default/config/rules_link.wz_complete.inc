<?php
/**
 * @file
 * rules_link.wz_complete.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Complete War Zone",
      "link_type" : "confirm",
      "bundles" : {
        "war_zone_league" : "war_zone_league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will finish the war zone and finalize scores. It cannot be undone. "
    },
    "name" : "wz_complete",
    "label" : "War Zone: All: Complete",
    "path" : "wz_complete",
    "entity_type" : "node"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
