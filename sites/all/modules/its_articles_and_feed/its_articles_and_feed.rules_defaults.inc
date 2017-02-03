<?php
/**
 * @file
 * its_articles_and_feed.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_articles_and_feed_default_rules_configuration() {
  $items = array();
  $items['rules_articles_all_create_new_article'] = entity_import('rules_config', '{ "rules_articles_all_create_new_article" : {
      "LABEL" : "Articles: All: Create New Article",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--article" : { "bundle" : "article" } },
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
        { "data_set" : {
            "data" : [ "entity-created:field-timeline-icon" ],
            "value" : "fa-newspaper-o"
          }
        }
      ]
    }
  }');
  return $items;
}
