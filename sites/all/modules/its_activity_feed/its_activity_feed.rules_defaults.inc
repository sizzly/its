<?php
/**
 * @file
 * its_activity_feed.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_activity_feed_default_rules_configuration() {
  $items = array();
  $items['rules_status_all_get_associated_nodes'] = entity_import('rules_config', '{ "rules_status_all_get_associated_nodes" : {
      "LABEL" : "Status: All: Get Associated Nodes",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : {
        "srid" : { "label" : "Stream Reference", "type" : "node" },
        "assoc_nodes" : {
          "label" : "Associated Nodes",
          "type" : "list\\u003Cnode\\u003E",
          "parameter" : false
        }
      },
      "DO" : [
        { "list_add" : { "list" : [ "assoc-nodes" ], "item" : [ "srid" ], "unique" : "1" } },
        { "SWITCH" : {
            "USING" : { "data" : [ "srid:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "achievement" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "article" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:og-group-ref:0" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "game_results" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "event" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "gallery" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "gaming_club" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_league" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "listcrit" }, "DO" : [] } },
              { "CASE" : {
                  "USING" : { "value" : "models" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-army-profile-models" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "narrative_campaign" }, "DO" : [] } },
              { "CASE" : {
                  "USING" : { "value" : "narrative_campaign_instance" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : { "list" : [ "assoc-nodes" ], "item" : [ "srid:field-event-link" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "special_event" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_tournament" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "assoc_nodes" ]
    }
  }');
  $items['rules_status_event_create_event'] = entity_import('rules_config', '{ "rules_status_event_create_event" : {
      "LABEL" : "Status: Event: Create Event",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Statuses 1.0" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "sid" : { "label" : "Status", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "sid" ],
            "type" : "entityform",
            "bundle" : { "value" : { "status_event_create_event" : "status_event_create_event" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "special_event",
              "param_title" : [ "sid:field-event-name" ],
              "param_author" : [ "sid:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:body" ],
            "value" : [ "sid:field-desc-event-status" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-location" ],
            "value" : [ "sid:field-battlefield-status" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-campaign-badge" ],
            "value" : [ "sid:field-campaign-badge-status" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-event-date:0" ],
            "value" : [ "sid:field-date-and-time" ]
          }
        }
      ]
    }
  }');
  $items['rules_status_updates_all_master'] = entity_import('rules_config', '{ "rules_status_updates_all_master" : {
      "LABEL" : "Status Updates: All: Master",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_conditional", "rules", "userpoints_rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "entityform" ],
                  "type" : "entityform",
                  "bundle" : { "value" : { "status_node_add_comment" : "status_node_add_comment" } }
                }
              },
              "DO" : [
                { "entity_create" : {
                    "USING" : {
                      "type" : "comment",
                      "param_subject" : "Reply",
                      "param_node" : [ "entityform:field-status-content-reference" ],
                      "param_author" : [ "entityform:user" ],
                      "param_comment_body" : [ "entityform:field-status-body" ]
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                }
              ]
            },
            {
              "ELSE IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "entityform" ],
                  "type" : "entityform",
                  "bundle" : { "value" : { "status" : "status" } }
                }
              },
              "DO" : [
                { "userpoints_action_grant_points" : {
                    "user" : [ "entityform:user" ],
                    "points" : "1",
                    "tid" : "0",
                    "entity" : [ "entityform" ],
                    "description" : "Awarded for adding a status.",
                    "operation" : "Add",
                    "display" : "0",
                    "moderate" : "approved"
                  }
                },
                { "entity_create" : {
                    "USING" : {
                      "type" : "message",
                      "param_type" : "statuses_all_new_status",
                      "param_user" : [ "entityform:user" ]
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-update-reference" ],
                    "value" : [ "entityform" ]
                  }
                },
                { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_stream_photos_on_create'] = entity_import('rules_config', '{ "rules_stream_photos_on_create" : {
      "LABEL" : "Stream: Photos: On Create",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "userpoints_rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "status_all_upload_image" : "status_all_upload_image" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "entityform:user" ],
            "points" : "2",
            "tid" : "0",
            "entity" : [ "entityform" ],
            "description" : "Uploading photos.",
            "operation" : "Add",
            "display" : "0",
            "moderate" : "approved"
          }
        },
        { "component_rules_status_all_get_associated_nodes" : {
            "USING" : { "srid" : [ "entityform:field-status-content-reference" ] },
            "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "statuses_all_new_files",
              "param_user" : [ "entityform:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "entityform:field-status-content-reference" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-associated-nodes-stream" ],
            "value" : [ "assoc-nodes" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-update-reference" ],
            "value" : [ "entityform" ]
          }
        }
      ]
    }
  }');
  $items['rules_utility_update_associated_nodes'] = entity_import('rules_config', '{ "rules_utility_update_associated_nodes" : {
      "LABEL" : "Utility: Update Associated Nodes",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules", "rules_conditional" ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "utility_update_associated_nodes",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "mid" : { "mid" : "Message ID" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "message", "id" : [ "mid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_is_of_bundle" : {
                        "entity" : [ "entity-fetched" ],
                        "type" : "message",
                        "bundle" : { "value" : {
                            "stream_player_comments_on_post" : "stream_player_comments_on_post",
                            "stream_player_posts_a_battle" : "stream_player_posts_a_battle",
                            "stream_player_posts_new_content" : "stream_player_posts_new_content",
                            "stream_player_likes_content" : "stream_player_likes_content",
                            "stream_player_earns_an_achievement" : "stream_player_earns_an_achievement",
                            "stream_player_acknowledges_a_battle" : "stream_player_acknowledges_a_battle",
                            "stream_narrative_army_event" : "stream_narrative_army_event",
                            "stream_player_rates_list" : "stream_player_rates_list",
                            "stream_a_warzone_has_begun" : "stream_a_warzone_has_begun",
                            "stream_a_warzone_has_ended" : "stream_a_warzone_has_ended",
                            "stream_new_war_zone" : "stream_new_war_zone",
                            "stream_player_cancels_registration_for_warzone" : "stream_player_cancels_registration_for_warzone",
                            "stream_player_registers_for_warzone" : "stream_player_registers_for_warzone",
                            "campaign_reported_battle" : "campaign_reported_battle",
                            "war_zone_all_anonymous_actions" : "war_zone_all_anonymous_actions",
                            "war_zone_all_new_round_message" : "war_zone_all_new_round_message",
                            "statuses_all_new_status" : "statuses_all_new_status",
                            "statuses_all_new_files" : "statuses_all_new_files"
                          }
                        }
                      }
                    },
                    "DO" : [
                      { "component_rules_status_all_get_associated_nodes" : {
                          "USING" : { "srid" : [ "entity-fetched:field-stream-node-ref" ] },
                          "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                        }
                      },
                      { "data_set" : {
                          "data" : [ "entity-fetched:field-associated-nodes-stream" ],
                          "value" : [ "assoc-nodes" ]
                        }
                      },
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
  return $items;
}
