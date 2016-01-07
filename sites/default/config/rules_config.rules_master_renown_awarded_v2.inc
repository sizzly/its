<?php
/**
 * @file
 * rules_config.rules_master_renown_awarded_v2.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_renown_awarded_v2" : {
      "LABEL" : "Master: Renown Awarded V2",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Master", "Renown" ],
      "REQUIRES" : [ "rules_conditional", "rules", "user_badges", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "userpoints-transaction:tid" ] },
            "DO" : [
              { "CASE" : { "USING" : { "value" : "894" }, "DO" : [] } },
              { "DEFAULT CASE" : [
                  { "variable_add" : {
                      "USING" : { "type" : "integer", "value" : "1" },
                      "PROVIDE" : { "variable_added" : { "level" : "level" } }
                    }
                  },
                  { "variable_add" : {
                      "USING" : { "type" : "boolean", "value" : 1 },
                      "PROVIDE" : { "variable_added" : { "act" : "Act" } }
                    }
                  },
                  { "VIEW LOOP" : {
                      "VIEW" : "user_points_rules",
                      "DISPLAY" : "views_rules_1",
                      "USING" : { "uid" : [ "userpoints-transaction:user:uid" ] },
                      "ROW VARIABLES" : { "max_points" : { "max_points" : "Max renown in category" } },
                      "DO" : [
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "data_is" : { "data" : [ "max-points" ], "op" : "\\u003E", "value" : "400" } },
                              "DO" : [ { "data_set" : { "data" : [ "level" ], "value" : "2" } } ]
                            },
                            {
                              "ELSE IF" : { "data_is" : { "data" : [ "max-points" ], "op" : "\\u003E", "value" : "1300" } },
                              "DO" : [ { "data_set" : { "data" : [ "level" ], "value" : "3" } } ]
                            },
                            {
                              "ELSE IF" : { "data_is" : { "data" : [ "max-points" ], "op" : "\\u003C", "value" : "1" } },
                              "DO" : [ { "data_set" : { "data" : [ "level" ], "value" : "0" } } ]
                            }
                          ]
                        }
                      ]
                    }
                  },
                  { "SWITCH" : {
                      "USING" : { "data" : [ "level" ] },
                      "DO" : [
                        { "CASE" : {
                            "USING" : { "value" : "1" },
                            "DO" : [
                              { "VIEW LOOP" : {
                                  "VIEW" : "user_points_rules",
                                  "DISPLAY" : "views_rules_2",
                                  "USING" : { "uid" : [ "userpoints-transaction:user:uid" ] },
                                  "ROW VARIABLES" : { "name_1" : { "name_1" : "Badge Name" } },
                                  "DO" : [
                                    { "CONDITIONAL" : [
                                        {
                                          "IF" : { "data_is" : { "data" : [ "name-1" ], "value" : "Level 1" } },
                                          "DO" : [ { "data_set" : { "data" : [ "act" ], "value" : 0 } } ]
                                        }
                                      ]
                                    }
                                  ]
                                }
                              },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "data_is" : { "data" : [ "act" ], "value" : 1 } },
                                    "DO" : [
                                      { "add_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } }
                                    ]
                                  }
                                ]
                              }
                            ]
                          }
                        },
                        { "CASE" : {
                            "USING" : { "value" : "2" },
                            "DO" : [
                              { "VIEW LOOP" : {
                                  "VIEW" : "user_points_rules",
                                  "DISPLAY" : "views_rules_2",
                                  "USING" : { "uid" : [ "userpoints-transaction:user:uid" ] },
                                  "ROW VARIABLES" : { "name_1" : { "name_1" : "Badge Name" } },
                                  "DO" : [
                                    { "CONDITIONAL" : [
                                        {
                                          "IF" : { "data_is" : { "data" : [ "name-1" ], "value" : "Level 2" } },
                                          "DO" : [ { "data_set" : { "data" : [ "act" ], "value" : 0 } } ]
                                        }
                                      ]
                                    }
                                  ]
                                }
                              },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "data_is" : { "data" : [ "act" ], "value" : 1 } },
                                    "DO" : [
                                      { "remove_badge_by_name" : { "badge" : "5", "user" : [ "userpoints-transaction:user" ] } },
                                      { "add_badge_by_name" : { "badge" : "6", "user" : [ "userpoints-transaction:user" ] } }
                                    ]
                                  }
                                ]
                              }
                            ]
                          }
                        },
                        { "CASE" : { "USING" : { "value" : "3" }, "DO" : [] } }
                      ]
                    }
                  }
                ]
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
  2 => 'rules_conditional',
  3 => 'userpoints_rules',
  4 => 'user_badges',
  5 => 'views_rules',
);
