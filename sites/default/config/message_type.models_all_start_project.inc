<?php
/**
 * @file
 * message_type.models_all_start_project.inc
 */

$api = '2.0.0';

$data = entity_import('message_type', '{
    "name" : "models_all_start_project",
    "description" : "Models: All: Start Project",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Cspan\\u003E[message:user] has started \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E[message:user] has started \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        }
      ]
    }
  }');

$dependencies = array();

$optional = array(
  'field.message.field_update_reference.models_all_start_project' => 'field.message.field_update_reference.models_all_start_project',
  'field.message.field_stream_node_ref.models_all_start_project' => 'field.message.field_stream_node_ref.models_all_start_project',
  'field.message.field_associated_nodes_stream.models_all_start_project' => 'field.message.field_associated_nodes_stream.models_all_start_project',
  'field.message.field_timeline_icon.models_all_start_project' => 'field.message.field_timeline_icon.models_all_start_project',
);

$modules = array(
  0 => 'entity',
  1 => 'message',
);
