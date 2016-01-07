<?php
/**
 * @file
 * rules_config.rules_utility_award_doctrine.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_utility_award_doctrine" : {
      "LABEL" : "Utility: Award Doctrine",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User Id", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "blog_count" : "Blog Count" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_6",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "Count" } },
            "DO" : [ { "data_set" : { "data" : [ "blog-count" ], "value" : [ "nid" ] } } ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4308", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "4" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4309", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4310", "uid" : [ "uid" ] } }
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
