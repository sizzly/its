<?php
/**
 * @file
 * narrative_campaign.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function narrative_campaign_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_warzone_campaign_launch_instance'] = entity_import('rules_config', '{ "rules_link_condition_warzone_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "narrative_campaign" : "narrative_campaign" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_set_warzone_campaign_launch_instance'] = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : { "timestamp" : "Timestamp" },
              "entity_created" : { "new_instance" : "New Instance" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "narrative_campaign" : "narrative_campaign" } }
                }
              }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : {
                    "type" : "text",
                    "value" : "\\u003C?php\\r\\n$time = strtotime(\\u0027now\\u0027);\\r\\necho $time;\\r\\n?\\u003E"
                  },
                  "PROVIDE" : { "variable_added" : { "timestamp" : "Timestamp" } }
                }
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "narrative_campaign_instance",
                    "param_title" : "[node:title]: inst [timestamp:value]",
                    "param_author" : [ "site:current-user" ]
                  },
                  "PROVIDE" : { "entity_created" : { "new_instance" : "New Instance" } }
                }
              },
              { "data_set" : { "data" : [ "new-instance:field-event-link" ], "value" : [ "node" ] } },
              { "data_set" : {
                  "data" : [ "new-instance:field-campaign-badge" ],
                  "value" : [ "node:field-campaign-badge" ]
                }
              },
              { "data_set" : { "data" : [ "new-instance:field-status" ], "value" : "0" } },
              { "entity_save" : { "data" : [ "new-instance" ], "immediate" : 1 } },
              { "redirect" : { "url" : "[new-instance:edit-url]" } }
            ],
            "LABEL" : "Create Campaign Instance"
          }
        }
      ]
    }
  }');
  $items['rules_master_on_save_existing_entityform'] = entity_import('rules_config', '{ "rules_master_on_save_existing_entityform" : {
      "LABEL" : "Master: on save existing entityform",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Entityform", "Master" ],
      "REQUIRES" : [ "rules_conditional", "rules", "entityform" ],
      "ON" : { "entityform_update" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "entityform:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "warzone_campaign_phase" },
                  "DO" : [ { "redirect" : { "url" : [ "entityform:field-event-link:url" ] } } ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "warzone_campaign_factions" },
                  "DO" : [ { "redirect" : { "url" : [ "entityform:field-event-link:url" ] } } ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
