<?php
/**
 * @file
 * rules_config.rules_message_on_referenced_battle_result.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_message_on_referenced_battle_result" : {
      "LABEL" : "Message on Referenced Battle Result",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Notifications" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "battle_id" : { "label" : "Battle Result", "type" : "node" },
        "user_id" : { "label" : "User", "type" : "user" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "battle-id" ],
            "type" : "node",
            "bundle" : { "value" : { "game_results" : "game_results" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "battle-id:field-opponent" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "battle-id:field-opponent:mail" ],
            "subject" : "[iToysoldiers] Acknowledge your battle against [battle-id:author:name]",
            "message" : "Ahoy!\\r\\n\\r\\nA battle report has been submitted by [battle-id:author:name] and you have been identified as the opponent.  Please visit [battle-id:link] to review and acknowledge the battle.\\r\\n\\r\\nThat is all.\\r\\n\\r\\niToysoldiers",
            "language" : [ "" ]
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
