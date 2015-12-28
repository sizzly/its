<?php
/**
 * @file
 * rules_config.rules_link_set_warzone_campaign_launch_instance.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "new_instance" : "New Instance" } },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "narrative_campaign" : "narrative_campaign" } }
                }
              }
            ],
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "narrative_campaign_instance",
                    "param_title" : "[node:title]",
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
              { "data_set" : {
                  "data" : [ "new-instance:field-game-warzone" ],
                  "value" : [ "node:field-game-warzone" ]
                }
              },
              { "entity_save" : { "data" : [ "new-instance" ], "immediate" : 1 } },
              { "redirect" : { "url" : "[new-instance:edit-url]" } }
            ],
            "LABEL" : "Create Campaign Instance"
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
);
