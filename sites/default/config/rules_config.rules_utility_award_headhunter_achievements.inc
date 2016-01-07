<?php
/**
 * @file
 * rules_config.rules_utility_award_headhunter_achievements.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_utility_award_headhunter_achievements" : {
      "LABEL" : "Utility: Award Headhunter Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
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
            "DISPLAY" : "views_rules_2",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "count" : "Count" } },
            "DO" : [
              { "data_set" : { "data" : [ "variable-added" ], "value" : [ "count" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3303", "uid" : [ "uid" ] } },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "4" } },
                      "DO" : [
                        { "component_rules_award_achievement" : { "aid" : "3304", "uid" : [ "uid" ] } },
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "9" } },
                              "DO" : [
                                { "component_rules_award_achievement" : { "aid" : "3305", "uid" : [ "uid" ] } },
                                { "CONDITIONAL" : [
                                    {
                                      "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "19" } },
                                      "DO" : [
                                        { "component_rules_award_achievement" : { "aid" : "3306", "uid" : [ "uid" ] } },
                                        { "CONDITIONAL" : [
                                            {
                                              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "29" } },
                                              "DO" : [
                                                { "component_rules_award_achievement" : { "aid" : "3307", "uid" : [ "uid" ] } }
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
