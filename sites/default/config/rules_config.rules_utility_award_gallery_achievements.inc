<?php
/**
 * @file
 * rules_config.rules_utility_award_gallery_achievements.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_utility_award_gallery_achievements" : {
      "LABEL" : "Utility: Award gallery Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "gallery_count" : "Gallery Count" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_5",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "(nodes) COUNT(Content: Nid)" } },
            "DO" : [ { "data_set" : { "data" : [ "gallery-count" ], "value" : [ "nid" ] } } ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "19" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3321", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "14" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3320", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3319", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "4" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3318", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3317", "uid" : [ "uid" ] } }
              ]
            }
          ]
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
  3 => 'views_rules',
);
