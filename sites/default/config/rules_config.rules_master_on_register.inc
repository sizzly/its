<?php
/**
 * @file
 * rules_config.rules_master_on_register.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_on_register" : {
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'node_registration',
  2 => 'rules',
  3 => 'userpoints_rules',
);
