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
  $items['rules_articles_utility_replace_field_attach'] = entity_import('rules_config', '{ "rules_articles_utility_replace_field_attach" : {
      "LABEL" : "Articles: Utility: Replace Field Attach",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules", "rules_conditional" ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "utility_rules_replace_attached_to",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "nid" : { "nid" : "Nid" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_is_of_bundle" : {
                        "entity" : [ "entity-fetched" ],
                        "type" : "node",
                        "bundle" : { "value" : { "article" : "article" } }
                      }
                    },
                    "DO" : [
                      { "data_set" : {
                          "data" : [ "entity-fetched:field-event-link" ],
                          "value" : [ "entity-fetched:field-attach-to" ]
                        }
                      },
                      { "entity_save" : { "data" : [ "entity-fetched" ], "immediate" : 1 } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
