<?php
/**
 * @file
 * rules_config.rules_update_game_result.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_update_game_result" : {
      "LABEL" : "Update Game Result",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "battle_result_changed" : { "label" : "Battle Result", "type" : "entity" },
        "game_container_modify" : { "label" : "Game Container", "type" : "entity" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "battle-result-changed" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "game-container-modify" ],
            "type" : "node",
            "bundle" : { "value" : { "game_result_system_" : "game_result_system_" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "game-container-modify:field-mission" ],
            "value" : [ "battle-result-changed:field-mission" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-game-date" ],
            "value" : [ "battle-result-changed:field-game-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-your-army" ],
            "value" : [ "battle-result-changed:field-opponent-s-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-opponent-s-army" ],
            "value" : [ "battle-result-changed:field-your-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-location" ],
            "value" : [ "battle-result-changed:field-location" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-event-link" ],
            "value" : [ "battle-result-changed:field-event-link" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:created" ],
            "value" : [ "battle-result-changed:created" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-points-per-army" ],
            "value" : [ "battle-result-changed:field-points-per-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-your-commander-survival" ],
            "value" : [ "battle-result-changed:field-enemy-commander-survival" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-enemy-commander-survival" ],
            "value" : [ "battle-result-changed:field-your-commander-survival" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-battleresult-enemy-command" ],
            "value" : [ "battle-result-changed:field-batteresult-commander" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-batteresult-commander" ],
            "value" : [ "battle-result-changed:field-battleresult-enemy-command" ]
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
