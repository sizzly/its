<?php
/**
 * @file
 * rules_config.rules_honor_in_defeat.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_honor_in_defeat" : {
      "LABEL" : "Honor in Defeat",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievements" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "battle_id" : { "label" : "Battle", "type" : "node" },
        "user_id" : { "label" : "User", "type" : "user" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "battle-id" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "data_is" : { "data" : [ "battle-id:field-your-results" ], "value" : "5" } }
      ],
      "DO" : [
        { "component_rules_award_achievement" : { "aid" : "3313", "uid" : [ "user-id" ] } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
