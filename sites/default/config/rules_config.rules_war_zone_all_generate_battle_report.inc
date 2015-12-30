<?php
/**
 * @file
 * rules_config.rules_war_zone_all_generate_battle_report.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_all_generate_battle_report" : {
      "LABEL" : "War Zone: All: Generate Battle Report",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "War Zone", "type" : "node" },
        "p1id" : { "label" : "Player 1", "type" : "user" },
        "p1tid" : { "label" : "Player 1 Army", "type" : "taxonomy_term" },
        "p2tid" : { "label" : "Player 2 Army", "type" : "taxonomy_term" },
        "p1results" : { "label" : "P1 Results", "type" : "integer" },
        "brid" : { "label" : "Battle Report", "type" : "node", "parameter" : false },
        "title" : { "label" : "Battle Title", "type" : "text" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "war_zone_league" : "war_zone_league",
                "league" : "league",
                "narrative_campaign_instance" : "narrative_campaign_instance",
                "special_event" : "special_event",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : [ "title" ],
              "param_author" : [ "p1id" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-game-date" ], "value" : "now" } },
        { "data_set" : { "data" : [ "entity-created:field-your-army" ], "value" : [ "p1tid" ] } },
        { "data_set" : {
            "data" : [ "entity-created:field-opponent-s-army" ],
            "value" : [ "p2tid" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-your-results" ],
            "value" : [ "p1results" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-location" ],
            "value" : [ "wzid:field-location" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-event-link" ], "value" : [ "wzid" ] } },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } },
        { "data_set" : { "data" : [ "brid" ], "value" : [ "entity-created" ] } }
      ],
      "PROVIDES VARIABLES" : [ "brid" ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
