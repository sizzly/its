<?php
/**
 * @file
 * rules_config.rules_war_zone_campaign_final_scoring.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_campaign_final_scoring" : {
      "LABEL" : "War Zone: Campaign: Final Scoring",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
  2 => 'rules_conditional',
  3 => 'views_rules',
);
