<?php
/**
 * @file
 * rules_config.rules_warzone_email_players.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_warzone_email_players" : {
      "LABEL" : "Warzone: Email Players",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "wzid" : { "label" : "Warzone", "type" : "node" },
        "message_title" : { "label" : "Title", "type" : "text" },
        "message_body" : { "label" : "Body", "type" : "text" }
      },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "war_zone_email_player_rules",
            "DISPLAY" : "views_rules_1",
            "USING" : { "nid" : [ "wzid:nid" ] },
            "ROW VARIABLES" : {
              "email" : { "email" : "E-mail" },
              "field_register_real_name" : { "field_register_real_name" : "Real Name" }
            },
            "DO" : [
              { "mail" : {
                  "to" : [ "email" ],
                  "subject" : [ "message-title" ],
                  "message" : "\\u003Ch1 style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 1.3; word-break: normal; font-size: 40px; margin: 0; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003EAhoy, [field-register-real-name:value]!\\u003C\\/h1\\u003E\\r\\n\\r\\n[message-body:value]",
                  "language" : [ "" ]
                }
              }
            ]
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
  2 => 'views_rules',
);
