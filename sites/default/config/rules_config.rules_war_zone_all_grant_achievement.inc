<?php
/**
 * @file
 * rules_config.rules_war_zone_all_grant_achievement.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_all_grant_achievement" : {
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
  2 => 'rules_conditional',
  3 => 'userpoints_rules',
);
