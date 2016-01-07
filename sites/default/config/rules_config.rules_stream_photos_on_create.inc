<?php
/**
 * @file
 * rules_config.rules_stream_photos_on_create.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_stream_photos_on_create" : {
      "LABEL" : "Stream: Photos: On Create",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "userpoints_rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "status_all_upload_image" : "status_all_upload_image" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "entityform:user" ],
            "points" : "2",
            "tid" : "0",
            "entity" : [ "entityform" ],
            "description" : "Uploading photos.",
            "operation" : "Add",
            "display" : "0",
            "moderate" : "approved"
          }
        },
        { "component_rules_status_all_get_associated_nodes" : {
            "USING" : { "srid" : [ "entityform:field-status-content-reference" ] },
            "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "statuses_all_new_files",
              "param_user" : [ "entityform:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "entityform:field-status-content-reference" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-associated-nodes-stream" ],
            "value" : [ "assoc-nodes" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-update-reference" ],
            "value" : [ "entityform" ]
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
  3 => 'userpoints_rules',
);
