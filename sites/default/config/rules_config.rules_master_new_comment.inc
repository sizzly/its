<?php
/**
 * @file
 * rules_config.rules_master_new_comment.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_new_comment" : {
      "LABEL" : "Master: New Comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Comment", "Master" ],
      "REQUIRES" : [ "userpoints_rules", "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "comment" ],
            "description" : "Renown awarded for posting a comment.",
            "operation" : "Add",
            "display" : 1,
            "moderate" : "approved"
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:node:author" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "comment:node" ],
            "description" : "Your content has been replied to:  Renown awarded.",
            "operation" : "Add",
            "display" : 1,
            "moderate" : "approved"
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_comments_on_post",
              "param_user" : [ "comment:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "comment:node" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-associated-nodes-stream:0" ],
            "value" : [ "comment:node" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-message-comment-reference" ],
            "value" : [ "comment" ]
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'comment',
  2 => 'rules',
  3 => 'userpoints_rules',
);
