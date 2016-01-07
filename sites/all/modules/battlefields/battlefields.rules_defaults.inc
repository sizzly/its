<?php
/**
 * @file
 * battlefields.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function battlefields_default_rules_configuration() {
  $items = array();
  $items['rules_battlefield_all_on_flag_claimed'] = entity_import('rules_config', '{ "rules_battlefield_all_on_flag_claimed" : {
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
  $items['rules_battlefield_all_on_flag_closed'] = entity_import('rules_config', '{ "rules_battlefield_all_on_flag_closed" : {
      "LABEL" : "Battlefield: All: On Flag Closed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_conditional", "rules", "flag" ],
      "ON" : { "flag_flagged_battlefield_closed" : [] },
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : { "data" : [ "flagging-user" ], "value" : [ "flagged-node:author" ] } },
              "DO" : [
                { "mail" : {
                    "to" : [ "flagged-node:author:mail" ],
                    "subject" : "[iToysoldiers] Your battlefield, [flagged-node:title] has been marked closed",
                    "message" : "\\u003Cp\\u003EGreetings, [flagged-node:author:name]!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[flagging-user:name] has indicated that your battlefield, [flagged-node:title] on iToysoldiers is closed.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EIf this is accurate, then no action is required on your part. If it is not accurate then please visit the battlefield page at [flagged-node:url] and mark it open. You may also want to respond to this email and let iToysoldiers know about the error.  It\\u0027s possible that malfeasance is afoot.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ERob\\u003Cbr\\u003Eitoysoldiers.com\\u003C\\/p\\u003E",
                    "from" : "support@itoysoldiers.uservoice.com",
                    "language" : [ "" ]
                  }
                }
              ]
            }
          ]
        },
        { "mail" : {
            "to" : "support@itoysoldiers.uservoice.com",
            "subject" : "[flagged-node:title] has been marked closed by [flagging-user:name].\\r\\n",
            "message" : "\\u003Cp\\u003E[flagged-node:title] has been marked closed by [flagging-user:name].\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPlease review.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ECarpe Acies!\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ERob\\u003Cbr\\u003Eitoysoldiers.com\\u003C\\/p\\u003E",
            "from" : "[flagging-user:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
