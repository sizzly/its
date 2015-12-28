<?php
/**
 * @file
 * rules_config.rules_on_acknowledge_battle.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_on_acknowledge_battle" : {
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
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'flag',
  2 => 'rules',
  3 => 'userpoints_rules',
);
