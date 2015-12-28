<?php
/**
 * @file
 * rules_config.rules_war_zone_tournament_generate_battle_reports.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_tournament_generate_battle_reports" : {
      "LABEL" : "War Zone: Tournament: Generate Battle Reports",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_tournament" : "war_zone_tournament" } }
          }
        }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_tournament_score_cards",
            "DISPLAY" : "views_rules_1",
            "USING" : {
              "field_event_link_target_id" : [ "wzid:nid" ],
              "field_round_sc_value" : [ "wzid:field-warzone-round" ]
            },
            "ROW VARIABLES" : {
              "puid1" : { "puid1" : "(Node registration entity referenced from field_opponent_reg_sc) Player 1" },
              "tid_1" : { "tid_1" : "(P1 Army) P1 Army" },
              "puid2" : { "puid2" : "(Node registration entity referenced from field_opponent_reg_sc) Player 2" },
              "tid" : { "tid" : "(P2 Army) P2 Army" },
              "field_your_results" : { "field_your_results" : "P1 Results" },
              "p1_real_name" : { "p1_real_name" : "P1 Name" },
              "p2_real_name" : { "p2_real_name" : "P2 Name" }
            },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "puid1" ] },
                  "PROVIDE" : { "entity_fetched" : { "p1_uid" : "Player 1" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "tid-1" ] },
                  "PROVIDE" : { "entity_fetched" : { "p1_tid" : "P1 Army" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "puid2" ] },
                  "PROVIDE" : { "entity_fetched" : { "p2_uid" : "Player 2 UID" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "tid" ] },
                  "PROVIDE" : { "entity_fetched" : { "p2_tid" : "P2 Army" } }
                }
              },
              { "variable_add" : {
                  "USING" : {
                    "type" : "text",
                    "value" : "[wzid:title]: [p1-real-name:value] vs [p2-real-name:value]"
                  },
                  "PROVIDE" : { "variable_added" : { "br_title" : "BR Title" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "puid1" ], "value" : "0" } },
                    "DO" : [
                      { "variable_add" : {
                          "USING" : { "type" : "integer", "value" : "6" },
                          "PROVIDE" : { "variable_added" : { "p2_determine" : "Determine P2" } }
                        }
                      },
                      { "data_calc" : {
                          "USING" : {
                            "input_1" : [ "p2-determine" ],
                            "op" : "-",
                            "input_2" : [ "field-your-results" ]
                          },
                          "PROVIDE" : { "result" : { "p2_results" : "P2 Results" } }
                        }
                      },
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "data_is" : { "data" : [ "puid2" ], "value" : "0" } },
                            "DO" : [
                              { "component_rules_war_zone_all_generate_battle_report" : {
                                  "USING" : {
                                    "wzid" : [ "wzid" ],
                                    "p1id" : "20792",
                                    "p1tid" : [ "p1-tid" ],
                                    "p2tid" : [ "p2-tid" ],
                                    "p1results" : [ "field-your-results" ],
                                    "title" : [ "br-title" ]
                                  },
                                  "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "component_rules_war_zone_all_generate_battle_report" : {
                                  "USING" : {
                                    "wzid" : [ "wzid" ],
                                    "p1id" : [ "p2-uid" ],
                                    "p1tid" : [ "p2-tid" ],
                                    "p2tid" : [ "p1-tid" ],
                                    "p1results" : [ "p2-results" ],
                                    "title" : [ "br-title" ]
                                  },
                                  "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  { "ELSE" : [
                      { "component_rules_war_zone_all_generate_battle_report" : {
                          "USING" : {
                            "wzid" : [ "wzid" ],
                            "p1id" : [ "p1-uid" ],
                            "p1tid" : [ "p1-tid" ],
                            "p2tid" : [ "p2-tid" ],
                            "p1results" : [ "field-your-results" ],
                            "title" : [ "br-title" ]
                          },
                          "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                        }
                      },
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT data_is" : { "data" : [ "puid2" ], "value" : "0" } },
                            "DO" : [
                              { "flag_flagnode" : {
                                  "flag" : "acknowledge_battle",
                                  "node" : [ "brid" ],
                                  "flagging_user" : [ "p2-uid" ],
                                  "permission_check" : "1"
                                }
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
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'flag',
  2 => 'rules',
  3 => 'rules_conditional',
);
