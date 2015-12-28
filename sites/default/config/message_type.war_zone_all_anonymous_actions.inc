<?php
/**
 * @file
 * message_type.war_zone_all_anonymous_actions.inc
 */

$api = '2.0.0';

$data = entity_import('message_type', '{
    "name" : "war_zone_all_anonymous_actions",
    "description" : "War Zone: All: Anonymous Actions",
    "argument_keys" : [ "!messtxt" ],
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
          "value" : "!messtxt",
          "format" : "pure_html",
          "safe_value" : "!messtxt"
        }
      ]
    }
  }');

$dependencies = array();

$optional = array(
  'field.message.field_stream_node_ref.war_zone_all_anonymous_actions' => 'field.message.field_stream_node_ref.war_zone_all_anonymous_actions',
  'field.message.field_associated_nodes_stream.war_zone_all_anonymous_actions' => 'field.message.field_associated_nodes_stream.war_zone_all_anonymous_actions',
  'field.message.field_timeline_icon.war_zone_all_anonymous_actions' => 'field.message.field_timeline_icon.war_zone_all_anonymous_actions',
  'field.message.field_reply_form.war_zone_all_anonymous_actions' => 'field.message.field_reply_form.war_zone_all_anonymous_actions',
);

$modules = array(
  0 => 'entity',
  1 => 'message',
);
