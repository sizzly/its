<?php
/**
 * @file
 * rules_config.rules_status_all_get_associated_nodes.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_status_all_get_associated_nodes" : {
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

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
  2 => 'rules_conditional',
);
