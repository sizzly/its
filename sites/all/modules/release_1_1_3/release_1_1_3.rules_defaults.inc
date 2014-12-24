<?php
/**
 * @file
 * release_1_1_3.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function release_1_1_3_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_war_zone_campaign_start'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_campaign_start" : {
      "LABEL" : "Rules link: War Zone: Campaign: Start condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "3" } }
      ]
    }
  }');
  $items['rules_link_condition_war_zone_open_league'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_open_league" : {
      "LABEL" : "Rules link: War Zone: Open League condition",
      "PLUGIN" : "and",
      "OWNER" : "rules_link",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "war_zone_league" : "war_zone_league",
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
  $items['rules_link_condition_warzone_award_achievement'] = entity_import('rules_config', '{ "rules_link_condition_warzone_award_achievement" : {
      "LABEL" : "Rules link: Warzone: Award Achievement condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node_registration" : { "label" : "node_registration", "type" : "node_registration" },
        "aid" : { "label" : "Indicated Award", "type" : "field_collection_item" }
      },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "aid" ],
            "type" : "field_collection_item",
            "bundle" : { "value" : { "field_available_awards_comp" : "field_available_awards_comp" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "node-registration" ],
            "type" : "node_registration",
            "bundle" : { "value" : {
                "war_zone_league" : "war_zone_league",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        }
      ]
    }
  }');
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
  $items['rules_link_set_war_zone_campaign_start'] = entity_import('rules_config', '{ "rules_link_set_war_zone_campaign_start" : {
      "LABEL" : "Rules link: War Zone: Campaign: Start rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "campaign_message" : "Campaign Message" } },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-status" ], "value" : "5" } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "campaign_reported_battle",
                    "param_user" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "campaign_message" : "Campaign Message" } }
                }
              },
              { "data_set" : {
                  "data" : [ "campaign-message:field-stream-node-ref" ],
                  "value" : [ "node" ]
                }
              },
              { "data_set" : {
                  "data" : [ "campaign-message:field-image" ],
                  "value" : [ "node:field-campaign-badge" ]
                }
              }
            ],
            "LABEL" : "War Zone: Campaign: Start"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_war_zone_open_league'] = entity_import('rules_config', '{ "rules_link_set_war_zone_open_league" : {
      "LABEL" : "Rules link: War Zone: Open League rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules_link",
      "REQUIRES" : [ "rules", "rules_conditional", "rules_scheduler", "userpoints_rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "message_created" : "Created Message" } },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : {
                      "war_zone_league" : "war_zone_league",
                      "narrative_campaign_instance" : "narrative_campaign_instance",
                      "special_event" : "special_event",
                      "war_zone_tournament" : "war_zone_tournament"
                    }
                  }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:status" ], "value" : "1" } },
              { "data_set" : { "data" : [ "node:field-status" ], "value" : "3" } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "stream_new_war_zone",
                    "param_user" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "message_created" : "Created Message" } }
                }
              },
              { "data_set" : {
                  "data" : [ "message-created:field-stream-node-ref" ],
                  "value" : [ "node" ]
                }
              },
              { "SWITCH" : {
                  "USING" : { "data" : [ "node:type" ] },
                  "DO" : [
                    { "CASE" : {
                        "USING" : { "value" : "war_zone_league" },
                        "DO" : [
                          { "schedule" : {
                              "component" : "rules_war_zone_start_league",
                              "date" : [ "node:field-event-date:0:value" ],
                              "identifier" : "start-[node:nid]",
                              "param_wz_id" : [ "node" ]
                            }
                          },
                          { "entity_create" : {
                              "USING" : {
                                "type" : "node",
                                "param_type" : "event",
                                "param_title" : "[node:title] Begins",
                                "param_author" : [ "node:author" ]
                              },
                              "PROVIDE" : { "entity_created" : { "event_created" : "Created Event" } }
                            }
                          },
                          { "data_set" : {
                              "data" : [ "event-created:field-image" ],
                              "value" : [ "node:field-campaign-badge" ]
                            }
                          },
                          { "data_set" : {
                              "data" : [ "event-created:field-games-played:0" ],
                              "value" : [ "node:field-warzone-game" ]
                            }
                          },
                          { "data_set" : {
                              "data" : [ "event-created:field-location" ],
                              "value" : [ "node:field-location" ]
                            }
                          },
                          { "data_set" : {
                              "data" : [ "event-created:field-event-type" ],
                              "value" : [ "node:field-event-type" ]
                            }
                          },
                          { "data_set" : { "data" : [ "event-created:field-event-league" ], "value" : [ "node" ] } },
                          { "entity_save" : { "data" : [ "event-created" ], "immediate" : 1 } },
                          { "data_set" : {
                              "data" : [ "event-created:field-event-date:0:value" ],
                              "value" : [ "node:field-event-date:0:value" ]
                            }
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
                          { "schedule" : {
                              "component" : "rules_war_zone_special_event_start_event",
                              "date" : [ "node:field-event-date:0:value" ],
                              "identifier" : "[node:nid] - start",
                              "param_wzid" : [ "node" ]
                            }
                          },
                          { "schedule" : {
                              "component" : "rules_war_zone_special_event_complete_event",
                              "date" : [ "node:field-event-date:0:value2" ],
                              "identifier" : "[node:nid] - Complete",
                              "param_wzid" : [ "node" ]
                            }
                          }
                        ]
                      }
                    },
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
                              "PROVIDE" : { "entity_created" : { "campaign_message" : "Campaign Message" } }
                            }
                          },
                          { "data_set" : {
                              "data" : [ "campaign-message:field-stream-node-ref" ],
                              "value" : [ "node" ]
                            }
                          },
                          { "data_set" : {
                              "data" : [ "campaign-message:field-image" ],
                              "value" : [ "node:field-campaign-badge" ]
                            }
                          },
                          { "data_set" : {
                              "data" : [ "campaign-message:arguments:messtext" ],
                              "value" : "Intelligence reports that hostilities surrounding [node:field-event-link:title] are inevitable."
                            }
                          }
                        ]
                      }
                    },
                    { "CASE" : {
                        "USING" : { "value" : "league" },
                        "DO" : [
                          { "schedule" : {
                              "component" : "rules_war_zone_league_start",
                              "date" : [ "node:field-event-date:0:value" ],
                              "identifier" : "[node:nid] - Start",
                              "param_wzid" : [ "node" ]
                            }
                          },
                          { "schedule" : {
                              "component" : "rules_war_zone_league_complete",
                              "date" : [ "node:field-event-date:0:value2" ],
                              "identifier" : "[node:nid] - Complete",
                              "param_wzid" : [ "node" ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "9" : "9" } } } },
                    "DO" : [
                      { "userpoints_action_grant_points" : {
                          "user" : [ "node:author" ],
                          "points" : "5",
                          "tid" : "894",
                          "entity" : [ "node" ],
                          "description" : "Starting a war zone",
                          "operation" : "Add",
                          "display" : 0,
                          "moderate" : "approved",
                          "expirydate" : "+1 year"
                        }
                      }
                    ]
                  }
                ]
              }
            ],
            "LABEL" : "War Zone: Open League"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_warzone_award_achievement'] = entity_import('rules_config', '{ "rules_link_set_warzone_award_achievement" : {
      "LABEL" : "Rules link: Warzone: Award Achievement rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "node_registration" : { "label" : "node_registration", "type" : "node_registration" },
        "aid" : { "label" : "Indicated Award", "type" : "field_collection_item" }
      },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "achievement" : "Created achievement" } },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node-registration" ],
                  "type" : "node_registration",
                  "bundle" : { "value" : {
                      "war_zone_league" : "war_zone_league",
                      "war_zone_tournament" : "war_zone_tournament"
                    }
                  }
                }
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "aid" ],
                  "type" : "field_collection_item",
                  "bundle" : { "value" : { "field_available_awards_comp" : "field_available_awards_comp" } }
                }
              }
            ],
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "achievement",
                    "param_title" : "[aid:field_title_custom_achievement]",
                    "param_author" : "0"
                  },
                  "PROVIDE" : { "entity_created" : { "achievement" : "Created achievement" } }
                }
              },
              { "data_set" : {
                  "data" : [ "achievement:field-event-link" ],
                  "value" : [ "node-registration:node" ]
                }
              },
              { "data_set" : {
                  "data" : [ "achievement:field-short-description" ],
                  "value" : [ "aid:field-short-desc-custom-achieve" ]
                }
              },
              { "data_set" : {
                  "data" : [ "achievement:field-achievement-points" ],
                  "value" : [ "aid:field-points-custom-achievement" ]
                }
              },
              { "SWITCH" : {
                  "USING" : { "data" : [ "aid:field-image-custom-achievement" ] },
                  "DO" : [ { "CASE" : { "USING" : { "value" : "0" }, "DO" : [] } } ]
                }
              }
            ],
            "LABEL" : "Warzone: Create and Award Achievement"
          }
        }
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
