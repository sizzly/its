<?php
/**
 * @file
 * rules_link.models_all_complete_project.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Complete Project",
      "link_type" : "token",
      "bundles" : { "models" : "models" },
      "entity_link" : 0
    },
    "name" : "models_all_complete_project",
    "label" : "Models: All: Complete Project",
    "path" : "models_all_complete_project",
    "entity_type" : "node"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
