<?php
/**
 * @file
 * rules_config.rules_achievements_altar_of_war.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_achievements_altar_of_war" : {
      "LABEL" : "Achievements: Altar of War",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievements" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "game_results" : "game_results",
                "game_result_system_" : "game_result_system_"
              }
            }
          }
        }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_anniversary",
            "DISPLAY" : "views_rules_2",
            "USING" : {
              "term_node_tid_depth" : [ "bid:field-your-army:tid" ],
              "term_node_tid_depth_1" : [ "bid:field-opponent-s-army:tid" ],
              "term_node_tid_depth_2" : [ "bid:field-mission:tid" ]
            },
            "ROW VARIABLES" : { "nid" : { "nid" : "Content: Nid" } },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "component_rules_award_achievement" : { "aid" : [ "entity-fetched" ], "uid" : [ "bid:author" ] } }
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
  2 => 'views_rules',
);
