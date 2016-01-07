<?php
/**
 * @file
 * rules_config.rules_link_condition_war_zone_tournament_next_round.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_condition_war_zone_tournament_next_round" : {
      "LABEL" : "Rules link: War Zone: Tournament: Next Round condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_tournament" : "war_zone_tournament" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "5" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
