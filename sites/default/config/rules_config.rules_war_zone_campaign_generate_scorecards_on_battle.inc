<?php
/**
 * @file
 * rules_config.rules_war_zone_campaign_generate_scorecards_on_battle.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_campaign_generate_scorecards_on_battle" : {
      "LABEL" : "War Zone: Campaign: Generate Scorecards on Battle",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "p1id" : { "label" : "Player 1", "type" : "node_registration" },
        "p2id" : { "label" : "Player 2", "type" : "node_registration" },
        "p1results" : { "label" : "Results", "type" : "integer" },
        "phase" : { "label" : "Phase", "type" : "relation" }
      },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "score_card",
              "param_created" : "now",
              "param_user" : [ "p1id:node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "scorecard" : "Score Card" } }
          }
        },
        { "data_set" : { "data" : [ "scorecard:field-score-card-type" ], "value" : "0" } },
        { "data_set" : { "data" : [ "scorecard:field-your-results" ], "value" : [ "p1results" ] } },
        { "data_set" : { "data" : [ "scorecard:field-event-link" ], "value" : [ "p1id:node" ] } },
        { "data_set" : { "data" : [ "scorecard:field-registration-sc" ], "value" : [ "p1id" ] } },
        { "data_set" : { "data" : [ "scorecard:field-phase-sc" ], "value" : [ "phase" ] } },
        { "data_set" : { "data" : [ "scorecard:field-opponent-reg-sc" ], "value" : [ "p2id" ] } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
