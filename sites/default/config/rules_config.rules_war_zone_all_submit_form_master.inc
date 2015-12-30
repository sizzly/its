<?php
/**
 * @file
 * rules_config.rules_war_zone_all_submit_form_master.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_all_submit_form_master" : {
      "LABEL" : "War Zone: All: Submit Form Master",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_conditional", "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "entityform:type:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "war_zone_all_generate_article" },
                  "DO" : [
                    { "component_rules_warzone_all_generate_article" : { "submission" : [ "entityform" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_campaign_add_points" },
                  "DO" : [
                    { "component_rules_war_zone_campaign_add_points" : { "points" : [ "entityform" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_grant_achievement" },
                  "DO" : [
                    { "component_rules_war_zone_all_grant_achievement" : { "efid" : [ "entityform" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "warzone_campaign_report_battle_p" },
                  "DO" : [
                    { "component_rules_war_zone_campaign_report_battle" : { "efid" : [ "entityform" ] } }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "war_zone_all_register_anonymous_" }, "DO" : [] } }
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
  1 => 'entityform',
  2 => 'rules',
  3 => 'rules_conditional',
);
