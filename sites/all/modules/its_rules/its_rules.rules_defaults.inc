<?php
/**
 * @file
 * its_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_rules_default_rules_configuration() {
  $items = array();
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
  $items['rules_honor_in_defeat'] = entity_import('rules_config', '{ "rules_honor_in_defeat" : {
      "LABEL" : "Honor in Defeat",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievements" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "battle_id" : { "label" : "Battle", "type" : "node" },
        "user_id" : { "label" : "User", "type" : "user" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "battle-id" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "data_is" : { "data" : [ "battle-id:field-your-results" ], "value" : "5" } }
      ],
      "DO" : [
        { "component_rules_award_achievement" : { "aid" : "3313", "uid" : [ "user-id" ] } }
      ]
    }
  }');
  $items['rules_master_battle_result_game_result'] = entity_import('rules_config', '{ "rules_master_battle_result_game_result" : {
      "LABEL" : "Master: Battle Result -\\u003E Game Result",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Battles", "Master" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "bid" : { "label" : "Battle", "type" : "node" },
        "gid" : { "label" : "Game", "type" : "node" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "gid" ],
            "type" : "node",
            "bundle" : { "value" : { "game_result_system_" : "game_result_system_" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "gid:field-opponent-s-army" ],
            "value" : [ "bid:field-your-army" ]
          }
        },
        { "data_set" : { "data" : [ "gid:field-location" ], "value" : [ "bid:field-location" ] } },
        { "data_set" : {
            "data" : [ "gid:field-your-army" ],
            "value" : [ "bid:field-opponent-s-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-points-per-army" ],
            "value" : [ "bid:field-points-per-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-event-link" ],
            "value" : [ "bid:field-event-link" ]
          }
        },
        { "data_set" : { "data" : [ "gid:field-mission" ], "value" : [ "bid:field-mission" ] } },
        { "data_set" : {
            "data" : [ "gid:field-game-date" ],
            "value" : [ "bid:field-game-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-battle-deployment" ],
            "value" : [ "bid:field-battle-deployment" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-battle-mission-rules" ],
            "value" : [ "bid:field-battle-mission-rules" ]
          }
        },
        { "data_set" : {
            "data" : [ "gid:field-your-commander-survival" ],
            "value" : [ "bid:field-enemy-commander-survival" ]
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
  $items['rules_master_new_comment'] = entity_import('rules_config', '{ "rules_master_new_comment" : {
      "LABEL" : "Master: New Comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Comment", "Master" ],
      "REQUIRES" : [ "userpoints_rules", "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "comment" ],
            "description" : "Renown awarded for posting a comment.",
            "operation" : "Add",
            "display" : 1,
            "moderate" : "approved"
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:node:author" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "comment:node" ],
            "description" : "Your content has been replied to:  Renown awarded.",
            "operation" : "Add",
            "display" : 1,
            "moderate" : "approved"
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_comments_on_post",
              "param_user" : [ "comment:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "comment:node" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-associated-nodes-stream:0" ],
            "value" : [ "comment:node" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-message-comment-reference" ],
            "value" : [ "comment" ]
          }
        }
      ]
    }
  }');
  $items['rules_master_on_flag_like'] = entity_import('rules_config', '{ "rules_master_on_flag_like" : {
      "LABEL" : "Master: On Flag Like",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Flag" ],
      "REQUIRES" : [ "userpoints_rules", "rules", "flag" ],
      "ON" : { "flag_flagged_glory" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "flagging-user" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "flagged-node" ],
            "description" : "Flagged content as \\u0022Liked\\u0022",
            "operation" : "Add",
            "display" : 1,
            "moderate" : "approved"
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "flagged-node:author" ],
            "points" : "5",
            "tid" : "0",
            "entity" : [ "flagged-node" ],
            "description" : "[flagging-user:name] liked [flagged-node:title]",
            "operation" : "5",
            "display" : 0,
            "moderate" : "approved"
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_likes_content",
              "param_user" : [ "flagging-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "flagged-node" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_master_on_register'] = entity_import('rules_config', '{ "rules_master_on_register" : {
      "LABEL" : "Master: On Register",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Register", "War Zone" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "node_registration" ],
      "ON" : { "node_registration_insert" : [] },
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
        }
      ]
    }
  }');
  $items['rules_master_on_update_content'] = entity_import('rules_config', '{ "rules_master_on_update_content" : {
      "LABEL" : "Master: On Update Content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content", "Master" ],
      "REQUIRES" : [ "rules_conditional", "rules" ],
      "ON" : { "node_update" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "node:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "game_results" },
                  "DO" : [
                    { "component_rules_utility_award_command_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_utility_award_headhunter_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_utility_award_magehunter_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_achievement_face_to_face" : { "bid" : [ "node" ] } },
                    { "component_rules_achievements_altar_of_war" : { "bid" : [ "node" ] } },
                    { "component_rules_achievements_honoring_the_past" : { "battle_nid" : [ "node" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "game_result_system_" },
                  "DO" : [
                    { "component_rules_utility_award_command_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_utility_award_headhunter_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_utility_award_magehunter_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_achievement_face_to_face" : { "bid" : [ "node" ] } },
                    { "component_rules_achievements_altar_of_war" : { "bid" : [ "node" ] } },
                    { "component_rules_achievements_honoring_the_past" : { "battle_nid" : [ "node" ] } }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_master_player_rates_list'] = entity_import('rules_config', '{ "rules_master_player_rates_list" : {
      "LABEL" : "Master: Player Rates List",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Listcrit" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "voting_rules" ],
      "ON" : { "voting_rules_insert_node" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_rates_list",
              "param_user" : [ "vote:user" ]
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
            "user" : [ "vote:user" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "node" ],
            "description" : "Awarded for rating a list.",
            "operation" : "Add",
            "display" : 0,
            "moderate" : "approved"
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "node" ],
            "description" : "Your list was rated.",
            "operation" : "Add",
            "display" : 0,
            "moderate" : "approved"
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
                    }
                  ]
                }
              },
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
                    },
                    { "component_rules_status_all_get_associated_nodes" : {
                        "USING" : { "srid" : [ "node" ] },
                        "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                      }
                    },
                    { "data_set" : { "data" : [ "assoc-nodes" ], "value" : [ "assoc-nodes" ] } }
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
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "models" },
                  "DO" : [
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "5",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Awarded for creating a new modeling project.",
                        "operation" : "Add",
                        "reference" : "[node:nid]",
                        "display" : "1",
                        "moderate" : "approved"
                      }
                    },
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
                    { "component_rules_status_all_get_associated_nodes" : {
                        "USING" : { "srid" : [ "node" ] },
                        "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "entity-created:field-associated-nodes-stream" ],
                        "value" : [ "assoc-nodes" ]
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
  $items['rules_message_on_referenced_battle_result'] = entity_import('rules_config', '{ "rules_message_on_referenced_battle_result" : {
      "LABEL" : "Message on Referenced Battle Result",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Notifications" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "battle_id" : { "label" : "Battle Result", "type" : "node" },
        "user_id" : { "label" : "User", "type" : "user" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "battle-id" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "battle-id:field-opponent" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "battle-id:field-opponent:mail" ],
            "subject" : "[iToysoldiers] Acknowledge your battle against [battle-id:author:name]",
            "message" : "Ahoy!\\r\\n\\r\\nA battle report has been submitted by [battle-id:author:name] and you have been identified as the opponent.  Please visit [battle-id:link] to review and acknowledge the battle.\\r\\n\\r\\nThat is all.\\r\\n\\r\\niToysoldiers",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_on_acknowledge_battle'] = entity_import('rules_config', '{ "rules_on_acknowledge_battle" : {
      "LABEL" : "Master: Flag Acknowledge",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Battles", "Master" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "flag" ],
      "ON" : { "flag_flagged_acknowledge_battle" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "flagged-node" ],
            "type" : { "value" : { "game_results" : "game_results" } }
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_game_reference",
              "value" : [ "flagged-node" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-fetched:0:author" ], "value" : [ "flagging-user" ] } },
        { "data_set" : {
            "data" : [ "flagged-node:field-opponent" ],
            "value" : [ "flagging-user" ]
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "flagging-user" ],
            "points" : "5",
            "tid" : "0",
            "entity" : [ "flagged-node" ],
            "description" : "Battle Acknowledged. ",
            "operation" : "Add",
            "display" : 1,
            "moderate" : "approved"
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_acknowledges_a_battle",
              "param_user" : [ "flagging-user" ]
            },
            "PROVIDE" : { "entity_created" : { "message_created" : "Message" } }
          }
        },
        { "data_set" : {
            "data" : [ "message-created:field-stream-node-ref" ],
            "value" : [ "flagged-node" ]
          }
        }
      ]
    }
  }');
  $items['rules_on_update_battle_results'] = entity_import('rules_config', '{ "rules_on_update_battle_results" : {
      "LABEL" : "On Update Battle Results",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_game_reference",
              "value" : [ "node" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "component_rules_update_game_result" : {
            "battle_result_changed" : [ "node" ],
            "game_container_modify" : [ "entity-fetched:0" ]
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
  $items['rules_update_game_result'] = entity_import('rules_config', '{ "rules_update_game_result" : {
      "LABEL" : "Update Game Result",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "battle_result_changed" : { "label" : "Battle Result", "type" : "entity" },
        "game_container_modify" : { "label" : "Game Container", "type" : "entity" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "battle-result-changed" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "game-container-modify" ],
            "type" : "node",
            "bundle" : { "value" : { "game_result_system_" : "game_result_system_" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "game-container-modify:field-mission" ],
            "value" : [ "battle-result-changed:field-mission" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-game-date" ],
            "value" : [ "battle-result-changed:field-game-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-your-army" ],
            "value" : [ "battle-result-changed:field-opponent-s-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-opponent-s-army" ],
            "value" : [ "battle-result-changed:field-your-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-location" ],
            "value" : [ "battle-result-changed:field-location" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-event-link" ],
            "value" : [ "battle-result-changed:field-event-link" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:created" ],
            "value" : [ "battle-result-changed:created" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-points-per-army" ],
            "value" : [ "battle-result-changed:field-points-per-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-your-commander-survival" ],
            "value" : [ "battle-result-changed:field-enemy-commander-survival" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-enemy-commander-survival" ],
            "value" : [ "battle-result-changed:field-your-commander-survival" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-battleresult-enemy-command" ],
            "value" : [ "battle-result-changed:field-batteresult-commander" ]
          }
        },
        { "data_set" : {
            "data" : [ "game-container-modify:field-batteresult-commander" ],
            "value" : [ "battle-result-changed:field-battleresult-enemy-command" ]
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
                        "bundle" : { "value" : { "stream_player_comments_on_post" : "stream_player_comments_on_post" } }
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
