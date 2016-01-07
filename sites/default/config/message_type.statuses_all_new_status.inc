<?php
/**
 * @file
 * message_type.statuses_all_new_status.inc
 */

$api = '2.0.0';

$data = entity_import('message_type', '{
    "name" : "statuses_all_new_status",
    "description" : "Statuses: All: New Status",
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
          "value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E says...\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E says...\\u003C\\/span\\u003E"
        }
      ]
    }
  }');

$dependencies = array();

$optional = array(
  'field.message.field_update_reference.statuses_all_new_status' => 'field.message.field_update_reference.statuses_all_new_status',
  'field.message.field_timeline_icon.statuses_all_new_status' => 'field.message.field_timeline_icon.statuses_all_new_status',
  'field.message.field_stream_node_ref.statuses_all_new_status' => 'field.message.field_stream_node_ref.statuses_all_new_status',
);

$modules = array(
  0 => 'entity',
  1 => 'message',
);
