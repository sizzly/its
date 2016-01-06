<?php
/**
 * @file
 * rules_config.rules_wz_all_create_battle_report_from_form.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_wz_all_create_battle_report_from_form" : {
      "LABEL" : "WZ: All: Create Battle Report from Form",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "p1" : { "label" : "P1", "type" : "user" },
        "p1_result" : { "label" : "P1 Result", "type" : "integer" },
        "p1_army" : { "label" : "P1 Army", "type" : "taxonomy_term" },
        "p2_army" : { "label" : "P2 Army", "type" : "taxonomy_term" },
        "wzid" : { "label" : "War Zone", "type" : "node" },
        "title" : { "label" : "Title", "type" : "text" },
        "brid" : { "label" : "Battle Report", "type" : "node", "parameter" : false }
      },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : [ "title" ],
              "param_author" : [ "p1" ]
            },
            "PROVIDE" : { "entity_created" : { "battle_report" : "Battle Report" } }
          }
        },
        { "data_set" : { "data" : [ "battle-report:field-game-date" ], "value" : "now" } },
        { "data_set" : { "data" : [ "battle-report:field-your-army" ], "value" : [ "p1-army" ] } },
        { "data_set" : {
            "data" : [ "battle-report:field-opponent-s-army" ],
            "value" : [ "p2-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "battle-report:field-your-results" ],
            "value" : [ "p1-result" ]
          }
        },
        { "data_set" : { "data" : [ "battle-report:field-event-link" ], "value" : [ "wzid" ] } },
        { "entity_save" : { "data" : [ "battle-report" ], "immediate" : 1 } },
        { "data_set" : { "data" : [ "brid" ], "value" : [ "battle-report" ] } }
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
