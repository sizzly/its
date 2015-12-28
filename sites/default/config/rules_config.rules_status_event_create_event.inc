<?php
/**
 * @file
 * rules_config.rules_status_event_create_event.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_status_event_create_event" : {
      "LABEL" : "Status: Event: Create Event",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Statuses 1.0" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "sid" : { "label" : "Status", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "sid" ],
            "type" : "entityform",
            "bundle" : { "value" : { "status_event_create_event" : "status_event_create_event" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "special_event",
              "param_title" : [ "sid:field-event-name" ],
              "param_author" : [ "sid:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:body" ],
            "value" : [ "sid:field-desc-event-status" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-location" ],
            "value" : [ "sid:field-battlefield-status" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-campaign-badge" ],
            "value" : [ "sid:field-campaign-badge-status" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-event-date:0" ],
            "value" : [ "sid:field-date-and-time" ]
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
