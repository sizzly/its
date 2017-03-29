<?php
/**
 * @file
 * events.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function events_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_war_zone_all_cancel_event'] = entity_import('rules_config', '{ "rules_link_condition_war_zone_all_cancel_event" : {
      "LABEL" : "Rules link: War Zone: All: Cancel Event condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "event" : "event" } }
          }
        },
        { "data_is" : {
            "data" : [ "node:field-status" ],
            "op" : "IN",
            "value" : { "value" : { "1" : "1", "3" : "3", "5" : "5" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_set_war_zone_all_cancel_event'] = entity_import('rules_config', '{ "rules_link_set_war_zone_all_cancel_event" : {
      "LABEL" : "Rules link: War Zone: All: Cancel Event rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "event" : "event" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-status" ], "value" : "15" } },
              { "component_rules_warzone_email_players" : {
                  "wzid" : [ "node" ],
                  "message_title" : "[iToysoldiers] [wzid:title] Cancelled",
                  "message_body" : "\\u003Cp\\u003EAhoy, commander!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe event, [wzid:title] has been \\u003Cstrong\\u003Ecancelled\\u003C\\/strong\\u003E as of [site:current-date].\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions about the ramifications of this cancellation, please contact the event organizer.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E"
                }
              },
              { "VIEW LOOP" : {
                  "VIEW" : "war_zone_email_player_rules",
                  "DISPLAY" : "views_rules_6",
                  "USING" : { "nid" : [ "node:nid" ] },
                  "ROW VARIABLES" : { "registration_id" : { "registration_id" : "Registration ID" } },
                  "DO" : [
                    { "entity_fetch" : {
                        "USING" : { "type" : "node_registration", "id" : [ "registration-id" ] },
                        "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                      }
                    },
                    { "data_set" : { "data" : [ "entity-fetched:attended" ], "value" : "0" } },
                    { "entity_save" : { "data" : [ "entity-fetched" ], "immediate" : "1" } }
                  ]
                }
              }
            ],
            "LABEL" : "War Zone: All: Cancel Event"
          }
        }
      ]
    }
  }');
  return $items;
}
