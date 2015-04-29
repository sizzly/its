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
                    }
                  ]
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
                    { "CASE" : {
                        "USING" : { "value" : "narrative_campaign_instance" },
                        "DO" : [
                          { "component_rules_war_zone_campaign_final_scoring" : { "wzid" : [ "node" ] } }
                        ]
                      }
                    },
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
        { "data_set" : { "data" : [ "new-achievement:field-achievement-unique" ], "value" : 1 } },
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
              }
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
                    { "component_rules_war_zone_campaign_record_battle" : { "bid" : [ "entityform" ] } }
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
