<?php
/**
 * @file
 * rules_config.rules_on_update_battle_results.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_on_update_battle_results" : {
      "LABEL" : "On Update Battle Results",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_game_reference",
              "value" : [ "node" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "component_rules_update_game_result" : {
            "battle_result_changed" : [ "node" ],
            "game_container_modify" : [ "entity-fetched:0" ]
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
