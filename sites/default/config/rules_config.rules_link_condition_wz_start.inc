<?php
/**
 * @file
 * rules_config.rules_link_condition_wz_start.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_condition_wz_start" : {
      "LABEL" : "Rules link: War Zone: All: Start condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "league" : "league",
                "narrative_campaign_instance" : "narrative_campaign_instance",
                "special_event" : "special_event",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "3" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
