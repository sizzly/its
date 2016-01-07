<?php
/**
 * @file
 * rules_config.rules_war_zone_campaign_report_battle.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_campaign_report_battle" : {
      "LABEL" : "War Zone: Campaign: Report Battle",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "USES VARIABLES" : { "efid" : { "label" : "EntityForm", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "efid" ],
            "type" : "entityform",
            "bundle" : { "value" : { "warzone_campaign_report_battle_p" : "warzone_campaign_report_battle_p" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "efid:field-event-link" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "efid:field-opponent-report-battle" ],
            "type" : "node_registration",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node_registration", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "p1_registration" : "Player 1 Registration" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_2",
            "USING" : {
              "nid" : [ "efid:field-event-link:nid" ],
              "uid" : [ "efid:field-player-sc:uid" ]
            },
            "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "data_set" : { "data" : [ "p1-registration" ], "value" : [ "entity-fetched" ] } }
            ]
          }
        },
        { "component_rules_war_zone_campaign_generate_scorecards_on_battle" : {
            "p1id" : [ "p1-registration" ],
            "p2id" : [ "efid:field-opponent-report-battle" ],
            "p1results" : [ "efid:field-your-results" ],
            "phase" : [ "efid:field-phase-sc" ]
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "6" },
            "PROVIDE" : { "variable_added" : { "opponent_score" : "Opponent Score" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "opponent-score" ],
              "op" : "-",
              "input_2" : [ "efid:field-your-results" ]
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "component_rules_war_zone_campaign_generate_scorecards_on_battle" : {
            "p1id" : [ "efid:field-opponent-report-battle" ],
            "p2id" : [ "p1-registration" ],
            "p1results" : [ "result" ],
            "phase" : [ "efid:field-phase-sc" ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "p1-registration" ],
                  "type" : "unknown",
                  "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
                }
              },
              "DO" : [
                { "variable_add" : {
                    "USING" : {
                      "type" : "taxonomy_term",
                      "value" : [ "p1-registration:field-register-army" ]
                    },
                    "PROVIDE" : { "variable_added" : { "p1_submitted_army" : "Player 1 Army" } }
                  }
                },
                { "variable_add" : {
                    "USING" : {
                      "type" : "taxonomy_term",
                      "value" : [ "efid:field-opponent-report-battle:field-register-army" ]
                    },
                    "PROVIDE" : { "variable_added" : { "p2_submitted_army" : "Player 2 Army" } }
                  }
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT data_is_empty" : { "data" : [ "efid:field-p1-army-wz" ] } },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "p1-submitted-army" ],
                            "value" : [ "efid:field-p1-army-wz" ]
                          }
                        }
                      ]
                    }
                  ]
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT data_is_empty" : { "data" : [ "efid:field-p2-army-wz" ] } },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "p2-submitted-army" ],
                            "value" : [ "efid:field-p2-army-wz" ]
                          }
                        }
                      ]
                    }
                  ]
                },
                { "component_rules_war_zone_all_generate_battle_report" : {
                    "USING" : {
                      "wzid" : [ "efid:field-event-link" ],
                      "p1id" : [ "efid:field-player-sc" ],
                      "p1tid" : [ "p1-submitted-army" ],
                      "p2tid" : [ "p2-submitted-army" ],
                      "p1results" : [ "efid:field-your-results" ],
                      "title" : "[p1-registration:node:title]: [p1-submitted-army:name] vs [p2-submitted-army:name]"
                    },
                    "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                  }
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_is_of_bundle" : {
                          "entity" : [ "brid" ],
                          "type" : "node",
                          "bundle" : { "value" : { "game_results" : "game_results" } }
                        }
                      },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "brid:field-image" ],
                            "value" : [ "efid:field-event-link:field-campaign-badge" ]
                          }
                        },
                        { "data_set" : { "data" : [ "brid:field-mission" ], "value" : [ "efid:field-mission" ] } },
                        { "data_set" : {
                            "data" : [ "brid:field-points-per-army" ],
                            "value" : [ "efid:field-points-per-army" ]
                          }
                        },
                        { "entity_save" : { "data" : [ "brid" ], "immediate" : "1" } },
                        { "flag_flagnode" : {
                            "flag" : "acknowledge_battle",
                            "node" : [ "brid" ],
                            "flagging_user" : [ "efid:field-opponent-report-battle:user" ],
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
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'flag',
  2 => 'rules',
  3 => 'rules_conditional',
);
