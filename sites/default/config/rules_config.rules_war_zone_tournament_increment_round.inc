<?php
/**
 * @file
 * rules_config.rules_war_zone_tournament_increment_round.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_tournament_increment_round" : {
      "LABEL" : "War Zone: Tournament: Increment Round",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "IF" : [
        { "data_is" : { "data" : [ "wzid:type" ], "value" : "war_zone_tournament" } },
        { "data_is" : { "data" : [ "wzid:field-status" ], "value" : "5" } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "wzid:field-warzone-round" ],
              "op" : "+",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "new_round" : "New Round" } }
          }
        },
        { "data_set" : { "data" : [ "wzid:field-warzone-round" ], "value" : [ "new-round" ] } },
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode_registration\\u003E" },
            "PROVIDE" : { "variable_added" : { "p1_list" : "Player 1 List" } }
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "wzid:field-tournament-type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "0" },
                  "DO" : [
                    { "VIEW LOOP" : {
                        "VIEW" : "war_zone_tourney_registrations",
                        "DISPLAY" : "views_rules_1",
                        "USING" : { "nid" : [ "wzid:nid" ] },
                        "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
                        "DO" : [
                          { "entity_fetch" : {
                              "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                              "PROVIDE" : { "entity_fetched" : { "registration_fetched" : "Fetched Registration" } }
                            }
                          },
                          { "list_add" : {
                              "list" : [ "p1-list" ],
                              "item" : [ "registration-fetched" ],
                              "unique" : 1
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode_registration\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "p2_list" : "Player 2 List" } }
          }
        },
        { "data_set" : { "data" : [ "p2-list" ], "value" : [ "p1-list" ] } },
        { "LOOP" : {
            "USING" : { "list" : [ "p1-list" ] },
            "ITEM" : { "p1_reg" : "Player 1 Reg" },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "list\\u003Cnode_registration\\u003E" },
                  "PROVIDE" : { "variable_added" : { "potential_opponents" : "Potential Opponents" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "list_contains" : { "list" : [ "p2-list" ], "item" : [ "p1-reg" ] } },
                    "DO" : [
                      { "list_remove" : { "list" : [ "p2-list" ], "item" : [ "p1-reg" ] } },
                      { "variable_add" : {
                          "USING" : { "type" : "list\\u003Cnode_registration\\u003E", "value" : [ "" ] },
                          "PROVIDE" : { "variable_added" : { "chk_previous_opponents" : "Check Previous Opponents" } }
                        }
                      },
                      { "LOOP" : {
                          "USING" : { "list" : [ "p2-list" ] },
                          "ITEM" : { "list_item" : "Current list item" },
                          "DO" : [
                            { "list_add" : {
                                "list" : [ "chk-previous-opponents" ],
                                "item" : [ "list-item" ],
                                "unique" : 1
                              }
                            }
                          ]
                        }
                      },
                      { "VIEW LOOP" : {
                          "VIEW" : "war_zone_tourney_registrations",
                          "DISPLAY" : "views_rules_2",
                          "USING" : { "registration_id" : [ "p1-reg:registration-id" ] },
                          "ROW VARIABLES" : { "field_opponent_reg_sc" : { "field_opponent_reg_sc" : "Previous Opponent" } },
                          "DO" : [
                            { "entity_fetch" : {
                                "USING" : { "type" : "node_registration", "id" : [ "field-opponent-reg-sc" ] },
                                "PROVIDE" : { "entity_fetched" : { "opponent_reg" : "Opponent Reg" } }
                              }
                            },
                            { "CONDITIONAL" : [
                                {
                                  "IF" : { "list_contains" : { "list" : [ "chk-previous-opponents" ], "item" : [ "opponent-reg" ] } },
                                  "DO" : [
                                    { "list_remove" : { "list" : [ "chk-previous-opponents" ], "item" : [ "opponent-reg" ] } }
                                  ]
                                }
                              ]
                            }
                          ]
                        }
                      },
                      { "LOOP" : {
                          "USING" : { "list" : [ "chk-previous-opponents" ] },
                          "ITEM" : { "list_item" : "Current list item" },
                          "DO" : [
                            { "list_add" : {
                                "list" : [ "potential-opponents" ],
                                "item" : [ "list-item" ],
                                "unique" : 1
                              }
                            }
                          ]
                        }
                      },
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT data_is_empty" : { "data" : [ "potential-opponents" ] } },
                            "DO" : [
                              { "component_rules_war_zone_tournament_generate_turn_scorecard" : {
                                  "wzid" : [ "wzid" ],
                                  "pid" : [ "p1-reg" ],
                                  "master_view" : 1,
                                  "oid" : [ "potential-opponents:0" ],
                                  "round" : [ "new-round" ]
                                }
                              },
                              { "component_rules_war_zone_tournament_generate_turn_scorecard" : {
                                  "wzid" : [ "wzid" ],
                                  "pid" : [ "potential-opponents:0" ],
                                  "master_view" : 0,
                                  "oid" : [ "p1-reg" ],
                                  "round" : [ "new-round" ]
                                }
                              },
                              { "list_remove" : { "list" : [ "p2-list" ], "item" : [ "potential-opponents:0" ] } }
                            ]
                          },
                          { "ELSE" : [
                              { "component_rules_war_zone_tournament_generate_bye_scorecard" : { "wzid" : [ "wzid" ], "pid" : [ "p1-reg" ], "round" : [ "new-round" ] } }
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
  2 => 'rules_conditional',
);
