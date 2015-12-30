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
  $items['rules_link_condition_campaign_launch_instance'] = entity_import('rules_config', '{ "rules_link_condition_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : []
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
        },
        { "data_is" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "5" } }
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
  $items['rules_link_set_warzone_campaign_close_and_score'] = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_close_and_score" : {
      "LABEL" : "Rules link: Warzone: Campaign: Close and Score Phase rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules" ],
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
              { "data_set" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "10" } },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_campaign_phase_scoring",
                  "DISPLAY" : "views_rules_1",
                  "USING" : { "field_phase_sc_target_id" : [ "relation:rid" ] },
                  "ROW VARIABLES" : { "entityform_id" : { "entityform_id" : "(Entityform Submission entity referenced from field_register_faction) Entityform submission ID" } },
                  "DO" : [
                    { "entity_fetch" : {
                        "USING" : { "type" : "entityform", "id" : [ "entityform-id" ] },
                        "PROVIDE" : { "entity_fetched" : { "victorious_faction" : "Victorious Faction" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "relation:field-victorious-faction" ],
                        "value" : [ "victorious-faction" ]
                      }
                    }
                  ]
                }
              }
            ],
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
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "new_instance" : "New Instance" } },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "narrative_campaign" : "narrative_campaign" } }
                }
              }
            ],
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "narrative_campaign_instance",
                    "param_title" : "[node:title]",
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
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "relation:endpoints:0" ],
                  "type" : "node",
                  "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "5" } }
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
  $items['rules_war_zone_campaign_add_points'] = entity_import('rules_config', '{ "rules_war_zone_campaign_add_points" : {
      "LABEL" : "War Zone: Campaign: Add Points",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "points" : { "label" : "Points", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "points" ],
            "type" : "entityform",
            "bundle" : { "value" : { "war_zone_campaign_add_points" : "war_zone_campaign_add_points" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "points:field-event-link" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "entityform",
              "param_type" : "score_card",
              "param_created" : "now",
              "param_user" : [ "points:field-event-link:author" ]
            },
            "PROVIDE" : { "entity_created" : { "scorecard" : "scorecard" } }
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-event-link" ],
            "value" : [ "points:field-event-link" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-registration-sc" ],
            "value" : [ "points:field-registration-sc" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-explanation-sc" ],
            "value" : [ "points:field-explanation-sc" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-additional-points-sc" ],
            "value" : [ "points:field-points-to-award" ]
          }
        },
        { "data_set" : {
            "data" : [ "scorecard:field-phase-sc" ],
            "value" : [ "points:field-phase-sc" ]
          }
        },
        { "data_set" : { "data" : [ "scorecard:field-state-sc" ], "value" : "40" } }
      ]
    }
  }');
  $items['rules_war_zone_campaign_final_scoring'] = entity_import('rules_config', '{ "rules_war_zone_campaign_final_scoring" : {
      "LABEL" : "War Zone: Campaign: Final Scoring",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "wzid" : { "label" : "War Zone ID", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "wzid" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
          }
        }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_campaign_instance_phase_scoring",
            "DISPLAY" : "views_rules_3",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "rid" : { "rid" : "Rid" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "relation", "id" : [ "rid" ] },
                  "PROVIDE" : { "entity_fetched" : { "relation_to_skip" : "relation to skip" } }
                }
              },
              { "component_rules_link_set_warzone_campaign_skip_phase" : { "relation" : [ "relation-to-skip" ] } }
            ]
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_campaign_instance_phase_scoring",
            "DISPLAY" : "views_rules_2",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : { "rid" : { "rid" : "Rid" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "relation", "id" : [ "rid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "component_rules_link_set_warzone_campaign_close_and_score" : { "relation" : [ "entity-fetched" ] } }
            ]
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "entityform", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "vfid" : "Victorious Faction ID" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_campaign_instance_phase_scoring",
            "DISPLAY" : "views_rules_1",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "field_title_chronicle_1" : { "field_title_chronicle_1" : "Name" },
              "entityform_id" : { "entityform_id" : "Faction ID" }
            },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "entityform", "id" : [ "entityform-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "data_set" : { "data" : [ "vfid" ], "value" : [ "entity-fetched" ] } }
            ]
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "achievement",
              "param_title" : "[wzid:title]: Victory!",
              "param_author" : "1"
            },
            "PROVIDE" : { "entity_created" : { "achievement" : "achievement" } }
          }
        },
        { "data_set" : {
            "data" : [ "achievement:field-image" ],
            "value" : [ "wzid:field-campaign-badge" ]
          }
        },
        { "data_set" : { "data" : [ "achievement:field-event-link" ], "value" : [ "wzid" ] } },
        { "data_set" : {
            "data" : [ "achievement:field-achievement-category" ],
            "value" : "1146"
          }
        },
        { "data_set" : { "data" : [ "achievement:field-achievement-points" ], "value" : "3" } },
        { "entity_save" : { "data" : [ "achievement" ], "immediate" : 1 } },
        { "data_set" : {
            "data" : [ "wzid:field-victor-narrative" ],
            "value" : "[vfid:field-title-chronicle]"
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_3",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "email" : { "email" : "E-mail" },
              "uid" : { "uid" : "User uid" },
              "entityform_id" : { "player_faction_id" : "Faction ID" }
            },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "player-faction-id" ], "value" : [ "vfid:entityform-id" ] } },
                    "DO" : [
                      { "entity_fetch" : {
                          "USING" : { "type" : "user", "id" : [ "uid" ] },
                          "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                        }
                      },
                      { "component_rules_award_achievement" : { "aid" : [ "achievement" ], "uid" : [ "entity-fetched" ] } }
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
              "param_type" : "campaign_reported_battle",
              "param_user" : [ "wzid:author" ]
            },
            "PROVIDE" : { "entity_created" : { "message" : "Message" } }
          }
        },
        { "data_set" : {
            "data" : [ "message:field-title-chronicle" ],
            "value" : "[vfid:field-title-chronicle] Victory!"
          }
        },
        { "data_set" : { "data" : [ "message:field-stream-node-ref" ], "value" : [ "wzid" ] } },
        { "data_set" : { "data" : [ "message:field-chronicle-icon" ], "value" : "star" } },
        { "data_set" : {
            "data" : [ "message:arguments:messtext" ],
            "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003E[vfid:field-title-chronicle]\\u003C\\/strong\\u003E have proven victorious and have won the campaign.\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_wz_all_create_battle_report_from_form'] = entity_import('rules_config', '{ "rules_wz_all_create_battle_report_from_form" : {
      "LABEL" : "WZ: All: Create Battle Report from Form",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "p1" : { "label" : "P1", "type" : "user" },
        "p1_result" : { "label" : "P1 Result", "type" : "integer" },
        "p1_army" : { "label" : "P1 Army", "type" : "taxonomy_term" },
        "p2_army" : { "label" : "P2 Army", "type" : "taxonomy_term" },
        "wzid" : { "label" : "War Zone", "type" : "node" },
        "title" : { "label" : "Title", "type" : "text" },
        "brid" : { "label" : "Battle Report", "type" : "node", "parameter" : false }
      },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : [ "title" ],
              "param_author" : [ "p1" ]
            },
            "PROVIDE" : { "entity_created" : { "battle_report" : "Battle Report" } }
          }
        },
        { "data_set" : { "data" : [ "battle-report:field-game-date" ], "value" : "now" } },
        { "data_set" : { "data" : [ "battle-report:field-your-army" ], "value" : [ "p1-army" ] } },
        { "data_set" : {
            "data" : [ "battle-report:field-opponent-s-army" ],
            "value" : [ "p2-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "battle-report:field-your-results" ],
            "value" : [ "p1-result" ]
          }
        },
        { "data_set" : { "data" : [ "battle-report:field-event-link" ], "value" : [ "wzid" ] } },
        { "entity_save" : { "data" : [ "battle-report" ], "immediate" : 1 } },
        { "data_set" : { "data" : [ "brid" ], "value" : [ "battle-report" ] } }
      ],
      "PROVIDES VARIABLES" : [ "brid" ]
    }
  }');
  return $items;
}
