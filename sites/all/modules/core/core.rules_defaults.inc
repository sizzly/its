<?php
/**
 * @file
 * core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function core_default_rules_configuration() {
  $items = array();
  $items['rules_master_renown_awarded'] = entity_import('rules_config', '{ "rules_master_renown_awarded" : {
      "LABEL" : "Master: Renown Awarded",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.2", "Renown" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "rules_conditional", "user_badges" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "userpoints-transaction:user" ],
            "roles" : { "value" : { "8" : "8" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_rules_get_current_points" : {
            "USING" : { "user" : [ "userpoints-transaction:user" ], "tid" : "0" },
            "PROVIDE" : { "loaded_points" : { "loaded_points" : "Number of renown in the specified category." } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "1" },
            "PROVIDE" : { "variable_added" : { "target_level" : "Target Level" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "loaded-points" ], "op" : "\\u003E", "value" : "1300" } },
              "DO" : [
                { "data_set" : { "data" : [ "target-level" ], "value" : "3" } },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT user_badges_has_badge" : { "badge_id" : "7", "user" : [ "userpoints-transaction:user" ] } },
                      "DO" : [
                        { "remove_badge_by_name" : { "badge" : "6", "user" : [ "userpoints-transaction:user" ] } },
                        { "add_badge_by_name" : { "badge" : "7", "user" : [ "userpoints-transaction:user" ] } },
                        { "entity_create" : {
                            "USING" : {
                              "type" : "message",
                              "param_type" : "statuses_all_new_level",
                              "param_user" : [ "userpoints-transaction:user" ]
                            },
                            "PROVIDE" : { "entity_created" : { "new_message" : "New Message" } }
                          }
                        },
                        { "data_set" : {
                            "data" : [ "new-message:field-medal-name" ],
                            "value" : "Level [target-level:value]"
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "loaded-points" ], "op" : "\\u003E", "value" : "400" } },
              "DO" : [
                { "data_set" : { "data" : [ "target-level" ], "value" : "2" } },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT user_badges_has_badge" : { "badge_id" : "6", "user" : [ "userpoints-transaction:user" ] } },
                      "DO" : [
                        { "add_badge_by_name" : { "badge" : "6", "user" : [ "userpoints-transaction:user" ] } },
                        { "remove_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } },
                        { "entity_create" : {
                            "USING" : {
                              "type" : "message",
                              "param_type" : "statuses_all_new_level",
                              "param_user" : [ "userpoints-transaction:user" ]
                            },
                            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                          }
                        },
                        { "data_set" : {
                            "data" : [ "entity-created:field-medal-name" ],
                            "value" : "Level [target-level:value]"
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "loaded-points" ], "op" : "\\u003E", "value" : "1" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT user_badges_has_badge" : { "badge_id" : "5", "user" : [ "userpoints-transaction:user" ] } },
                      "DO" : [
                        { "add_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } },
                        { "entity_create" : {
                            "USING" : {
                              "type" : "message",
                              "param_type" : "statuses_all_new_level",
                              "param_user" : [ "userpoints-transaction:user" ]
                            },
                            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                          }
                        },
                        { "data_set" : { "data" : [ "entity-created:field-medal-name" ], "value" : "Level 1" } }
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
  return $items;
}
