<?php
/**
 * @file
 * rules_config.rules_link_condition__cloned.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_condition__cloned" : {
      "LABEL" : "Rules link: Quick Result: Challenge Victory (cloned) condition",
      "PLUGIN" : "and",
      "OWNER" : "rules_link",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : []
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
