<?php
/**
 * @file
 * core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function core_default_rules_configuration() {
  $items = array();
  $items['rules_core_after_saving_new_message'] = entity_import('rules_config', '{ "rules_core_after_saving_new_message" : {
      "LABEL" : "Core: After Saving New Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.6", "Core" ],
      "REQUIRES" : [ "rules", "message" ],
      "ON" : { "message_insert" : [] },
      "DO" : [
        { "component_rules_achievements_grind_of_war" : { "uid" : [ "message:user" ] } }
      ]
    }
  }');
  $items['rules_core_all_generate_message_for_new_content'] = entity_import('rules_config', '{ "rules_core_all_generate_message_for_new_content" : {
      "LABEL" : "Core: All: Generate Message for New Content",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "nid" : { "label" : "Node", "type" : "node" },
        "icon" : { "label" : "Icon", "type" : "text" }
      },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "stream_player_posts_new_content",
              "param_user" : [ "nid:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-stream-node-ref" ],
            "value" : [ "nid" ]
          }
        },
        { "component_rules_status_all_get_associated_nodes" : {
            "USING" : { "srid" : [ "nid" ] },
            "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-associated-nodes-stream" ],
            "value" : [ "assoc-nodes" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-timeline-icon" ],
            "value" : [ "icon" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_master_renown_awarded'] = entity_import('rules_config', '{ "rules_master_renown_awarded" : {
      "LABEL" : "Master: Renown Awarded",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.2", "Renown" ],
      "REQUIRES" : [ "rules", "userpoints_rules", "rules_conditional", "user_badges" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "userpoints-transaction:user" ],
            "roles" : { "value" : { "8" : "8" } }
          }
        }
      ],
      "DO" : [
        { "userpoints_rules_get_current_points" : {
            "USING" : { "user" : [ "userpoints-transaction:user" ], "tid" : "0" },
            "PROVIDE" : { "loaded_points" : { "loaded_points" : "Number of renown in the specified category." } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "1" },
            "PROVIDE" : { "variable_added" : { "target_level" : "Target Level" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "loaded-points" ], "op" : "\\u003E", "value" : "1300" } },
              "DO" : [
                { "data_set" : { "data" : [ "target-level" ], "value" : "3" } },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT user_badges_has_badge" : { "badge_id" : "7", "user" : [ "userpoints-transaction:user" ] } },
                      "DO" : [
                        { "remove_badge_by_name" : { "badge" : "6", "user" : [ "userpoints-transaction:user" ] } },
                        { "add_badge_by_name" : { "badge" : "7", "user" : [ "userpoints-transaction:user" ] } },
                        { "entity_create" : {
                            "USING" : {
                              "type" : "message",
                              "param_type" : "statuses_all_new_level",
                              "param_user" : [ "userpoints-transaction:user" ]
                            },
                            "PROVIDE" : { "entity_created" : { "new_message" : "New Message" } }
                          }
                        },
                        { "data_set" : {
                            "data" : [ "new-message:field-medal-name" ],
                            "value" : "Level [target-level:value]"
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "loaded-points" ], "op" : "\\u003E", "value" : "400" } },
              "DO" : [
                { "data_set" : { "data" : [ "target-level" ], "value" : "2" } },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT user_badges_has_badge" : { "badge_id" : "6", "user" : [ "userpoints-transaction:user" ] } },
                      "DO" : [
                        { "add_badge_by_name" : { "badge" : "6", "user" : [ "userpoints-transaction:user" ] } },
                        { "remove_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } },
                        { "entity_create" : {
                            "USING" : {
                              "type" : "message",
                              "param_type" : "statuses_all_new_level",
                              "param_user" : [ "userpoints-transaction:user" ]
                            },
                            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                          }
                        },
                        { "data_set" : {
                            "data" : [ "entity-created:field-medal-name" ],
                            "value" : "Level [target-level:value]"
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "loaded-points" ], "op" : "\\u003E", "value" : "1" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT user_badges_has_badge" : { "badge_id" : "5", "user" : [ "userpoints-transaction:user" ] } },
                      "DO" : [
                        { "add_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } },
                        { "entity_create" : {
                            "USING" : {
                              "type" : "message",
                              "param_type" : "statuses_all_new_level",
                              "param_user" : [ "userpoints-transaction:user" ]
                            },
                            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                          }
                        },
                        { "data_set" : { "data" : [ "entity-created:field-medal-name" ], "value" : "Level 1" } }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_on_login_send_to_mautic'] = entity_import('rules_config', '{ "rules_on_login_send_to_mautic" : {
      "LABEL" : "On Login: Send to Mautic",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.3" ],
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "php_eval" : { "code" : "$capture = array(\\u0027email\\u0027 =\\u003E \\u0027[account:mail]\\u0027, \\u0027its_uid\\u0027 =\\u003E \\u0027[account:uid]\\u0027, \\u0027its_id\\u0027 =\\u003E \\u0027[account:name]\\u0027);\\r\\npushMauticForm($capture, 2);\\r\\nfunction pushMauticForm($data, $formId, $ip = null)\\r\\n{\\r\\n    if (!$ip) {\\r\\n        $ipHolders = array(\\r\\n            \\u0027HTTP_CLIENT_IP\\u0027,\\r\\n            \\u0027HTTP_X_FORWARDED_FOR\\u0027,\\r\\n            \\u0027HTTP_X_FORWARDED\\u0027,\\r\\n            \\u0027HTTP_X_CLUSTER_CLIENT_IP\\u0027,\\r\\n            \\u0027HTTP_FORWARDED_FOR\\u0027,\\r\\n            \\u0027HTTP_FORWARDED\\u0027,\\r\\n            \\u0027REMOTE_ADDR\\u0027\\r\\n        );\\r\\n        foreach ($ipHolders as $key) {\\r\\n            if (!empty($_SERVER[$key])) {\\r\\n                $ip = $_SERVER[$key];\\r\\n                if (strpos($ip, \\u0027,\\u0027) !== false) {\\r\\n                    \\/\\/ Multiple IPs are present so use the last IP which should be the most reliable IP that last connected to the proxy\\r\\n                    $ips = explode(\\u0027,\\u0027, $ip);\\r\\n                    array_walk($ips, create_function(\\u0027\\u0026$val\\u0027, \\u0027$val = trim($val);\\u0027));\\r\\n                    $ip = end($ips);\\r\\n                }\\r\\n                $ip = trim($ip);\\r\\n                break;\\r\\n            }\\r\\n        }\\r\\n    }\\r\\n$data[\\u0027formId\\u0027] = $formId;\\r\\n    \\/\\/ return has to be part of the form data array\\r\\n    if (!isset($data[\\u0027return\\u0027])) {\\r\\n        $data[\\u0027return\\u0027] = \\u0027http:\\/\\/itoysoldiers.com\\/thanks\\u0027;\\r\\n    }\\r\\n    $data = array(\\u0027mauticform\\u0027 =\\u003E $data);\\r\\n    \\/\\/ Change [path-to-mautic] to URL where your Mautic is\\r\\n    $formUrl =  \\u0027http:\\/\\/l.itoysoldiers.com\\/index.php\\/form\\/submit?formId=\\u0027 . $formId;\\r\\n    $ch = curl_init();\\r\\n    curl_setopt($ch, CURLOPT_URL, $formUrl);\\r\\n    curl_setopt($ch, CURLOPT_POST, 1);\\r\\n    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));\\r\\n    curl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0022X-Forwarded-For: $ip\\u0022));\\r\\n    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n    $response = curl_exec($ch);\\r\\n    curl_close($ch);\\r\\n    return $response;     \\r\\n}" } }
      ]
    }
  }');
  $items['rules_profiles_new_user_created'] = entity_import('rules_config', '{ "rules_profiles_new_user_created" : {
      "LABEL" : "Profiles: New User Created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.2" ],
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "php_eval" : { "code" : "\\/**\\r\\n * Push data to a Mautic form\\r\\n *\\r\\n * @param  array   $data   The data submitted by your form\\r\\n * @param  integer $formId Mautic Form ID\\r\\n * @param  string  $ip     IP address of the lead\\r\\n * @return boolean\\r\\n *\\/\\r\\n$capture = array(\\u0027email\\u0027 =\\u003E \\u0027[account:mail]\\u0027, \\u0027its_uid\\u0027 =\\u003E \\u0027[account:uid]\\u0027, \\u0027its_id\\u0027 =\\u003E \\u0027[account:name]\\u0027, \\u0027first_name\\u0027 =\\u003E \\u0027[account:name]\\u0027);\\r\\npushMauticForm($capture, 17);\\r\\nfunction pushMauticForm($data, $formId, $ip = null)\\r\\n{\\r\\n    if (!$ip) {\\r\\n        $ipHolders = array(\\r\\n            \\u0027HTTP_CLIENT_IP\\u0027,\\r\\n            \\u0027HTTP_X_FORWARDED_FOR\\u0027,\\r\\n            \\u0027HTTP_X_FORWARDED\\u0027,\\r\\n            \\u0027HTTP_X_CLUSTER_CLIENT_IP\\u0027,\\r\\n            \\u0027HTTP_FORWARDED_FOR\\u0027,\\r\\n            \\u0027HTTP_FORWARDED\\u0027,\\r\\n            \\u0027REMOTE_ADDR\\u0027\\r\\n        );\\r\\n        foreach ($ipHolders as $key) {\\r\\n            if (!empty($_SERVER[$key])) {\\r\\n                $ip = $_SERVER[$key];\\r\\n                if (strpos($ip, \\u0027,\\u0027) !== false) {\\r\\n                    \\/\\/ Multiple IPs are present so use the last IP which should be the most reliable IP that last connected to the proxy\\r\\n                    $ips = explode(\\u0027,\\u0027, $ip);\\r\\n                    array_walk($ips, create_function(\\u0027\\u0026$val\\u0027, \\u0027$val = trim($val);\\u0027));\\r\\n                    $ip = end($ips);\\r\\n                }\\r\\n                $ip = trim($ip);\\r\\n                break;\\r\\n            }\\r\\n        }\\r\\n    }\\r\\n$data[\\u0027formId\\u0027] = $formId;\\r\\n    \\/\\/ return has to be part of the form data array\\r\\n    if (!isset($data[\\u0027return\\u0027])) {\\r\\n        $data[\\u0027return\\u0027] = \\u0027http:\\/\\/itoysoldiers.com\\/thanks\\u0027;\\r\\n    }\\r\\n    $data = array(\\u0027mauticform\\u0027 =\\u003E $data);\\r\\n    \\/\\/ Change [path-to-mautic] to URL where your Mautic is\\r\\n    $formUrl =  \\u0027http:\\/\\/l.itoysoldiers.com\\/index.php\\/form\\/submit?formId=\\u0027 . $formId;\\r\\n    $ch = curl_init();\\r\\n    curl_setopt($ch, CURLOPT_URL, $formUrl);\\r\\n    curl_setopt($ch, CURLOPT_POST, 1);\\r\\n    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));\\r\\n    curl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0022X-Forwarded-For: $ip\\u0022));\\r\\n    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n    $response = curl_exec($ch);\\r\\n    curl_close($ch);\\r\\n    return $response;     \\r\\n}" } }
      ]
    }
  }');
  return $items;
}
