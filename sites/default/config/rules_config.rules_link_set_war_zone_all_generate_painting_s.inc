<?php
/**
 * @file
 * rules_config.rules_link_set_war_zone_all_generate_painting_s.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_war_zone_all_generate_painting_s" : {
      "LABEL" : "Rules link: War Zone: All: Generate Painting Scorecards rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_email_player_rules",
                  "DISPLAY" : "views_rules_4",
                  "USING" : { "nid" : [ "node:nid" ] },
                  "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
                  "DO" : [
                    { "entity_fetch" : {
                        "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                        "PROVIDE" : { "entity_fetched" : { "fetched_registration" : "Fetched Registration" } }
                      }
                    },
                    { "entity_create" : {
                        "USING" : {
                          "type" : "entityform",
                          "param_type" : "score_card",
                          "param_created" : [ "site:current-date" ],
                          "param_user" : [ "node:author" ]
                        },
                        "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                      }
                    },
                    { "data_set" : { "data" : [ "entity-created:field-event-link" ], "value" : [ "node" ] } },
                    { "data_set" : {
                        "data" : [ "entity-created:field-registration-sc" ],
                        "value" : [ "fetched-registration" ]
                      }
                    },
                    { "data_set" : { "data" : [ "entity-created:field-score-card-type" ], "value" : "5" } },
                    { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
                  ]
                }
              }
            ],
            "LABEL" : "War Zone: All: Generate Painting Scorecards"
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
