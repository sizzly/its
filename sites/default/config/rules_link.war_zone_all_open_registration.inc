<?php
/**
 * @file
 * rules_link.war_zone_all_open_registration.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Open War Zone",
      "link_type" : "confirm",
      "bundles" : {
        "war_zone_league" : "war_zone_league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This starts the war zone and opens up registration. It cannot be undone. "
    },
    "name" : "war_zone_all_open_registration",
    "label" : "War Zone: All: Open Registration",
    "path" : "wz-open",
    "entity_type" : "node"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
