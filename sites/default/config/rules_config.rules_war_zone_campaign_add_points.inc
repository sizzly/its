<?php
/**
 * @file
 * rules_config.rules_war_zone_campaign_add_points.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_campaign_add_points" : {
      "LABEL" : "War Zone: Campaign: Add Points",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "points" : { "label" : "Points", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "points" ],
            "type" : "entityform",
            "bundle" : { "value" : { "war_zone_campaign_add_points" : "war_zone_campaign_add_points" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "points:field-event-link" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "score_card",
              "param_created" : "now",
              "param_user" : [ "points:field-event-link:author" ]
            },
            "PROVIDE" : { "entity_created" : { "scorecard" : "scorecard" } }
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-event-link" ],
            "value" : [ "points:field-event-link" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-registration-sc" ],
            "value" : [ "points:field-registration-sc" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-explanation-sc" ],
            "value" : [ "points:field-explanation-sc" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-additional-points-sc" ],
            "value" : [ "points:field-points-to-award" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-phase-sc" ],
            "value" : [ "points:field-phase-sc" ]
          }
        },
        { "data_set" : { "data" : [ "scorecard:field-state-sc" ], "value" : "40" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
