<?php
/**
 * @file
 * blogs.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function blogs_default_rules_configuration() {
  $items = array();
  $items['rules_gazetteer_forums_create_new_discussion'] = entity_import('rules_config', '{ "rules_gazetteer_forums_create_new_discussion" : {
      "LABEL" : "Gazetteer: Forums: Create New Discussion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.2", "Discussions", "Gazetteer" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : { "node_insert--forum" : { "bundle" : "forum" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_posts_new_content",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "node" ]
          }
        },
        { "component_rules_status_all_get_associated_nodes" : {
            "USING" : { "srid" : [ "node" ] },
            "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-associated-nodes-stream" ],
            "value" : [ "assoc-nodes" ]
          }
        },
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "node" ],
            "description" : "Renown added for posting a discussion.",
            "operation" : "Add",
            "display" : "0",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  return $items;
}
