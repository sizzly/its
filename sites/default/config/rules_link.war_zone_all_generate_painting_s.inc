<?php
/**
 * @file
 * rules_link.war_zone_all_generate_painting_s.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Create Painting Scorecards",
      "link_type" : "confirm",
      "bundles" : {
        "league" : "league",
        "narrative_campaign_instance" : "narrative_campaign_instance",
        "special_event" : "special_event",
        "war_zone_tournament" : "war_zone_tournament"
      },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will generate the painting scorecards for this war zone."
    },
    "name" : "war_zone_all_generate_painting_s",
    "label" : "War Zone: All: Generate Painting Scorecards",
    "path" : "war_zone_all_generate_painting_s",
    "entity_type" : "node"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
