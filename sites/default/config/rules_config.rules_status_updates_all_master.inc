<?php
/**
 * @file
 * rules_config.rules_status_updates_all_master.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_status_updates_all_master" : {
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'entityform',
  2 => 'rules',
  3 => 'rules_conditional',
  4 => 'userpoints_rules',
);
