<?php
/**
 * @file
 * rules_config.rules_master_cancel_registration.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_cancel_registration" : {
      "LABEL" : "Master: Cancel Registration",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone" ],
      "REQUIRES" : [ "rules", "node_registration" ],
      "ON" : { "node_registration_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "node-registration:cancelled" ], "value" : 1 } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_cancels_registration_for_warzone",
              "param_user" : [ "node-registration:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "node-registration:node" ]
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'node_registration',
  2 => 'rules',
);
