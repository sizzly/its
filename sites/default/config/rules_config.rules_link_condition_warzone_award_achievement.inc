<?php
/**
 * @file
 * rules_config.rules_link_condition_warzone_award_achievement.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_condition_warzone_award_achievement" : {
      "LABEL" : "Rules link: Warzone: Award Achievement condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node_registration" : { "label" : "node_registration", "type" : "node_registration" },
        "aid" : { "label" : "Indicated Award", "type" : "field_collection_item" }
      },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "aid" ],
            "type" : "field_collection_item",
            "bundle" : { "value" : { "field_available_awards_comp" : "field_available_awards_comp" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "node-registration" ],
            "type" : "node_registration",
            "bundle" : { "value" : {
                "war_zone_league" : "war_zone_league",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
