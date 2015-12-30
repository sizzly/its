<?php
/**
 * @file
 * rules_config.rules_link_set_wz_start.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_wz_start" : {
      "LABEL" : "Rules link: War Zone: All: Start rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : {
                      "league" : "league",
                      "narrative_campaign_instance" : "narrative_campaign_instance",
                      "special_event" : "special_event",
                      "war_zone_tournament" : "war_zone_tournament"
                    }
                  }
                }
              },
              { "data_is" : { "data" : [ "node:field-status" ], "value" : "3" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-status" ], "value" : "5" } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "stream_a_warzone_has_begun",
                    "param_user" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-stream-node-ref" ],
                  "value" : [ "node" ]
                }
              },
              { "SWITCH" : {
                  "USING" : { "data" : [ "node:type" ] },
                  "DO" : [
                    { "CASE" : {
                        "USING" : { "value" : "narrative_campaign_instance" },
                        "DO" : [
                          { "component_rules_war_zone_campaign_create_phase_relationships" : { "wzid" : [ "node" ], "cid" : [ "node:field-event-link" ] } },
                          { "entity_create" : {
                              "USING" : {
                                "type" : "message",
                                "param_type" : "campaign_reported_battle",
                                "param_user" : [ "node:author" ]
                              },
                              "PROVIDE" : { "entity_created" : { "wz_chronicle" : "warzone chronicle" } }
                            }
                          },
                          { "data_set" : {
                              "data" : [ "wz-chronicle:field-stream-node-ref" ],
                              "value" : [ "node" ]
                            }
                          },
                          { "data_set" : {
                              "data" : [ "wz-chronicle:field-chronicle-icon" ],
                              "value" : "screenshot"
                            }
                          }
                        ]
                      }
                    },
                    { "CASE" : {
                        "USING" : { "value" : "war_zone_tournament" },
                        "DO" : [
                          { "data_set" : { "data" : [ "node:field-registration-deadline" ], "value" : "now" } },
                          { "component_rules_war_zone_tournament_increment_round" : { "wzid" : [ "node" ] } }
                        ]
                      }
                    }
                  ]
                }
              }
            ],
            "LABEL" : "WZ: Start War Zone"
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
