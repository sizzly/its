<?php
/**
 * @file
 * battle_reports.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function battle_reports_default_rules_configuration() {
  $items = array();
  $items['rules_status_quick_battle_submission'] = entity_import('rules_config', '{ "rules_status_quick_battle_submission" : {
      "LABEL" : "Status: Quick Battle Submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Release 4.0" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "quick_battle" : "quick_battle" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : "[site:current-date] [entityform:field-your-army] vs [entityform:field-opponent-s-army]",
              "param_author" : [ "entityform:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-location" ],
            "value" : [ "entityform:field-location" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-game-date" ], "value" : "now" } },
        { "data_set" : {
            "data" : [ "entity-created:field-your-army" ],
            "value" : [ "entityform:field-your-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-opponent-s-army" ],
            "value" : [ "entityform:field-opponent-s-army" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-your-results" ],
            "value" : [ "entityform:field-your-results" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
      ]
    }
  }');
  return $items;
}
