<?php
/**
 * @file
 * message_type.stream_player_comments_on_post.inc
 */

$api = '2.0.0';

$data = entity_import('message_type', '{
    "name" : "stream_player_comments_on_post",
    "description" : "Stream: Player Comments on Post",
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
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E commented on \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]#posts\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "pure_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E commented on \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]#posts\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\n"
        }
      ]
    }
  }');

$dependencies = array();

$optional = array(
  'field.message.field_stream_node_ref.stream_player_comments_on_post' => 'field.message.field_stream_node_ref.stream_player_comments_on_post',
  'field.message.field_associated_nodes_stream.stream_player_comments_on_post' => 'field.message.field_associated_nodes_stream.stream_player_comments_on_post',
  'field.message.field_timeline_icon.stream_player_comments_on_post' => 'field.message.field_timeline_icon.stream_player_comments_on_post',
  'field.message.field_message_comment_reference.stream_player_comments_on_post' => 'field.message.field_message_comment_reference.stream_player_comments_on_post',
);

$modules = array(
  0 => 'entity',
  1 => 'message',
);
