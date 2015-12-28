<?php
/**
 * @file
 * rules_config.rules_award_achievement.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_award_achievement" : {
      "LABEL" : "Utility: Award Achievement",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "Utility" ],
      "REQUIRES" : [ "rules", "rules_conditional", "userpoints_rules", "privatemsg_rules" ],
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'privatemsg_rules',
  2 => 'rules',
  3 => 'rules_conditional',
  4 => 'userpoints_rules',
  5 => 'views_rules',
);
