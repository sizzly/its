<?php
/**
 * @file
 * rules_config.rules_link_set_warzone_campaign_close_and_score.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_close_and_score" : {
      "LABEL" : "Rules link: Warzone: Campaign: Close and Score Phase rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "relation" ],
                  "type" : "relation",
                  "bundle" : { "value" : { "campaign_phase_instance" : "campaign_phase_instance" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "10" } },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_campaign_phase_scoring",
                  "DISPLAY" : "views_rules_1",
                  "USING" : { "field_phase_sc_target_id" : [ "relation:rid" ] },
                  "ROW VARIABLES" : { "entityform_id" : { "entityform_id" : "(Entityform Submission entity referenced from field_register_faction) Entityform submission ID" } },
                  "DO" : [
                    { "entity_fetch" : {
                        "USING" : { "type" : "entityform", "id" : [ "entityform-id" ] },
                        "PROVIDE" : { "entity_fetched" : { "victorious_faction" : "Victorious Faction" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "relation:field-victorious-faction" ],
                        "value" : [ "victorious-faction" ]
                      }
                    }
                  ]
                }
              }
            ],
            "LABEL" : "Warzone: Campaign: Close and Score"
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
