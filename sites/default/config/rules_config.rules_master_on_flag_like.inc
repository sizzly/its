<?php
/**
 * @file
 * rules_config.rules_master_on_flag_like.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_on_flag_like" : {
      "LABEL" : "Master: On Flag Like",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Flag" ],
      "REQUIRES" : [ "userpoints_rules", "rules", "flag" ],
      "ON" : { "flag_flagged_glory" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "flagging-user" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "flagged-node" ],
            "description" : "Flagged content as \\u0022Liked\\u0022",
            "operation" : "Add",
            "display" : 1,
            "moderate" : "approved"
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "flagged-node:author" ],
            "points" : "5",
            "tid" : "0",
            "entity" : [ "flagged-node" ],
            "description" : "[flagging-user:name] liked [flagged-node:title]",
            "operation" : "5",
            "display" : 0,
            "moderate" : "approved"
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_likes_content",
              "param_user" : [ "flagging-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "flagged-node" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
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
