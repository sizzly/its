<?php
/**
 * @file
 * rules_config.rules_link_condition_warzone_campaign_open_phase.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_condition_warzone_campaign_open_phase" : {
      "LABEL" : "Rules link: Warzone: Campaign: Open Phase condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "relation" : { "type" : "relation", "label" : "relation" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "relation" ],
            "type" : "relation",
            "bundle" : { "value" : { "campaign_phase_instance" : "campaign_phase_instance" } }
          }
        },
        { "data_is" : { "data" : [ "relation:field-phase-state-narrative" ], "value" : "0" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
