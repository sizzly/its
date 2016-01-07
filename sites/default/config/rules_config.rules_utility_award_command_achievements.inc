<?php
/**
 * @file
 * rules_config.rules_utility_award_command_achievements.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_utility_award_command_achievements" : {
      "LABEL" : "Utility: Award Command Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "Utility" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_1",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "count" } },
            "DO" : [
              { "data_set" : { "data" : [ "variable-added" ], "value" : [ "nid" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "value" : "1" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3297", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3298", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "19" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3299", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "29" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3300", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "39" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3301", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "49" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3335", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "74" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3336", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "99" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3337", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "124" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3338", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "149" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3339", "uid" : [ "uid" ] } }
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
  3 => 'views_rules',
);
