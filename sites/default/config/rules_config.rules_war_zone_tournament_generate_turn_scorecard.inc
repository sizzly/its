<?php
/**
 * @file
 * rules_config.rules_war_zone_tournament_generate_turn_scorecard.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_tournament_generate_turn_scorecard" : {
      "LABEL" : "War Zone: Tournament: Generate Turn Scorecard",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "War Zone", "type" : "node" },
        "pid" : { "label" : "Player", "type" : "node_registration" },
        "master_view" : { "label" : "Master View", "type" : "boolean" },
        "oid" : { "label" : "Opponent", "type" : "node_registration" },
        "round" : { "label" : "Round", "type" : "integer" }
      },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "score_card",
              "param_created" : [ "site:current-date" ],
              "param_user" : [ "wzid:author" ]
            },
            "PROVIDE" : { "entity_created" : { "scorecard_created" : "Score Card" } }
          }
        },
        { "data_set" : {
            "data" : [ "scorecard-created:field-event-link" ],
            "value" : [ "wzid" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard-created:field-registration-sc" ],
            "value" : [ "pid" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard-created:field-opponent-reg-sc" ],
            "value" : [ "oid" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard-created:field-display-sc" ],
            "value" : [ "master-view" ]
          }
        },
        { "data_set" : { "data" : [ "scorecard-created:field-round-sc" ], "value" : [ "round" ] } },
        { "data_set" : { "data" : [ "scorecard-created:field-score-card-type" ], "value" : "0" } },
        { "entity_save" : { "data" : [ "scorecard-created" ], "immediate" : 1 } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
