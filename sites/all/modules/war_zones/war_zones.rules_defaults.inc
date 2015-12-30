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
                              "body" : "You have been awarded the [aid:link] Achievement.",
                              "feed_nid" : "1",
                              "feed_node" : [ "aid" ]
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
  $items['rules_link_condition_war_zone_all_generate_comp'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_all_generate_comp" : {
      "LABEL" : "Rules link: War Zone: All: Generate Comp Scorecards (cloned) condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
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
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "5" } }
      ]
    }
  }');
  $items['rules_link_condition_war_zone_all_generate_painting_s'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_all_generate_painting_s" : {
      "LABEL" : "Rules link: War Zone: All: Generate Painting Scorecards condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
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
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "5" } }
      ]
    }
  }');
  $items['rules_link_condition_war_zone_all_open_registration'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_all_open_registration" : {
      "LABEL" : "Rules link: War Zone: All: Open Registration condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
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
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_condition_war_zone_tournament_next_round'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_tournament_next_round" : {
      "LABEL" : "Rules link: War Zone: Tournament: Next Round condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_tournament" : "war_zone_tournament" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "5" } }
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
  $items['rules_link_set_war_zone_all_generate_comp'] = entity_import('rules_config', '{ "rules_link_set_war_zone_all_generate_comp" : {
      "LABEL" : "Rules link: War Zone: All: Generate Comp Scorecards (cloned) rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_email_player_rules",
                  "DISPLAY" : "views_rules_4",
                  "USING" : { "nid" : [ "node:nid" ] },
                  "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
                  "DO" : [
                    { "entity_fetch" : {
                        "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                        "PROVIDE" : { "entity_fetched" : { "registration_fetched" : "Fetched Registration" } }
                      }
                    },
                    { "entity_create" : {
                        "USING" : {
                          "type" : "entityform",
                          "param_type" : "score_card",
                          "param_created" : [ "site:current-date" ],
                          "param_user" : [ "node:author" ]
                        },
                        "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                      }
                    },
                    { "data_set" : { "data" : [ "entity-created:field-event-link" ], "value" : [ "node" ] } },
                    { "data_set" : {
                        "data" : [ "entity-created:field-registration-sc" ],
                        "value" : [ "registration-fetched" ]
                      }
                    },
                    { "data_set" : { "data" : [ "entity-created:field-score-card-type" ], "value" : "10" } },
                    { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
                  ]
                }
              }
            ],
            "LABEL" : "War Zone: All: Generate Comp Scorecards"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_war_zone_all_generate_painting_s'] = entity_import('rules_config', '{ "rules_link_set_war_zone_all_generate_painting_s" : {
      "LABEL" : "Rules link: War Zone: All: Generate Painting Scorecards rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_email_player_rules",
                  "DISPLAY" : "views_rules_4",
                  "USING" : { "nid" : [ "node:nid" ] },
                  "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
                  "DO" : [
                    { "entity_fetch" : {
                        "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                        "PROVIDE" : { "entity_fetched" : { "fetched_registration" : "Fetched Registration" } }
                      }
                    },
                    { "entity_create" : {
                        "USING" : {
                          "type" : "entityform",
                          "param_type" : "score_card",
                          "param_created" : [ "site:current-date" ],
                          "param_user" : [ "node:author" ]
                        },
                        "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                      }
                    },
                    { "data_set" : { "data" : [ "entity-created:field-event-link" ], "value" : [ "node" ] } },
                    { "data_set" : {
                        "data" : [ "entity-created:field-registration-sc" ],
                        "value" : [ "fetched-registration" ]
                      }
                    },
                    { "data_set" : { "data" : [ "entity-created:field-score-card-type" ], "value" : "5" } },
                    { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
                  ]
                }
              }
            ],
            "LABEL" : "War Zone: All: Generate Painting Scorecards"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_war_zone_all_open_registration'] = entity_import('rules_config', '{ "rules_link_set_war_zone_all_open_registration" : {
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
  $items['rules_link_set_war_zone_tournament_next_round'] = entity_import('rules_config', '{ "rules_link_set_war_zone_tournament_next_round" : {
      "LABEL" : "Rules link: War Zone: Tournament: Next Round rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } },
            "DO" : [
              { "component_rules_war_zone_tournament_generate_battle_reports" : { "wzid" : [ "node" ] } },
              { "component_rules_war_zone_tournament_increment_round" : { "wzid" : [ "node" ] } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "war_zone_all_new_round_message",
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
            ],
            "LABEL" : "War Zone: Tournament: Next Round Wrapper"
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
                    { "CASE" : {
                        "USING" : { "value" : "narrative_campaign_instance" },
                        "DO" : [
                          { "component_rules_war_zone_campaign_final_scoring" : { "wzid" : [ "node" ] } }
                        ]
                      }
                    },
                    { "CASE" : {
                        "USING" : { "value" : "war_zone_tournament" },
                        "DO" : [
                          { "component_rules_war_zone_tournament_generate_battle_reports" : { "wzid" : [ "node" ] } },
                          { "component_rules_war_zone_all_generate_strength_of_schedule" : { "wzid" : [ "node" ] } }
                        ]
                      }
                    }
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
  $items['rules_war_zone_all_create_battle_from_wz_form'] = entity_import('rules_config', '{ "rules_war_zone_all_create_battle_from_wz_form" : {
      "LABEL" : "War Zone: All: Create Battle from WZ form",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "p1" : { "label" : "Player 1", "type" : "user" },
        "p1_results" : { "label" : "Results", "type" : "integer" },
        "brid" : { "label" : "Battle", "type" : "node", "parameter" : false },
        "wzid" : { "label" : "War Zone", "type" : "node" }
      },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : "Test",
              "param_author" : [ "p1" ]
            },
            "PROVIDE" : { "entity_created" : { "battle" : "Battle" } }
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "brid" ]
    }
  }');
  $items['rules_war_zone_all_edit_entityform'] = entity_import('rules_config', '{ "rules_war_zone_all_edit_entityform" : {
      "LABEL" : "War Zone: All: Edit Entityform",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "score_card" : "score_card" } }
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "\\/node\\/[entityform:field-event-link:nid]\\/management" } }
      ]
    }
  }');
  $items['rules_war_zone_all_generate_battle_report'] = entity_import('rules_config', '{ "rules_war_zone_all_generate_battle_report" : {
      "LABEL" : "War Zone: All: Generate Battle Report",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "War Zone", "type" : "node" },
        "p1id" : { "label" : "Player 1", "type" : "user" },
        "p1tid" : { "label" : "Player 1 Army", "type" : "taxonomy_term" },
        "p2tid" : { "label" : "Player 2 Army", "type" : "taxonomy_term" },
        "p1results" : { "label" : "P1 Results", "type" : "integer" },
        "brid" : { "label" : "Battle Report", "type" : "node", "parameter" : false },
        "title" : { "label" : "Battle Title", "type" : "text" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
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
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : [ "title" ],
              "param_author" : [ "p1id" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-game-date" ], "value" : "now" } },
        { "data_set" : { "data" : [ "entity-created:field-your-army" ], "value" : [ "p1tid" ] } },
        { "data_set" : {
            "data" : [ "entity-created:field-opponent-s-army" ],
            "value" : [ "p2tid" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-your-results" ],
            "value" : [ "p1results" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-location" ],
            "value" : [ "wzid:field-location" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-event-link" ], "value" : [ "wzid" ] } },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } },
        { "data_set" : { "data" : [ "brid" ], "value" : [ "entity-created" ] } }
      ],
      "PROVIDES VARIABLES" : [ "brid" ]
    }
  }');
  $items['rules_war_zone_all_generate_strength_of_schedule'] = entity_import('rules_config', '{ "rules_war_zone_all_generate_strength_of_schedule" : {
      "LABEL" : "War Zone: All: Generate Strength of Schedule",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "views_rules", "rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_5",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "or" : "Opponent Record" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "oor" : "Opponent Opponent Record" } }
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_tournament_score_cards",
                  "DISPLAY" : "views_rules_2",
                  "USING" : { "opponent_id" : [ "registration-id" ] },
                  "ROW VARIABLES" : { "field_victory" : { "field_victory" : "Victory" } },
                  "DO" : [ { "data_set" : { "data" : [ "or" ], "value" : [ "field-victory" ] } } ]
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_tournament_score_cards",
                  "DISPLAY" : "views_rules_3",
                  "USING" : { "player_id" : [ "registration-id" ] },
                  "ROW VARIABLES" : { "registration_id" : { "opponent_id" : "Opponent" } },
                  "DO" : [
                    { "VIEW LOOP" : {
                        "VIEW" : "war_zone_tournament_score_cards",
                        "DISPLAY" : "views_rules_2",
                        "USING" : { "opponent_id" : [ "opponent_id" ] },
                        "ROW VARIABLES" : { "field_victory" : { "oor_increment" : "OOR Increment" } },
                        "DO" : [
                          { "data_calc" : {
                              "USING" : { "input_1" : [ "oor" ], "op" : "+", "input_2" : [ "oor-increment" ] },
                              "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                            }
                          },
                          { "data_set" : { "data" : [ "oor" ], "value" : [ "result" ] } }
                        ]
                      }
                    }
                  ]
                }
              },
              { "data_calc" : {
                  "USING" : { "input_1" : [ "or" ], "op" : "*", "input_2" : "2" },
                  "PROVIDE" : { "result" : { "or_final" : "OR Final" } }
                }
              },
              { "data_calc" : {
                  "USING" : { "input_1" : [ "or-final" ], "op" : "+", "input_2" : [ "oor" ] },
                  "PROVIDE" : { "result" : { "sos_raw" : "SOS Raw" } }
                }
              },
              { "data_calc" : {
                  "USING" : { "input_1" : [ "sos-raw" ], "op" : "\\/", "input_2" : "3" },
                  "PROVIDE" : { "result" : { "sos_final" : "SOS Final" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "registration_fetched" : "Registration" } }
                }
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "entityform",
                    "param_type" : "score_card",
                    "param_created" : "now",
                    "param_user" : [ "wzid:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "sos_scorecard" : "SOS Scorecard" } }
                }
              },
              { "data_set" : { "data" : [ "sos-scorecard:field-event-link" ], "value" : [ "wzid" ] } },
              { "data_set" : {
                  "data" : [ "sos-scorecard:field-strength-of-schedule-sc" ],
                  "value" : [ "sos-final" ]
                }
              },
              { "data_set" : {
                  "data" : [ "sos-scorecard:field-registration-sc" ],
                  "value" : [ "registration-fetched" ]
                }
              },
              { "data_set" : { "data" : [ "sos-scorecard:field-score-card-type" ], "value" : "25" } },
              { "entity_save" : { "data" : [ "sos-scorecard" ], "immediate" : "1" } }
            ]
          }
        }
      ]
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
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "count_of_players" : "Count of Players" } }
          }
        },
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
            "value" : "1146"
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "efid:field-player-achivement-reg" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "data_calc" : {
                  "USING" : { "input_1" : [ "count-of-players" ], "op" : "+", "input_2" : "1" },
                  "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                }
              },
              { "data_set" : { "data" : [ "count-of-players" ], "value" : [ "result" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "count-of-players" ], "value" : "1" } },
              "DO" : [
                { "data_set" : { "data" : [ "new-achievement:field-achievement-unique" ], "value" : 1 } }
              ]
            }
          ]
        },
        { "data_set" : {
            "data" : [ "new-achievement:field-achievement-points" ],
            "value" : [ "efid:field-points-custom-achievement" ]
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
        { "LOOP" : {
            "USING" : { "list" : [ "efid:field-player-achivement-reg" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "component_rules_award_achievement" : { "aid" : [ "new-achievement" ], "uid" : [ "list-item:user" ] } },
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
              }
            ]
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
  $items['rules_war_zone_all_on_save_new_content'] = entity_import('rules_config', '{ "rules_war_zone_all_on_save_new_content" : {
      "LABEL" : "War Zone: All: On Save New Content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "article" : "article",
                "gallery" : "gallery",
                "league" : "league",
                "narrative_campaign" : "narrative_campaign",
                "narrative_campaign_instance" : "narrative_campaign_instance",
                "special_event" : "special_event",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        }
      ],
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "node:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "narrative_campaign_instance" },
                  "DO" : [
                    { "mail" : {
                        "to" : [ "node:author:mail" ],
                        "subject" : "[iToysoldiers] You\\u0027re Ready To Go To War",
                        "message" : "\\u003Ch3\\u003EGreetings, [node:author:name]!\\u003C\\/h3\\u003E\\r\\n\\u003Cp\\u003EYour Campaign is ready and can be viewed at [node:url] .\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour Campaign Management page is available at http:\\/\\/itoysoldiers.com\\/node\\/[node:nid]\\/management .\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ETo help you have a successful campaign, please take a moment to review these tips before promoting your campaign to players:\\r\\n\\u003Cp\\u003EFirst, your campaign starts in \\u003Cstrong\\u003ESetup\\u003C\\/strong\\u003E mode.  In this mode, other players cannot see or register for your campaign.  This gives you an opportunity to ensure that you are happy with all of the settings before making it live.  Once you\\u2019re happy with it, you can visit your Campaign Management page and click \\u201cOpen War Zone\\u201d.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ESecond, your campaign will automatically start on the date that you indicate on the Date field.  However, before players can report battles you will need to open at least one phase\\/operation.  You can do that from the Management Page as well.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ELastly, if you have any questions, comments, requests or anything do not hesitate to reach out.  The super friendly iToysoldiers team (that\\u2019d be me) is always ready to help you out.  The best way to reach us is here:  http:\\/\\/itoysoldiers.uservoice.com\\/.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003E\\r\\nRob\\u003Cbr\\u003E\\r\\niToysoldiers.com\\u003C\\/p\\u003E\\r\\n",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "gallery" },
                  "DO" : [
                    { "CONDITIONAL" : [
                        {
                          "IF" : { "NOT data_is_empty" : { "data" : [ "node:field-event-link" ] } },
                          "DO" : [
                            { "component_rules_warzone_message_on_new_article" : { "nid" : [ "node" ] } }
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
                    { "mail" : {
                        "to" : [ "node:author:mail" ],
                        "subject" : "[iToysoldiers] You\\u0027re Ready To Go To War",
                        "message" : "\\u003Ch3\\u003EGreetings, [node:author:name]!\\u003C\\/h3\\u003E\\r\\n\\u003Cp\\u003EYour \\u003Cstrong\\u003ESpecial Event\\u003C\\/strong\\u003E is ready and can be viewed at [node:url] .\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour War Zone Management page is available at http:\\/\\/itoysoldiers.com\\/node\\/[node:nid]\\/management .\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis War Zone, as well as any others, can also be accessed from your Dashboard at http:\\/\\/itoysoldiers.com\\/dashboard.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ETo help you have a successful war zone, please take a moment to review these tips before promoting your campaign to players:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EFirst, your war zone starts in \\u003Cstrong\\u003ESetup\\u003C\\/strong\\u003E mode.  In this mode, other players cannot see or register for your event.  This gives you an opportunity to ensure that you are happy with all of the settings before making it live.  Once you\\u2019re happy with it, you can visit your Campaign Management page and click \\u201cOpen War Zone\\u201d.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ESecond, if you select \\u0022Automatic\\u0022 for scheduling, your war zone will automatically start on the date that you indicate on the Date field. There is no action required on your part. If you have selected \\u0022Manual\\u0022 then you will need to start and complete the war zone from the management page.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ELastly, if you have any questions, comments, requests or anything do not hesitate to reach out.  The super friendly iToysoldiers team (that\\u2019d be me) is always ready to help you out.  The best way to reach us is here:  http:\\/\\/itoysoldiers.uservoice.com\\/.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003E\\r\\nRob\\u003Cbr\\u003E\\r\\niToysoldiers.com\\u003C\\/p\\u003E",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_tournament" },
                  "DO" : [
                    { "mail" : {
                        "to" : "[node:author:mail]",
                        "subject" : "[iToysoldiers] Your Tournament is Ready!",
                        "message" : "\\u003Ch3 style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 1.3; word-break: normal; font-size: 40px; margin: 0; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003EGreetings, [node:author:name]!\\u003C\\/h3\\u003E\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003EYour \\u003Cstrong\\u003ETournament\\u003C\\/strong\\u003E is ready and can be viewed at [node:url] .\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003EYour War Zone Management page is available at http:\\/\\/itoysoldiers.com\\/node\\/[node:nid]\\/management .\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003EThis War Zone, as well as any others, can also be accessed from your Dashboard at http:\\/\\/itoysoldiers.com\\/dashboard.\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003ETo help you have a successful war zone, please take a moment to review these tips before promoting your tournament to players:\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003EYour war zone starts in \\u003Cstrong\\u003ESetup\\u003C\\/strong\\u003E mode.  In this mode, other players cannot see or register for your event.  This gives you an opportunity to ensure that you are happy with all of the settings before making it live.  Once you\\u2019re happy with it, you can visit your Management page and click \\u201cOpen War Zone\\u201d.\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003EIf you have any questions, comments, requests or anything do not hesitate to reach out.  The super friendly iToysoldiers team (that\\u2019d be me) is always ready to help you out.  The best way to reach us is here:  http:\\/\\/itoysoldiers.uservoice.com\\/.\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003ECarpe Acies!\\u003Cbr\\u003E\\r\\nRob\\u003Cbr\\u003E\\r\\niToysoldiers.com\\u003C\\/p\\u003E",
                        "language" : [ "" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "article" },
                  "DO" : [
                    { "CONDITIONAL" : [
                        {
                          "IF" : { "NOT data_is_empty" : { "data" : [ "node:field-event-link" ] } },
                          "DO" : [
                            { "component_rules_warzone_message_on_new_article" : { "nid" : [ "node" ] } }
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
  $items['rules_war_zone_all_register_anonymous_player'] = entity_import('rules_config', '{ "rules_war_zone_all_register_anonymous_player" : {
      "LABEL" : "War Zone: All: Register Anonymous Player",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "form_id" : { "label" : "Form", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "form-id" ],
            "type" : "entityform",
            "bundle" : { "value" : { "war_zone_all_register_anonymous_" : "war_zone_all_register_anonymous_" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "node_registration" },
            "PROVIDE" : { "entity_created" : { "registration_created" : "Created Registration" } }
          }
        },
        { "data_set" : {
            "data" : [ "registration-created:email" ],
            "value" : [ "form-id:field-player-email-registration" ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_all_submit_form_master'] = entity_import('rules_config', '{ "rules_war_zone_all_submit_form_master" : {
      "LABEL" : "War Zone: All: Submit Form Master",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_conditional", "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "entityform:type:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "war_zone_all_generate_article" },
                  "DO" : [
                    { "component_rules_warzone_all_generate_article" : { "submission" : [ "entityform" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_campaign_add_points" },
                  "DO" : [
                    { "component_rules_war_zone_campaign_add_points" : { "points" : [ "entityform" ] } }
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
              { "CASE" : {
                  "USING" : { "value" : "warzone_campaign_report_battle_p" },
                  "DO" : [
                    { "component_rules_war_zone_campaign_report_battle" : { "efid" : [ "entityform" ] } }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "war_zone_all_register_anonymous_" }, "DO" : [] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_all_submit_news'] = entity_import('rules_config', '{ "rules_war_zone_all_submit_news" : {
      "LABEL" : "War Zone: All: Submit News",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "USES VARIABLES" : { "fid" : { "label" : "Form", "type" : "entityform" } },
      "DO" : []
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
  $items['rules_war_zone_campaign_generate_scorecards_on_battle'] = entity_import('rules_config', '{ "rules_war_zone_campaign_generate_scorecards_on_battle" : {
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
  $items['rules_war_zone_campaign_report_battle'] = entity_import('rules_config', '{ "rules_war_zone_campaign_report_battle" : {
      "LABEL" : "War Zone: Campaign: Report Battle",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional", "flag" ],
      "USES VARIABLES" : { "efid" : { "label" : "EntityForm", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "efid" ],
            "type" : "entityform",
            "bundle" : { "value" : { "warzone_campaign_report_battle_p" : "warzone_campaign_report_battle_p" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "efid:field-event-link" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "efid:field-opponent-report-battle" ],
            "type" : "node_registration",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node_registration", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "p1_registration" : "Player 1 Registration" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_2",
            "USING" : {
              "nid" : [ "efid:field-event-link:nid" ],
              "uid" : [ "efid:field-player-sc:uid" ]
            },
            "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "data_set" : { "data" : [ "p1-registration" ], "value" : [ "entity-fetched" ] } }
            ]
          }
        },
        { "component_rules_war_zone_campaign_generate_scorecards_on_battle" : {
            "p1id" : [ "p1-registration" ],
            "p2id" : [ "efid:field-opponent-report-battle" ],
            "p1results" : [ "efid:field-your-results" ],
            "phase" : [ "efid:field-phase-sc" ]
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "6" },
            "PROVIDE" : { "variable_added" : { "opponent_score" : "Opponent Score" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "opponent-score" ],
              "op" : "-",
              "input_2" : [ "efid:field-your-results" ]
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "component_rules_war_zone_campaign_generate_scorecards_on_battle" : {
            "p1id" : [ "efid:field-opponent-report-battle" ],
            "p2id" : [ "p1-registration" ],
            "p1results" : [ "result" ],
            "phase" : [ "efid:field-phase-sc" ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "p1-registration" ],
                  "type" : "unknown",
                  "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
                }
              },
              "DO" : [
                { "variable_add" : {
                    "USING" : {
                      "type" : "taxonomy_term",
                      "value" : [ "p1-registration:field-register-army" ]
                    },
                    "PROVIDE" : { "variable_added" : { "p1_submitted_army" : "Player 1 Army" } }
                  }
                },
                { "variable_add" : {
                    "USING" : {
                      "type" : "taxonomy_term",
                      "value" : [ "efid:field-opponent-report-battle:field-register-army" ]
                    },
                    "PROVIDE" : { "variable_added" : { "p2_submitted_army" : "Player 2 Army" } }
                  }
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT data_is_empty" : { "data" : [ "efid:field-p1-army-wz" ] } },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "p1-submitted-army" ],
                            "value" : [ "efid:field-p1-army-wz" ]
                          }
                        }
                      ]
                    }
                  ]
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT data_is_empty" : { "data" : [ "efid:field-p2-army-wz" ] } },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "p2-submitted-army" ],
                            "value" : [ "efid:field-p2-army-wz" ]
                          }
                        }
                      ]
                    }
                  ]
                },
                { "component_rules_war_zone_all_generate_battle_report" : {
                    "USING" : {
                      "wzid" : [ "efid:field-event-link" ],
                      "p1id" : [ "efid:field-player-sc" ],
                      "p1tid" : [ "p1-submitted-army" ],
                      "p2tid" : [ "p2-submitted-army" ],
                      "p1results" : [ "efid:field-your-results" ],
                      "title" : "[p1-registration:node:title]: [p1-submitted-army:name] vs [p2-submitted-army:name]"
                    },
                    "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                  }
                },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_is_of_bundle" : {
                          "entity" : [ "brid" ],
                          "type" : "node",
                          "bundle" : { "value" : { "game_results" : "game_results" } }
                        }
                      },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "brid:field-image" ],
                            "value" : [ "efid:field-event-link:field-campaign-badge" ]
                          }
                        },
                        { "data_set" : { "data" : [ "brid:field-mission" ], "value" : [ "efid:field-mission" ] } },
                        { "data_set" : {
                            "data" : [ "brid:field-points-per-army" ],
                            "value" : [ "efid:field-points-per-army" ]
                          }
                        },
                        { "entity_save" : { "data" : [ "brid" ], "immediate" : "1" } },
                        { "flag_flagnode" : {
                            "flag" : "acknowledge_battle",
                            "node" : [ "brid" ],
                            "flagging_user" : [ "efid:field-opponent-report-battle:user" ],
                            "permission_check" : "1"
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_war_zone_tournament_generate_battle_reports'] = entity_import('rules_config', '{ "rules_war_zone_tournament_generate_battle_reports" : {
      "LABEL" : "War Zone: Tournament: Generate Battle Reports",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional", "flag" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_tournament" : "war_zone_tournament" } }
          }
        }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_tournament_score_cards",
            "DISPLAY" : "views_rules_1",
            "USING" : {
              "field_event_link_target_id" : [ "wzid:nid" ],
              "field_round_sc_value" : [ "wzid:field-warzone-round" ]
            },
            "ROW VARIABLES" : {
              "puid1" : { "puid1" : "(Node registration entity referenced from field_opponent_reg_sc) Player 1" },
              "tid_1" : { "tid_1" : "(P1 Army) P1 Army" },
              "puid2" : { "puid2" : "(Node registration entity referenced from field_opponent_reg_sc) Player 2" },
              "tid" : { "tid" : "(P2 Army) P2 Army" },
              "field_your_results" : { "field_your_results" : "P1 Results" },
              "p1_real_name" : { "p1_real_name" : "P1 Name" },
              "p2_real_name" : { "p2_real_name" : "P2 Name" }
            },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "puid1" ] },
                  "PROVIDE" : { "entity_fetched" : { "p1_uid" : "Player 1" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "tid-1" ] },
                  "PROVIDE" : { "entity_fetched" : { "p1_tid" : "P1 Army" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "puid2" ] },
                  "PROVIDE" : { "entity_fetched" : { "p2_uid" : "Player 2 UID" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "taxonomy_term", "id" : [ "tid" ] },
                  "PROVIDE" : { "entity_fetched" : { "p2_tid" : "P2 Army" } }
                }
              },
              { "variable_add" : {
                  "USING" : {
                    "type" : "text",
                    "value" : "[wzid:title]: [p1-real-name:value] vs [p2-real-name:value]"
                  },
                  "PROVIDE" : { "variable_added" : { "br_title" : "BR Title" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "puid1" ], "value" : "0" } },
                    "DO" : [
                      { "variable_add" : {
                          "USING" : { "type" : "integer", "value" : "6" },
                          "PROVIDE" : { "variable_added" : { "p2_determine" : "Determine P2" } }
                        }
                      },
                      { "data_calc" : {
                          "USING" : {
                            "input_1" : [ "p2-determine" ],
                            "op" : "-",
                            "input_2" : [ "field-your-results" ]
                          },
                          "PROVIDE" : { "result" : { "p2_results" : "P2 Results" } }
                        }
                      },
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "data_is" : { "data" : [ "puid2" ], "value" : "0" } },
                            "DO" : [
                              { "component_rules_war_zone_all_generate_battle_report" : {
                                  "USING" : {
                                    "wzid" : [ "wzid" ],
                                    "p1id" : "20792",
                                    "p1tid" : [ "p1-tid" ],
                                    "p2tid" : [ "p2-tid" ],
                                    "p1results" : [ "field-your-results" ],
                                    "title" : [ "br-title" ]
                                  },
                                  "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "component_rules_war_zone_all_generate_battle_report" : {
                                  "USING" : {
                                    "wzid" : [ "wzid" ],
                                    "p1id" : [ "p2-uid" ],
                                    "p1tid" : [ "p2-tid" ],
                                    "p2tid" : [ "p1-tid" ],
                                    "p1results" : [ "p2-results" ],
                                    "title" : [ "br-title" ]
                                  },
                                  "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  },
                  { "ELSE" : [
                      { "component_rules_war_zone_all_generate_battle_report" : {
                          "USING" : {
                            "wzid" : [ "wzid" ],
                            "p1id" : [ "p1-uid" ],
                            "p1tid" : [ "p1-tid" ],
                            "p2tid" : [ "p2-tid" ],
                            "p1results" : [ "field-your-results" ],
                            "title" : [ "br-title" ]
                          },
                          "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                        }
                      },
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT data_is" : { "data" : [ "puid2" ], "value" : "0" } },
                            "DO" : [
                              { "flag_flagnode" : {
                                  "flag" : "acknowledge_battle",
                                  "node" : [ "brid" ],
                                  "flagging_user" : [ "p2-uid" ],
                                  "permission_check" : "1"
                                }
                              }
                            ]
                          }
                        ]
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
  }');
  $items['rules_war_zone_tournament_generate_bye_scorecard'] = entity_import('rules_config', '{ "rules_war_zone_tournament_generate_bye_scorecard" : {
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
  $items['rules_war_zone_tournament_generate_turn_scorecard'] = entity_import('rules_config', '{ "rules_war_zone_tournament_generate_turn_scorecard" : {
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
  $items['rules_war_zone_tournament_increment_round'] = entity_import('rules_config', '{ "rules_war_zone_tournament_increment_round" : {
      "LABEL" : "War Zone: Tournament: Increment Round",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "views_rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "IF" : [
        { "data_is" : { "data" : [ "wzid:type" ], "value" : "war_zone_tournament" } },
        { "data_is" : { "data" : [ "wzid:field-status" ], "value" : "5" } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "wzid:field-warzone-round" ],
              "op" : "+",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "new_round" : "New Round" } }
          }
        },
        { "data_set" : { "data" : [ "wzid:field-warzone-round" ], "value" : [ "new-round" ] } },
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode_registration\\u003E" },
            "PROVIDE" : { "variable_added" : { "p1_list" : "Player 1 List" } }
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "wzid:field-tournament-type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "0" },
                  "DO" : [
                    { "VIEW LOOP" : {
                        "VIEW" : "war_zone_tourney_registrations",
                        "DISPLAY" : "views_rules_1",
                        "USING" : { "nid" : [ "wzid:nid" ] },
                        "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
                        "DO" : [
                          { "entity_fetch" : {
                              "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                              "PROVIDE" : { "entity_fetched" : { "registration_fetched" : "Fetched Registration" } }
                            }
                          },
                          { "list_add" : {
                              "list" : [ "p1-list" ],
                              "item" : [ "registration-fetched" ],
                              "unique" : 1
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
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode_registration\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "p2_list" : "Player 2 List" } }
          }
        },
        { "data_set" : { "data" : [ "p2-list" ], "value" : [ "p1-list" ] } },
        { "LOOP" : {
            "USING" : { "list" : [ "p1-list" ] },
            "ITEM" : { "p1_reg" : "Player 1 Reg" },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "list\\u003Cnode_registration\\u003E" },
                  "PROVIDE" : { "variable_added" : { "potential_opponents" : "Potential Opponents" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "list_contains" : { "list" : [ "p2-list" ], "item" : [ "p1-reg" ] } },
                    "DO" : [
                      { "list_remove" : { "list" : [ "p2-list" ], "item" : [ "p1-reg" ] } },
                      { "variable_add" : {
                          "USING" : { "type" : "list\\u003Cnode_registration\\u003E", "value" : [ "" ] },
                          "PROVIDE" : { "variable_added" : { "chk_previous_opponents" : "Check Previous Opponents" } }
                        }
                      },
                      { "LOOP" : {
                          "USING" : { "list" : [ "p2-list" ] },
                          "ITEM" : { "list_item" : "Current list item" },
                          "DO" : [
                            { "list_add" : {
                                "list" : [ "chk-previous-opponents" ],
                                "item" : [ "list-item" ],
                                "unique" : 1
                              }
                            }
                          ]
                        }
                      },
                      { "VIEW LOOP" : {
                          "VIEW" : "war_zone_tourney_registrations",
                          "DISPLAY" : "views_rules_2",
                          "USING" : { "registration_id" : [ "p1-reg:registration-id" ] },
                          "ROW VARIABLES" : { "field_opponent_reg_sc" : { "field_opponent_reg_sc" : "Previous Opponent" } },
                          "DO" : [
                            { "entity_fetch" : {
                                "USING" : { "type" : "node_registration", "id" : [ "field-opponent-reg-sc" ] },
                                "PROVIDE" : { "entity_fetched" : { "opponent_reg" : "Opponent Reg" } }
                              }
                            },
                            { "CONDITIONAL" : [
                                {
                                  "IF" : { "list_contains" : { "list" : [ "chk-previous-opponents" ], "item" : [ "opponent-reg" ] } },
                                  "DO" : [
                                    { "list_remove" : { "list" : [ "chk-previous-opponents" ], "item" : [ "opponent-reg" ] } }
                                  ]
                                }
                              ]
                            }
                          ]
                        }
                      },
                      { "LOOP" : {
                          "USING" : { "list" : [ "chk-previous-opponents" ] },
                          "ITEM" : { "list_item" : "Current list item" },
                          "DO" : [
                            { "list_add" : {
                                "list" : [ "potential-opponents" ],
                                "item" : [ "list-item" ],
                                "unique" : 1
                              }
                            }
                          ]
                        }
                      },
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT data_is_empty" : { "data" : [ "potential-opponents" ] } },
                            "DO" : [
                              { "component_rules_war_zone_tournament_generate_turn_scorecard" : {
                                  "wzid" : [ "wzid" ],
                                  "pid" : [ "p1-reg" ],
                                  "master_view" : 1,
                                  "oid" : [ "potential-opponents:0" ],
                                  "round" : [ "new-round" ]
                                }
                              },
                              { "component_rules_war_zone_tournament_generate_turn_scorecard" : {
                                  "wzid" : [ "wzid" ],
                                  "pid" : [ "potential-opponents:0" ],
                                  "master_view" : 0,
                                  "oid" : [ "p1-reg" ],
                                  "round" : [ "new-round" ]
                                }
                              },
                              { "list_remove" : { "list" : [ "p2-list" ], "item" : [ "potential-opponents:0" ] } }
                            ]
                          },
                          { "ELSE" : [
                              { "component_rules_war_zone_tournament_generate_bye_scorecard" : { "wzid" : [ "wzid" ], "pid" : [ "p1-reg" ], "round" : [ "new-round" ] } }
                            ]
                          }
                        ]
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
  }');
  $items['rules_warzone_all_generate_article'] = entity_import('rules_config', '{ "rules_warzone_all_generate_article" : {
      "LABEL" : "Warzone: All: Generate Article",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "submission" : { "label" : "Submission", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "submission" ],
            "type" : "entityform",
            "bundle" : { "value" : { "war_zone_all_generate_article" : "war_zone_all_generate_article" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "article",
              "param_title" : [ "submission:field-title-chronicle" ],
              "param_author" : [ "submission:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:body" ],
            "value" : [ "submission:field-article-body" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-event-link" ],
            "value" : [ "submission:field-event-link" ]
          }
        }
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
            "bundle" : { "value" : { "article" : "article", "gallery" : "gallery" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "nid:field-event-link" ],
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
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "nid:field-event-link:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "warzone_link" : "Warzone Link" } }
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
              "value" : "\\u003Cp class=\\u0022lead\\u0022 style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 21px; font-size: 18px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\n[nid:author] has added an update for the War Zone, \\u003Ca href=\\u0022[warzone-link:url]\\u0022\\u003E[warzone-link:title]\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\nView the update at \\u003Ca href=\\u0022[nid:url]\\u0022\\u003E[nid:title]\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\nCarpe Acies,\\u003Cbr\\u003E\\r\\nThe iToysoldiers Equerry\\r\\n\\u003C\\/p\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "message_body" : "Message Body" } }
          }
        },
        { "component_rules_warzone_email_players" : {
            "wzid" : [ "nid:field-event-link" ],
            "message_title" : [ "message_title" ],
            "message_body" : [ "message_body" ]
          }
        }
      ]
    }
  }');
  return $items;
}
