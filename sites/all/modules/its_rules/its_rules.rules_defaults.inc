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
              "param_title" : "( [bid:title] )",
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
  $items['rules_events_all_on_create_logic'] = entity_import('rules_config', '{ "rules_events_all_on_create_logic" : {
      "LABEL" : "Events: All: On Create Logic",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "userpoints_rules" ],
      "USES VARIABLES" : { "nid" : { "label" : "Event", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "nid" ],
            "type" : "node",
            "bundle" : { "value" : { "event" : "event" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "nid:field-enable-its-features" ], "value" : "0" } },
              "DO" : [
                { "data_set" : { "data" : [ "nid:field-registration-deadline" ], "value" : "now -1 day" } },
                { "data_set" : { "data" : [ "nid:field-status" ], "value" : "0" } },
                { "component_rules_core_all_generate_message_for_new_content" : { "nid" : [ "nid" ], "icon" : "calendar" } },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "nid:field-event-organizer" ], "value" : "1" } },
                      "DO" : [
                        { "userpoints_action_grant_points" : {
                            "user" : [ "nid:author" ],
                            "points" : "2",
                            "tid" : "0",
                            "entity" : [ "nid" ],
                            "description" : "Posting event they\\u0027re running.",
                            "operation" : "Add",
                            "display" : "1",
                            "moderate" : "approved"
                          }
                        }
                      ]
                    },
                    { "ELSE" : [
                        { "userpoints_action_grant_points" : {
                            "user" : [ "nid:author" ],
                            "points" : "1",
                            "tid" : "0",
                            "entity" : [ "nid" ],
                            "description" : "Posting event they know about",
                            "operation" : "Add",
                            "display" : "1",
                            "moderate" : "approved"
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            },
            { "ELSE" : [
                { "data_set" : { "data" : [ "nid:field-status" ], "value" : "1" } },
                { "data_set" : {
                    "data" : [ "nid:field-open-registration" ],
                    "value" : [ "nid:field-event-date-warzone:value" ]
                  }
                },
                { "data_set" : { "data" : [ "nid:field-event-organizer" ], "value" : "1" } },
                { "userpoints_action_grant_points" : {
                    "user" : [ "nid:author" ],
                    "points" : "5",
                    "tid" : "0",
                    "entity" : [ "nid" ],
                    "description" : "iTS powered event created.",
                    "operation" : "Add",
                    "display" : "1",
                    "moderate" : "approved"
                  }
                },
                { "mail" : {
                    "to" : [ "nid:author:mail" ],
                    "subject" : "[iToysoldiers] You\\u0027re Ready To Go To War",
                    "message" : "\\u003Ch3\\u003EGreetings, [node:author:name]!\\u003C\\/h3\\u003E\\r\\n\\u003Cp\\u003EYour \\u003Cstrong\\u003E[node:field-event-type]\\u003C\\/strong\\u003E event is ready and can be viewed at [node:url] .\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour War Zone Management page is available at http:\\/\\/itoysoldiers.com\\/node\\/[node:nid]\\/management .\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis War Zone, as well as any others, can also be accessed from your Dashboard at http:\\/\\/itoysoldiers.com\\/dashboard.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ETo help you have a successful war zone, please take a moment to review these tips before promoting your campaign to players:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EFirst, your war zone starts in \\u003Cstrong\\u003ESetup\\u003C\\/strong\\u003E mode.  In this mode, players cannot register for your event.  This gives you an opportunity to ensure that you are happy with all of the settings before making it live.  Once you\\u2019re happy with it, you can visit your WarZone Management page and click \\u201cOpen War Zone\\u201d.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ESecond, if you select \\u0022Automatic\\u0022 for scheduling, your war zone will automatically start on the date that you indicate on the Date field. There is no action required on your part. If you have selected \\u0022Manual\\u0022 then you will need to start and complete the war zone from the management page.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ELastly, if you have any questions, comments, requests or anything do not hesitate to reach out.  The super friendly iToysoldiers team (that\\u2019d be me) is always ready to help you out.  The best way to reach us is here:  http:\\/\\/help.itoysoldiers.com\\/.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003E\\r\\nRob\\u003Cbr\\u003E\\r\\niToysoldiers.com\\u003C\\/p\\u003E",
                    "language" : [ "" ]
                  }
                }
              ]
            }
          ]
        },
        { "entity_save" : { "data" : [ "nid" ], "immediate" : "1" } }
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
      "REQUIRES" : [ "userpoints_rules", "rules", "rules_conditional", "comment" ],
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
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : { "data" : [ "comment:author" ], "value" : [ "comment:node:author" ] } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is_empty" : { "data" : [ "comment:parent" ] } },
                      "DO" : [
                        { "mail" : {
                            "to" : [ "comment:node:author:mail" ],
                            "subject" : "[iToysoldiers] New Comment on [comment:node:title]",
                            "message" : "                    \\u003Cp\\u003E\\u003Cimg alt=\\u0022\\u0022 src=\\u0022http:\\/\\/l.itoysoldiers.com\\/index.php\\/asset\\/5:new-comment-image\\u0022 style=\\u0022width: 600px; height: 200px;\\u0022 \\/\\u003E\\u003C\\/p\\u003E\\r\\n                    \\u003Ch2\\u003E[comment:author] commented on [comment:node:title]\\u003C\\/h2\\u003E\\r\\n\\r\\n                    \\u003Ctable border=\\u00220\\u0022 cellpadding=\\u00220\\u0022 cellspacing=\\u00220\\u0022 style=\\u0022background-color:#505050; border:1px solid #353535; border-radius:5px;\\u0022\\u003E\\r\\n                        \\u003Ctr\\u003E\\r\\n                            \\u003Ctd align=\\u0022center\\u0022 valign=\\u0022middle\\u0022 style=\\u0022color:#FFFFFF; font-family:Helvetica, Arial, sans-serif; font-size:16px; font-weight:bold; letter-spacing:-.5px; line-height:150%; padding-top:15px; padding-right:30px; padding-bottom:15px; padding-left:30px;\\u0022\\u003E\\r\\n                                \\u003Ca href=\\u0022[comment:node:url]\\u0022 target=\\u0022_blank\\u0022 style=\\u0022color:#FFFFFF; text-decoration:none;\\u0022\\u003EView the Post\\u003C\\/a\\u003E\\r\\n                            \\u003C\\/td\\u003E\\r\\n                        \\u003C\\/tr\\u003E\\r\\n                    \\u003C\\/table\\u003E",
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
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "comment:parent" ] } },
              "DO" : [
                { "mail" : {
                    "to" : [ "comment:parent:author:mail" ],
                    "subject" : "[iToysoldiers] New Reply on [comment:node:title]",
                    "message" : "                    \\u003Cp\\u003E\\u003Cimg alt=\\u0022\\u0022 src=\\u0022http:\\/\\/l.itoysoldiers.com\\/index.php\\/asset\\/5:new-comment-image\\u0022 style=\\u0022width: 600px; height: 200px;\\u0022 \\/\\u003E\\u003C\\/p\\u003E\\r\\n                    \\u003Ch2\\u003E[comment:author] has replied to you on [comment:node:title]\\u003C\\/h2\\u003E\\r\\n\\r\\n                    \\u003Ctable border=\\u00220\\u0022 cellpadding=\\u00220\\u0022 cellspacing=\\u00220\\u0022 style=\\u0022background-color:#505050; border:1px solid #353535; border-radius:5px;\\u0022\\u003E\\r\\n                        \\u003Ctr\\u003E\\r\\n                            \\u003Ctd align=\\u0022center\\u0022 valign=\\u0022middle\\u0022 style=\\u0022color:#FFFFFF; font-family:Helvetica, Arial, sans-serif; font-size:16px; font-weight:bold; letter-spacing:-.5px; line-height:150%; padding-top:15px; padding-right:30px; padding-bottom:15px; padding-left:30px;\\u0022\\u003E\\r\\n                                \\u003Ca href=\\u0022[comment:node:url]\\u0022 target=\\u0022_blank\\u0022 style=\\u0022color:#FFFFFF; text-decoration:none;\\u0022\\u003EView the Post\\u003C\\/a\\u003E\\r\\n                            \\u003C\\/td\\u003E\\r\\n                        \\u003C\\/tr\\u003E\\r\\n                    \\u003C\\/table\\u003E",
                    "language" : [ "" ]
                  }
                }
              ]
            }
          ]
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
        { "component_rules_status_all_get_associated_nodes" : {
            "USING" : { "srid" : [ "flagged-node" ] },
            "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-associated-nodes-stream" ],
            "value" : [ "assoc-nodes" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
        { "mail" : {
            "to" : [ "flagged-node:author:mail" ],
            "subject" : "[iToysoldiers] New Salute for [flagged-node:title]",
            "message" : "                    \\u003Cp\\u003E\\u003Cimg alt=\\u0022\\u0022 src=\\u0022http:\\/\\/l.itoysoldiers.com\\/index.php\\/asset\\/6:new-salute-image\\u0022 style=\\u0022width: 600px; height: 200px;\\u0022 \\/\\u003E\\u003C\\/p\\u003E\\r\\n                    \\u003Ch2\\u003E[flagging-user:name] has saluted [flagged-node:title]\\u003C\\/h2\\u003E\\r\\n\\r\\n                    \\u003Ctable border=\\u00220\\u0022 cellpadding=\\u00220\\u0022 cellspacing=\\u00220\\u0022 style=\\u0022background-color:#505050; border:1px solid #353535; border-radius:5px;\\u0022\\u003E\\r\\n                        \\u003Ctr\\u003E\\r\\n                            \\u003Ctd align=\\u0022center\\u0022 valign=\\u0022middle\\u0022 style=\\u0022color:#FFFFFF; font-family:Helvetica, Arial, sans-serif; font-size:16px; font-weight:bold; letter-spacing:-.5px; line-height:150%; padding-top:15px; padding-right:30px; padding-bottom:15px; padding-left:30px;\\u0022\\u003E\\r\\n                                \\u003Ca href=\\u0022[flagged-node:url]\\u0022 target=\\u0022_blank\\u0022 style=\\u0022color:#FFFFFF; text-decoration:none;\\u0022\\u003EView the Post\\u003C\\/a\\u003E\\r\\n                            \\u003C\\/td\\u003E\\r\\n                        \\u003C\\/tr\\u003E\\r\\n                    \\u003C\\/table\\u003E",
            "language" : [ "" ]
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
                    { "component_rules_battles_check_achievements" : { "p1" : [ "node:author" ], "bid" : [ "node" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "game_result_system_" },
                  "DO" : [
                    { "component_rules_battles_check_achievements" : { "p1" : [ "node:author" ], "bid" : [ "node" ] } }
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
      "OWNER" : "rules",
      "TAGS" : [ "Master" ],
      "REQUIRES" : [ "rules_conditional", "rules", "userpoints_rules", "php", "og" ],
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
                    },
                    { "component_rules_battles_check_achievements" : { "p1" : [ "node:author" ], "bid" : [ "node" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "event" },
                  "DO" : [
                    { "entity_fetch" : {
                        "USING" : { "type" : "user", "id" : [ "node:author:uid" ] },
                        "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                      }
                    },
                    { "php_eval" : { "code" : "$capture = array(\\u0027email\\u0027 =\\u003E \\u0027[entity-fetched:mail]\\u0027);\\r\\npushMauticForm($capture, 19);\\r\\nfunction pushMauticForm($data, $formId, $ip = null)\\r\\n{\\r\\n    if (!$ip) {\\r\\n        $ipHolders = array(\\r\\n            \\u0027HTTP_CLIENT_IP\\u0027,\\r\\n            \\u0027HTTP_X_FORWARDED_FOR\\u0027,\\r\\n            \\u0027HTTP_X_FORWARDED\\u0027,\\r\\n            \\u0027HTTP_X_CLUSTER_CLIENT_IP\\u0027,\\r\\n            \\u0027HTTP_FORWARDED_FOR\\u0027,\\r\\n            \\u0027HTTP_FORWARDED\\u0027,\\r\\n            \\u0027REMOTE_ADDR\\u0027\\r\\n        );\\r\\n        foreach ($ipHolders as $key) {\\r\\n            if (!empty($_SERVER[$key])) {\\r\\n                $ip = $_SERVER[$key];\\r\\n                if (strpos($ip, \\u0027,\\u0027) !== false) {\\r\\n                    \\/\\/ Multiple IPs are present so use the last IP which should be the most reliable IP that last connected to the proxy\\r\\n                    $ips = explode(\\u0027,\\u0027, $ip);\\r\\n                    array_walk($ips, create_function(\\u0027\\u0026$val\\u0027, \\u0027$val = trim($val);\\u0027));\\r\\n                    $ip = end($ips);\\r\\n                }\\r\\n                $ip = trim($ip);\\r\\n                break;\\r\\n            }\\r\\n        }\\r\\n    }\\r\\n$data[\\u0027formId\\u0027] = $formId;\\r\\n    \\/\\/ return has to be part of the form data array\\r\\n    if (!isset($data[\\u0027return\\u0027])) {\\r\\n        $data[\\u0027return\\u0027] = \\u0027http:\\/\\/itoysoldiers.com\\/thanks\\u0027;\\r\\n    }\\r\\n    $data = array(\\u0027mauticform\\u0027 =\\u003E $data);\\r\\n    \\/\\/ Change [path-to-mautic] to URL where your Mautic is\\r\\n    $formUrl =  \\u0027http:\\/\\/l.itoysoldiers.com\\/index.php\\/form\\/submit?formId=\\u0027 . $formId;\\r\\n    $ch = curl_init();\\r\\n    curl_setopt($ch, CURLOPT_URL, $formUrl);\\r\\n    curl_setopt($ch, CURLOPT_POST, 1);\\r\\n    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));\\r\\n    curl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0022X-Forwarded-For: $ip\\u0022));\\r\\n    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n    $response = curl_exec($ch);\\r\\n    curl_close($ch);\\r\\n    return $response;     \\r\\n}" } },
                    { "component_rules_events_all_on_create_logic" : { "nid" : [ "node" ] } }
                  ]
                }
              },
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
              },
              { "CASE" : {
                  "USING" : { "value" : "forum" },
                  "DO" : [
                    { "component_rules_core_all_generate_message_for_new_content" : { "nid" : [ "node" ], "icon" : "fa-comments" } },
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "1",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Added for forum post",
                        "operation" : "Add",
                        "display" : "0",
                        "moderate" : "approved"
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
              "IF" : { "og_entity_is_group_content" : { "entity" : [ "node" ] } },
              "DO" : [
                { "og_get_members" : {
                    "USING" : { "group_content" : [ "node" ] },
                    "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
                  }
                },
                { "LOOP" : {
                    "USING" : { "list" : [ "group-members" ] },
                    "ITEM" : { "list_item" : "Current list item" },
                    "DO" : [
                      { "mail" : {
                          "to" : [ "list-item:mail" ],
                          "subject" : "[iToysoldiers] Message for you, sir!",
                          "message" : "\\u003Ch3\\u003EAhoy, [list-item:name]!\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThere is a new [node:content-type], \\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\/a\\u003E associated with one of the groups you are subscribed to.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[site:name]\\u003C\\/p\\u003E",
                          "language" : [ "" ]
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
        },
        { "component_rules_status_all_get_associated_nodes" : {
            "USING" : { "srid" : [ "flagged-node" ] },
            "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
          }
        },
        { "data_set" : {
            "data" : [ "message-created:field-associated-nodes-stream" ],
            "value" : [ "assoc-nodes" ]
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
      "REQUIRES" : [ "rules", "userpoints_rules", "rules_conditional", "entityform" ],
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
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "entityform:field-status-content-reference" ],
                  "type" : "node",
                  "bundle" : { "value" : { "models" : "models" } }
                }
              },
              "DO" : [
                { "LOOP" : {
                    "USING" : { "list" : [ "entityform:field-field-status-upload-images" ] },
                    "ITEM" : { "list_item" : "Current list item" },
                    "DO" : [
                      { "list_add" : {
                          "list" : [ "entityform:field-status-content-reference:field-images" ],
                          "item" : [ "list-item" ]
                        }
                      },
                      { "entity_save" : {
                          "data" : [ "entityform:field-status-content-reference" ],
                          "immediate" : "1"
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
                        "bundle" : { "value" : { "stream_player_earns_an_achievement" : "stream_player_earns_an_achievement" } }
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
