<?php
/**
 * @file
 * rules_config.rules_link_set_models_all_start_project.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_models_all_start_project" : {
      "LABEL" : "Rules link: Models: All: Start Project rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "userpoints_rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "entity_created" : { "entity_created" : "Created entity" },
              "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "models" : "models" } }
                }
              }
            ],
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is_empty" : { "data" : [ "node:field-started-date-models" ] } },
                    "DO" : [
                      { "data_set" : {
                          "data" : [ "node:field-started-date-models" ],
                          "value" : [ "site:current-date" ]
                        }
                      }
                    ]
                  }
                ]
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "models_all_start_project",
                    "param_user" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-stream-node-ref" ],
                  "value" : [ "node" ]
                }
              },
              { "component_rules_status_all_get_associated_nodes" : {
                  "USING" : { "srid" : [ "node" ] },
                  "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                }
              },
              { "data_set" : {
                  "data" : [ "entity-created:field-associated-nodes-stream" ],
                  "value" : [ "assoc-nodes" ]
                }
              },
              { "userpoints_action_grant_points" : {
                  "user" : [ "node:author" ],
                  "points" : "1",
                  "tid" : "0",
                  "entity" : [ "node" ],
                  "description" : "Awarded for starting a modeling project.",
                  "operation" : "Add",
                  "display" : "0",
                  "moderate" : "approved"
                }
              }
            ],
            "LABEL" : "Models: All: Start Project Mechanics"
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
  2 => 'rules_conditional',
  3 => 'userpoints_rules',
);
