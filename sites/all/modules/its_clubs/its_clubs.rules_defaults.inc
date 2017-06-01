<?php
/**
 * @file
 * its_clubs.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_clubs_default_rules_configuration() {
  $items = array();
  $items['rules_groups_all_when_a_player_signs_up'] = entity_import('rules_config', '{ "rules_groups_all_when_a_player_signs_up" : {
      "LABEL" : "Groups: All: When a Player Signs up",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "1" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "mail" : {
            "to" : [ "group:author:mail" ],
            "subject" : "[iToysoldiers] [account:name] joined [group:title]",
            "message" : "\\u003Ch3\\u003EAhoy, [group:author:name]!\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E[account:name]\\u003C\\/strong\\u003E joined [group:title].\\r\\n    \\r\\n\\u003Cp\\u003E Manage your group at [group:url]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "[iToysoldiers] [group:tile] Membership",
            "message" : "\\u003Ch3\\u003EAhoy, [account:name]!\\u003C\\/h3\\u003E\\r\\n\\u003Cp\\u003EYou are now a member of [group:tile].\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EStay up to date with what\\u0027s going on at [group:url]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E Manage your group at [group:url]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003Cbr\\u003EThe iToysoldiers Team\\u003C\\/p\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
