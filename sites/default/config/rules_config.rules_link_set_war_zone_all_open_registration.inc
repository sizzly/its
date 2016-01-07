<?php
/**
 * @file
 * rules_config.rules_link_set_war_zone_all_open_registration.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_war_zone_all_open_registration" : {
      "LABEL" : "Rules link: War Zone: All: Open Registration rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "userpoints_rules", "rules_scheduler" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "message" : "Message" } },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : {
                      "narrative_campaign_instance" : "narrative_campaign_instance",
                      "special_event" : "special_event",
                      "war_zone_tournament" : "war_zone_tournament"
                    }
                  }
                }
              },
              { "data_is" : { "data" : [ "node:field-status" ], "value" : "0" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-status" ], "value" : "3" } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "stream_player_posts_new_content",
                    "param_user" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "message" : "Message" } }
                }
              },
              { "data_set" : { "data" : [ "message:field-stream-node-ref" ], "value" : [ "node" ] } },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "9" : "9" } } } },
                    "DO" : [
                      { "userpoints_action_grant_points" : {
                          "user" : [ "node:author" ],
                          "points" : "5",
                          "tid" : "894",
                          "entity" : [ "node" ],
                          "description" : "Prestige awarded for war zone",
                          "operation" : "Add",
                          "display" : 0,
                          "moderate" : "approved",
                          "expirydate" : "+1 year"
                        }
                      }
                    ]
                  }
                ]
              },
              { "schedule" : {
                  "component" : "rules_link_set_wz_start",
                  "date" : [ "node:field-event-date:0:value" ],
                  "identifier" : "[node:nid] - Start",
                  "param_node" : [ "node" ]
                }
              },
              { "SWITCH" : {
                  "USING" : { "data" : [ "node:type" ] },
                  "DO" : [
                    { "CASE" : {
                        "USING" : { "value" : "narrative_campaign_instance" },
                        "DO" : [
                          { "entity_create" : {
                              "USING" : {
                                "type" : "message",
                                "param_type" : "campaign_reported_battle",
                                "param_user" : [ "node:author" ]
                              },
                              "PROVIDE" : { "entity_created" : { "wz_chronicle" : "wz chronicle" } }
                            }
                          },
                          { "data_set" : {
                              "data" : [ "wz-chronicle:field-stream-node-ref" ],
                              "value" : [ "node" ]
                            }
                          },
                          { "data_set" : { "data" : [ "wz-chronicle:field-chronicle-icon" ], "value" : "road" } },
                          { "data_set" : {
                              "data" : [ "wz-chronicle:field-title-chronicle" ],
                              "value" : "The Road to War Has Begun"
                            }
                          },
                          { "data_set" : {
                              "data" : [ "wz-chronicle:arguments:messtext" ],
                              "value" : "\\u003Cp\\u003EHostilities are inevitable and forces are arranging to claim domination of \\u003Cstrong\\u003E[node:field-event-link:title]\\u003C\\/strong\\u003E!\\u003Cp\\u003E"
                            }
                          },
                          { "CONDITIONAL" : [
                              {
                                "IF" : { "data_is_empty" : { "data" : [ "node:field-registration-deadline" ] } },
                                "DO" : [
                                  { "data_set" : {
                                      "data" : [ "node:field-registration-deadline" ],
                                      "value" : [ "node:field-event-date:0:value2" ]
                                    }
                                  }
                                ]
                              }
                            ]
                          }
                        ]
                      }
                    },
                    { "CASE" : {
                        "USING" : { "value" : "special_event" },
                        "DO" : [
                          { "data_set" : {
                              "data" : [ "node:field-event-type" ],
                              "value" : [ "node:field-special-event-type" ]
                            }
                          },
                          { "CONDITIONAL" : [
                              {
                                "IF" : { "data_is" : { "data" : [ "node:field-warzone-scheduling" ], "value" : "0" } },
                                "DO" : [
                                  { "schedule" : {
                                      "component" : "rules_link_set_wz_start",
                                      "date" : [ "node:field-event-date:0:value" ],
                                      "identifier" : "[node:nid] - Start",
                                      "param_node" : [ "node" ]
                                    }
                                  },
                                  { "schedule" : {
                                      "component" : "rules_link_set_wz_complete",
                                      "date" : [ "node:field-event-date:0:value2" ],
                                      "identifier" : "[node:nid] - Complete",
                                      "param_node" : [ "node" ]
                                    }
                                  }
                                ]
                              }
                            ]
                          }
                        ]
                      }
                    },
                    { "CASE" : {
                        "USING" : { "value" : "war_zone_tournament" },
                        "DO" : [
                          { "data_set" : {
                              "data" : [ "node:field-event-date:0:value" ],
                              "value" : [ "node:field-event-date-warzone:value" ]
                            }
                          },
                          { "data_set" : {
                              "data" : [ "node:field-event-date:0:value2" ],
                              "value" : [ "node:field-event-date-warzone:value2" ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              }
            ],
            "LABEL" : "War Zone: All: Open War Zone"
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
  3 => 'rules_scheduler',
  4 => 'userpoints_rules',
);
