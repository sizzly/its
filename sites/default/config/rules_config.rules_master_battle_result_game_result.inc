<?php
/**
 * @file
 * rules_config.rules_master_battle_result_game_result.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_battle_result_game_result" : {
      "LABEL" : "Master: Battle Result -\\u003E Game Result",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Battles", "Master" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "bid" : { "label" : "Battle", "type" : "node" },
        "gid" : { "label" : "Game", "type" : "node" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "gid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_result_system_" : "game_result_system_" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "gid:field-opponent-s-army" ],
            "value" : [ "bid:field-your-army" ]
          }
        },
        { "data_set" : { "data" : [ "gid:field-location" ], "value" : [ "bid:field-location" ] } },
        { "data_set" : {
            "data" : [ "gid:field-your-army" ],
            "value" : [ "bid:field-opponent-s-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-points-per-army" ],
            "value" : [ "bid:field-points-per-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-event-link" ],
            "value" : [ "bid:field-event-link" ]
          }
        },
        { "data_set" : { "data" : [ "gid:field-mission" ], "value" : [ "bid:field-mission" ] } },
        { "data_set" : {
            "data" : [ "gid:field-game-date" ],
            "value" : [ "bid:field-game-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-battle-deployment" ],
            "value" : [ "bid:field-battle-deployment" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-battle-mission-rules" ],
            "value" : [ "bid:field-battle-mission-rules" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-your-commander-survival" ],
            "value" : [ "bid:field-enemy-commander-survival" ]
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
