<?php
/**
 * @file
 * rules_config.rules_war_zone_all_create_battle_from_wz_form.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_all_create_battle_from_wz_form" : {
      "LABEL" : "War Zone: All: Create Battle from WZ form",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "p1" : { "label" : "Player 1", "type" : "user" },
        "p1_results" : { "label" : "Results", "type" : "integer" },
        "brid" : { "label" : "Battle", "type" : "node", "parameter" : false },
        "wzid" : { "label" : "War Zone", "type" : "node" }
      },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "game_results",
              "param_title" : "Test",
              "param_author" : [ "p1" ]
            },
            "PROVIDE" : { "entity_created" : { "battle" : "Battle" } }
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "brid" ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
