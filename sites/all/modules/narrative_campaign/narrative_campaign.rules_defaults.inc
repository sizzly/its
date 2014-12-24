<?php
/**
 * @file
 * narrative_campaign.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function narrative_campaign_default_rules_configuration() {
  $items = array();
  $items['rules_award_achievement'] = entity_import('rules_config', '{ "rules_award_achievement" : {
      "LABEL" : "Utility: Award Achievement",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "Utility" ],
      "REQUIRES" : [
        "rules",
        "views_rules",
        "rules_conditional",
        "userpoints_rules",
        "privatemsg_rules"
      ],
      "USES VARIABLES" : {
        "aid" : { "label" : "Achievement", "type" : "node" },
        "uid" : { "label" : "User", "type" : "user" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "aid" ],
            "type" : "node",
            "bundle" : { "value" : { "achievement" : "achievement" } }
          }
        },
        { "NOT user_has_role" : { "account" : [ "uid" ], "roles" : { "value" : { "8" : "8" } } } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "boolean", "value" : 1 },
            "PROVIDE" : { "variable_added" : { "create" : "Create" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "achievements_v2_rules",
            "DISPLAY" : "views_rules_1",
            "USING" : { "field_achievement_player_target_id" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "Nid" } },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "nid" ], "value" : [ "aid:nid" ] } },
                    "DO" : [ { "data_set" : { "data" : [ "create" ], "value" : 0 } } ]
                  }
                ]
              }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "create" ], "value" : 1 } },
              "DO" : [
                { "variable_add" : {
                    "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                    "PROVIDE" : { "variable_added" : { "endpoints" : "End Points" } }
                  }
                },
                { "list_add" : { "list" : [ "endpoints" ], "item" : [ "aid" ] } },
                { "list_add" : { "list" : [ "endpoints" ], "item" : [ "uid" ] } },
                { "entity_create" : {
                    "USING" : {
                      "type" : "relation",
                      "param_relation_type" : "achievement",
                      "param_endpoints" : [ "endpoints" ]
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-achievement-player" ],
                    "value" : [ "uid" ]
                  }
                },
                { "data_set" : { "data" : [ "entity-created:field-achievement-date" ], "value" : "now" } },
                { "userpoints_action_grant_points" : {
                    "user" : [ "uid" ],
                    "points" : [ "aid:field-achievement-points" ],
                    "tid" : "0",
                    "entity" : [ "aid" ],
                    "description" : "Achievement unlocked. ",
                    "operation" : "Add",
                    "display" : 0,
                    "moderate" : "approved"
                  }
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "uid" ], "value" : [ "site:current-user" ] } },
                      "DO" : [
                        { "drupal_message" : { "message" : "You have received the \\u003Cstrong\\u003E[aid:link]\\u003C\\/strong\\u003E Achievement." } }
                      ]
                    },
                    { "ELSE" : [
                        { "privatemsg_rules_new" : {
                            "USING" : {
                              "recipient" : [ "uid" ],
                              "author" : "1",
                              "subject" : "Achievement Awarded",
                              "body" : "You have been awarded the [aid:link] Achievement."
                            },
                            "PROVIDE" : { "thread_id" : { "thread_id" : "ID of new thread" } }
                          }
                        }
                      ]
                    }
                  ]
                },
                { "entity_create" : {
                    "USING" : {
                      "type" : "message",
                      "param_type" : "stream_player_earns_an_achievement",
                      "param_user" : [ "uid" ]
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created_message" : "Created entity Message" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created-message:field-stream-node-ref" ],
                    "value" : [ "aid" ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_battle_results_create_container'] = entity_import('rules_config', '{ "rules_battle_results_create_container" : {
      "LABEL" : "Battle Results: Create Container",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "6" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "variable-added" ],
              "op" : "-",
              "input_2" : [ "bid:field-your-results" ]
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_result_system_",
              "param_title" : "[bid:title]",
              "param_author" : "20792"
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-your-results" ],
            "value" : [ "result" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-game-reference" ],
            "value" : [ "bid" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
        { "data_set" : {
            "data" : [ "bid:field-game-reference" ],
            "value" : [ "entity-created" ]
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_campaign_launch_instance'] = entity_import('rules_config', '{ "rules_link_condition_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : []
    }
  }');
  $items['rules_link_condition_complete_warzone'] = entity_import('rules_config', '{ "rules_link_condition_complete_warzone" : {
      "LABEL" : "Rules link: Complete Warzone condition",
      "PLUGIN" : "and",
      "OWNER" : "rules_link",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "war_zone_league" : "war_zone_league",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        },
        { "data_is" : { "data" : [ "site:current-user" ], "value" : [ "node:author" ] } },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "5" } }
      ]
    }
  }');
  $items['rules_link_condition_league_management_withdraw'] = entity_import('rules_config', '{ "rules_link_condition_league_management_withdraw" : {
      "LABEL" : "Rules link: League Management Withdraw condition",
      "PLUGIN" : "and",
      "OWNER" : "rules_link",
      "USES VARIABLES" : {
        "uid" : { "label" : "User", "type" : "user" },
        "wz_id" : { "label" : "League", "type" : "node" }
      },
      "AND" : []
    }
  }');
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
  $items['rules_link_set_campaign_launch_instance'] = entity_import('rules_config', '{ "rules_link_set_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_complete_warzone'] = entity_import('rules_config', '{ "rules_link_set_complete_warzone" : {
      "LABEL" : "Rules link: Complete Warzone rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules_link",
      "REQUIRES" : [ "rules", "rules_conditional", "rules_scheduler" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
                }
              }
            ],
            "DO" : [
              { "SWITCH" : {
                  "USING" : { "data" : [ "node:type" ] },
                  "DO" : [
                    { "CASE" : {
                        "USING" : { "value" : "war_zone_league" },
                        "DO" : [
                          { "SWITCH" : {
                              "USING" : { "data" : [ "node:field-league-type" ] },
                              "DO" : [
                                { "CASE" : {
                                    "USING" : { "value" : "214" },
                                    "DO" : [
                                      { "component_rules_war_zone_casual_generate_final_scores_ii" : { "wzid" : [ "node" ] } },
                                      { "component_rules_war_zone_archievement_award_achievements" : { "wzid" : [ "node" ] } }
                                    ]
                                  }
                                },
                                { "CASE" : {
                                    "USING" : { "value" : "218" },
                                    "DO" : [
                                      { "component_rules_war_zone_swiss_set_unplayed_games" : { "wzid" : [ "node" ] } },
                                      { "component_rules_war_zone_league_generate_strength_of_schedule" : { "wzid" : [ "node" ] } },
                                      { "component_rules_war_zone_archievement_award_achievements" : { "wzid" : [ "node" ] } }
                                    ]
                                  }
                                }
                              ]
                            }
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "data_set" : { "data" : [ "node:field-status" ], "value" : "10" } },
              { "schedule" : {
                  "component" : "rules_warzone_all_archive",
                  "date" : "+60 days",
                  "identifier" : "archive-[node:nid]",
                  "param_wzid" : [ "node" ]
                }
              }
            ],
            "LABEL" : "Complete League Actions"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_league_management_withdraw'] = entity_import('rules_config', '{ "rules_link_set_league_management_withdraw" : {
      "LABEL" : "Rules link: League Management Withdraw rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules_link",
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : {
        "uid" : { "label" : "User", "type" : "user" },
        "wz_id" : { "label" : "League", "type" : "node" }
      },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "wz-id" ],
                  "type" : "node",
                  "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
                }
              }
            ],
            "DO" : [
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_registered_players",
                  "DISPLAY" : "views_rules_1",
                  "USING" : { "nid" : [ "wz-id:nid" ] },
                  "ROW VARIABLES" : {
                    "uid" : { "uid_check" : "(User) Uid" },
                    "tid" : { "tid" : "(term from field_register_army) Taxonomy term: Term ID" },
                    "registration_id" : { "registration_id" : "Node registration: Registration ID" }
                  },
                  "DO" : [
                    { "CONDITIONAL" : [
                        {
                          "IF" : { "data_is" : { "data" : [ "uid-check" ], "value" : [ "uid:uid" ] } },
                          "DO" : [
                            { "entity_fetch" : {
                                "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                                "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
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
            "LABEL" : "League Management: Withdraw Player"
          }
        }
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
  $items['rules_master_cancel_registration'] = entity_import('rules_config', '{ "rules_master_cancel_registration" : {
      "LABEL" : "Master: Cancel Registration",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone" ],
      "REQUIRES" : [ "rules", "node_registration" ],
      "ON" : { "node_registration_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "node-registration:cancelled" ], "value" : 1 } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_cancels_registration_for_warzone",
              "param_user" : [ "node-registration:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "node-registration:node" ]
          }
        }
      ]
    }
  }');
  $items['rules_master_on_entity_form_submit_v2_'] = entity_import('rules_config', '{ "rules_master_on_entity_form_submit_v2_" : {
      "LABEL" : "Master: On Entity Form Submit (v2)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Form", "Master" ],
      "REQUIRES" : [ "rules_conditional", "rules", "userpoints_rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "entityform:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "army_event" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "stream_narrative_army_event",
                          "param_user" : [ "entityform:user" ]
                        },
                        "PROVIDE" : { "entity_created" : { "message" : "Message" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "message:field-stream-army-event-ref" ],
                        "value" : [ "entityform" ]
                      }
                    },
                    { "data_set" : {
                        "data" : [ "message:field-stream-node-ref" ],
                        "value" : [ "entityform:field-army-profile-node" ]
                      }
                    },
                    { "userpoints_action_grant_points" : {
                        "user" : [ "entityform:user" ],
                        "points" : "1",
                        "tid" : "0",
                        "entity" : [ "entityform" ],
                        "description" : "Chronicle that glory!",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "call_to_battle" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "stream_call_to_battle",
                          "param_user" : [ "entityform:user" ]
                        },
                        "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "entity-created:field-stream-node-ref" ],
                        "value" : [ "entityform:field-location" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "warzone_campaign_report_battle_p" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "campaign_reported_battle",
                          "param_user" : [ "entityform:user" ]
                        },
                        "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "entity-created:field-stream-node-ref" ],
                        "value" : [ "entityform:field-event-link" ]
                      }
                    },
                    { "data_set" : {
                        "data" : [ "entity-created:arguments:messtext" ],
                        "value" : "This is a reported battle."
                      }
                    },
                    { "component_rules_war_zone_campaign_record_battle" : { "bid" : [ "entityform" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_grant_achievement" },
                  "DO" : [
                    { "component_rules_war_zone_all_grant_achievement" : { "efid" : [ "entityform" ] } }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "war_zone_league_add_journeyman_s" }, "DO" : [] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_master_on_register'] = entity_import('rules_config', '{ "rules_master_on_register" : {
      "LABEL" : "Master: On Register",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Register", "War Zone" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "rules_conditional", "node_registration" ],
      "ON" : { "node_registration_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node-registration" ],
            "type" : "node_registration",
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
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_registers_for_warzone",
              "param_user" : [ "node-registration:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "node-registration:node" ]
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "node-registration:user" ],
            "points" : "2",
            "tid" : "0",
            "entity" : [ "node-registration:node" ],
            "description" : "Joining a Warzone.",
            "operation" : "Add",
            "display" : 1,
            "moderate" : "approved"
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "node-registration:node:author" ],
            "points" : "1",
            "tid" : "894",
            "entity" : [ "node-registration:node" ],
            "description" : "A Player has commited forces to your war zone.",
            "operation" : "Add",
            "display" : 0,
            "moderate" : "approved"
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "node-registration:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "narrative_campaign_instance" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "campaign_reported_battle",
                          "param_user" : [ "node-registration:user" ]
                        },
                        "PROVIDE" : { "entity_created" : { "campaign_message" : "Campaign Message" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "campaign-message:field-stream-node-ref" ],
                        "value" : [ "node-registration:node" ]
                      }
                    },
                    { "data_set" : {
                        "data" : [ "campaign-message:field-image" ],
                        "value" : [ "node-registration:field-register-army:field-image" ]
                      }
                    },
                    { "CONDITIONAL" : [
                        {
                          "IF" : { "entity_is_of_bundle" : {
                              "entity" : [ "node-registration:field-register-faction" ],
                              "type" : "entityform",
                              "bundle" : { "value" : { "warzone_campaign_factions" : "warzone_campaign_factions" } }
                            }
                          },
                          "DO" : [
                            { "data_set" : {
                                "data" : [ "campaign-message:arguments:messtext" ],
                                "value" : "[node-registration:user] has commited troops in support of [node-registration:field-register-faction:field-title-chronicle]."
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_master_on_save_existing_entityform'] = entity_import('rules_config', '{ "rules_master_on_save_existing_entityform" : {
      "LABEL" : "Master: on save existing entityform",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Entityform", "Master" ],
      "REQUIRES" : [ "rules_conditional", "rules", "entityform" ],
      "ON" : { "entityform_update" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "entityform:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "warzone_campaign_phase" },
                  "DO" : [ { "redirect" : { "url" : [ "entityform:field-event-link:url" ] } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "warzone_campaign_factions" },
                  "DO" : [ { "redirect" : { "url" : [ "entityform:field-event-link:url" ] } } ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_master_save_new_content'] = entity_import('rules_config', '{ "rules_master_save_new_content" : {
      "LABEL" : "Master: Save New Content",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "Master" ],
      "REQUIRES" : [ "rules_conditional", "rules", "userpoints_rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "node:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "gallery" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "stream_player_posts_new_content",
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
                    { "component_rules_utility_award_gallery_achievements" : { "uid" : [ "entity-created:user" ] } },
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "4",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Gallery added.",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "game_results" },
                  "DO" : [
                    { "component_rules_battle_results_create_container" : { "bid" : [ "node" ] } },
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "5",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Battle submitted. ",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
                      }
                    },
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "stream_player_posts_a_battle",
                          "param_user" : [ "node:author" ]
                        },
                        "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "entity-created:field-stream-node-ref" ],
                        "value" : [ "node" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "challenge" }, "DO" : [] } },
              { "CASE" : { "USING" : { "value" : "event" }, "DO" : [] } },
              { "CASE" : { "USING" : { "value" : "location" }, "DO" : [] } },
              { "CASE" : {
                  "USING" : { "value" : "blog" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "stream_player_posts_new_content",
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
                    { "component_rules_utility_award_doctrine" : { "uid" : [ "node:author" ] } },
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "3",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Blog post received!",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "listcrit" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "stream_player_posts_new_content",
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
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "3",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "New List",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_league" },
                  "DO" : [
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "5",
                        "tid" : "894",
                        "entity" : [ "node" ],
                        "description" : "Running a league",
                        "operation" : "Add",
                        "display" : 0,
                        "moderate" : "approved"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "army_profile" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "stream_player_posts_new_content",
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
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "2",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "New Army Profile created.",
                        "operation" : "Add",
                        "display" : 0,
                        "moderate" : "approved"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "article" },
                  "DO" : [
                    { "component_rules_warzone_message_on_new_article" : { "nid" : [ "node" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "special_event" },
                  "DO" : [
                    { "mail" : {
                        "to" : [ "node:author:mail" ],
                        "subject" : "[iToysoldiers Equerry] Your War Zone is Ready!",
                        "message" : "Test.",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_utility_award_doctrine'] = entity_import('rules_config', '{ "rules_utility_award_doctrine" : {
      "LABEL" : "Utility: Award Doctrine",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User Id", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "blog_count" : "Blog Count" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_6",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "Count" } },
            "DO" : [ { "data_set" : { "data" : [ "blog-count" ], "value" : [ "nid" ] } } ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4308", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "4" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4309", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4310", "uid" : [ "uid" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_utility_award_gallery_achievements'] = entity_import('rules_config', '{ "rules_utility_award_gallery_achievements" : {
      "LABEL" : "Utility: Award gallery Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "gallery_count" : "Gallery Count" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_5",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "(nodes) COUNT(Content: Nid)" } },
            "DO" : [ { "data_set" : { "data" : [ "gallery-count" ], "value" : [ "nid" ] } } ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "19" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3321", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "14" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3320", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3319", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "4" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3318", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3317", "uid" : [ "uid" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_war_zone_achievement_create_achievement'] = entity_import('rules_config', '{ "rules_war_zone_achievement_create_achievement" : {
      "LABEL" : "War Zone: Achievement: Create Achievement",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "War Zone" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "War Zone", "type" : "node" },
        "ind" : { "label" : "Indicator", "type" : "integer" },
        "aid" : { "label" : "Achievement", "type" : "node", "parameter" : false }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "achievement",
              "param_title" : "League Victory",
              "param_author" : "1"
            },
            "PROVIDE" : { "entity_created" : { "achievement" : "Achievement" } }
          }
        },
        { "data_set" : { "data" : [ "achievement:field-achievement-category" ], "value" : "548" } },
        { "data_set" : { "data" : [ "achievement:field-event-link" ], "value" : [ "wzid" ] } },
        { "data_set" : { "data" : [ "achievement:field-achievement-unique" ], "value" : 1 } },
        { "SWITCH" : {
            "USING" : { "data" : [ "ind" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "1" },
                  "DO" : [
                    { "data_set" : { "data" : [ "achievement:field-achievement-points" ], "value" : "15" } },
                    { "data_set" : {
                        "data" : [ "achievement:field-achievement-slug" ],
                        "value" : "first-[wzid:nid]"
                      }
                    },
                    { "data_set" : {
                        "data" : [ "achievement:field-short-description" ],
                        "value" : "[wzid:title] : First Place awarded for battle acumen."
                      }
                    },
                    { "data_set" : {
                        "data" : [ "achievement:title" ],
                        "value" : "[wzid:title]: First Place"
                      }
                    },
                    { "data_set" : { "data" : [ "achievement:field-image:file" ], "value" : "20243" } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "2" },
                  "DO" : [
                    { "data_set" : { "data" : [ "achievement:field-achievement-points" ], "value" : "10" } },
                    { "data_set" : {
                        "data" : [ "achievement:field-achievement-slug" ],
                        "value" : "second-[wzid:nid]"
                      }
                    },
                    { "data_set" : {
                        "data" : [ "achievement:field-short-description" ],
                        "value" : "[wzid:title] : Second Place awarded for battle acumen."
                      }
                    },
                    { "data_set" : {
                        "data" : [ "achievement:title" ],
                        "value" : "[wzid:title] : Second Place"
                      }
                    },
                    { "data_set" : { "data" : [ "achievement:field-image:file" ], "value" : "20244" } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "3" },
                  "DO" : [
                    { "data_set" : { "data" : [ "achievement:field-achievement-points" ], "value" : "5" } },
                    { "data_set" : {
                        "data" : [ "achievement:field-achievement-slug" ],
                        "value" : "third-[wzid:nid]"
                      }
                    },
                    { "data_set" : {
                        "data" : [ "achievement:field-short-description" ],
                        "value" : "[wzid:title] : Third Place awarded for battle acumen."
                      }
                    },
                    { "data_set" : {
                        "data" : [ "achievement:title" ],
                        "value" : "[wzid:title] : Third Place"
                      }
                    },
                    { "data_set" : { "data" : [ "achievement:field-image:file" ], "value" : "20245" } }
                  ]
                }
              }
            ]
          }
        },
        { "data_set" : { "data" : [ "aid" ], "value" : [ "achievement" ] } }
      ],
      "PROVIDES VARIABLES" : [ "aid" ]
    }
  }');
  $items['rules_war_zone_all_create_battle_from_score_card_or_report'] = entity_import('rules_config', '{ "rules_war_zone_all_create_battle_from_score_card_or_report" : {
      "LABEL" : "War Zone: All: Create Battle From Score Card or Report",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "p1id" : { "label" : "Player 1", "type" : "user" },
        "p1army" : { "label" : "P1 Army", "type" : "taxonomy_term" },
        "p2army" : { "label" : "P2 Army", "type" : "taxonomy_term" },
        "p1results" : { "label" : "P1 Results", "type" : "integer" },
        "wzid" : { "label" : "Event", "type" : "node" },
        "brid" : { "label" : "Battle created", "type" : "node", "parameter" : false }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "war_zone_league" : "war_zone_league",
                "narrative_campaign_instance" : "narrative_campaign_instance",
                "special_event" : "special_event",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "p1army" ],
            "type" : "taxonomy_term",
            "bundle" : { "value" : { "armies" : "armies" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : "Test of battle report gen from warzone",
              "param_author" : [ "p1id" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-your-results" ],
            "value" : [ "p1results" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-event-link" ], "value" : [ "wzid" ] } },
        { "data_set" : { "data" : [ "entity-created:field-your-army" ], "value" : [ "p1army" ] } },
        { "data_set" : {
            "data" : [ "entity-created:field-opponent-s-army" ],
            "value" : [ "p2army" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-location" ],
            "value" : [ "wzid:field-location" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-game-date" ], "value" : "now" } },
        { "data_set" : {
            "data" : [ "entity-created:field-game" ],
            "value" : [ "p1army:field-army-game" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-location" ],
            "value" : [ "wzid:field-location" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-image" ],
            "value" : [ "wzid:field-campaign-badge" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
        { "data_set" : { "data" : [ "brid" ], "value" : [ "entity-created" ] } }
      ],
      "PROVIDES VARIABLES" : [ "brid" ]
    }
  }');
  $items['rules_war_zone_all_grant_achievement'] = entity_import('rules_config', '{ "rules_war_zone_all_grant_achievement" : {
      "LABEL" : "War Zone: All: Grant Achievement",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "War Zone" ],
      "REQUIRES" : [ "rules", "rules_conditional", "userpoints_rules" ],
      "USES VARIABLES" : { "efid" : { "label" : "EFID", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "efid" ],
            "type" : "entityform",
            "bundle" : { "value" : { "war_zone_grant_achievement" : "war_zone_grant_achievement" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "efid:field-event-link" ],
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
        { "variable_add" : {
            "USING" : { "type" : "text" },
            "PROVIDE" : { "variable_added" : { "achievement_title" : "Achievement Title" } }
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "achievement",
              "param_title" : "[efid:field-event-link:title] [efid:field-title-custom-achievement]",
              "param_author" : "1"
            },
            "PROVIDE" : { "entity_created" : { "new_achievement" : "New Achievement" } }
          }
        },
        { "data_set" : {
            "data" : [ "new-achievement:field-event-link" ],
            "value" : [ "efid:field-event-link" ]
          }
        },
        { "data_set" : {
            "data" : [ "new-achievement:field-short-description" ],
            "value" : [ "efid:field-short-description" ]
          }
        },
        { "data_set" : {
            "data" : [ "new-achievement:field-achievement-category" ],
            "value" : "1099"
          }
        },
        { "data_set" : { "data" : [ "new-achievement:field-achievement-unique" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "new-achievement:field-achievement-points" ],
            "value" : [ "efid:field-points-custom-achievement" ]
          }
        },
        { "data_set" : {
            "data" : [ "new-achievement:field-achievement-slug" ],
            "value" : [ "efid:uid" ]
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "efid:field-image-custom-achievement" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "0" },
                  "DO" : [
                    { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "20243" } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "1" },
                  "DO" : [
                    { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "20244" } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "2" },
                  "DO" : [
                    { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "20245" } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "5" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "new-achievement:field-image" ],
                        "value" : [ "efid:field-event-link:field-campaign-badge" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "3" },
                  "DO" : [
                    { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "20175" } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "4" },
                  "DO" : [
                    { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "19968" } }
                  ]
                }
              }
            ]
          }
        },
        { "entity_save" : { "data" : [ "new-achievement" ], "immediate" : 1 } },
        { "component_rules_award_achievement" : {
            "aid" : [ "new-achievement" ],
            "uid" : [ "efid:field-registration-sc:user" ]
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "campaign_reported_battle",
              "param_user" : [ "efid:user" ]
            },
            "PROVIDE" : { "entity_created" : { "message" : "message" } }
          }
        },
        { "data_set" : {
            "data" : [ "message:field-stream-node-ref" ],
            "value" : [ "efid:field-event-link" ]
          }
        },
        { "data_set" : {
            "data" : [ "message:arguments:messtext" ],
            "value" : "\\u003Ca href=\\u0022[efid:field-registration-sc:user:url]\\u0022\\u003E[efid:field-registration-sc:user:name]\\u003C\\/a\\u003E has been awarded the \\u0022[new-achievement:title]\\u0022 Achievement."
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "user_has_role" : { "account" : [ "efid:user" ], "roles" : { "value" : { "9" : "9" } } } },
              "DO" : [
                { "userpoints_action_grant_points" : {
                    "user" : [ "efid:user" ],
                    "points" : "1",
                    "tid" : "894",
                    "entity" : [ "efid:field-event-link" ],
                    "description" : "Prestige for awarding players.",
                    "operation" : "Add",
                    "display" : 1,
                    "moderate" : "approved",
                    "expirydate" : "+1 year"
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_war_zone_archievement_award_achievements'] = entity_import('rules_config', '{ "rules_war_zone_archievement_award_achievements" : {
      "LABEL" : "War Zone: Archievement: Award Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "War Zone" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "wzid" : { "label" : "WarZone ID", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
          }
        },
        { "data_is" : { "data" : [ "wzid:field-status" ], "value" : "5" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "1" },
            "PROVIDE" : { "variable_added" : { "counter" : "Counter" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_v2_ranking",
            "DISPLAY" : "views_rules_2",
            "USING" : { "endpoints_entity_id" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "field_player_wzscore_1" : { "field_player_wzscore_1" : "Relation: Player" } },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "counter" ], "op" : "\\u003C", "value" : "4" } },
                    "DO" : [
                      { "entity_fetch" : {
                          "USING" : { "type" : "user", "id" : [ "field-player-wzscore-1" ] },
                          "PROVIDE" : { "entity_fetched" : { "user_fetched" : "Fetched User" } }
                        }
                      },
                      { "component_rules_war_zone_achievement_create_achievement" : {
                          "USING" : { "wzid" : [ "wzid" ], "ind" : [ "counter" ] },
                          "PROVIDE" : { "aid" : { "aid" : "Achievement" } }
                        }
                      },
                      { "component_rules_award_achievement" : { "aid" : [ "aid" ], "uid" : [ "user-fetched" ] } },
                      { "data_calc" : {
                          "USING" : { "input_1" : [ "counter" ], "op" : "+", "input_2" : "1" },
                          "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                        }
                      },
                      { "data_set" : { "data" : [ "counter" ], "value" : [ "result" ] } }
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
  $items['rules_war_zone_campaign_record_battle'] = entity_import('rules_config', '{ "rules_war_zone_campaign_record_battle" : {
      "LABEL" : "War Zone: Campaign: Record Battle",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Campaign", "War Zone" ],
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "entityform",
            "bundle" : { "value" : { "warzone_campaign_report_battle_p" : "warzone_campaign_report_battle_p" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "bid:field-player-1-reg" ],
            "type" : "node_registration",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "score_card",
              "param_created" : [ "site:current-date" ],
              "param_user" : [ "bid:field-event-link:author" ]
            },
            "PROVIDE" : { "entity_created" : { "score_card" : "Score Card" } }
          }
        },
        { "data_set" : {
            "data" : [ "score-card:field-phase-sc" ],
            "value" : [ "bid:field-phase-sc" ]
          }
        },
        { "data_set" : { "data" : [ "score-card:field-state-sc" ], "value" : "20" } },
        { "component_rules_war_zone_all_create_battle_from_score_card_or_report" : {
            "USING" : {
              "p1id" : [ "bid:field-player-1-reg:user" ],
              "p1army" : [ "bid:field-your-army" ],
              "p2army" : [ "bid:field-opponent-s-army" ],
              "p1results" : [ "bid:field-your-results" ],
              "wzid" : [ "bid:field-event-link" ]
            },
            "PROVIDE" : { "brid" : { "brid" : "Battle created" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "bid:field-player-2-reg" ] } },
              "DO" : [
                { "variable_add" : {
                    "USING" : { "type" : "integer", "value" : "6" },
                    "PROVIDE" : { "variable_added" : { "opponent_score" : "Opponent Score" } }
                  }
                },
                { "data_calc" : {
                    "USING" : {
                      "input_1" : [ "opponent-score" ],
                      "op" : "-",
                      "input_2" : [ "bid:field-your-results" ]
                    },
                    "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                  }
                },
                { "entity_create" : {
                    "USING" : {
                      "type" : "entityform",
                      "param_type" : "score_card",
                      "param_created" : [ "site:current-date" ],
                      "param_user" : [ "bid:field-event-link:author" ]
                    },
                    "PROVIDE" : { "entity_created" : { "osc" : "Opponents Score Card" } }
                  }
                },
                { "data_set" : { "data" : [ "osc:field-state-sc" ], "value" : "20" } },
                { "data_set" : { "data" : [ "osc:field-phase-sc" ], "value" : [ "bid:field-phase-sc" ] } },
                { "data_set" : {
                    "data" : [ "osc:field-registration-sc" ],
                    "value" : [ "bid:field-player-2-reg" ]
                  }
                },
                { "flag_flagnode" : {
                    "flag" : "acknowledge_battle",
                    "node" : [ "brid" ],
                    "flagging_user" : [ "bid:field-player-2-reg:user" ],
                    "permission_check" : 1
                  }
                },
                { "data_set" : { "data" : [ "osc:field-battle-points-sc" ], "value" : [ "result" ] } }
              ]
            }
          ]
        },
        { "data_set" : {
            "data" : [ "score-card:field-registration-sc" ],
            "value" : [ "bid:field-player-1-reg" ]
          }
        },
        { "data_set" : {
            "data" : [ "score-card:field-battle-points-sc" ],
            "value" : [ "bid:field-your-results" ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_casual_generate_final_scores_ii'] = entity_import('rules_config', '{ "rules_war_zone_casual_generate_final_scores_ii" : {
      "LABEL" : "War Zone: Casual: Generate Final Scores II",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone" ],
      "REQUIRES" : [ "rules", "views_rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "Warzone ID", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
          }
        }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_registered_players",
            "DISPLAY" : "views_rules_1",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "uid" : { "uid" : "(User) Uid" },
              "tid" : { "tid" : "(term from field_register_army) Taxonomy term: Term ID" },
              "registration_id" : { "registration_id" : "Node registration: Registration ID" }
            },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                  "PROVIDE" : { "variable_added" : { "endpoints" : "End Points" } }
                }
              },
              { "list_add" : { "list" : [ "endpoints" ], "item" : [ "wzid" ], "pos" : "start" } },
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "uid" ] },
                  "PROVIDE" : { "entity_fetched" : { "user_fetched" : "Fetched user" } }
                }
              },
              { "list_add" : { "list" : [ "endpoints" ], "item" : [ "user-fetched" ] } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "relation",
                    "param_relation_type" : "warzone_score",
                    "param_endpoints" : [ "endpoints" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "battle_count" : "Battles" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "score" : "Score" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "wins_count" : "Wins" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "draws_count" : "Draws" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "loss_count" : "Losses" } }
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "casual_league_ranking",
                  "DISPLAY" : "views_rules_2",
                  "USING" : {
                    "nid" : [ "wzid:nid" ],
                    "field_game_tid" : [ "wzid:field-warzone-game:tid" ],
                    "uid" : [ "uid" ]
                  },
                  "ROW VARIABLES" : {
                    "field_your_results" : { "field_your_results" : "(nodes) Battle Points" },
                    "field_defeat" : { "field_defeat" : "(nodes) Defeat" },
                    "field_draw" : { "field_draw" : "(nodes) Draw" },
                    "field_victory" : { "field_victory" : "Victory" }
                  },
                  "DO" : [
                    { "data_calc" : {
                        "USING" : { "input_1" : [ "battle-count" ], "op" : "+", "input_2" : "1" },
                        "PROVIDE" : { "result" : { "new_battle" : "New Battle" } }
                      }
                    },
                    { "data_set" : { "data" : [ "battle-count" ], "value" : [ "new-battle" ] } },
                    { "data_calc" : {
                        "USING" : {
                          "input_1" : [ "score" ],
                          "op" : "+",
                          "input_2" : [ "field-your-results" ]
                        },
                        "PROVIDE" : { "result" : { "new_score" : "new Score" } }
                      }
                    },
                    { "data_set" : { "data" : [ "score" ], "value" : [ "new-score" ] } },
                    { "data_calc" : {
                        "USING" : {
                          "input_1" : [ "wins-count" ],
                          "op" : "+",
                          "input_2" : [ "field-victory" ]
                        },
                        "PROVIDE" : { "result" : { "new_wins" : "New Wins" } }
                      }
                    },
                    { "data_set" : { "data" : [ "wins-count" ], "value" : [ "new-wins" ] } },
                    { "data_calc" : {
                        "USING" : {
                          "input_1" : [ "draws-count" ],
                          "op" : "+",
                          "input_2" : [ "field-draw" ]
                        },
                        "PROVIDE" : { "result" : { "new_draw" : "new Draw" } }
                      }
                    },
                    { "data_set" : { "data" : [ "draws-count" ], "value" : [ "new-draw" ] } },
                    { "data_calc" : {
                        "USING" : {
                          "input_1" : [ "loss-count" ],
                          "op" : "+",
                          "input_2" : [ "field-defeat" ]
                        },
                        "PROVIDE" : { "result" : { "new_loss" : "New Loss" } }
                      }
                    },
                    { "data_set" : { "data" : [ "loss-count" ], "value" : [ "new-loss" ] } }
                  ]
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-game-count-wzscore" ],
                  "value" : [ "battle-count" ]
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-warzone-score" ],
                  "value" : [ "score" ]
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-player-wzscore" ],
                  "value" : [ "user-fetched" ]
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-victory-wzscore" ],
                  "value" : [ "wins-count" ]
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-defeat-wzscore" ],
                  "value" : [ "loss-count" ]
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-draw-wzscore" ],
                  "value" : [ "draws-count" ]
                }
              },
              { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_complete_create_strength_of_schedule'] = entity_import('rules_config', '{ "rules_war_zone_complete_create_strength_of_schedule" : {
      "LABEL" : "War Zone: Complete: Create Strength of Schedule",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leagues" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "player1_uid" : { "label" : "Player1", "type" : "user" },
        "league_id" : { "label" : "League", "type" : "node" },
        "sos" : { "label" : "SOS", "type" : "integer" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "league-id" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "player1_relation" : "player1_relation" } }
          }
        },
        { "list_add" : { "list" : [ "player1-relation" ], "item" : [ "league-id" ] } },
        { "list_add" : { "list" : [ "player1-relation" ], "item" : [ "player1-uid" ] } },
        { "entity_create" : {
            "USING" : {
              "type" : "relation",
              "param_relation_type" : "warzone_score",
              "param_endpoints" : [ "player1-relation" ]
            },
            "PROVIDE" : { "entity_created" : { "p1_relation" : "Created p1 Relation" } }
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-player-wzscore" ],
            "value" : [ "player1-uid" ]
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-strength-of-schedule-wz" ],
            "value" : [ "sos" ]
          }
        },
        { "entity_save" : { "data" : [ "p1-relation" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_war_zone_league_generate_strength_of_schedule'] = entity_import('rules_config', '{ "rules_war_zone_league_generate_strength_of_schedule" : {
      "LABEL" : "War Zone: League: Generate Strength of Schedule",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Complete", "War Zone" ],
      "REQUIRES" : [ "views_rules", "rules", "rules_conditional" ],
      "USES VARIABLES" : { "wzid" : { "label" : "WarZone ID", "type" : "node" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_registered_players",
            "DISPLAY" : "views_rules_1",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "uid" : { "uid" : "(User) Uid" },
              "tid" : { "tid" : "(term from field_register_army) Taxonomy term: Term ID" },
              "registration_id" : { "registration_id" : "Node registration: Registration ID" }
            },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "final_sos" : "final sos" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "uid" ] },
                  "PROVIDE" : { "entity_fetched" : { "fetched_user" : "Fetched User" } }
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "master_v2_challenges",
                  "DISPLAY" : "views_rules_1",
                  "USING" : {
                    "field_challenge_players_target_id" : [ "uid" ],
                    "field_event_link_target_id" : [ "wzid:nid" ]
                  },
                  "ROW VARIABLES" : {
                    "field_player_1_challenge" : { "field_player_1_challenge" : "Content: Player 1" },
                    "field_opponent" : { "field_opponent" : "Content: Opponent" }
                  },
                  "DO" : [
                    { "CONDITIONAL" : [
                        {
                          "IF" : { "data_is" : { "data" : [ "uid" ], "value" : [ "field-player-1-challenge" ] } },
                          "DO" : [
                            { "VIEW LOOP" : {
                                "VIEW" : "league_standings",
                                "DISPLAY" : "views_rules_2",
                                "USING" : {
                                  "nid" : [ "wzid:nid" ],
                                  "field_player_wzscore_target_id" : [ "field-opponent" ]
                                },
                                "ROW VARIABLES" : { "field_warzone_score" : { "field_warzone_score" : "(WarZone Score) Score" } },
                                "DO" : [
                                  { "data_calc" : {
                                      "USING" : {
                                        "input_1" : [ "final-sos" ],
                                        "op" : "+",
                                        "input_2" : [ "field-warzone-score" ]
                                      },
                                      "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                                    }
                                  },
                                  { "data_set" : { "data" : [ "final-sos" ], "value" : [ "result" ] } }
                                ]
                              }
                            }
                          ]
                        },
                        { "ELSE" : [
                            { "VIEW LOOP" : {
                                "VIEW" : "league_standings",
                                "DISPLAY" : "views_rules_2",
                                "USING" : {
                                  "nid" : [ "wzid:nid" ],
                                  "field_player_wzscore_target_id" : [ "field-player-1-challenge" ]
                                },
                                "ROW VARIABLES" : { "field_warzone_score" : { "field_warzone_score" : "(WarZone Score) Score" } },
                                "DO" : [
                                  { "data_calc" : {
                                      "USING" : {
                                        "input_1" : [ "final-sos" ],
                                        "op" : "+",
                                        "input_2" : [ "field-warzone-score" ]
                                      },
                                      "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                                    }
                                  },
                                  { "data_set" : { "data" : [ "final-sos" ], "value" : [ "result" ] } }
                                ]
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              },
              { "component_rules_war_zone_complete_create_strength_of_schedule" : {
                  "player1_uid" : [ "fetched-user" ],
                  "league_id" : [ "wzid" ],
                  "sos" : [ "final-sos" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_swiss_set_unplayed_games'] = entity_import('rules_config', '{ "rules_war_zone_swiss_set_unplayed_games" : {
      "LABEL" : "War Zone: Swiss: Set Unplayed Games",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone" ],
      "REQUIRES" : [ "rules", "views_rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "WarZone ID", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
          }
        }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "swiss_tourney_challenge_management",
            "DISPLAY" : "views_rules_1",
            "USING" : { "field_event_link_target_id" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "field_player_2_challenge" : { "field_player_2_challenge" : "Player 2" },
              "field_player_1_challenge" : { "field_player_1_challenge" : "Player 1" },
              "challenge_nid" : { "challenge_nid" : "Nid" }
            },
            "DO" : [
              { "component_rules_war_zone_utility_fetch_player_army" : {
                  "USING" : { "wzid" : [ "wzid" ], "uid" : [ "field-player-1-challenge" ] },
                  "PROVIDE" : { "tid" : { "tid" : "Army ID" } }
                }
              },
              { "component_rules_war_zones_set_challenge_score" : {
                  "player1_uid" : [ "field-player-1-challenge" ],
                  "league_id" : [ "wzid" ],
                  "player1_score" : "1",
                  "gamecount" : "0",
                  "player1_army" : [ "tid" ],
                  "v_count" : "0",
                  "d_count" : "0",
                  "l_count" : "0",
                  "b_count" : "0",
                  "f_count" : "1",
                  "o_count" : "0"
                }
              },
              { "component_rules_war_zone_utility_fetch_player_army" : {
                  "USING" : { "wzid" : [ "wzid" ], "uid" : [ "field-player-2-challenge" ] },
                  "PROVIDE" : { "tid" : { "tid2" : "Army ID" } }
                }
              },
              { "component_rules_war_zones_set_challenge_score" : {
                  "player1_uid" : [ "field-player-2-challenge" ],
                  "league_id" : [ "wzid" ],
                  "player1_score" : "1",
                  "gamecount" : "0",
                  "player1_army" : [ "tid2" ],
                  "v_count" : "0",
                  "d_count" : "0",
                  "l_count" : "0",
                  "b_count" : "0",
                  "f_count" : "1",
                  "o_count" : "0"
                }
              },
              { "data_set" : { "data" : [ "challenge-nid:status" ], "value" : "0" } },
              { "entity_save" : { "data" : [ "challenge-nid" ], "immediate" : 1 } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_utility_fetch_player_army'] = entity_import('rules_config', '{ "rules_war_zone_utility_fetch_player_army" : {
      "LABEL" : "War Zone: Utility: Fetch Player Army",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone" ],
      "REQUIRES" : [ "views_rules", "rules" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "WarZone ID", "type" : "node" },
        "uid" : { "label" : "User ID", "type" : "user" },
        "tid" : { "label" : "Army ID", "type" : "taxonomy_term", "parameter" : false }
      },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_registered_players",
            "DISPLAY" : "views_rules_2",
            "USING" : { "nid" : [ "wzid:nid" ], "puid" : [ "uid:uid" ] },
            "ROW VARIABLES" : {
              "uid" : { "player" : "(User) Uid" },
              "tid" : { "army" : "(term from field_register_army) Taxonomy term: Term ID" }
            },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "army" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "data_set" : { "data" : [ "tid" ], "value" : [ "entity-fetched" ] } }
            ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "tid" ]
    }
  }');
  $items['rules_war_zones_set_challenge_score'] = entity_import('rules_config', '{ "rules_war_zones_set_challenge_score" : {
      "LABEL" : "War Zones: Set Challenge Score",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leagues" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "player1_uid" : { "label" : "Player1", "type" : "user" },
        "league_id" : { "label" : "League", "type" : "node" },
        "player1_score" : { "label" : "Player 1 Score", "type" : "integer" },
        "gamecount" : { "label" : "Game Count", "type" : "integer" },
        "player1_army" : { "label" : "Player 1 Army", "type" : "taxonomy_term" },
        "v_count" : { "label" : "Victory Count", "type" : "integer" },
        "d_count" : { "label" : "Draw Count", "type" : "integer" },
        "l_count" : { "label" : "Loss Count", "type" : "integer" },
        "b_count" : { "label" : "Bye Count", "type" : "integer" },
        "f_count" : { "label" : "Forfeit Count", "type" : "integer" },
        "o_count" : { "label" : "Opponent Forfeit Count", "type" : "integer" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "league-id" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "player1_relation" : "player1_relation" } }
          }
        },
        { "list_add" : { "list" : [ "player1-relation" ], "item" : [ "league-id" ] } },
        { "list_add" : { "list" : [ "player1-relation" ], "item" : [ "player1-uid" ] } },
        { "entity_create" : {
            "USING" : {
              "type" : "relation",
              "param_relation_type" : "warzone_score",
              "param_endpoints" : [ "player1-relation" ]
            },
            "PROVIDE" : { "entity_created" : { "p1_relation" : "Created p1 Relation" } }
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-warzone-score" ],
            "value" : [ "player1-score" ]
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-player-wzscore" ],
            "value" : [ "player1-uid" ]
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-game-count-wzscore" ],
            "value" : [ "gamecount" ]
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-army-played-wzscore" ],
            "value" : [ "player1-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-victory-wzscore" ],
            "value" : [ "v-count" ]
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-defeat-wzscore" ],
            "value" : [ "l-count" ]
          }
        },
        { "data_set" : { "data" : [ "p1-relation:field-draw-wzscore" ], "value" : [ "d-count" ] } },
        { "data_set" : {
            "data" : [ "p1-relation:field-opponent-forfeit-wzscore" ],
            "value" : [ "f-count" ]
          }
        },
        { "data_set" : {
            "data" : [ "p1-relation:field-opponent-forfeit-wzscore" ],
            "value" : [ "o-count" ]
          }
        },
        { "data_set" : { "data" : [ "p1-relation:field-bye-wzscore" ], "value" : [ "b-count" ] } },
        { "entity_save" : { "data" : [ "p1-relation" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_warzone_email_players'] = entity_import('rules_config', '{ "rules_warzone_email_players" : {
      "LABEL" : "Warzone: Email Players",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "Warzone", "type" : "node" },
        "message_title" : { "label" : "Title", "type" : "text" },
        "message_body" : { "label" : "Body", "type" : "text" }
      },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_1",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "email" : { "email" : "E-mail" },
              "field_register_real_name" : { "field_register_real_name" : "Real Name" }
            },
            "DO" : [
              { "mail" : {
                  "to" : [ "email" ],
                  "subject" : [ "message-title" ],
                  "message" : "\\u003Ch1 style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 1.3; word-break: normal; font-size: 40px; margin: 0; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003EAhoy, [field-register-real-name:value]!\\u003C\\/h1\\u003E\\r\\n\\r\\n[message-body:value]",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_warzone_message_on_new_article'] = entity_import('rules_config', '{ "rules_warzone_message_on_new_article" : {
      "LABEL" : "Warzone: Message on New Article",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Article", "Warzone" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "nid" : { "label" : "Article", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "nid" ],
            "type" : "node",
            "bundle" : { "value" : { "article" : "article" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "nid:field-attach-to" ],
            "type" : "node",
            "bundle" : { "value" : {
                "war_zone_league" : "war_zone_league",
                "special_event" : "special_event",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "nid:field-attach-to:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "warzone" : "Warzone" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : "[iToysoldiers] Message for you, sir!" },
            "PROVIDE" : { "variable_added" : { "message_title" : "Message Title" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003Cp class=\\u0022lead\\u0022 style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 21px; font-size: 18px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\n[nid:author] has added an update for the War Zone, \\u003Ca href=\\u0022[warzone:url]\\u0022\\u003E[warzone:title]\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\nView the update at \\u003Ca href=\\u0022[nid:url]\\u0022\\u003E[nid:title]\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\nCarpe Acies,\\u003Cbr\\u003E\\r\\nThe iToysoldiers Equerry\\r\\n\\u003C\\/p\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "message_body" : "Message Body" } }
          }
        },
        { "component_rules_warzone_email_players" : {
            "wzid" : [ "nid:field-attach-to" ],
            "message_title" : [ "message_title" ],
            "message_body" : [ "message_body" ]
          }
        }
      ]
    }
  }');
  return $items;
}
