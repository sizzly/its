<?php
/**
 * @file
 * rules_link.models_all_start_project.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Start Project",
      "link_type" : "token",
      "bundles" : { "models" : "models" },
      "entity_link" : 0
    },
    "name" : "models_all_start_project",
    "label" : "Models: All: Start Project",
    "path" : "models_all_start_project",
    "entity_type" : "node"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
