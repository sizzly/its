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
  $items['rules_events_all_on_create_event'] = entity_import('rules_config', '{ "rules_events_all_on_create_event" : {
      "LABEL" : "Events: All: On Create Event",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.5-rc1", "Events" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "node_insert--event" : { "bundle" : "event" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "event" : "event" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "node:field-enable-its-features" ], "value" : "0" } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "node:field-registration-deadline" ],
                    "value" : "now -1 day"
                  }
                },
                { "data_set" : { "data" : [ "node:field-status" ], "value" : "0" } },
                { "entity_create" : {
                    "USING" : {
                      "type" : "message",
                      "param_type" : "stream_player_posts_new_content",
                      "param_user" : [ "node:author" ]
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-stream-node-ref" ],
                    "value" : [ "node" ]
                  }
                },
                { "component_rules_status_all_get_associated_nodes" : {
                    "USING" : { "srid" : [ "node" ] },
                    "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-associated-nodes-stream" ],
                    "value" : [ "assoc-nodes" ]
                  }
                }
              ]
            },
            { "ELSE" : [
                { "data_set" : { "data" : [ "node:field-status" ], "value" : "1" } },
                { "data_set" : {
                    "data" : [ "node:field-open-registration" ],
                    "value" : [ "node:field-event-date-warzone:value" ]
                  }
                },
                { "data_set" : { "data" : [ "node:field-event-organizer" ], "value" : "1" } },
                { "mail" : {
                    "to" : [ "node:author:mail" ],
                    "subject" : "[iToysoldiers] You\\u0027re Ready To Go To War",
                    "message" : "\\u003Ch3\\u003EGreetings, [node:author:name]!\\u003C\\/h3\\u003E\\r\\n\\u003Cp\\u003EYour \\u003Cstrong\\u003E[node:field-event-type]\\u003C\\/strong\\u003E event is ready and can be viewed at [node:url] .\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour War Zone Management page is available at http:\\/\\/itoysoldiers.com\\/node\\/[node:nid]\\/management .\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis War Zone, as well as any others, can also be accessed from your Dashboard at http:\\/\\/itoysoldiers.com\\/dashboard.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ETo help you have a successful war zone, please take a moment to review these tips before promoting your campaign to players:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EFirst, your war zone starts in \\u003Cstrong\\u003ESetup\\u003C\\/strong\\u003E mode.  In this mode, players cannot register for your event.  This gives you an opportunity to ensure that you are happy with all of the settings before making it live.  Once you\\u2019re happy with it, you can visit your WarZone Management page and click \\u201cOpen War Zone\\u201d.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ESecond, if you select \\u0022Automatic\\u0022 for scheduling, your war zone will automatically start on the date that you indicate on the Date field. There is no action required on your part. If you have selected \\u0022Manual\\u0022 then you will need to start and complete the war zone from the management page.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ELastly, if you have any questions, comments, requests or anything do not hesitate to reach out.  The super friendly iToysoldiers team (that\\u2019d be me) is always ready to help you out.  The best way to reach us is here:  http:\\/\\/help.itoysoldiers.com\\/.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003E\\r\\nRob\\u003Cbr\\u003E\\r\\niToysoldiers.com\\u003C\\/p\\u003E",
                    "language" : [ "" ]
                  }
                }
              ]
            }
          ]
        },
        { "entity_save" : { "data" : [ "node" ], "immediate" : "1" } }
      ]
    }
  }');
  return $items;
}
