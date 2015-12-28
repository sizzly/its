<?php
/**
 * @file
 * rules_config.rules_warzone_message_on_new_article.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_warzone_message_on_new_article" : {
      "LABEL" : "Warzone: Message on New Article",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Article", "Warzone" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "nid" : { "label" : "Article", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "nid" ],
            "type" : "node",
            "bundle" : { "value" : { "article" : "article", "gallery" : "gallery" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "nid:field-event-link" ],
            "type" : "node",
            "bundle" : { "value" : {
                "war_zone_league" : "war_zone_league",
                "narrative_campaign_instance" : "narrative_campaign_instance",
                "special_event" : "special_event",
                "war_zone_tournament" : "war_zone_tournament"
              }
            }
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "nid:field-event-link:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "warzone_link" : "Warzone Link" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : "[iToysoldiers] Message for you, sir!" },
            "PROVIDE" : { "variable_added" : { "message_title" : "Message Title" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003Cp class=\\u0022lead\\u0022 style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 21px; font-size: 18px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\n[nid:author] has added an update for the War Zone, \\u003Ca href=\\u0022[warzone-link:url]\\u0022\\u003E[warzone-link:title]\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\nView the update at \\u003Ca href=\\u0022[nid:url]\\u0022\\u003E[nid:title]\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp style=\\u0022color: #222222; font-family: \\u0027Helvetica\\u0027, \\u0027Arial\\u0027, sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;\\u0022 align=\\u0022left\\u0022\\u003E\\r\\nCarpe Acies,\\u003Cbr\\u003E\\r\\nThe iToysoldiers Equerry\\r\\n\\u003C\\/p\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "message_body" : "Message Body" } }
          }
        },
        { "component_rules_warzone_email_players" : {
            "wzid" : [ "nid:field-event-link" ],
            "message_title" : [ "message_title" ],
            "message_body" : [ "message_body" ]
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
);
