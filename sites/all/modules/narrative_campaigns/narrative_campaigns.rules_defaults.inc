<?php
/**
 * @file
 * narrative_campaigns.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function narrative_campaigns_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_warzone_campaign_close_and_score'] = entity_import('rules_config', '{ "rules_link_condition_warzone_campaign_close_and_score" : {
      "LABEL" : "Rules link: Warzone: Campaign: Close and Score Phase condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "relation" ],
            "type" : "relation",
            "bundle" : { "value" : { "campaign_phase_instance" : "campaign_phase_instance" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_warzone_campaign_launch_instance'] = entity_import('rules_config', '{ "rules_link_condition_warzone_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign" : "narrative_campaign" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_warzone_campaign_open_phase'] = entity_import('rules_config', '{ "rules_link_condition_warzone_campaign_open_phase" : {
      "LABEL" : "Rules link: Warzone: Campaign: Open Phase condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "relation" ],
            "type" : "relation",
            "bundle" : { "value" : { "campaign_phase_instance" : "campaign_phase_instance" } }
          }
        },
        { "data_is" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_condition_warzone_campaign_skip_phase'] = entity_import('rules_config', '{ "rules_link_condition_warzone_campaign_skip_phase" : {
      "LABEL" : "Rules link: Warzone: Campaign: Skip Phase condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "label" : "relation", "type" : "relation" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "relation" ],
            "type" : "relation",
            "bundle" : { "value" : { "campaign_phase_instance" : "campaign_phase_instance" } }
          }
        },
        { "data_is" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_set_warzone_campaign_close_and_score'] = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_close_and_score" : {
      "LABEL" : "Rules link: Warzone: Campaign: Close and Score Phase rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "relation" ],
                  "type" : "relation",
                  "bundle" : { "value" : { "campaign_phase_instance" : "campaign_phase_instance" } }
                }
              }
            ],
            "DO" : [],
            "LABEL" : "Warzone: Campaign: Close and Score"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_warzone_campaign_launch_instance'] = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : { "timestamp" : "Timestamp" },
              "entity_created" : { "new_instance" : "New Instance" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "narrative_campaign" : "narrative_campaign" } }
                }
              }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : {
                    "type" : "text",
                    "value" : "\\u003C?php\\r\\n$time = strtotime(\\u0027now\\u0027);\\r\\necho $time;\\r\\n?\\u003E"
                  },
                  "PROVIDE" : { "variable_added" : { "timestamp" : "Timestamp" } }
                }
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "narrative_campaign_instance",
                    "param_title" : "[node:title]: inst [timestamp:value]",
                    "param_author" : [ "site:current-user" ]
                  },
                  "PROVIDE" : { "entity_created" : { "new_instance" : "New Instance" } }
                }
              },
              { "data_set" : { "data" : [ "new-instance:field-event-link" ], "value" : [ "node" ] } },
              { "data_set" : {
                  "data" : [ "new-instance:field-campaign-badge" ],
                  "value" : [ "node:field-campaign-badge" ]
                }
              },
              { "data_set" : { "data" : [ "new-instance:field-status" ], "value" : "0" } },
              { "data_set" : {
                  "data" : [ "new-instance:field-game-warzone" ],
                  "value" : [ "node:field-game-warzone" ]
                }
              },
              { "entity_save" : { "data" : [ "new-instance" ], "immediate" : 1 } },
              { "redirect" : { "url" : "[new-instance:edit-url]" } }
            ],
            "LABEL" : "Create Campaign Instance"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_warzone_campaign_open_phase'] = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_open_phase" : {
      "LABEL" : "Rules link: Warzone: Campaign: Open Phase rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "relation", "rules_conditional" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "endpoints" : { "endpoints" : "List of related entities" },
              "entity_created" : { "entity_created" : "Created entity" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "relation" ],
                  "type" : "relation",
                  "bundle" : { "value" : { "campaign_phase_instance" : "campaign_phase_instance" } }
                }
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "relation:endpoints:0" ],
                  "type" : "node",
                  "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "5" } },
              { "relation_rules_load_related" : {
                  "USING" : {
                    "left" : [ "relation:endpoints:0" ],
                    "relation_type" : "campaign_phase_instance",
                    "entity_type_op" : "node"
                  },
                  "PROVIDE" : { "endpoints" : { "endpoints" : "List of related entities" } }
                }
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "campaign_reported_battle",
                    "param_user" : [ "endpoints:0:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                }
              },
              { "LOOP" : {
                  "USING" : { "list" : [ "endpoints" ] },
                  "ITEM" : { "list_item" : "Current list item" },
                  "DO" : [
                    { "CONDITIONAL" : [
                        {
                          "IF" : { "entity_is_of_bundle" : {
                              "entity" : [ "list-item" ],
                              "type" : "node",
                              "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
                            }
                          },
                          "DO" : [
                            { "data_set" : {
                                "data" : [ "entity-created:field-stream-node-ref" ],
                                "value" : [ "list-item" ]
                              }
                            },
                            { "data_set" : {
                                "data" : [ "entity-created:field-image" ],
                                "value" : [ "list-item:field-campaign-badge" ]
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              }
            ],
            "LABEL" : "Warzone: Campaign: Open Phase"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_warzone_campaign_skip_phase'] = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_skip_phase" : {
      "LABEL" : "Rules link: Warzone: Campaign: Skip Phase rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "relation" ],
                  "type" : "relation",
                  "bundle" : { "value" : { "campaign_phase_instance" : "campaign_phase_instance" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "11" } }
            ],
            "LABEL" : "Warzone: Campaign: Set Phase to Skipped"
          }
        }
      ]
    }
  }');
  return $items;
}
