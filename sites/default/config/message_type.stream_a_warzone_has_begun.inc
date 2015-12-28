<?php
/**
 * @file
 * message_type.stream_a_warzone_has_begun.inc
 */

$api = '2.0.0';

$data = entity_import('message_type', '{
    "name" : "stream_a_warzone_has_begun",
    "description" : "Stream: A Warzone has begun",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E battle has commenced.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');

$dependencies = array();

$optional = array(
  'field.message.field_stream_node_ref.stream_a_warzone_has_begun' => 'field.message.field_stream_node_ref.stream_a_warzone_has_begun',
  'field.message.field_associated_nodes_stream.stream_a_warzone_has_begun' => 'field.message.field_associated_nodes_stream.stream_a_warzone_has_begun',
  'field.message.field_reply_form.stream_a_warzone_has_begun' => 'field.message.field_reply_form.stream_a_warzone_has_begun',
  'field.message.field_timeline_icon.stream_a_warzone_has_begun' => 'field.message.field_timeline_icon.stream_a_warzone_has_begun',
);

$modules = array(
  0 => 'entity',
  1 => 'message',
);
