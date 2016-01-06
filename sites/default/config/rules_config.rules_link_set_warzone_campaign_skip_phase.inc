<?php
/**
 * @file
 * rules_config.rules_link_set_warzone_campaign_skip_phase.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_skip_phase" : {
      "LABEL" : "Rules link: Warzone: Campaign: Skip Phase rules set",
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
              { "data_set" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "11" } }
            ],
            "LABEL" : "Warzone: Campaign: Set Phase to Skipped"
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
