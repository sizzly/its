<?php
/**
 * @file
 * rules_config.rules_war_zone_all_generate_strength_of_schedule.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_all_generate_strength_of_schedule" : {
      "LABEL" : "War Zone: All: Generate Strength of Schedule",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_5",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "or" : "Opponent Record" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "oor" : "Opponent Opponent Record" } }
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_tournament_score_cards",
                  "DISPLAY" : "views_rules_2",
                  "USING" : { "opponent_id" : [ "registration-id" ] },
                  "ROW VARIABLES" : { "field_victory" : { "field_victory" : "Victory" } },
                  "DO" : [ { "data_set" : { "data" : [ "or" ], "value" : [ "field-victory" ] } } ]
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_tournament_score_cards",
                  "DISPLAY" : "views_rules_3",
                  "USING" : { "player_id" : [ "registration-id" ] },
                  "ROW VARIABLES" : { "registration_id" : { "opponent_id" : "Opponent" } },
                  "DO" : [
                    { "VIEW LOOP" : {
                        "VIEW" : "war_zone_tournament_score_cards",
                        "DISPLAY" : "views_rules_2",
                        "USING" : { "opponent_id" : [ "opponent_id" ] },
                        "ROW VARIABLES" : { "field_victory" : { "oor_increment" : "OOR Increment" } },
                        "DO" : [
                          { "data_calc" : {
                              "USING" : { "input_1" : [ "oor" ], "op" : "+", "input_2" : [ "oor-increment" ] },
                              "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                            }
                          },
                          { "data_set" : { "data" : [ "oor" ], "value" : [ "result" ] } }
                        ]
                      }
                    }
                  ]
                }
              },
              { "data_calc" : {
                  "USING" : { "input_1" : [ "or" ], "op" : "*", "input_2" : "2" },
                  "PROVIDE" : { "result" : { "or_final" : "OR Final" } }
                }
              },
              { "data_calc" : {
                  "USING" : { "input_1" : [ "or-final" ], "op" : "+", "input_2" : [ "oor" ] },
                  "PROVIDE" : { "result" : { "sos_raw" : "SOS Raw" } }
                }
              },
              { "data_calc" : {
                  "USING" : { "input_1" : [ "sos-raw" ], "op" : "\\/", "input_2" : "3" },
                  "PROVIDE" : { "result" : { "sos_final" : "SOS Final" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "registration_fetched" : "Registration" } }
                }
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "entityform",
                    "param_type" : "score_card",
                    "param_created" : "now",
                    "param_user" : [ "wzid:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "sos_scorecard" : "SOS Scorecard" } }
                }
              },
              { "data_set" : { "data" : [ "sos-scorecard:field-event-link" ], "value" : [ "wzid" ] } },
              { "data_set" : {
                  "data" : [ "sos-scorecard:field-strength-of-schedule-sc" ],
                  "value" : [ "sos-final" ]
                }
              },
              { "data_set" : {
                  "data" : [ "sos-scorecard:field-registration-sc" ],
                  "value" : [ "registration-fetched" ]
                }
              },
              { "data_set" : { "data" : [ "sos-scorecard:field-score-card-type" ], "value" : "25" } },
              { "entity_save" : { "data" : [ "sos-scorecard" ], "immediate" : "1" } }
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
  2 => 'views_rules',
);
