<?php
/**
 * @file
 * rules_config.rules_link_set_warzone_campaign_open_phase.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_warzone_campaign_open_phase" : {
      "LABEL" : "Rules link: Warzone: Campaign: Open Phase rules set",
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
              },
              { "entity_is_of_bundle" : {
                  "entity" : [ "relation:endpoints:0" ],
                  "type" : "node",
                  "bundle" : { "value" : { "narrative_campaign_instance" : "narrative_campaign_instance" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "5" } }
            ],
            "LABEL" : "Warzone: Campaign: Open Phase"
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
