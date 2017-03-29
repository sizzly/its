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
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional", "userpoints_rules" ],
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
                        { "drupal_message" : { "message" : "You have received the \\u003Cstrong\\u003E\\u003Ca href=\\u0022[aid:url]\\u0022\\u003E[aid:title]\\u003C\\/a\\u003E\\u003C\\/strong\\u003E Achievement." } }
                      ]
                    },
                    { "ELSE" : [
                        { "mail" : {
                            "to" : [ "uid:mail" ],
                            "subject" : "[iToysoldiers] Achievement Awarded",
                            "message" : "\\u003Ch3\\u003EAhoy, [uid:name]!\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou have received the \\u003Cstrong\\u003E\\u003Ca href=\\u0022[aid:url]\\u0022\\u003E[aid:title]\\u003C\\/a\\u003E\\u003C\\/strong\\u003E Achievement.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EGood show!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EiToysoldiers\\u003C\\/p\\u003E",
                            "language" : [ "" ]
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
                },
                { "component_rules_status_all_get_associated_nodes" : {
                    "USING" : { "srid" : [ "aid" ] },
                    "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created-message:field-associated-nodes-stream" ],
                    "value" : [ "assoc-nodes" ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_event_league_swiss_schedule_rounds'] = entity_import('rules_config', '{ "rules_event_league_swiss_schedule_rounds" : {
      "LABEL" : "Event: League: Swiss: Schedule Rounds",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.5-rc2" ],
      "REQUIRES" : [ "rules", "rules_conditional", "rules_scheduler" ],
      "USES VARIABLES" : { "nid" : { "label" : "Node", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "nid" ],
            "type" : "node",
            "bundle" : { "value" : { "event" : "event" } }
          }
        },
        { "data_is" : { "data" : [ "nid:field-warzone-scheduling" ], "value" : "0" } }
      ],
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "nid:field-event-league-rules" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "0" },
                  "DO" : [
                    { "variable_add" : {
                        "USING" : { "type" : "integer", "value" : "1" },
                        "PROVIDE" : { "variable_added" : { "round_counter" : "Round Counter" } }
                      }
                    },
                    { "variable_add" : {
                        "USING" : { "type" : "date", "value" : [ "nid:field-event-date-warzone:value" ] },
                        "PROVIDE" : { "variable_added" : { "next_round" : "Next Round" } }
                      }
                    },
                    { "variable_add" : {
                        "USING" : { "type" : "duration" },
                        "PROVIDE" : { "variable_added" : { "duration" : "Duration" } }
                      }
                    },
                    { "SWITCH" : {
                        "USING" : { "data" : [ "nid:field-round-duration" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "2" },
                              "DO" : [ { "data_set" : { "data" : [ "duration" ], "value" : 1209600 } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "1" },
                              "DO" : [ { "data_set" : { "data" : [ "duration" ], "value" : 604800 } } ]
                            }
                          },
                          { "CASE" : {
                              "USING" : { "value" : "3" },
                              "DO" : [ { "data_set" : { "data" : [ "duration" ], "value" : 2592000 } } ]
                            }
                          }
                        ]
                      }
                    },
                    {
                      "WHILE" : { "data_is" : {
                          "data" : [ "round-counter" ],
                          "op" : "\\u003C",
                          "value" : [ "nid:field-calculated-rounds" ]
                        }
                      },
                      "DO" : [
                        { "data_calc" : {
                            "USING" : { "input_1" : [ "next-round" ], "op" : "+", "input_2" : [ "duration" ] },
                            "PROVIDE" : { "result" : { "date_calc" : "Date Calc" } }
                          }
                        },
                        { "data_calc" : {
                            "USING" : { "input_1" : [ "round-counter" ], "op" : "+", "input_2" : "1" },
                            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                          }
                        },
                        { "data_set" : { "data" : [ "round-counter" ], "value" : [ "result" ] } },
                        { "data_set" : { "data" : [ "next-round" ], "value" : [ "date-calc" ] } },
                        { "schedule" : {
                            "component" : "rules_war_zone_league_swiss_increment",
                            "date" : [ "next-round" ],
                            "identifier" : "[nid:nid] - Increment League - [round-counter:value]",
                            "param_wzid" : [ "nid" ]
                          }
                        }
                      ]
                    },
                    { "data_calc" : {
                        "USING" : { "input_1" : [ "next-round" ], "op" : "+", "input_2" : [ "duration" ] },
                        "PROVIDE" : { "result" : { "end_date" : "End Date" } }
                      }
                    },
                    { "schedule" : {
                        "component" : "rules_link_set_wz_complete",
                        "date" : [ "end-date" ],
                        "identifier" : "[nid:nid] - Complete",
                        "param_node" : [ "nid" ]
                      }
                    },
                    { "data_set" : {
                        "data" : [ "nid:field-event-date-warzone:value2" ],
                        "value" : [ "end-date" ]
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
                "event" : "event",
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
                "event" : "event",
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
                "event" : "event",
                "narrative_campaign_instance" : "narrative_campaign_instance",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "1" } }
      ]
    }
  }');
  $items['rules_link_condition_war_zone_league_forfeit_match'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_league_forfeit_match" : {
      "LABEL" : "Rules link: War Zone: League: Forfeit Match condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "entityform" : { "label" : "entityform", "type" : "entityform" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "score_card" : "score_card" } }
          }
        },
        { "data_is" : { "data" : [ "entityform:field-state-sc" ], "value" : "5" } },
        { "data_is" : {
            "data" : [ "site:current-user" ],
            "value" : [ "entityform:field-registration-sc:user" ]
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_war_zone_league_i_won_button'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_league_i_won_button" : {
      "LABEL" : "Rules link: War Zone: League: I Won Button condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entityform" : { "label" : "entityform", "type" : "entityform" },
        "results" : { "label" : "Results", "type" : "integer" }
      },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "score_card" : "score_card" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform:field-event-link" ],
            "type" : "node",
            "bundle" : { "value" : { "event" : "event" } }
          }
        },
        { "data_is" : {
            "data" : [ "entityform:field-registration-sc:user" ],
            "value" : [ "site:current-user" ]
          }
        },
        { "data_is" : {
            "data" : [ "entityform:field-state-sc" ],
            "op" : "IN",
            "value" : { "value" : { "5" : "5", "10" : "10" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_war_zone_league_next_round'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_league_next_round" : {
      "LABEL" : "Rules link: War Zone: League: Next Round condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "event" : "event" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-warzone-scheduling" ], "value" : "1" } },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "5" } }
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
                "event" : "event",
                "war_zone_league" : "war_zone_league",
                "narrative_campaign_instance" : "narrative_campaign_instance",
                "special_event" : "special_event",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "5" } },
        { "NOT data_is" : { "data" : [ "node:field-warzone-scheduling" ], "value" : "0" } }
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
                "event" : "event",
                "narrative_campaign_instance" : "narrative_campaign_instance",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "3" } },
        { "data_is" : { "data" : [ "node:field-warzone-scheduling" ], "value" : "1" } }
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
      "REQUIRES" : [ "rules", "rules_conditional", "rules_scheduler" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "entity_created" : { "message" : "Message" },
              "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : {
                      "event" : "event",
                      "narrative_campaign_instance" : "narrative_campaign_instance",
                      "war_zone_tournament" : "war_zone_tournament"
                    }
                  }
                }
              },
              { "data_is" : { "data" : [ "node:field-status" ], "value" : "1" } }
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
              { "component_rules_status_all_get_associated_nodes" : {
                  "USING" : { "srid" : [ "node" ] },
                  "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                }
              },
              { "data_set" : {
                  "data" : [ "message:field-associated-nodes-stream" ],
                  "value" : [ "assoc-nodes" ]
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
                    },
                    { "CASE" : {
                        "USING" : { "value" : "event" },
                        "DO" : [
                          { "data_set" : { "data" : [ "node:field-open-registration" ], "value" : "now" } },
                          { "CONDITIONAL" : [
                              {
                                "IF" : { "data_is" : { "data" : [ "node:field-warzone-scheduling" ], "value" : "0" } },
                                "DO" : [
                                  { "schedule" : {
                                      "component" : "rules_link_set_wz_start",
                                      "date" : [ "node:field-event-date-warzone:value" ],
                                      "identifier" : "[node:nid]-Start",
                                      "param_node" : [ "node" ]
                                    }
                                  },
                                  { "CONDITIONAL" : [
                                      {
                                        "IF" : { "data_is" : { "data" : [ "node:field-enable-its-league-mangemen" ], "value" : "0" } },
                                        "DO" : [
                                          { "schedule" : {
                                              "component" : "rules_link_set_wz_complete",
                                              "date" : [ "node:field-event-date-warzone:value2" ],
                                              "identifier" : "[node:nid]-Complete",
                                              "param_node" : [ "node" ]
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
              }
            ],
            "LABEL" : "War Zone: All: Open War Zone"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_war_zone_league_forfeit_match'] = entity_import('rules_config', '{ "rules_link_set_war_zone_league_forfeit_match" : {
      "LABEL" : "Rules link: War Zone: League: Forfeit Match rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "entityform" : { "label" : "entityform", "type" : "entityform" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "entityform" ],
                  "type" : "entityform",
                  "bundle" : { "value" : { "score_card" : "score_card" } }
                }
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "entityform:field-opponent-scorecard" ],
                  "type" : "entityform",
                  "bundle" : { "value" : { "score_card" : "score_card" } }
                }
              }
            ],
            "DO" : [
              { "mail" : {
                  "to" : [ "entityform:field-opponent-reg-sc:email" ],
                  "subject" : "[iToysoldiers] Opponent Forfeit",
                  "message" : "\\u003Cp\\u003EAhoy, commander!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThis is to inform you that your [entityform:field-registration-sc:node:title] opponent has forfeited their match against you.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYou will receive credit for a victory for this battle.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ENo action is required on your part.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E",
                  "language" : [ "" ]
                }
              },
              { "data_set" : { "data" : [ "entityform:field-your-results" ], "value" : "1" } },
              { "data_set" : { "data" : [ "entityform:field-state-sc" ], "value" : "30" } },
              { "data_set" : {
                  "data" : [ "entityform:field-opponent-scorecard:field-your-results" ],
                  "value" : "5"
                }
              },
              { "data_set" : {
                  "data" : [ "entityform:field-opponent-scorecard:field-state-sc" ],
                  "value" : "35"
                }
              }
            ],
            "LABEL" : "War Zone: League: Perform Forfeit"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_war_zone_league_i_won_button'] = entity_import('rules_config', '{ "rules_link_set_war_zone_league_i_won_button" : {
      "LABEL" : "Rules link: War Zone: League: I Won Button rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "USES VARIABLES" : {
        "entityform" : { "label" : "entityform", "type" : "entityform" },
        "results" : { "label" : "Results", "type" : "integer" }
      },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "entityform" ],
                  "type" : "entityform",
                  "bundle" : { "value" : { "score_card" : "score_card" } }
                }
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "entityform:field-registration-sc" ],
                  "type" : "node_registration",
                  "bundle" : { "value" : { "event" : "event" } }
                }
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "entityform:field-opponent-reg-sc" ],
                  "type" : "node_registration",
                  "bundle" : { "value" : { "event" : "event" } }
                }
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "entityform:field-opponent-scorecard" ],
                  "type" : "entityform",
                  "bundle" : { "value" : { "score_card" : "score_card" } }
                }
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "entityform:field-registration-sc:node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "event" : "event" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "entityform:field-state-sc" ], "value" : "20" } },
              { "data_set" : { "data" : [ "entityform:field-your-results" ], "value" : [ "results" ] } },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : {
                        "data" : [
                          "entityform:field-registration-sc:node:field-league-report-requirement"
                        ],
                        "value" : "1"
                      }
                    },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "data_is" : { "data" : [ "entityform:field-display-sc" ], "value" : "1" } },
                            "DO" : [
                              { "component_rules_war_zone_all_generate_battle_report" : {
                                  "USING" : {
                                    "wzid" : [ "entityform:field-event-link" ],
                                    "p1id" : [ "entityform:field-registration-sc:user" ],
                                    "p1tid" : [ "entityform:field-registration-sc:field-register-army" ],
                                    "p2tid" : [ "entityform:field-opponent-reg-sc:field-register-army" ],
                                    "p1results" : "5",
                                    "title" : "[entityform:field-event-link:title]:[entityform:field-registration-sc:field-register-army] vs [entityform:field-opponent-reg-sc:field-register-army]"
                                  },
                                  "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                                }
                              },
                              { "data_set" : { "data" : [ "entityform:field-game-reference" ], "value" : [ "brid" ] } },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "data_is" : {
                                        "data" : [ "entityform:field-opponent-scorecard:field-state-sc" ],
                                        "value" : "20"
                                      }
                                    },
                                    "DO" : [
                                      { "flag_flagnode" : {
                                          "flag" : "acknowledge_battle",
                                          "node" : [ "brid" ],
                                          "flagging_user" : [ "entityform:field-opponent-reg-sc:user" ],
                                          "permission_check" : "1"
                                        }
                                      }
                                    ]
                                  }
                                ]
                              },
                              { "mail" : {
                                  "to" : [ "entityform:field-opponent-reg-sc:user:mail" ],
                                  "subject" : "[iToysoldiers] Report Your League Results",
                                  "message" : "\\u003Ch1\\u003EAhoy, Commander!\\u003C\\/h1\\u003E\\r\\n\\u003Cp\\u003EYour opponent has reported their league results.  You are required to do the same.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease visit the \\u003Ca href=\\u0022http:\\/\\/itoysoldiers.com\\/node\\/[entityform:field-event-link:nid]\\/operations\\u0022\\u003EOperations Page\\u003C\\/a\\u003E for the league and report your results.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EiToysoldiers\\u003C\\/p\\u003E",
                                  "language" : [ "" ]
                                }
                              }
                            ]
                          },
                          { "ELSE" : [
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "data_is" : {
                                        "data" : [ "entityform:field-opponent-scorecard:field-state-sc" ],
                                        "value" : "20"
                                      }
                                    },
                                    "DO" : [
                                      { "flag_flagnode" : {
                                          "flag" : "acknowledge_battle",
                                          "node" : [ "entityform:field-opponent-scorecard:field-game-reference" ],
                                          "flagging_user" : [ "entityform:field-registration-sc:user" ],
                                          "permission_check" : "1"
                                        }
                                      }
                                    ]
                                  },
                                  { "ELSE" : [
                                      { "drupal_message" : { "message" : "\\u003Cdiv class=\\u0022lead\\u0022\\u003EYour League Match Results Have Been Recorded\\u003C\\/div\\u003E\\r\\nOnce your opponent has recorded their battle the report will be generated." } },
                                      { "mail" : {
                                          "to" : [ "entityform:field-opponent-scorecard:field-registration-sc:user:mail" ],
                                          "subject" : "[iToysoldiers] League Opponent has reported their results.",
                                          "message" : "\\u003Ch1\\u003EAhoy, Commander!\\u003C\\/h1\\u003E\\r\\n\\u003Cp\\u003EYour opponent has reported their league results.  You are required to do the same.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease visit the \\u003Ca href=\\u0022http:\\/\\/itoysoldiers.com\\/node\\/[entityform:field-event-link:nid]\\/operations\\u0022\\u003EOperations Page\\u003C\\/a\\u003E for the league and report your results.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EiToysoldiers\\u003C\\/p\\u003E",
                                          "language" : [ "" ]
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
                  },
                  { "ELSE" : [
                      { "variable_add" : {
                          "USING" : { "type" : "integer", "value" : "6" },
                          "PROVIDE" : { "variable_added" : { "static_result" : "Static Result" } }
                        }
                      },
                      { "data_calc" : {
                          "USING" : { "input_1" : [ "static-result" ], "op" : "-", "input_2" : [ "results" ] },
                          "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                        }
                      },
                      { "data_set" : {
                          "data" : [ "entityform:field-opponent-scorecard:field-state-sc" ],
                          "value" : "20"
                        }
                      },
                      { "data_set" : {
                          "data" : [ "entityform:field-opponent-scorecard:field-your-results" ],
                          "value" : [ "result" ]
                        }
                      },
                      { "component_rules_war_zone_all_generate_battle_report" : {
                          "USING" : {
                            "wzid" : [ "entityform:field-registration-sc:node" ],
                            "p1id" : [ "entityform:field-registration-sc:user" ],
                            "p1tid" : [ "entityform:field-registration-sc:field-register-army" ],
                            "p2tid" : [ "entityform:field-opponent-reg-sc:field-register-army" ],
                            "p1results" : [ "results" ],
                            "title" : "League Battle: [entityform:field-opponent-reg-sc:field-register-army] vs. [entityform:field-registration-sc:field-register-army]"
                          },
                          "PROVIDE" : { "brid" : { "brid" : "Battle Report" } }
                        }
                      },
                      { "entity_save" : { "data" : [ "brid" ], "immediate" : "1" } },
                      { "flag_flagnode" : {
                          "flag" : "acknowledge_battle",
                          "node" : [ "brid" ],
                          "flagging_user" : [ "entityform:field-opponent-reg-sc:user" ],
                          "permission_check" : "1"
                        }
                      },
                      { "drupal_message" : { "message" : "\\u003Ch3\\u003EYour Battle Has Been Recorded\\u003C\\/h3\\u003E\\r\\n\\u003Cp\\u003EPlease take a moment to update all of the meta on your new battle, \\u003Ca href=\\u0022[brid:url]\\u0022\\u003E[brid:title]\\u003C\\/a\\u003E." } }
                    ]
                  }
                ]
              }
            ],
            "LABEL" : "War Zone: League: I Won Process"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_war_zone_league_next_round'] = entity_import('rules_config', '{ "rules_link_set_war_zone_league_next_round" : {
      "LABEL" : "Rules link: War Zone: League: Next Round rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "event" : "event" } }
                }
              }
            ],
            "DO" : [
              { "SWITCH" : {
                  "USING" : { "data" : [ "node:field-event-league-rules" ] },
                  "DO" : [
                    { "CASE" : {
                        "USING" : { "value" : "0" },
                        "DO" : [
                          { "component_rules_war_zone_league_swiss_increment" : { "wzid" : [ "node" ] } }
                        ]
                      }
                    }
                  ]
                }
              }
            ],
            "LABEL" : "War Zone: League: Next Round"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_war_zone_tournament_next_round'] = entity_import('rules_config', '{ "rules_link_set_war_zone_tournament_next_round" : {
      "LABEL" : "Rules link: War Zone: Tournament: Next Round rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "variable_added" : { "incomplete_scorecards" : "Incomplete Scorecards" } },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "incomplete_scorecards" : "Incomplete Scorecards" } }
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_all_scorecard_rules",
                  "DISPLAY" : "views_rules_4",
                  "USING" : { "nid" : [ "node:nid" ] },
                  "ROW VARIABLES" : {
                    "registration_id" : { "registration_id" : "(Node registration entity referenced from field_registration_sc) Reg ID" },
                    "entityform_id" : { "entityform_id" : "Entityform submission ID" }
                  },
                  "DO" : [
                    { "data_calc" : {
                        "USING" : { "input_1" : [ "incomplete-scorecards" ], "op" : "+", "input_2" : "1" },
                        "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                      }
                    },
                    { "data_set" : { "data" : [ "incomplete-scorecards" ], "value" : [ "result" ] } }
                  ]
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "incomplete-scorecards" ], "op" : "\\u003E", "value" : "0" } },
                    "DO" : [
                      { "drupal_message" : {
                          "message" : "Warning: There are still incomplete battle scorecards for this round.  Please complete all score cards before processing the next round.",
                          "type" : "error"
                        }
                      }
                    ]
                  },
                  { "ELSE" : [
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
                    ]
                  }
                ]
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
            "PROVIDE" : {
              "entity_created" : { "message" : "Message" },
              "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : {
                      "event" : "event",
                      "narrative_campaign_instance" : "narrative_campaign_instance",
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
              { "component_rules_status_all_get_associated_nodes" : {
                  "USING" : { "srid" : [ "node" ] },
                  "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                }
              },
              { "data_set" : {
                  "data" : [ "message:field-associated-nodes-stream" ],
                  "value" : [ "assoc-nodes" ]
                }
              },
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
                          { "SWITCH" : {
                              "USING" : { "data" : [ "node:field-tournament-format" ] },
                              "DO" : [
                                { "CASE" : {
                                    "USING" : { "value" : "1030" },
                                    "DO" : [
                                      { "component_rules_war_zone_all_generate_strength_of_schedule" : { "wzid" : [ "node" ] } }
                                    ]
                                  }
                                },
                                { "CASE" : {
                                    "USING" : { "value" : "1916" },
                                    "DO" : [
                                      { "component_rules_war_zone_steamroller_generate_strength_of_schedule" : { "wzid" : [ "node" ] } }
                                    ]
                                  }
                                }
                              ]
                            }
                          }
                        ]
                      }
                    },
                    { "CASE" : {
                        "USING" : { "value" : "event" },
                        "DO" : [
                          { "CONDITIONAL" : [
                              {
                                "IF" : { "data_is" : { "data" : [ "node:field-enable-its-league-mangemen" ], "value" : "1" } },
                                "DO" : [
                                  { "component_rules_war_zone_league_process_incomplete_scorecards" : { "wzid" : [ "node" ] } },
                                  { "component_rules_war_zone_all_generate_strength_of_schedule" : { "wzid" : [ "node" ] } },
                                  { "component_rules_war_zone_league_award_auto_achievements" : { "wzid" : [ "node" ] } }
                                ]
                              }
                            ]
                          }
                        ]
                      }
                    }
                  ]
                }
              },
              { "component_rules_warzone_email_players" : {
                  "wzid" : [ "node" ],
                  "message_title" : "[iToysoldiers] [node:title] has ended",
                  "message_body" : "\\u003Cp\\u003E[node:title] has ended and it\\u0027s time to honor the victor!\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EVisit the \\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title] page\\u003C\\/a\\u003E to view the outcome of the War Zone.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E"
                }
              },
              { "mail" : {
                  "to" : [ "node:author:mail" ],
                  "subject" : "[iToysoldiers] Your [node:content-type], [node:title] is complete.",
                  "message" : "\\u003Cp\\u003EAhoy, [node:author:name]!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour [node:content-type], [node:title] is complete.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EAll scoring has been finalized and the results and stats are posted on \\u003Ca href=\\u0022[node:url]\\u0022\\u003Emain War Zone Page\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EIf you have any additional updates or achievements to award you may do so on the \\u003Ca href=\\u0022http:\\/\\/itoysoldiers.com\\/node\\/[node:nid]\\/management\\u0022\\u003Emanagement\\u003C\\/a\\u003E page.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank you for trusting your event with iToysoldiers!\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "War Zone: All: Complete"
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
            "PROVIDE" : {
              "entity_created" : { "entity_created" : "Created entity" },
              "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : {
                      "event" : "event",
                      "narrative_campaign_instance" : "narrative_campaign_instance",
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
              { "component_rules_status_all_get_associated_nodes" : {
                  "USING" : { "srid" : [ "node" ] },
                  "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-associated-nodes-stream" ],
                  "value" : [ "assoc-nodes" ]
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
                          { "SWITCH" : {
                              "USING" : { "data" : [ "node:field-tournament-format" ] },
                              "DO" : [
                                { "CASE" : {
                                    "USING" : { "value" : "1916" },
                                    "DO" : [
                                      { "CONDITIONAL" : [
                                          {
                                            "IF" : { "data_is" : { "data" : [ "node:field-scenario-selection-pp" ], "value" : "0" } },
                                            "DO" : [
                                              { "component_rules_war_zone_steamroller_generate_random_missions" : { "wzid" : [ "node" ] } }
                                            ]
                                          }
                                        ]
                                      }
                                    ]
                                  }
                                }
                              ]
                            }
                          },
                          { "component_rules_war_zone_tournament_increment_round" : { "wzid" : [ "node" ] } }
                        ]
                      }
                    },
                    { "CASE" : {
                        "USING" : { "value" : "event" },
                        "DO" : [
                          { "component_rules_war_zone_all_set_to_attended" : { "wzid" : [ "node" ] } },
                          { "CONDITIONAL" : [
                              {
                                "IF" : { "data_is" : { "data" : [ "node:field-enable-its-league-mangemen" ], "value" : "1" } },
                                "DO" : [
                                  { "data_set" : { "data" : [ "node:field-registration-deadline" ], "value" : "now" } },
                                  { "component_rules_war_zone_league_start_league_messaging" : { "wzid" : [ "node" ] } },
                                  { "SWITCH" : {
                                      "USING" : { "data" : [ "node:field-event-league-rules" ] },
                                      "DO" : [
                                        { "CASE" : {
                                            "USING" : { "value" : "0" },
                                            "DO" : [
                                              { "component_rules_war_zone_league_calculate_number_of_rounds" : { "wzid" : [ "node" ] } },
                                              { "component_rules_event_league_swiss_schedule_rounds" : { "nid" : [ "node" ] } },
                                              { "component_rules_war_zone_league_swiss_increment" : { "wzid" : [ "node" ] } }
                                            ]
                                          }
                                        }
                                      ]
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
            ],
            "LABEL" : "War Zone: All: Start War Zone"
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
  $items['rules_war_zone_all_create_final_score_cards'] = entity_import('rules_config', '{ "rules_war_zone_all_create_final_score_cards" : {
      "LABEL" : "War Zone: All: Create Final Score Cards",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3", "War Zone" ],
      "REQUIRES" : [ "views_rules", "rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_all_scorecard_rules",
            "DISPLAY" : "views_rules_1",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "registration_id" : { "registration_id" : "(Node registration entity referenced from field_registration_sc) Reg ID" },
              "field_your_results" : { "field_your_results" : "Battle Score" },
              "field_victory_points_sc" : { "field_victory_points_sc" : "Victory Points" },
              "field_army_points_sc" : { "field_army_points_sc" : "Army Points" },
              "field_sportsmanship_sc" : { "field_sportsmanship_sc" : "Sportsmanship" },
              "field_painting_sc" : { "field_painting_sc" : "Painting" },
              "field_comp_sc" : { "field_comp_sc" : "Comp" },
              "field_additional_points_sc" : { "field_additional_points_sc" : "Additional Points" },
              "field_strength_of_schedule_sc" : { "field_strength_of_schedule_sc" : "Strength of schedule" },
              "field_battle_points_sc" : { "field_battle_points_sc" : "Battle Points" },
              "field_defeat" : { "field_defeat" : "Defeat" },
              "field_draw" : { "field_draw" : "Draw" },
              "field_victory" : { "field_victory" : "Victory" }
            },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "registration_fetched" : "Fetched Registration" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                  "PROVIDE" : { "variable_added" : { "sc_endpoints" : "Scorecard Endpoints" } }
                }
              },
              { "list_add" : {
                  "list" : [ "sc-endpoints" ],
                  "item" : [ "wzid" ],
                  "unique" : "1",
                  "pos" : "start"
                }
              },
              { "list_add" : {
                  "list" : [ "sc-endpoints" ],
                  "item" : [ "registration-fetched" ],
                  "unique" : "1"
                }
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "relation",
                    "param_relation_type" : "warzone_score",
                    "param_endpoints" : [ "sc-endpoints" ]
                  },
                  "PROVIDE" : { "entity_created" : { "final_scorecard" : "Created Scorecard" } }
                }
              },
              { "data_set" : {
                  "data" : [ "final-scorecard:field-victory-wzscore" ],
                  "value" : [ "field-victory" ]
                }
              },
              { "data_set" : {
                  "data" : [ "final-scorecard:field-victory-wzscore" ],
                  "value" : [ "field-victory" ]
                }
              },
              { "entity_save" : { "data" : [ "final-scorecard" ], "immediate" : "1" } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_all_edit_entityform'] = entity_import('rules_config', '{ "rules_war_zone_all_edit_entityform" : {
      "LABEL" : "War Zone: All: Edit Entityform",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "entityform" ],
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
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "site:current-user" ], "value" : [ "entityform:user" ] } },
              "DO" : [
                { "redirect" : { "url" : "\\/node\\/[entityform:field-event-link:nid]\\/management" } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_war_zone_all_generate_additional_scorecard'] = entity_import('rules_config', '{ "rules_war_zone_all_generate_additional_scorecard" : {
      "LABEL" : "War Zone: All: Generate Additional Scorecard",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "efid" : { "label" : "Form", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "efid" ],
            "type" : "entityform",
            "bundle" : { "value" : { "war_zone_all_generate_scorecard" : "war_zone_all_generate_scorecard" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "score_card",
              "param_created" : "now",
              "param_user" : [ "efid:field-event-link:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "efid:field-score-card-type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "0" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "entity-created:field-battle-points-sc" ],
                        "value" : [ "efid:field-points-to-award" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "5" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "entity-created:field-painting-sc" ],
                        "value" : [ "efid:field-points-to-award" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "10" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "entity-created:field-comp-sc" ],
                        "value" : [ "efid:field-points-to-award" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "15" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "entity-created:field-additional-points-sc" ],
                        "value" : [ "efid:field-points-to-award" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "20" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "entity-created:field-additional-points-sc" ],
                        "value" : [ "efid:field-points-to-award" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "25" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "entity-created:field-strength-of-schedule-sc" ],
                        "value" : [ "efid:field-points-to-award" ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-registration-sc" ],
            "value" : [ "efid:field-registration-sc" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-event-link" ],
            "value" : [ "efid:field-event-link" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-score-card-type" ],
            "value" : [ "efid:field-score-card-type" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-explanation-sc" ],
            "value" : [ "efid:field-explanation-sc" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ] } },
        { "data_set" : { "data" : [ "entity-created:field-state-sc" ], "value" : "40" } }
      ]
    }
  }');
  $items['rules_war_zone_all_generate_battle_report'] = entity_import('rules_config', '{ "rules_war_zone_all_generate_battle_report" : {
      "LABEL" : "War Zone: All: Generate Battle Report",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
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
                "event" : "event",
                "narrative_campaign_instance" : "narrative_campaign_instance",
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
        { "data_set" : {
            "data" : [ "entity-created:field-image" ],
            "value" : [ "wzid:field-campaign-badge" ]
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "wzid:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "war_zone_tournament" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "entity-created:field-points-per-army" ],
                        "value" : [ "wzid:field-points-per-army" ]
                      }
                    },
                    { "SWITCH" : {
                        "USING" : { "data" : [ "wzid:field-tournament-format" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "1916" },
                              "DO" : [
                                { "variable_add" : {
                                    "USING" : { "type" : "integer", "value" : "1" },
                                    "PROVIDE" : { "variable_added" : { "counter" : "counter" } }
                                  }
                                },
                                { "LOOP" : {
                                    "USING" : { "list" : [ "wzid:field-steamroller-scenarios" ] },
                                    "ITEM" : { "list_item" : "Current list item" },
                                    "DO" : [
                                      { "CONDITIONAL" : [
                                          {
                                            "IF" : { "data_is" : { "data" : [ "counter" ], "value" : [ "wzid:field-warzone-round" ] } },
                                            "DO" : [
                                              { "data_set" : { "data" : [ "entity-created:field-mission" ], "value" : [ "list-item" ] } }
                                            ]
                                          }
                                        ]
                                      },
                                      { "data_calc" : {
                                          "USING" : { "input_1" : [ "counter" ], "op" : "+", "input_2" : "1" },
                                          "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                                        }
                                      },
                                      { "data_set" : { "data" : [ "counter" ], "value" : [ "result" ] } }
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
              }
            ]
          }
        },
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
              { "data_set" : { "data" : [ "sos-scorecard:field-state-sc" ], "value" : "20" } },
              { "entity_save" : { "data" : [ "sos-scorecard" ], "immediate" : "1" } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_all_generate_turn_scorecard'] = entity_import('rules_config', '{ "rules_war_zone_all_generate_turn_scorecard" : {
      "LABEL" : "War Zone: All: Generate Turn Scorecard",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "War Zone", "type" : "node" },
        "pid" : { "label" : "Player", "type" : "node_registration" },
        "master_view" : { "label" : "Master View", "type" : "boolean" },
        "oid" : { "label" : "Opponent", "type" : "node_registration" },
        "round" : { "label" : "Round", "type" : "integer" },
        "scid" : { "label" : "Scorecard", "type" : "entityform", "parameter" : false }
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
        { "data_set" : { "data" : [ "scorecard-created:field-state-sc" ], "value" : "5" } },
        { "entity_save" : { "data" : [ "scorecard-created" ], "immediate" : 1 } },
        { "data_set" : { "data" : [ "scid" ], "value" : [ "scorecard-created" ] } }
      ],
      "PROVIDES VARIABLES" : [ "scid" ]
    }
  }');
  $items['rules_war_zone_all_grant_achievement'] = entity_import('rules_config', '{ "rules_war_zone_all_grant_achievement" : {
      "LABEL" : "War Zone: All: Grant Achievement",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "War Zone" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
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
                "event" : "event",
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
              { "component_rules_award_achievement" : { "aid" : [ "new-achievement" ], "uid" : [ "list-item:user" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_all_player_has_registered_for_a_war_zone'] = entity_import('rules_config', '{ "rules_war_zone_all_player_has_registered_for_a_war_zone" : {
      "LABEL" : "War Zone: All: Player has registered for a War Zone",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3", "War Zone" ],
      "REQUIRES" : [
        "rules_conditional",
        "rules",
        "php",
        "userpoints_rules",
        "node_registration"
      ],
      "ON" : { "node_registration_insert" : [] },
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "node-registration:uid" ], "value" : "0" } },
              "DO" : [
                { "entity_fetch" : {
                    "USING" : { "type" : "node", "id" : [ "node-registration:nid" ] },
                    "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                  }
                },
                { "php_eval" : { "code" : "$capture = array(\\u0027email\\u0027 =\\u003E \\u0027[node-registration:email]\\u0027, \\u0027real_name\\u0027 =\\u003E \\u0027[node-registration:field-register-real-name]\\u0027, \\u0027war_zone\\u0027 =\\u003E \\u0027[entity-fetched:title]\\u0027);\\r\\npushMauticForm($capture, 12);\\r\\nfunction pushMauticForm($data, $formId, $ip = null)\\r\\n{\\r\\n    if (!$ip) {\\r\\n        $ipHolders = array(\\r\\n            \\u0027HTTP_CLIENT_IP\\u0027,\\r\\n            \\u0027HTTP_X_FORWARDED_FOR\\u0027,\\r\\n            \\u0027HTTP_X_FORWARDED\\u0027,\\r\\n            \\u0027HTTP_X_CLUSTER_CLIENT_IP\\u0027,\\r\\n            \\u0027HTTP_FORWARDED_FOR\\u0027,\\r\\n            \\u0027HTTP_FORWARDED\\u0027,\\r\\n            \\u0027REMOTE_ADDR\\u0027\\r\\n        );\\r\\n        foreach ($ipHolders as $key) {\\r\\n            if (!empty($_SERVER[$key])) {\\r\\n                $ip = $_SERVER[$key];\\r\\n                if (strpos($ip, \\u0027,\\u0027) !== false) {\\r\\n                    \\/\\/ Multiple IPs are present so use the last IP which should be the most reliable IP that last connected to the proxy\\r\\n                    $ips = explode(\\u0027,\\u0027, $ip);\\r\\n                    array_walk($ips, create_function(\\u0027\\u0026$val\\u0027, \\u0027$val = trim($val);\\u0027));\\r\\n                    $ip = end($ips);\\r\\n                }\\r\\n                $ip = trim($ip);\\r\\n                break;\\r\\n            }\\r\\n        }\\r\\n    }\\r\\n$data[\\u0027formId\\u0027] = $formId;\\r\\n    \\/\\/ return has to be part of the form data array\\r\\n    if (!isset($data[\\u0027return\\u0027])) {\\r\\n        $data[\\u0027return\\u0027] = \\u0027http:\\/\\/itoysoldiers.com\\/thanks\\u0027;\\r\\n    }\\r\\n    $data = array(\\u0027mauticform\\u0027 =\\u003E $data);\\r\\n    \\/\\/ Change [path-to-mautic] to URL where your Mautic is\\r\\n    $formUrl =  \\u0027http:\\/\\/l.itoysoldiers.com\\/index.php\\/form\\/submit?formId=\\u0027 . $formId;\\r\\n    $ch = curl_init();\\r\\n    curl_setopt($ch, CURLOPT_URL, $formUrl);\\r\\n    curl_setopt($ch, CURLOPT_POST, 1);\\r\\n    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));\\r\\n    curl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0022X-Forwarded-For: $ip\\u0022));\\r\\n    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n    $response = curl_exec($ch);\\r\\n    curl_close($ch);\\r\\n    return $response;     \\r\\n}" } },
                { "entity_create" : {
                    "USING" : {
                      "type" : "message",
                      "param_type" : "stream_player_registers_for_warzone",
                      "param_user" : "0"
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                }
              ]
            },
            { "ELSE" : [
                { "entity_create" : {
                    "USING" : {
                      "type" : "message",
                      "param_type" : "stream_player_registers_for_warzone",
                      "param_user" : [ "node-registration:user" ]
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                },
                { "userpoints_action_grant_points" : {
                    "user" : [ "node-registration:user" ],
                    "points" : "5",
                    "tid" : "0",
                    "entity" : [ "node-registration:node" ],
                    "description" : "Registered for a warzone.",
                    "operation" : "Add",
                    "display" : "0",
                    "moderate" : "approved"
                  }
                }
              ]
            }
          ]
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "node-registration:node" ]
          }
        },
        { "component_rules_status_all_get_associated_nodes" : {
            "USING" : { "srid" : [ "node-registration:node" ] },
            "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-associated-nodes-stream" ],
            "value" : [ "assoc-nodes" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_war_zone_all_set_to_attended'] = entity_import('rules_config', '{ "rules_war_zone_all_set_to_attended" : {
      "LABEL" : "War Zone: All: Set To Attended",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3", "War Zone" ],
      "REQUIRES" : [ "views_rules", "rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_6",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "data_set" : { "data" : [ "entity-fetched:attended" ], "value" : "1" } },
              { "entity_save" : { "data" : [ "entity-fetched" ], "immediate" : "1" } }
            ]
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
              { "CASE" : {
                  "USING" : { "value" : "war_zone_all_generate_scorecard" },
                  "DO" : [
                    { "component_rules_war_zone_all_generate_additional_scorecard" : { "efid" : [ "entityform" ] } }
                  ]
                }
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
                  "type" : "node_registration",
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
  $items['rules_war_zone_league_award_auto_achievements'] = entity_import('rules_config', '{ "rules_war_zone_league_award_auto_achievements" : {
      "LABEL" : "War Zone: League: Award Auto Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3", "War Zone" ],
      "REQUIRES" : [ "rules", "views_rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode_registration\\u003E" },
            "PROVIDE" : { "variable_added" : { "user_list" : "List of Users" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_all_scorecard_rules",
            "DISPLAY" : "views_rules_2",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "registration_id" : { "registration_id" : "Reg ID" },
              "uid" : { "uid" : "User uid" }
            },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "user_fetched" : "Fetched User" } }
                }
              },
              { "list_add" : { "list" : [ "user-list" ], "item" : [ "user-fetched" ], "unique" : "1" } }
            ]
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "war_zone_grant_achievement",
              "param_created" : "now",
              "param_user" : [ "wzid:author" ]
            },
            "PROVIDE" : { "entity_created" : { "first_place" : "First Place" } }
          }
        },
        { "data_set" : { "data" : [ "first-place:field-event-link" ], "value" : [ "wzid" ] } },
        { "data_set" : {
            "data" : [ "first-place:field-image-custom-achievement" ],
            "value" : "0"
          }
        },
        { "data_set" : {
            "data" : [ "first-place:field-points-custom-achievement" ],
            "value" : "3"
          }
        },
        { "data_set" : {
            "data" : [ "first-place:field-short-description" ],
            "value" : "Awarded for first place in battle score for [wzid:title]"
          }
        },
        { "data_set" : {
            "data" : [ "first-place:field-title-custom-achievement" ],
            "value" : "First Place"
          }
        },
        { "data_set" : {
            "data" : [ "first-place:field-player-achivement-reg:0" ],
            "value" : [ "user-list:0" ]
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "war_zone_grant_achievement",
              "param_created" : "now",
              "param_user" : [ "wzid:author" ]
            },
            "PROVIDE" : { "entity_created" : { "second_place" : "Second Place" } }
          }
        },
        { "data_set" : { "data" : [ "second-place:field-event-link" ], "value" : [ "wzid" ] } },
        { "data_set" : {
            "data" : [ "second-place:field-image-custom-achievement" ],
            "value" : "1"
          }
        },
        { "data_set" : {
            "data" : [ "second-place:field-points-custom-achievement" ],
            "value" : "2"
          }
        },
        { "data_set" : {
            "data" : [ "second-place:field-short-description" ],
            "value" : "Awarded for second place in battle results for [wzid:title]."
          }
        },
        { "data_set" : {
            "data" : [ "second-place:field-title-custom-achievement" ],
            "value" : "Second Place"
          }
        },
        { "data_set" : {
            "data" : [ "second-place:field-player-achivement-reg:0" ],
            "value" : [ "user-list:1" ]
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "war_zone_grant_achievement",
              "param_created" : "now",
              "param_user" : [ "wzid:author" ]
            },
            "PROVIDE" : { "entity_created" : { "third_place" : "Third Place" } }
          }
        },
        { "data_set" : { "data" : [ "third-place:field-event-link" ], "value" : [ "wzid" ] } },
        { "data_set" : {
            "data" : [ "third-place:field-image-custom-achievement" ],
            "value" : "2"
          }
        },
        { "data_set" : {
            "data" : [ "third-place:field-points-custom-achievement" ],
            "value" : "1"
          }
        },
        { "data_set" : {
            "data" : [ "third-place:field-short-description" ],
            "value" : "Awarded for third place in battle results for [wzid:title]."
          }
        },
        { "data_set" : {
            "data" : [ "third-place:field-title-custom-achievement" ],
            "value" : "Third Place"
          }
        },
        { "data_set" : {
            "data" : [ "third-place:field-player-achivement-reg:0" ],
            "value" : [ "user-list:2" ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_league_calculate_number_of_rounds'] = entity_import('rules_config', '{ "rules_war_zone_league_calculate_number_of_rounds" : {
      "LABEL" : "War Zone: League: Calculate Number of Rounds",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3", "War Zone" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "event" : "event" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "number_rounds" : "Number of Rounds" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "number_of_players" : "Number of Players" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_7",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "player_count" : { "player_count" : "Player Count" } },
            "DO" : [
              { "data_set" : { "data" : [ "number-of-players" ], "value" : [ "player-count" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "number-of-players" ], "op" : "\\u003E", "value" : "64" } },
              "DO" : [ { "data_set" : { "data" : [ "number-rounds" ], "value" : "7" } } ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "number-of-players" ], "op" : "\\u003E", "value" : "32" } },
              "DO" : [ { "data_set" : { "data" : [ "number-rounds" ], "value" : "6" } } ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "number-of-players" ], "op" : "\\u003E", "value" : "16" } },
              "DO" : [ { "data_set" : { "data" : [ "number-rounds" ], "value" : "5" } } ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "number-of-players" ], "op" : "\\u003E", "value" : "8" } },
              "DO" : [ { "data_set" : { "data" : [ "number-rounds" ], "value" : "4" } } ]
            },
            { "ELSE" : [ { "data_set" : { "data" : [ "number-rounds" ], "value" : "3" } } ] }
          ]
        },
        { "data_set" : {
            "data" : [ "wzid:field-calculated-rounds" ],
            "value" : [ "number-rounds" ]
          }
        },
        { "entity_save" : { "data" : [ "wzid" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_war_zone_league_process_incomplete_scorecards'] = entity_import('rules_config', '{ "rules_war_zone_league_process_incomplete_scorecards" : {
      "LABEL" : "War Zone: League: Process Incomplete Scorecards",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3", "War Zone" ],
      "REQUIRES" : [ "views_rules", "rules", "rules_conditional" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_all_scorecard_rules",
            "DISPLAY" : "views_rules_3",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "registration_id" : { "registration_id" : "Reg ID" },
              "entityform_id" : { "scorecard_id" : "Scorecard ID" }
            },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "entityform", "id" : [ "scorecard-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_is_of_bundle" : {
                        "entity" : [ "entity-fetched" ],
                        "type" : "entityform",
                        "bundle" : { "value" : { "score_card" : "score_card" } }
                      }
                    },
                    "DO" : [
                      { "data_set" : { "data" : [ "entity-fetched:field-your-results" ], "value" : "1" } },
                      { "data_set" : { "data" : [ "entity-fetched:field-state-sc" ], "value" : "30" } },
                      { "entity_save" : { "data" : [ "entity-fetched" ], "immediate" : "1" } }
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
  $items['rules_war_zone_league_start_league_messaging'] = entity_import('rules_config', '{ "rules_war_zone_league_start_league_messaging" : {
      "LABEL" : "War Zone: League: Start League Messaging",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3", "War Zone" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "war_zone_league" : "war_zone_league" } }
          }
        }
      ],
      "DO" : [
        { "component_rules_warzone_email_players" : {
            "wzid" : [ "wzid" ],
            "message_title" : "[iToysoldiers] [wzid:title] has commenced",
            "message_body" : "\\u003Cp\\u003EAhoy, commander!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe league, [wzid:title] has commenced as of [site:current-date].\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EAny activities you are required to perform will be available on the \\u003Cstrong\\u003EOperations\\u003Cstrong\\u003E page for the league.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou may also receive an email if assigned opponents are part of this league - this information will also be available on the \\u003Cstrong\\u003EOperations\\u003C\\/strong\\u003E page.\\r\\n\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E"
          }
        },
        { "mail" : {
            "to" : [ "wzid:author:mail" ],
            "subject" : "[iToysoldiers] [wzid:title] has commenced",
            "message" : "\\u003Cp\\u003EAhoy, [wzid:author:name]!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour League on iToysoldiers, [wzid:title] has begun.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EAll of your league management tasks can be accomplished on the \\u003Cstrong\\u003EManagement\\u003C\\/strong\\u003E tab.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_league_swiss_increment'] = entity_import('rules_config', '{ "rules_war_zone_league_swiss_increment" : {
      "LABEL" : "War Zone: League: Swiss: Increment",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3", "War Zone" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "event" : "event" } }
          }
        },
        { "data_is" : { "data" : [ "wzid:field-status" ], "value" : "5" } }
      ],
      "DO" : [
        { "component_rules_war_zone_league_process_incomplete_scorecards" : { "wzid" : [ "wzid" ] } },
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
                  "unique" : "1"
                }
              }
            ]
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode_registration\\u003E" },
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
                          "USING" : { "type" : "list\\u003Cnode_registration\\u003E" },
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
                                "unique" : "1"
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
                                "unique" : "1"
                              }
                            }
                          ]
                        }
                      },
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT data_is_empty" : { "data" : [ "potential-opponents" ] } },
                            "DO" : [
                              { "component_rules_war_zone_all_generate_turn_scorecard" : {
                                  "USING" : {
                                    "wzid" : [ "wzid" ],
                                    "pid" : [ "p1-reg" ],
                                    "master_view" : "1",
                                    "oid" : [ "potential-opponents:0" ],
                                    "round" : [ "new-round" ]
                                  },
                                  "PROVIDE" : { "scid" : { "scid1" : "Scorecard Player 1" } }
                                }
                              },
                              { "component_rules_war_zone_all_generate_turn_scorecard" : {
                                  "USING" : {
                                    "wzid" : [ "wzid" ],
                                    "pid" : [ "potential-opponents:0" ],
                                    "master_view" : "0",
                                    "oid" : [ "p1-reg" ],
                                    "round" : [ "new-round" ]
                                  },
                                  "PROVIDE" : { "scid" : { "scid2" : "Scorecard Player 2" } }
                                }
                              },
                              { "list_remove" : { "list" : [ "p2-list" ], "item" : [ "potential-opponents:0" ] } },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "entity_is_of_bundle" : {
                                        "entity" : [ "scid1" ],
                                        "type" : "entityform",
                                        "bundle" : { "value" : { "score_card" : "score_card" } }
                                      }
                                    },
                                    "DO" : [
                                      { "data_set" : { "data" : [ "scid1:field-opponent-scorecard" ], "value" : [ "scid2" ] } }
                                    ]
                                  }
                                ]
                              },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "entity_is_of_bundle" : {
                                        "entity" : [ "scid2" ],
                                        "type" : "entityform",
                                        "bundle" : { "value" : { "score_card" : "score_card" } }
                                      }
                                    },
                                    "DO" : [
                                      { "data_set" : { "data" : [ "scid2:field-opponent-scorecard" ], "value" : [ "scid1" ] } }
                                    ]
                                  }
                                ]
                              }
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
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "war_zone_all_new_round_message",
              "param_user" : [ "wzid:author" ]
            },
            "PROVIDE" : { "entity_created" : { "message" : "Message" } }
          }
        },
        { "data_set" : { "data" : [ "message:field-stream-node-ref" ], "value" : [ "wzid" ] } },
        { "component_rules_status_all_get_associated_nodes" : {
            "USING" : { "srid" : [ "wzid" ] },
            "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
          }
        },
        { "data_set" : {
            "data" : [ "message:field-associated-nodes-stream" ],
            "value" : [ "assoc-nodes" ]
          }
        },
        { "component_rules_warzone_email_players" : {
            "wzid" : [ "wzid" ],
            "message_title" : "[iToysoldiers] [wzid:title] Round [new-round:value] has begun",
            "message_body" : "\\u003Cp\\u003ERound [new-round:value] for the league, [wzid:title] has begun!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour mission is to view the \\u003Ca href=\\u0022http:\\/\\/itoysoldiers.com\\/node\\/[wzid:nid]\\/event-ops\\u0022\\u003E\\u003Cstrong\\u003EOperations Page\\u003C\\/strong\\u003E\\u003C\\/a\\u003E for the league to determine what your obstacle to league domination is.\\u003Cp\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_war_zone_steamroller_generate_random_missions'] = entity_import('rules_config', '{ "rules_war_zone_steamroller_generate_random_missions" : {
      "LABEL" : "War Zone: Steamroller: Generate Random Missions",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
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
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : [ "wzid:field-warzone-rounds-pub" ] },
            "PROVIDE" : { "variable_added" : { "counter" : "Counter" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_all_fixed_mission_rules_and_displays",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "tid" : { "tid" : "Term ID" } },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "counter" ], "op" : "\\u003E", "value" : "0" } },
                    "DO" : [
                      { "entity_fetch" : {
                          "USING" : { "type" : "taxonomy_term", "id" : [ "tid" ] },
                          "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                        }
                      },
                      { "list_add" : {
                          "list" : [ "wzid:field-steamroller-scenarios" ],
                          "item" : [ "entity-fetched" ],
                          "unique" : "1"
                        }
                      },
                      { "data_calc" : {
                          "USING" : { "input_1" : [ "counter" ], "op" : "-", "input_2" : "1" },
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
  $items['rules_war_zone_steamroller_generate_strength_of_schedule'] = entity_import('rules_config', '{ "rules_war_zone_steamroller_generate_strength_of_schedule" : {
      "LABEL" : "War Zone: Steamroller: Generate Strength of Schedule",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules" ],
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
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_5",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
            "DO" : [
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : "0" },
                  "PROVIDE" : { "variable_added" : { "opponent_record" : "Opponent Record" } }
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_tournament_score_cards",
                  "DISPLAY" : "views_rules_2",
                  "USING" : { "opponent_id" : [ "registration-id" ] },
                  "ROW VARIABLES" : { "field_victory" : { "field_victory" : "Victory" } },
                  "DO" : [
                    { "data_set" : { "data" : [ "opponent-record" ], "value" : [ "field-victory" ] } }
                  ]
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "registration_fetched" : "Fetched Registration" } }
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
              { "data_set" : {
                  "data" : [ "sos-scorecard:field-strength-of-schedule-sc" ],
                  "value" : [ "opponent-record" ]
                }
              },
              { "data_set" : {
                  "data" : [ "sos-scorecard:field-registration-sc" ],
                  "value" : [ "registration-fetched" ]
                }
              },
              { "data_set" : { "data" : [ "sos-scorecard:field-score-card-type" ], "value" : "25" } },
              { "data_set" : { "data" : [ "sos-scorecard:field-state-sc" ], "value" : "20" } },
              { "entity_save" : { "data" : [ "sos-scorecard" ], "immediate" : "1" } }
            ]
          }
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
      "REQUIRES" : [ "rules", "rules_conditional" ],
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
        { "data_set" : { "data" : [ "entity-created:field-state-sc" ], "value" : "45" } },
        { "SWITCH" : {
            "USING" : { "data" : [ "wzid:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "war_zone_tournament" },
                  "DO" : [
                    { "SWITCH" : {
                        "USING" : { "data" : [ "wzid:field-tournament-format" ] },
                        "DO" : [
                          { "CASE" : {
                              "USING" : { "value" : "1916" },
                              "DO" : [
                                { "data_calc" : {
                                    "USING" : {
                                      "input_1" : [ "wzid:field-points-per-army" ],
                                      "op" : "\\/",
                                      "input_2" : "2"
                                    },
                                    "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                                  }
                                },
                                { "data_convert" : {
                                    "USING" : { "type" : "integer", "value" : [ "result" ], "rounding_behavior" : "up" },
                                    "PROVIDE" : { "conversion_result" : { "conversion_result" : "Conversion result" } }
                                  }
                                },
                                { "data_set" : { "data" : [ "entity-created:field-victory-points-sc" ], "value" : "3" } },
                                { "data_set" : {
                                    "data" : [ "entity-created:field-army-points-sc" ],
                                    "value" : [ "conversion-result" ]
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
              }
            ]
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
        { "data_set" : { "data" : [ "scorecard-created:field-state-sc" ], "value" : "5" } },
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
            "USING" : { "data" : [ "wzid:field-tournament-format" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "1030" },
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
              },
              { "CASE" : {
                  "USING" : { "value" : "1916" },
                  "DO" : [
                    { "VIEW LOOP" : {
                        "VIEW" : "war_zone_tourney_registrations",
                        "DISPLAY" : "views_rules_3",
                        "USING" : { "nid" : [ "wzid:nid" ] },
                        "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
                        "DO" : [
                          { "entity_fetch" : {
                              "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                              "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                            }
                          },
                          { "list_add" : { "list" : [ "p1-list" ], "item" : [ "entity-fetched" ], "unique" : "1" } }
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
            "VIEW" : "war_zone_all_messaging",
            "DISPLAY" : "views_rules_1",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "email" : { "email" : "E-mail" } },
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
