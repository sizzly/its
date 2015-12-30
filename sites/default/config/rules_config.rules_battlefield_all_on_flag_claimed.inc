<?php
/**
 * @file
 * rules_config.rules_battlefield_all_on_flag_claimed.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_battlefield_all_on_flag_claimed" : {
      "LABEL" : "Battlefield: All: On Flag Claimed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "ON" : { "flag_flagged_claim_battlefield" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-node" ],
            "type" : "node",
            "bundle" : { "value" : { "location" : "location" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : { "data" : [ "flagging-user" ], "value" : [ "flagged-node:author" ] } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "user_has_role" : {
                          "account" : [ "flagged-node:author" ],
                          "roles" : { "value" : { "9" : "9" } }
                        }
                      },
                      "DO" : [
                        { "drupal_message" : {
                            "message" : "\\u003Cstrong\\u003EError\\u003C\\/strong\\u003E: This Battlefield is already owned by an Ironmonger.  If you feel this is in error please contact us at \\u003Ca href=\\u0022mailto:support@itoysoldiers.uservoice.com?subject=Cannot%20Claim%20Battlefield\\u0022\\u003Esupport@itoysoldiers.uservoice.com\\u003C\\/a\\u003E",
                            "type" : "error"
                          }
                        }
                      ]
                    },
                    { "ELSE" : [
                        { "data_set" : { "data" : [ "flagged-node:author" ], "value" : [ "flagging-user" ] } },
                        { "drupal_message" : { "message" : "\\u003Cstrong\\u003ESuccess!\\u003C\\/strong\\u003E Your claim has been made." } }
                      ]
                    }
                  ]
                }
              ]
            },
            { "ELSE" : [
                { "drupal_message" : { "message" : "\\u003Cstrong\\u003EYour Claim is Established\\u003C\\/strong\\u003E" } }
              ]
            }
          ]
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'flag',
  2 => 'rules',
  3 => 'rules_conditional',
);
