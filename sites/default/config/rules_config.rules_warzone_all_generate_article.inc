<?php
/**
 * @file
 * rules_config.rules_warzone_all_generate_article.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_warzone_all_generate_article" : {
      "LABEL" : "Warzone: All: Generate Article",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "submission" : { "label" : "Submission", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "submission" ],
            "type" : "entityform",
            "bundle" : { "value" : { "war_zone_all_generate_article" : "war_zone_all_generate_article" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "article",
              "param_title" : [ "submission:field-title-chronicle" ],
              "param_author" : [ "submission:user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:body" ],
            "value" : [ "submission:field-article-body" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-event-link" ],
            "value" : [ "submission:field-event-link" ]
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
