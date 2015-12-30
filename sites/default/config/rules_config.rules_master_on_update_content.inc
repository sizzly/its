<?php
/**
 * @file
 * rules_config.rules_master_on_update_content.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_on_update_content" : {
      "LABEL" : "Master: On Update Content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content", "Master" ],
      "REQUIRES" : [ "rules_conditional", "rules" ],
      "ON" : { "node_update" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "node:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "game_results" },
                  "DO" : [
                    { "component_rules_utility_award_command_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_utility_award_headhunter_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_utility_award_magehunter_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_achievement_face_to_face" : { "bid" : [ "node" ] } },
                    { "component_rules_achievements_altar_of_war" : { "bid" : [ "node" ] } },
                    { "component_rules_achievements_honoring_the_past" : { "battle_nid" : [ "node" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "game_result_system_" },
                  "DO" : [
                    { "component_rules_utility_award_command_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_utility_award_headhunter_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_utility_award_magehunter_achievements" : { "uid" : [ "node:author" ] } },
                    { "component_rules_achievement_face_to_face" : { "bid" : [ "node" ] } },
                    { "component_rules_achievements_altar_of_war" : { "bid" : [ "node" ] } },
                    { "component_rules_achievements_honoring_the_past" : { "battle_nid" : [ "node" ] } }
                  ]
                }
              }
            ]
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
  2 => 'rules_conditional',
);
