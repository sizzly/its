<?php
/**
 * @file
 * its_galleries.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_galleries_default_rules_configuration() {
  $items = array();
  $items['rules_galleries_utility_replace_category_field'] = entity_import('rules_config', '{ "rules_galleries_utility_replace_category_field" : {
      "LABEL" : "Galleries: Utility: Replace Category field",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Utility" ],
      "REQUIRES" : [ "views_rules", "rules", "rules_conditional" ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "galleries_all_lists",
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
                        "bundle" : { "value" : { "gallery" : "gallery" } }
                      }
                    },
                    "DO" : [
                      { "data_set" : {
                          "data" : [ "entity-fetched:field-blog-army" ],
                          "value" : [ "entity-fetched:field-armies" ]
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
