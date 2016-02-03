<?php
/**
 * @file
 * its_achievements.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_achievements_default_rules_configuration() {
  $items = array();
  $items['rules_achievement_face_to_face'] = entity_import('rules_config', '{ "rules_achievement_face_to_face" : {
      "LABEL" : "Achievement: Commander Challenges",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle ID", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "game_results" : "game_results",
                "game_result_system_" : "game_result_system_"
              }
            }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "bid:field-your-commander-survival" ], "value" : "1" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "bid:field-enemy-commander-survival" ], "value" : "1" } },
                      "DO" : [
                        { "component_rules_award_achievement" : { "aid" : "4280", "uid" : [ "bid:author" ] } }
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
  $items['rules_achievements_altar_of_war'] = entity_import('rules_config', '{ "rules_achievements_altar_of_war" : {
      "LABEL" : "Achievements: Altar of War",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievements" ],
      "REQUIRES" : [ "rules", "views_rules" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "game_results" : "game_results",
                "game_result_system_" : "game_result_system_"
              }
            }
          }
        }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_anniversary",
            "DISPLAY" : "views_rules_2",
            "USING" : {
              "term_node_tid_depth" : [ "bid:field-your-army:tid" ],
              "term_node_tid_depth_1" : [ "bid:field-opponent-s-army:tid" ],
              "term_node_tid_depth_2" : [ "bid:field-mission:tid" ]
            },
            "ROW VARIABLES" : { "nid" : { "nid" : "Content: Nid" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "component_rules_award_achievement" : { "aid" : [ "entity-fetched" ], "uid" : [ "bid:author" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_achievements_honoring_the_past'] = entity_import('rules_config', '{ "rules_achievements_honoring_the_past" : {
      "LABEL" : "Achievements: Honoring the Past",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "php", "views_rules" ],
      "USES VARIABLES" : { "battle_nid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "battle-nid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "game_results" : "game_results",
                "game_result_system_" : "game_result_system_"
              }
            }
          }
        }
      ],
      "DO" : [
        { "data_convert" : {
            "USING" : { "type" : "text", "value" : [ "battle-nid:field-game-date" ] },
            "PROVIDE" : { "conversion_result" : { "conversion_result" : "Conversion result" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\necho date(\\u0027Y-m-d\\u0027, $conversion_result);\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_anniversary",
            "DISPLAY" : "views_rules_1",
            "USING" : { "date_argument" : [ "variable-added" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "Content: Nid" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "component_rules_award_achievement" : { "aid" : [ "entity-fetched" ], "uid" : [ "battle-nid:author" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_calculate_monthly_champion'] = entity_import('rules_config', '{ "rules_calculate_monthly_champion" : {
      "LABEL" : "Calculate Monthly Champion",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_scheduler" ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user" },
            "PROVIDE" : { "variable_added" : { "winner" : "Winner" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_champion",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "uid" : { "uid" : "Content: Author uid" } },
            "DO" : [ { "data_set" : { "data" : [ "winner" ], "value" : [ "uid" ] } } ]
          }
        },
        { "schedule" : {
            "component" : "rules_calculate_monthly_champion",
            "date" : "+1 month",
            "identifier" : "Monthly"
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "achievement",
              "param_title" : "Battle Champion",
              "param_author" : "1"
            },
            "PROVIDE" : { "entity_created" : { "new_achievement" : "New Achievement" } }
          }
        },
        { "data_set" : {
            "data" : [ "new-achievement:field-achievement-category" ],
            "value" : "548"
          }
        },
        { "data_set" : { "data" : [ "new-achievement:field-achievement-unique" ], "value" : 1 } },
        { "data_set" : { "data" : [ "new-achievement:field-achievement-points" ], "value" : "5" } },
        { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "20261" } },
        { "data_set" : {
            "data" : [ "new-achievement:field-short-description" ],
            "value" : "Awarded for the highest Battle Score of the month."
          }
        },
        { "entity_save" : { "data" : [ "new-achievement" ], "immediate" : 1 } },
        { "component_rules_award_achievement" : { "aid" : [ "new-achievement" ], "uid" : [ "winner" ] } }
      ]
    }
  }');
  $items['rules_master_renown_awarded_v2'] = entity_import('rules_config', '{ "rules_master_renown_awarded_v2" : {
      "LABEL" : "Master: Renown Awarded V2",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Master", "Renown" ],
      "REQUIRES" : [
        "rules_conditional",
        "rules",
        "views_rules",
        "user_badges",
        "userpoints_rules"
      ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "userpoints-transaction:tid" ] },
            "DO" : [
              { "CASE" : { "USING" : { "value" : "894" }, "DO" : [] } },
              { "DEFAULT CASE" : [
                  { "variable_add" : {
                      "USING" : { "type" : "integer", "value" : "1" },
                      "PROVIDE" : { "variable_added" : { "level" : "level" } }
                    }
                  },
                  { "variable_add" : {
                      "USING" : { "type" : "boolean", "value" : 1 },
                      "PROVIDE" : { "variable_added" : { "act" : "Act" } }
                    }
                  },
                  { "VIEW LOOP" : {
                      "VIEW" : "user_points_rules",
                      "DISPLAY" : "views_rules_1",
                      "USING" : { "uid" : [ "userpoints-transaction:user:uid" ] },
                      "ROW VARIABLES" : { "max_points" : { "max_points" : "Max renown in category" } },
                      "DO" : [
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "data_is" : { "data" : [ "max-points" ], "op" : "\\u003E", "value" : "400" } },
                              "DO" : [ { "data_set" : { "data" : [ "level" ], "value" : "2" } } ]
                            },
                            {
                              "ELSE IF" : { "data_is" : { "data" : [ "max-points" ], "op" : "\\u003E", "value" : "1300" } },
                              "DO" : [ { "data_set" : { "data" : [ "level" ], "value" : "3" } } ]
                            },
                            {
                              "ELSE IF" : { "data_is" : { "data" : [ "max-points" ], "op" : "\\u003C", "value" : "1" } },
                              "DO" : [ { "data_set" : { "data" : [ "level" ], "value" : "0" } } ]
                            }
                          ]
                        }
                      ]
                    }
                  },
                  { "SWITCH" : {
                      "USING" : { "data" : [ "level" ] },
                      "DO" : [
                        { "CASE" : {
                            "USING" : { "value" : "1" },
                            "DO" : [
                              { "VIEW LOOP" : {
                                  "VIEW" : "user_points_rules",
                                  "DISPLAY" : "views_rules_2",
                                  "USING" : { "uid" : [ "userpoints-transaction:user:uid" ] },
                                  "ROW VARIABLES" : { "name_1" : { "name_1" : "Badge Name" } },
                                  "DO" : [
                                    { "CONDITIONAL" : [
                                        {
                                          "IF" : { "data_is" : { "data" : [ "name-1" ], "value" : "Level 1" } },
                                          "DO" : [ { "data_set" : { "data" : [ "act" ], "value" : 0 } } ]
                                        }
                                      ]
                                    }
                                  ]
                                }
                              },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "data_is" : { "data" : [ "act" ], "value" : 1 } },
                                    "DO" : [
                                      { "add_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } }
                                    ]
                                  }
                                ]
                              }
                            ]
                          }
                        },
                        { "CASE" : {
                            "USING" : { "value" : "2" },
                            "DO" : [
                              { "VIEW LOOP" : {
                                  "VIEW" : "user_points_rules",
                                  "DISPLAY" : "views_rules_2",
                                  "USING" : { "uid" : [ "userpoints-transaction:user:uid" ] },
                                  "ROW VARIABLES" : { "name_1" : { "name_1" : "Badge Name" } },
                                  "DO" : [
                                    { "CONDITIONAL" : [
                                        {
                                          "IF" : { "data_is" : { "data" : [ "name-1" ], "value" : "Level 2" } },
                                          "DO" : [ { "data_set" : { "data" : [ "act" ], "value" : 0 } } ]
                                        }
                                      ]
                                    }
                                  ]
                                }
                              },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "data_is" : { "data" : [ "act" ], "value" : 1 } },
                                    "DO" : [
                                      { "remove_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } },
                                      { "add_badge_by_name" : { "badge" : "6", "user" : [ "userpoints-transaction:user" ] } }
                                    ]
                                  }
                                ]
                              }
                            ]
                          }
                        },
                        { "CASE" : { "USING" : { "value" : "3" }, "DO" : [] } }
                      ]
                    }
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_utility_award_command_achievements'] = entity_import('rules_config', '{ "rules_utility_award_command_achievements" : {
      "LABEL" : "Utility: Award Command Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "Utility" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_1",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "count" } },
            "DO" : [
              { "data_set" : { "data" : [ "variable-added" ], "value" : [ "nid" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "value" : "1" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3297", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3298", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "19" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3299", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "29" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3300", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "39" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3301", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "49" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3335", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "74" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3336", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "99" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3337", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "124" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3338", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "149" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3339", "uid" : [ "uid" ] } }
              ]
            }
          ]
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
  $items['rules_utility_award_headhunter_achievements'] = entity_import('rules_config', '{ "rules_utility_award_headhunter_achievements" : {
      "LABEL" : "Utility: Award Headhunter Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_2",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "count" : "Count" } },
            "DO" : [
              { "data_set" : { "data" : [ "variable-added" ], "value" : [ "count" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3303", "uid" : [ "uid" ] } },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "4" } },
                      "DO" : [
                        { "component_rules_award_achievement" : { "aid" : "3304", "uid" : [ "uid" ] } },
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "9" } },
                              "DO" : [
                                { "component_rules_award_achievement" : { "aid" : "3305", "uid" : [ "uid" ] } },
                                { "CONDITIONAL" : [
                                    {
                                      "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "19" } },
                                      "DO" : [
                                        { "component_rules_award_achievement" : { "aid" : "3306", "uid" : [ "uid" ] } },
                                        { "CONDITIONAL" : [
                                            {
                                              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "29" } },
                                              "DO" : [
                                                { "component_rules_award_achievement" : { "aid" : "3307", "uid" : [ "uid" ] } }
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
      ]
    }
  }');
  $items['rules_utility_award_magehunter_achievements'] = entity_import('rules_config', '{ "rules_utility_award_magehunter_achievements" : {
      "LABEL" : "Utility: Award Magehunter Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_3",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "count" : "Count" } },
            "DO" : [
              { "data_set" : { "data" : [ "variable-added" ], "value" : [ "count" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "39" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3307", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "29" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3306", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "19" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3305", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3304", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3286", "uid" : [ "uid" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
