<?php
/**
 * @file
 * rules_config.rules_master_player_rates_list.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_player_rates_list" : {
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
  2 => 'userpoints_rules',
  3 => 'voting_rules',
);
