<?php
/**
 * @file
 * rules_config.rules_link_set_war_zone_tournament_next_round.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_war_zone_tournament_next_round" : {
      "LABEL" : "Rules link: War Zone: Tournament: Next Round rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } },
            "DO" : [
              { "component_rules_war_zone_tournament_generate_battle_reports" : { "wzid" : [ "node" ] } },
              { "component_rules_war_zone_tournament_increment_round" : { "wzid" : [ "node" ] } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "war_zone_all_new_round_message",
                    "param_user" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-stream-node-ref" ],
                  "value" : [ "node" ]
                }
              }
            ],
            "LABEL" : "War Zone: Tournament: Next Round Wrapper"
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
