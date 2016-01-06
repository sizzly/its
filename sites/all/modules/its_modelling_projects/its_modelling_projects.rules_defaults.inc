<?php
/**
 * @file
 * its_modelling_projects.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_modelling_projects_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_models_all_complete_project'] = entity_import('rules_config', '{ "rules_link_condition_models_all_complete_project" : {
      "LABEL" : "Rules link: Models: All: Complete Project condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "models" : "models" } }
          }
        },
        { "data_is_empty" : { "data" : [ "node:field-completed-date-models" ] } },
        { "data_is" : { "data" : [ "node:author" ], "value" : [ "site:current-user" ] } }
      ]
    }
  }');
  $items['rules_link_condition_models_all_start_project'] = entity_import('rules_config', '{ "rules_link_condition_models_all_start_project" : {
      "LABEL" : "Rules link: Models: All: Start Project condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "models" : "models" } }
          }
        },
        { "data_is_empty" : { "data" : [ "node:field-started-date-models" ] } },
        { "data_is_empty" : { "data" : [ "node:field-completed-date-models" ] } },
        { "data_is" : { "data" : [ "site:current-user" ], "value" : [ "node:author" ] } }
      ]
    }
  }');
  $items['rules_link_set_models_all_complete_project'] = entity_import('rules_config', '{ "rules_link_set_models_all_complete_project" : {
      "LABEL" : "Rules link: Models: All: Complete Project rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "userpoints_rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "entity_created" : { "entity_created" : "Created entity" },
              "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "models" : "models" } }
                }
              }
            ],
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is_empty" : { "data" : [ "node:field-completed-date-models" ] } },
                    "DO" : [
                      { "data_set" : { "data" : [ "node:field-completed-date-models" ], "value" : "now" } }
                    ]
                  }
                ]
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "models_all_complete_project",
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
              },
              { "userpoints_action_grant_points" : {
                  "user" : [ "node:author" ],
                  "points" : "3",
                  "tid" : "0",
                  "entity" : [ "node" ],
                  "description" : "Awarded for completing a model.",
                  "operation" : "Add",
                  "display" : "0",
                  "moderate" : "approved"
                }
              }
            ],
            "LABEL" : "Models: All: Complete Project Mechanics"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_models_all_start_project'] = entity_import('rules_config', '{ "rules_link_set_models_all_start_project" : {
      "LABEL" : "Rules link: Models: All: Start Project rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "userpoints_rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "entity_created" : { "entity_created" : "Created entity" },
              "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "node" ],
                  "type" : "node",
                  "bundle" : { "value" : { "models" : "models" } }
                }
              }
            ],
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is_empty" : { "data" : [ "node:field-started-date-models" ] } },
                    "DO" : [
                      { "data_set" : {
                          "data" : [ "node:field-started-date-models" ],
                          "value" : [ "site:current-date" ]
                        }
                      }
                    ]
                  }
                ]
              },
              { "entity_create" : {
                  "USING" : {
                    "type" : "message",
                    "param_type" : "models_all_start_project",
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
              },
              { "userpoints_action_grant_points" : {
                  "user" : [ "node:author" ],
                  "points" : "1",
                  "tid" : "0",
                  "entity" : [ "node" ],
                  "description" : "Awarded for starting a modeling project.",
                  "operation" : "Add",
                  "display" : "0",
                  "moderate" : "approved"
                }
              }
            ],
            "LABEL" : "Models: All: Start Project Mechanics"
          }
        }
      ]
    }
  }');
  $items['rules_status_all_get_associated_nodes'] = entity_import('rules_config', '{ "rules_status_all_get_associated_nodes" : {
      "LABEL" : "Status: All: Get Associated Nodes",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : {
        "srid" : { "label" : "Stream Reference", "type" : "node" },
        "assoc_nodes" : {
          "label" : "Associated Nodes",
          "type" : "list\\u003Cnode\\u003E",
          "parameter" : false
        }
      },
      "DO" : [
        { "list_add" : { "list" : [ "assoc-nodes" ], "item" : [ "srid" ], "unique" : "1" } },
        { "SWITCH" : {
            "USING" : { "data" : [ "srid:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "achievement" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "article" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:og-group-ref:0" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "game_results" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "event" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "gallery" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-event-link" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "gaming_club" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_league" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "listcrit" }, "DO" : [] } },
              { "CASE" : {
                  "USING" : { "value" : "models" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-army-profile-models" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : { "USING" : { "value" : "narrative_campaign" }, "DO" : [] } },
              { "CASE" : {
                  "USING" : { "value" : "narrative_campaign_instance" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    },
                    { "list_add" : { "list" : [ "assoc-nodes" ], "item" : [ "srid:field-event-link" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "special_event" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_tournament" },
                  "DO" : [
                    { "list_add" : {
                        "list" : [ "assoc-nodes" ],
                        "item" : [ "srid:field-location" ],
                        "unique" : "1"
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "assoc_nodes" ]
    }
  }');
  return $items;
}
