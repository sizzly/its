<?php
/**
 * @file
 * war_zones.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function war_zones_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_war_zone_all_open_registration'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_all_open_registration" : {
      "LABEL" : "Rules link: War Zone: All: Open Registration condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
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
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_condition_wz_complete'] = entity_import('rules_config', '{ "rules_link_condition_wz_complete" : {
      "LABEL" : "Rules link: War Zone: All: Complete condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
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
        { "data_is" : {
            "data" : [ "node:field-status" ],
            "op" : "IN",
            "value" : { "value" : { "0" : "0", "3" : "3", "5" : "5" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_wz_start'] = entity_import('rules_config', '{ "rules_link_condition_wz_start" : {
      "LABEL" : "Rules link: War Zone: All: Start condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
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
      ]
    }
  }');
  $items['rules_link_set_war_zone_all_open_registration'] = entity_import('rules_config', '{ "rules_link_set_war_zone_all_open_registration" : {
      "LABEL" : "Rules link: War Zone: All: Open Registration rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "userpoints_rules", "rules_scheduler" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "message" : "Message" } },
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
              }
            ],
            "LABEL" : "WZ: Open League for Registration"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_wz_complete'] = entity_import('rules_config', '{ "rules_link_set_wz_complete" : {
      "LABEL" : "Rules link: War Zone: All: Complete rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "message" : "Message" } },
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
              { "data_is" : { "data" : [ "node:field-status" ], "value" : "5" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-status" ], "value" : "10" } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "stream_a_warzone_has_ended",
                    "param_user" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "message" : "Message" } }
                }
              },
              { "data_set" : { "data" : [ "message:field-stream-node-ref" ], "value" : [ "node" ] } },
              { "SWITCH" : {
                  "USING" : { "data" : [ "node:type" ] },
                  "DO" : [
                    { "CASE" : { "USING" : { "value" : "narrative_campaign_instance" }, "DO" : [] } },
                    { "CASE" : { "USING" : { "value" : "league" }, "DO" : [] } }
                  ]
                }
              }
            ],
            "LABEL" : "WZ: Complete"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_wz_start'] = entity_import('rules_config', '{ "rules_link_set_wz_start" : {
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
                          { "component_rules_war_zone_campaign_create_phase_relationships" : { "wzid" : [ "node" ], "cid" : [ "node:field-event-link" ] } }
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
  $items['rules_war_zone_campaign_create_phase_relationships'] = entity_import('rules_config', '{ "rules_war_zone_campaign_create_phase_relationships" : {
      "LABEL" : "War Zone: Campaign: Create Phase Relationships",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Campaign", "War Zone" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "Warzone Instance", "type" : "node" },
        "cid" : { "label" : "Campaign", "type" : "node" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "cid" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign" : "narrative_campaign" } }
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "entityform",
              "property" : "field_event_link",
              "value" : [ "cid" ],
              "limit" : "1000"
            },
            "PROVIDE" : { "entity_fetched" : { "all_components" : "ALL Components" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "all-components" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_is_of_bundle" : {
                        "entity" : [ "list-item" ],
                        "type" : "entityform",
                        "bundle" : { "value" : { "warzone_campaign_phase" : "warzone_campaign_phase" } }
                      }
                    },
                    "DO" : [
                      { "variable_add" : {
                          "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                          "PROVIDE" : { "variable_added" : { "endpoints" : "Endpoints" } }
                        }
                      },
                      { "list_add" : { "list" : [ "endpoints" ], "item" : [ "wzid" ], "pos" : "start" } },
                      { "list_add" : { "list" : [ "endpoints" ], "item" : [ "list-item" ] } },
                      { "entity_create" : {
                          "USING" : {
                            "type" : "relation",
                            "param_relation_type" : "campaign_phase_instance",
                            "param_endpoints" : [ "endpoints" ]
                          },
                          "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                        }
                      },
                      { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
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
  return $items;
}
