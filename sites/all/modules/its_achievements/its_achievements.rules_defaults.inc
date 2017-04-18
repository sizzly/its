<?php
/**
 * @file
 * its_achievements.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_achievements_default_rules_configuration() {
  $items = array();
  $items['its_achievements_calculate_monthly_modelling_champion'] = entity_import('rules_config', '{ "its_achievements_calculate_monthly_modelling_champion" : {
      "LABEL" : "Calculate Monthly Modelling Champion",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional", "php", "rules_scheduler" ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user" },
            "PROVIDE" : { "variable_added" : { "winner" : "Winner" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "achievements_monthly_modelling_champion",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "uid" : { "uid" : "User" } },
            "DO" : [ { "data_set" : { "data" : [ "winner" ], "value" : [ "uid" ] } } ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "winner" ] } },
              "DO" : [
                { "variable_add" : {
                    "USING" : { "type" : "date", "value" : "-1 week" },
                    "PROVIDE" : { "variable_added" : { "last_month" : "Last Month" } }
                  }
                },
                { "variable_add" : {
                    "USING" : {
                      "type" : "text",
                      "value" : "\\u003C?php\\r\\n$format = \\u0022M, Y\\u0022; \\/\\/or something else that date() accepts as a format\\r\\n$date_formatted = gmdate($format, $last_month);\\r\\nprint $date_formatted;\\r\\n?\\u003E"
                    },
                    "PROVIDE" : { "variable_added" : { "formatted_date" : "Formatted Date" } }
                  }
                },
                { "entity_create" : {
                    "USING" : {
                      "type" : "node",
                      "param_type" : "achievement",
                      "param_title" : "Modelling Champion [formatted-date:value]",
                      "param_author" : "1"
                    },
                    "PROVIDE" : { "entity_created" : { "new_achievement" : "New Achievement" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "new-achievement:field-achievement-category" ],
                    "value" : "548"
                  }
                },
                { "data_set" : { "data" : [ "new-achievement:field-achievement-unique" ], "value" : 1 } },
                { "data_set" : { "data" : [ "new-achievement:field-achievement-points" ], "value" : "5" } },
                { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "20261" } },
                { "data_set" : {
                    "data" : [ "new-achievement:field-short-description" ],
                    "value" : "Awarded for the most completed models during the month."
                  }
                },
                { "entity_save" : { "data" : [ "new-achievement" ], "immediate" : 1 } },
                { "component_rules_award_achievement" : { "aid" : [ "new-achievement" ], "uid" : [ "winner" ] } }
              ]
            }
          ]
        },
        { "schedule" : {
            "component" : "its_achievements_calculate_monthly_modelling_champion",
            "date" : "+1 month",
            "identifier" : "modelling-champion"
          }
        }
      ]
    }
  }');
  $items['rules_achievement_face_to_face'] = entity_import('rules_config', '{ "rules_achievement_face_to_face" : {
      "LABEL" : "Achievement: Commander Challenges",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle ID", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "game_results" : "game_results",
                "game_result_system_" : "game_result_system_"
              }
            }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "bid:field-your-commander-survival" ], "value" : "1" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "bid:field-enemy-commander-survival" ], "value" : "1" } },
                      "DO" : [
                        { "component_rules_award_achievement" : { "aid" : "4280", "uid" : [ "bid:author" ] } }
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
  $items['rules_achievements_grind_of_war'] = entity_import('rules_config', '{ "rules_achievements_grind_of_war" : {
      "LABEL" : "Achievements: Grind of War",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules_conditional", "rules" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "achievements_message_counts",
            "DISPLAY" : "views_rules_1",
            "USING" : { "user" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "mid" : { "mid" : "COUNT(DISTINCT Message: Message ID)" } },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "99999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9478", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "89999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9477", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "79999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9476", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "69999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9475", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "59999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9474", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "49999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9473", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "39999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9472", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "34999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9471", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "29999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9470", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "24999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9469", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "19999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9468", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "14999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9467", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "12499" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9466", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "9999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9465", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "7499" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9464", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "4999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9463", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "2999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9462", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "1999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9461", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9460", "uid" : [ "uid" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "mid" ], "op" : "\\u003E", "value" : "99" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9459", "uid" : [ "uid" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_achievements_honoring_the_past_check'] = entity_import('rules_config', '{ "rules_achievements_honoring_the_past_check" : {
      "LABEL" : "Achievements: Honoring the Past: Check",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "rules_conditional" ],
      "USES VARIABLES" : { "bid" : { "label" : "Battle", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "bid" ],
            "type" : "node",
            "bundle" : { "value" : {
                "game_results" : "game_results",
                "game_result_system_" : "game_result_system_"
              }
            }
          }
        }
      ],
      "DO" : [
        { "data_convert" : {
            "USING" : { "type" : "text", "value" : [ "bid:field-game-date" ] },
            "PROVIDE" : { "conversion_result" : { "conversion_result" : "Conversion result" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\necho date(\\u0027d-M\\u0027, $conversion_result);\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "variable-added" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "14-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5461", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "15-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5462", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "16-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5463", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "17-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5464", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "21-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5497", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "22-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5498", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "28-Mar" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "5499", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "17-Apr" }, "DO" : [] } },
              { "CASE" : {
                  "USING" : { "value" : "17-May" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4168", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "01-Jun" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4166", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "11-Oct" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4889", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "25-Oct" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4890", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "26-Oct" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4891", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "28-Oct" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4888", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "01-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4892", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "02-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4893", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "08-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4895", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "09-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4901", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "15-Nov" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "4902", "uid" : [ "bid:author" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "29-Apr" },
                  "DO" : [
                    { "component_rules_award_achievement" : { "aid" : "9484", "uid" : [ "bid:author" ] } }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_achievements_modelling_achievements'] = entity_import('rules_config', '{ "rules_achievements_modelling_achievements" : {
      "LABEL" : "Achievements: Modelling Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "nid" : { "label" : "NID", "type" : "node" } },
      "DO" : [
        { "component_rules_award_achievement" : { "aid" : "9301", "uid" : [ "nid:author" ] } },
        { "component_rules_achievements_modelling_requisition" : { "pid" : [ "nid" ] } },
        { "component_rules_achievements_modelling_uniform_regulation" : { "pid" : [ "nid" ] } }
      ]
    }
  }');
  $items['rules_achievements_modelling_requisition'] = entity_import('rules_config', '{ "rules_achievements_modelling_requisition" : {
      "LABEL" : "Achievements: Modelling: Requisition",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules_conditional", "rules" ],
      "USES VARIABLES" : { "pid" : { "label" : "Project", "type" : "node" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "achievements_modelling_rules",
            "DISPLAY" : "views_rules_1",
            "USING" : { "uid" : [ "pid:author:uid" ] },
            "ROW VARIABLES" : { "field_model_count" : { "field_model_count" : "Model Count" } },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9321", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "899" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9320", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "799" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9319", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "699" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9318", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "599" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9317", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "499" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9316", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "399" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9315", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "349" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9314", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "299" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9313", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "249" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9312", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "199" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9311", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "149" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9310", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "124" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9309", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "99" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9308", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "74" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9307", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "49" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9306", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "29" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9305", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "19" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9304", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "9" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9303", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "0" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9302", "uid" : [ "pid:author" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_achievements_modelling_uniform_regulation'] = entity_import('rules_config', '{ "rules_achievements_modelling_uniform_regulation" : {
      "LABEL" : "Achievements: Modelling: Uniform Regulation",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules_conditional", "rules" ],
      "USES VARIABLES" : { "pid" : { "label" : "Project", "type" : "node" } },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "achievements_modelling_rules",
            "DISPLAY" : "views_rules_2",
            "USING" : { "uid" : [ "pid:author:uid" ] },
            "ROW VARIABLES" : { "field_model_count" : { "field_model_count" : "Model Count" } },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "999" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9344", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "899" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9343", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "799" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9342", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "699" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9341", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "599" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9340", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "499" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9339", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "399" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9338", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "349" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9337", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "299" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9336", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "249" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9335", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "199" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9334", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "149" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9333", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "124" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9332", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "99" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9331", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "74" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9330", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "49" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9329", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "29" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9328", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "19" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9327", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "9" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9326", "uid" : [ "pid:author" ] } }
                    ]
                  },
                  {
                    "ELSE IF" : { "data_is" : { "data" : [ "field-model-count" ], "op" : "\\u003E", "value" : "0" } },
                    "DO" : [
                      { "component_rules_award_achievement" : { "aid" : "9325", "uid" : [ "pid:author" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_calculate_monthly_champion_v2'] = entity_import('rules_config', '{ "rules_calculate_monthly_champion_v2" : {
      "LABEL" : "Calculate Monthly Champion",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "php", "rules_scheduler" ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user" },
            "PROVIDE" : { "variable_added" : { "winner" : "Winner" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_champion",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : { "uid" : { "uid" : "Content: Author uid" } },
            "DO" : [ { "data_set" : { "data" : [ "winner" ], "value" : [ "uid" ] } } ]
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "date", "value" : "-1 week" },
            "PROVIDE" : { "variable_added" : { "last_month" : "Last Month" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$format = \\u0022M, Y\\u0022; \\/\\/or something else that date() accepts as a format\\r\\n$date_formatted = gmdate($format, $last_month);\\r\\nprint $date_formatted;\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "formatted_date" : "Formatted Date" } }
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "achievement",
              "param_title" : "Battle Champion [formatted-date:value]",
              "param_author" : "1"
            },
            "PROVIDE" : { "entity_created" : { "new_achievement" : "New Achievement" } }
          }
        },
        { "data_set" : {
            "data" : [ "new-achievement:field-achievement-category" ],
            "value" : "1146"
          }
        },
        { "data_set" : { "data" : [ "new-achievement:field-achievement-unique" ], "value" : 1 } },
        { "data_set" : { "data" : [ "new-achievement:field-achievement-points" ], "value" : "5" } },
        { "data_set" : { "data" : [ "new-achievement:field-image:file" ], "value" : "20261" } },
        { "data_set" : {
            "data" : [ "new-achievement:field-short-description" ],
            "value" : "Awarded for the highest Battle Score of the month."
          }
        },
        { "entity_save" : { "data" : [ "new-achievement" ], "immediate" : 1 } },
        { "component_rules_award_achievement" : { "aid" : [ "new-achievement" ], "uid" : [ "winner" ] } },
        { "schedule" : {
            "component" : "rules_calculate_monthly_champion_v2",
            "date" : "+1 month",
            "identifier" : "monthly-champion"
          }
        }
      ]
    }
  }');
  $items['rules_utility_award_command_achievements'] = entity_import('rules_config', '{ "rules_utility_award_command_achievements" : {
      "LABEL" : "Utility: Award Command Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement", "Utility" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_1",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "count" } },
            "DO" : [
              { "data_set" : { "data" : [ "variable-added" ], "value" : [ "nid" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "value" : "1" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3297", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3298", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "19" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3299", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "29" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3300", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "39" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3301", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "49" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3335", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "74" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3336", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "99" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3337", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "124" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3338", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "149" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3339", "uid" : [ "uid" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_utility_award_doctrine'] = entity_import('rules_config', '{ "rules_utility_award_doctrine" : {
      "LABEL" : "Utility: Award Doctrine",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User Id", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "blog_count" : "Blog Count" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_6",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "Count" } },
            "DO" : [ { "data_set" : { "data" : [ "blog-count" ], "value" : [ "nid" ] } } ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4308", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "4" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4309", "uid" : [ "uid" ] } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "blog-count" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "4310", "uid" : [ "uid" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_utility_award_gallery_achievements'] = entity_import('rules_config', '{ "rules_utility_award_gallery_achievements" : {
      "LABEL" : "Utility: Award gallery Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "gallery_count" : "Gallery Count" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_5",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid" : "(nodes) COUNT(Content: Nid)" } },
            "DO" : [ { "data_set" : { "data" : [ "gallery-count" ], "value" : [ "nid" ] } } ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "19" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3321", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "14" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3320", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3319", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "4" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3318", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "gallery-count" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3317", "uid" : [ "uid" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_utility_award_headhunter_achievements'] = entity_import('rules_config', '{ "rules_utility_award_headhunter_achievements" : {
      "LABEL" : "Utility: Award Headhunter Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_2",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "count" : "Count" } },
            "DO" : [
              { "data_set" : { "data" : [ "variable-added" ], "value" : [ "count" ] } }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3303", "uid" : [ "uid" ] } },
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "4" } },
                      "DO" : [
                        { "component_rules_award_achievement" : { "aid" : "3304", "uid" : [ "uid" ] } },
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "9" } },
                              "DO" : [
                                { "component_rules_award_achievement" : { "aid" : "3305", "uid" : [ "uid" ] } },
                                { "CONDITIONAL" : [
                                    {
                                      "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "19" } },
                                      "DO" : [
                                        { "component_rules_award_achievement" : { "aid" : "3306", "uid" : [ "uid" ] } },
                                        { "CONDITIONAL" : [
                                            {
                                              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "29" } },
                                              "DO" : [
                                                { "component_rules_award_achievement" : { "aid" : "3307", "uid" : [ "uid" ] } }
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
      ]
    }
  }');
  $items['rules_utility_award_magehunter_achievements'] = entity_import('rules_config', '{ "rules_utility_award_magehunter_achievements" : {
      "LABEL" : "Utility: Award Magehunter Achievements",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Achievement" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_conditional" ],
      "USES VARIABLES" : { "uid" : { "label" : "User", "type" : "user" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "utility_achievement_counts",
            "DISPLAY" : "views_rules_3",
            "USING" : { "uid" : [ "uid:uid" ] },
            "ROW VARIABLES" : { "nid" : { "count" : "Count" } },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "NOT data_is_empty" : { "data" : [ "count" ] } },
                    "DO" : [
                      { "data_set" : { "data" : [ "variable-added" ], "value" : [ "count" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "39" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3307", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "29" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3306", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "19" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3305", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3304", "uid" : [ "uid" ] } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "variable-added" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "component_rules_award_achievement" : { "aid" : "3286", "uid" : [ "uid" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
