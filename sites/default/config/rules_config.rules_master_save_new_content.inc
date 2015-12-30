<?php
/**
 * @file
 * rules_config.rules_master_save_new_content.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_master_save_new_content" : {
      "LABEL" : "Master: Save New Content",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "Master" ],
      "REQUIRES" : [ "rules_conditional", "rules", "userpoints_rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "node:type" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "gallery" },
                  "DO" : [
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
                    { "component_rules_utility_award_gallery_achievements" : { "uid" : [ "entity-created:user" ] } },
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "4",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Gallery added.",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
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
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "game_results" },
                  "DO" : [
                    { "component_rules_battle_results_create_container" : { "bid" : [ "node" ] } },
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "5",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Battle submitted. ",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
                      }
                    },
                    { "entity_create" : {
                        "USING" : {
                          "type" : "message",
                          "param_type" : "stream_player_posts_a_battle",
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
                }
              },
              { "CASE" : { "USING" : { "value" : "event" }, "DO" : [] } },
              { "CASE" : { "USING" : { "value" : "location" }, "DO" : [] } },
              { "CASE" : {
                  "USING" : { "value" : "blog" },
                  "DO" : [
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
                    { "component_rules_utility_award_doctrine" : { "uid" : [ "node:author" ] } },
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "3",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Blog post received!",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
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
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "listcrit" },
                  "DO" : [
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
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "3",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "New List",
                        "operation" : "Add",
                        "display" : 1,
                        "moderate" : "approved"
                      }
                    },
                    { "component_rules_status_all_get_associated_nodes" : {
                        "USING" : { "srid" : [ "node" ] },
                        "PROVIDE" : { "assoc_nodes" : { "assoc_nodes" : "Associated Nodes" } }
                      }
                    },
                    { "data_set" : { "data" : [ "assoc-nodes" ], "value" : [ "assoc-nodes" ] } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "war_zone_league" },
                  "DO" : [
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "5",
                        "tid" : "894",
                        "entity" : [ "node" ],
                        "description" : "Running a league",
                        "operation" : "Add",
                        "display" : 0,
                        "moderate" : "approved"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "army_profile" },
                  "DO" : [
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
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "2",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "New Army Profile created.",
                        "operation" : "Add",
                        "display" : 0,
                        "moderate" : "approved"
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
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "models" },
                  "DO" : [
                    { "userpoints_action_grant_points" : {
                        "user" : [ "node:author" ],
                        "points" : "5",
                        "tid" : "0",
                        "entity" : [ "node" ],
                        "description" : "Awarded for creating a new modeling project.",
                        "operation" : "Add",
                        "reference" : "[node:nid]",
                        "display" : "1",
                        "moderate" : "approved"
                      }
                    },
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
                }
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
);
