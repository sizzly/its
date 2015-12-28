<?php
/**
 * @file
 * message_type.statuses_all_new_files.inc
 */

$api = '2.0.0';

$data = entity_import('message_type', '{
    "name" : "statuses_all_new_files",
    "description" : "Statuses: All: New Files",
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
          "value" : "\\u003Cspan\\u003E[message:user] has submitted recon photos.\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E[message:user] has submitted recon photos.\\u003C\\/span\\u003E"
        }
      ]
    }
  }');

$dependencies = array();

$optional = array(
  'field.message.field_update_reference.statuses_all_new_files' => 'field.message.field_update_reference.statuses_all_new_files',
  'field.message.field_stream_node_ref.statuses_all_new_files' => 'field.message.field_stream_node_ref.statuses_all_new_files',
  'field.message.field_reply_form.statuses_all_new_files' => 'field.message.field_reply_form.statuses_all_new_files',
  'field.message.field_timeline_icon.statuses_all_new_files' => 'field.message.field_timeline_icon.statuses_all_new_files',
  'field.message.field_associated_nodes_stream.statuses_all_new_files' => 'field.message.field_associated_nodes_stream.statuses_all_new_files',
);

$modules = array(
  0 => 'entity',
  1 => 'message',
);
