<?php
/**
 * @file
 * rules_config.rules_calculate_monthly_champion.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_calculate_monthly_champion" : {
      "LABEL" : "Calculate Monthly Champion",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user" },
            "PROVIDE" : { "variable_added" : { "winner" : "Winner" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_champion",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "uid" : { "uid" : "Content: Author uid" } },
            "DO" : [ { "data_set" : { "data" : [ "winner" ], "value" : [ "uid" ] } } ]
          }
        },
        { "schedule" : {
            "component" : "rules_calculate_monthly_champion",
            "date" : "+1 month",
            "identifier" : "Monthly"
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "achievement",
              "param_title" : "Battle Champion",
              "param_author" : "1"
            },
            "PROVIDE" : { "entity_created" : { "new_achievement" : "New Achievement" } }
          }
        },
        { "data_set" : {
            "data" : [ "new-achievement:field-achievement-category" ],
            "value" : "548"
          }
        },
        { "data_set" : { "data" : [ "new-achievement:field-achievement-unique" ], "value" : 1 } },
        { "data_set" : { "data" : [ "new-achievement:field-achievement-points" ], "value" : "5" } },
        { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "20261" } },
        { "data_set" : {
            "data" : [ "new-achievement:field-short-description" ],
            "value" : "Awarded for the highest Battle Score of the month."
          }
        },
        { "entity_save" : { "data" : [ "new-achievement" ], "immediate" : 1 } },
        { "component_rules_award_achievement" : { "aid" : [ "new-achievement" ], "uid" : [ "winner" ] } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
  2 => 'rules_scheduler',
  3 => 'views_rules',
);
