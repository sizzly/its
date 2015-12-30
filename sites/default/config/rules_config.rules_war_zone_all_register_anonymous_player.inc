<?php
/**
 * @file
 * rules_config.rules_war_zone_all_register_anonymous_player.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_all_register_anonymous_player" : {
      "LABEL" : "War Zone: All: Register Anonymous Player",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "War Zone 4.1" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "form_id" : { "label" : "Form", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "form-id" ],
            "type" : "entityform",
            "bundle" : { "value" : { "war_zone_all_register_anonymous_" : "war_zone_all_register_anonymous_" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "node_registration" },
            "PROVIDE" : { "entity_created" : { "registration_created" : "Created Registration" } }
          }
        },
        { "data_set" : {
            "data" : [ "registration-created:email" ],
            "value" : [ "form-id:field-player-email-registration" ]
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
