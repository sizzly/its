<?php
/**
 * @file
 * rules_config.rules_battle_results_create_container.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_battle_results_create_container" : {
      "LABEL" : "Battle Results: Create Container",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "6" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "variable-added" ],
              "op" : "-",
              "input_2" : [ "bid:field-your-results" ]
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_result_system_",
              "param_title" : "[bid:title]",
              "param_author" : "20792"
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-your-results" ],
            "value" : [ "result" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-game-reference" ],
            "value" : [ "bid" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
        { "data_set" : {
            "data" : [ "bid:field-game-reference" ],
            "value" : [ "entity-created" ]
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
