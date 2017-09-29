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
  $items['rules_battle_reports_determine_k_value'] = entity_import('rules_config', '{ "rules_battle_reports_determine_k_value" : {
      "LABEL" : "Battle Reports: Determine K Value",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : {
        "uid" : { "label" : "Player", "type" : "user" },
        "k" : { "label" : "K Value", "type" : "decimal", "parameter" : false },
        "ptid" : { "label" : "Player Army", "type" : "taxonomy_term" },
        "otid" : { "label" : "Opponent Army", "type" : "taxonomy_term" },
        "bid" : { "label" : "Battle", "type" : "node" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "ptid" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "otid" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        },
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
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "num_games" : "Num Games" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "decimal", "value" : "32" },
            "PROVIDE" : { "variable_added" : { "k_value" : "K Value" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "battles_ranking_rules",
            "DISPLAY" : "views_rules_1",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "Count" } },
            "DO" : [ { "data_set" : { "data" : [ "num-games" ], "value" : [ "nid" ] } } ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "num-games" ], "op" : "\\u003C", "value" : "30" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : {
                          "data" : [ "uid:field-battle-ranking-user" ],
                          "op" : "\\u003C",
                          "value" : "2300"
                        }
                      },
                      "DO" : [ { "data_set" : { "data" : [ "k-value" ], "value" : "40" } } ]
                    },
                    { "ELSE" : [ { "data_set" : { "data" : [ "k-value" ], "value" : "20" } } ] }
                  ]
                }
              ]
            },
            { "ELSE" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : {
                          "data" : [ "uid:field-battle-ranking-user" ],
                          "op" : "\\u003C",
                          "value" : "2400"
                        }
                      },
                      "DO" : [ { "data_set" : { "data" : [ "k-value" ], "value" : "20" } } ]
                    },
                    { "ELSE" : [ { "data_set" : { "data" : [ "k-value" ], "value" : "10" } } ] }
                  ]
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "bid:author:field-provisional-flag" ], "value" : "1" } },
                      "DO" : [
                        { "data_set" : { "data" : [ "bid:author:field-provisional-flag" ], "value" : "0" } },
                        { "entity_save" : { "data" : [ "bid:author" ], "immediate" : "1" } }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "data_set" : { "data" : [ "k" ], "value" : [ "k-value" ] } }
      ],
      "PROVIDES VARIABLES" : [ "k" ]
    }
  }');
  $items['rules_battle_reports_rate_faction'] = entity_import('rules_config', '{ "rules_battle_reports_rate_faction" : {
      "LABEL" : "Battle Reports: Rate Faction",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "rules_conditional" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "bid:field-your-army" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "bid:field-opponent-s-army" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "bid:field-your-army:field-battle-ranking" ]
            },
            "PROVIDE" : { "variable_added" : { "r1" : "r1" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "bid:field-opponent-s-army:field-battle-ranking" ]
            },
            "PROVIDE" : { "variable_added" : { "r2" : "r2" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$raw = $r1;\\r\\n$exponent = $raw \\/ 400;\\r\\n$value = pow(10, $exponent);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "r_1" : "R(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$raw = $r2;\\r\\n$exponent = $raw \\/ 400;\\r\\n$value = pow(10,$exponent);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "r_2" : "R(2)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $r_1 \\/ ($r_1 + $r_2);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "e_1" : "E(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $r_2 \\/ ($r_1 + $r_2);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "e_2" : "E(2)" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "decimal", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "s_1" : "S(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "decimal", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "s_2" : "S(2)" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "bid:field-victory" ], "value" : "1" } },
              "DO" : [ { "data_set" : { "data" : [ "s-1" ], "value" : "1" } } ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "bid:field-draw" ], "value" : "1" } },
              "DO" : [
                { "data_set" : { "data" : [ "s-1" ], "value" : ".5" } },
                { "data_set" : { "data" : [ "s-2" ], "value" : ".5" } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "bid:field-defeat" ], "value" : "1" } },
              "DO" : [ { "data_set" : { "data" : [ "s-2" ], "value" : "1" } } ]
            }
          ]
        },
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : "32" },
            "PROVIDE" : { "variable_added" : { "k" : "K" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $r1 + $k * ($s_1 - $e_1);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "r1_updated" : "R1 Updated" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $r2 + $k * ($s_2 - $e_2);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "r2_updated" : "R2 Updated" } }
          }
        },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "r1-updated" ] },
            "PROVIDE" : { "conversion_result" : { "r1_int" : "R1 to integer" } }
          }
        },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "r2-updated" ] },
            "PROVIDE" : { "conversion_result" : { "r2_int" : "R2 to Integer" } }
          }
        },
        { "data_set" : {
            "data" : [ "bid:field-your-army:field-battle-ranking" ],
            "value" : [ "r1-int" ]
          }
        },
        { "data_set" : {
            "data" : [ "bid:field-opponent-s-army:field-battle-ranking" ],
            "value" : [ "r2-int" ]
          }
        }
      ]
    }
  }');
  $items['rules_battle_reports_rate_player_unack'] = entity_import('rules_config', '{ "rules_battle_reports_rate_player_unack" : {
      "LABEL" : "Battle Reports: Rate Player - Unacknowledged",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "rules_conditional" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "bid:field-opponent-s-army" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "bid:field-your-army" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "bid:author:field-battle-ranking-user" ]
            },
            "PROVIDE" : { "variable_added" : { "r1" : "r1" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "bid:field-opponent-s-army:field-battle-ranking" ]
            },
            "PROVIDE" : { "variable_added" : { "r2" : "r2" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "bid:field-your-army:field-battle-ranking" ],
              "op" : "\\/",
              "input_2" : [ "bid:field-opponent-s-army:field-battle-ranking" ]
            },
            "PROVIDE" : { "result" : { "p1_ratio" : "P1 Ratio" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$raw = $r1 *$p1_ratio ;\\r\\n$exponent = $raw \\/ 400;\\r\\n$value = pow(10, $exponent);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "r_1" : "R(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$raw = $r2;\\r\\n$exponent = $raw \\/ 400;\\r\\n$value = pow(10,$exponent);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "r_2" : "R(2)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $r_1 \\/ ($r_1 + $r_2);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "e_1" : "E(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $r_2 \\/ ($r_1 + $r_2);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "e_2" : "E(2)" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "decimal", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "s_1" : "S(1)" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "bid:field-victory" ], "value" : "1" } },
              "DO" : [ { "data_set" : { "data" : [ "s-1" ], "value" : "1" } } ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "bid:field-draw" ], "value" : "1" } },
              "DO" : [ { "data_set" : { "data" : [ "s-1" ], "value" : ".5" } } ]
            }
          ]
        },
        { "component_rules_battle_reports_determine_k_value" : {
            "USING" : {
              "uid" : [ "bid:author" ],
              "ptid" : [ "bid:field-your-army" ],
              "otid" : [ "bid:field-opponent-s-army" ],
              "bid" : [ "bid" ]
            },
            "PROVIDE" : { "k" : { "k" : "K Value" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $k * ($s_1 - $e_1);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "change" : "Change" } }
          }
        },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "change" ] },
            "PROVIDE" : { "conversion_result" : { "conversion_result" : "Conversion result" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "bid:author:field-battle-ranking-user" ],
              "op" : "+",
              "input_2" : [ "conversion-result" ]
            },
            "PROVIDE" : { "result" : { "new_rating" : "New Rating" } }
          }
        },
        { "data_set" : {
            "data" : [ "bid:author:field-battle-ranking-user" ],
            "value" : [ "new-rating" ]
          }
        },
        { "data_set" : {
            "data" : [ "bid:field-battle-rating-change" ],
            "value" : [ "conversion-result" ]
          }
        },
        { "entity_save" : { "data" : [ "bid" ], "immediate" : "1" } },
        { "entity_save" : { "data" : [ "bid:author" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_battle_reports_rate_players_on_ack'] = entity_import('rules_config', '{ "rules_battle_reports_rate_players_on_ack" : {
      "LABEL" : "Battle Reports: Rate Players on Ack",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "php" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "bid:field-game-reference" ],
            "type" : "node",
            "bundle" : { "value" : { "game_result_system_" : "game_result_system_" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "bid:field-your-army" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "bid:field-opponent-s-army" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "bid:author:field-battle-ranking-user" ]
            },
            "PROVIDE" : { "variable_added" : { "r1" : "r1" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "bid:field-game-reference:author:field-battle-ranking-user" ]
            },
            "PROVIDE" : { "variable_added" : { "r2" : "r2" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "bid:field-battle-rating-change" ] } },
              "DO" : [
                { "data_calc" : {
                    "USING" : {
                      "input_1" : [ "r1" ],
                      "op" : "-",
                      "input_2" : [ "bid:field-battle-rating-change" ]
                    },
                    "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                  }
                },
                { "data_set" : { "data" : [ "r1" ], "value" : [ "result" ] } }
              ]
            }
          ]
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "bid:field-your-army:field-battle-ranking" ],
              "op" : "\\/",
              "input_2" : [ "bid:field-opponent-s-army:field-battle-ranking" ]
            },
            "PROVIDE" : { "result" : { "p1_ratio" : "P1 Ratio" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "bid:field-opponent-s-army:field-battle-ranking" ],
              "op" : "\\/",
              "input_2" : [ "bid:field-your-army:field-battle-ranking" ]
            },
            "PROVIDE" : { "result" : { "p2_ratio" : "P2 Ratio" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$raw = $r1 * $p1_ratio;\\r\\n$exponent = $raw \\/ 400;\\r\\n$value = pow(10, $exponent);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "r_1" : "R(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$raw = $r2 * $p2_ratio;\\r\\n$exponent = $raw \\/ 400;\\r\\n$value = pow(10,$exponent);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "r_2" : "R(2)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $r_1 \\/ ($r_1 + $r_2);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "e_1" : "E(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $r_2 \\/ ($r_1 + $r_2);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "e_2" : "E(2)" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "decimal", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "s_1" : "S(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "decimal", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "s_2" : "S(2)" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "bid:field-your-results" ], "value" : "5" } },
              "DO" : [ { "data_set" : { "data" : [ "s-1" ], "value" : "1" } } ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "bid:field-your-results" ], "value" : "3" } },
              "DO" : [
                { "data_set" : { "data" : [ "s-1" ], "value" : ".5" } },
                { "data_set" : { "data" : [ "s-2" ], "value" : ".5" } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "bid:field-your-results" ], "value" : "1" } },
              "DO" : [ { "data_set" : { "data" : [ "s-2" ], "value" : "1" } } ]
            }
          ]
        },
        { "component_rules_battle_reports_determine_k_value" : {
            "USING" : {
              "uid" : [ "bid:author" ],
              "ptid" : [ "bid:field-your-army" ],
              "otid" : [ "bid:field-opponent-s-army" ],
              "bid" : [ "bid" ]
            },
            "PROVIDE" : { "k" : { "k1" : "K1" } }
          }
        },
        { "component_rules_battle_reports_determine_k_value" : {
            "USING" : {
              "uid" : [ "bid:field-game-reference:author" ],
              "ptid" : [ "bid:field-opponent-s-army" ],
              "otid" : [ "bid:field-your-army" ],
              "bid" : [ "bid:field-game-reference" ]
            },
            "PROVIDE" : { "k" : { "k2" : "K2" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $k1 * ($s_1 - $e_1);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "c_1" : "C(1)" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$value = $k2 * ($s_2 - $e_2);\\r\\nreturn $value;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "c_2" : "C(2)" } }
          }
        },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "c-1" ] },
            "PROVIDE" : { "conversion_result" : { "c_1_int" : "C(1) Integer" } }
          }
        },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "c-2" ] },
            "PROVIDE" : { "conversion_result" : { "c_2_int" : "C(2) Integer" } }
          }
        },
        { "data_calc" : {
            "USING" : { "input_1" : [ "r1" ], "op" : "+", "input_2" : [ "c-1-int" ] },
            "PROVIDE" : { "result" : { "r1_new" : "r1-new" } }
          }
        },
        { "data_calc" : {
            "USING" : { "input_1" : [ "r2" ], "op" : "+", "input_2" : [ "c-2-int" ] },
            "PROVIDE" : { "result" : { "r2_new" : "r2-new" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "r1-new" ], "op" : "\\u003C", "value" : "100" } },
              "DO" : [ { "data_set" : { "data" : [ "r1-new" ], "value" : "100" } } ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "r2-new" ], "op" : "\\u003C", "value" : "100" } },
              "DO" : [ { "data_set" : { "data" : [ "r2-new" ], "value" : "100" } } ]
            }
          ]
        },
        { "data_set" : {
            "data" : [ "bid:author:field-battle-ranking-user" ],
            "value" : [ "r1-new" ]
          }
        },
        { "data_set" : {
            "data" : [ "bid:field-game-reference:author:field-battle-ranking-user" ],
            "value" : [ "r2-new" ]
          }
        },
        { "data_set" : { "data" : [ "bid:field-battle-rating-change" ], "value" : [ "c-1-int" ] } },
        { "data_set" : {
            "data" : [ "bid:field-game-reference:field-battle-rating-change" ],
            "value" : [ "c-2-int" ]
          }
        },
        { "entity_save" : { "data" : [ "bid:author" ], "immediate" : "1" } },
        { "entity_save" : { "data" : [ "bid:field-game-reference:author" ], "immediate" : "1" } },
        { "entity_save" : { "data" : [ "bid" ], "immediate" : "1" } },
        { "entity_save" : { "data" : [ "bid:field-game-reference" ], "immediate" : "1" } }
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
  $items['rules_utility_associate_all_battles'] = entity_import('rules_config', '{ "rules_utility_associate_all_battles" : {
      "LABEL" : "Utility: Associate all battles",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules", "rules_conditional" ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "utility_associate_battle_reports",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : {
              "nid" : { "nid" : "Nid" },
              "nid_1" : { "nid_1" : "(Content referencing Content from field_game_reference) Nid" }
            },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "nid-1" ] },
                  "PROVIDE" : { "entity_fetched" : { "nid2" : "associated game" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_is_of_bundle" : {
                        "entity" : [ "entity-fetched" ],
                        "type" : "node",
                        "bundle" : { "value" : { "game_results" : "game_results" } }
                      }
                    },
                    "DO" : [
                      { "data_set" : {
                          "data" : [ "entity-fetched:field-game-reference" ],
                          "value" : [ "nid2" ]
                        }
                      },
                      { "entity_save" : { "data" : [ "entity-fetched" ], "immediate" : "1" } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_utility_rate_players'] = entity_import('rules_config', '{ "rules_utility_rate_players" : {
      "LABEL" : "Utility: Rate Players",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules", "rules_conditional" ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "utility_view_battle_rating_changes",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "nid" : { "nid" : "Content: Nid" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_is_of_bundle" : {
                        "entity" : [ "entity-fetched" ],
                        "type" : "node",
                        "bundle" : { "value" : { "game_results" : "game_results" } }
                      }
                    },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT data_is" : {
                                "data" : [ "entity-fetched:field-game-reference:author" ],
                                "value" : "20792"
                              }
                            },
                            "DO" : [
                              { "component_rules_battle_reports_rate_players_on_ack" : { "bid" : [ "entity-fetched" ] } },
                              { "component_rules_battle_reports_rate_faction" : { "bid" : [ "entity-fetched" ] } }
                            ]
                          },
                          { "ELSE" : [
                              { "component_rules_battle_reports_rate_player_unack" : { "bid" : [ "entity-fetched" ] } },
                              { "component_rules_battle_reports_rate_faction" : { "bid" : [ "entity-fetched" ] } }
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
        }
      ]
    }
  }');
  $items['rules_utility_set_initial_battle_ratings'] = entity_import('rules_config', '{ "rules_utility_set_initial_battle_ratings" : {
      "LABEL" : "Utility: Set initial Battle Ratings",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules", "rules_conditional" ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "utility_set_initial_battle_rating",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "uid" : { "uid" : "Uid" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "uid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "data_set" : {
                  "data" : [ "entity-fetched:field-battle-ranking-user" ],
                  "value" : "1200"
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "battles_ranking_rules",
                  "DISPLAY" : "views_rules_1",
                  "USING" : { "uid" : [ "uid" ] },
                  "ROW VARIABLES" : { "nid" : { "nid" : "Count" } },
                  "DO" : [
                    { "CONDITIONAL" : [
                        {
                          "IF" : { "data_is" : { "data" : [ "nid" ], "op" : "\\u003E", "value" : "30" } },
                          "DO" : [
                            { "data_set" : { "data" : [ "entity-fetched:field-provisional-flag" ], "value" : "0" } }
                          ]
                        },
                        { "ELSE" : [
                            { "data_set" : { "data" : [ "entity-fetched:field-provisional-flag" ], "value" : "1" } }
                          ]
                        }
                      ]
                    }
                  ]
                }
              },
              { "entity_save" : { "data" : [ "entity-fetched" ], "immediate" : "1" } }
            ]
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_set_initial_battle_rating_armies_",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "tid" : { "tid" : "Term ID" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "tid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_is_of_bundle" : {
                        "entity" : [ "entity-fetched" ],
                        "type" : "taxonomy_term",
                        "bundle" : { "value" : { "armies" : "armies" } }
                      }
                    },
                    "DO" : [
                      { "data_set" : { "data" : [ "entity-fetched:field-battle-ranking" ], "value" : "1200" } },
                      { "entity_save" : { "data" : [ "entity-fetched" ], "immediate" : "1" } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
