<?php
/**
 * @file
 * rules_config.rules_war_zone_all_edit_entityform.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_all_edit_entityform" : {
      "LABEL" : "War Zone: All: Edit Entityform",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "score_card" : "score_card" } }
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "\\/node\\/[entityform:field-event-link:nid]\\/management" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'entityform',
  2 => 'rules',
);
