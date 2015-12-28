<?php
/**
 * @file
 * rules_config.rules_war_zone_tournament_generate_bye_scorecard.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_tournament_generate_bye_scorecard" : {
      "LABEL" : "War Zone: Tournament: Generate Bye Scorecard",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "War Zone", "type" : "node" },
        "pid" : { "label" : "Player", "type" : "node_registration" },
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
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-your-results" ], "value" : "5" } },
        { "data_set" : { "data" : [ "entity-created:field-event-link" ], "value" : [ "wzid" ] } },
        { "data_set" : { "data" : [ "entity-created:field-round-sc" ], "value" : [ "round" ] } },
        { "data_set" : { "data" : [ "entity-created:field-display-sc" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "entity-created:field-registration-sc" ],
            "value" : [ "pid" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
