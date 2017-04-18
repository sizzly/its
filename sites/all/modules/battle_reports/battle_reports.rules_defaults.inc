<?php
/**
 * @file
 * battle_reports.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function battle_reports_default_rules_configuration() {
  $items = array();
  $items['rules_achievements_honoring_the_past_check'] = entity_import('rules_config', '{ "rules_achievements_honoring_the_past_check" : {
      "LABEL" : "Achievements: Honoring the Past: Check",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "rules_conditional" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
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
        { "data_convert" : {
            "USING" : { "type" : "text", "value" : [ "bid:field-game-date" ] },
            "PROVIDE" : { "conversion_result" : { "conversion_result" : "Conversion result" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\necho date(\\u0027d-M\\u0027, $conversion_result);\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "variable-added" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "14-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5461", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "15-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5462", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "16-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5463", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "17-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5464", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "21-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5497", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "22-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5498", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "28-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5499", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "17-Apr" }, "DO" : [] } },
              { "CASE" : {
                  "USING" : { "value" : "17-May" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4168", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "01-Jun" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4166", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "11-Oct" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4889", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "25-Oct" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4890", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "26-Oct" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4891", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "28-Oct" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4888", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "01-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4892", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "02-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4893", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "08-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4895", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "09-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4901", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "15-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4902", "uid" : [ "bid:author" ] } }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_battles_check_achievements'] = entity_import('rules_config', '{ "rules_battles_check_achievements" : {
      "LABEL" : "Battles: Check Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "p1" : { "label" : "Player", "type" : "user" },
        "bid" : { "label" : "Battle", "type" : "node" }
      },
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
        { "component_rules_utility_award_command_achievements" : { "uid" : [ "p1" ] } },
        { "component_rules_utility_award_headhunter_achievements" : { "uid" : [ "p1" ] } },
        { "component_rules_utility_award_magehunter_achievements" : { "uid" : [ "p1" ] } },
        { "component_rules_achievement_face_to_face" : { "bid" : [ "bid" ] } },
        { "component_rules_achievements_honoring_the_past_check" : { "bid" : [ "bid" ] } }
      ]
    }
  }');
  $items['rules_status_quick_battle_submission'] = entity_import('rules_config', '{ "rules_status_quick_battle_submission" : {
      "LABEL" : "Status: Quick Battle Submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Release 4.0" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "quick_battle" : "quick_battle" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : "[site:current-date] [entityform:field-your-army] vs [entityform:field-opponent-s-army]",
              "param_author" : [ "entityform:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-location" ],
            "value" : [ "entityform:field-location" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-game-date" ], "value" : "now" } },
        { "data_set" : {
            "data" : [ "entity-created:field-your-army" ],
            "value" : [ "entityform:field-your-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-opponent-s-army" ],
            "value" : [ "entityform:field-opponent-s-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-your-results" ],
            "value" : [ "entityform:field-your-results" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
      ]
    }
  }');
  return $items;
}
