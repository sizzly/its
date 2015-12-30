<?php
/**
 * @file
 * rules_config.rules_battlefield_all_on_flag_closed.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_battlefield_all_on_flag_closed" : {
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'flag',
  2 => 'rules',
  3 => 'rules_conditional',
);
