<?php
/**
 * @file
 * rules_config.rules_link_condition_models_all_complete_project.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_condition_models_all_complete_project" : {
      "LABEL" : "Rules link: Models: All: Complete Project condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "models" : "models" } }
          }
        },
        { "data_is_empty" : { "data" : [ "node:field-completed-date-models" ] } },
        { "data_is" : { "data" : [ "node:author" ], "value" : [ "site:current-user" ] } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
