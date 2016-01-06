<?php
/**
 * @file
 * rules_config.rules_achievement_face_to_face.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_achievement_face_to_face" : {
      "LABEL" : "Achievement: Commander Challenges",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle ID", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "game_results" : "game_results",
                "game_result_system_" : "game_result_system_"
              }
            }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "bid:field-your-commander-survival" ], "value" : "1" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "bid:field-enemy-commander-survival" ], "value" : "1" } },
                      "DO" : [
                        { "component_rules_award_achievement" : { "aid" : "4280", "uid" : [ "bid:author" ] } }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
  2 => 'rules_conditional',
);
