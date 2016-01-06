<?php
/**
 * @file
 * message_type.stream_player_acknowledges_a_battle.inc
 */

$api = '2.0.0';

$data = entity_import('message_type', '{
    "name" : "stream_player_acknowledges_a_battle",
    "description" : "Stream: Player Acknowledges a battle",
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
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E acknowledged the battle, \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.",
          "format" : "php_code"
        }
      ]
    }
  }');

$dependencies = array();

$optional = array(
  'field.message.field_stream_node_ref.stream_player_acknowledges_a_battle' => 'field.message.field_stream_node_ref.stream_player_acknowledges_a_battle',
  'field.message.field_reply_form.stream_player_acknowledges_a_battle' => 'field.message.field_reply_form.stream_player_acknowledges_a_battle',
  'field.message.field_timeline_icon.stream_player_acknowledges_a_battle' => 'field.message.field_timeline_icon.stream_player_acknowledges_a_battle',
  'field.message.field_associated_nodes_stream.stream_player_acknowledges_a_battle' => 'field.message.field_associated_nodes_stream.stream_player_acknowledges_a_battle',
);

$modules = array(
  0 => 'entity',
  1 => 'message',
);
