<?php
/**
 * @file
 * message_type.war_zone_all_new_round_message.inc
 */

$api = '2.0.0';

$data = entity_import('message_type', '{
    "name" : "war_zone_all_new_round_message",
    "description" : "War Zone: All: New Round Message",
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
          "value" : "A new round has begun for \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');

$dependencies = array();

$optional = array(
  'field.message.field_stream_node_ref.war_zone_all_new_round_message' => 'field.message.field_stream_node_ref.war_zone_all_new_round_message',
  'field.message.field_associated_nodes_stream.war_zone_all_new_round_message' => 'field.message.field_associated_nodes_stream.war_zone_all_new_round_message',
  'field.message.field_timeline_icon.war_zone_all_new_round_message' => 'field.message.field_timeline_icon.war_zone_all_new_round_message',
  'field.message.field_reply_form.war_zone_all_new_round_message' => 'field.message.field_reply_form.war_zone_all_new_round_message',
);

$modules = array(
  0 => 'entity',
  1 => 'message',
);
