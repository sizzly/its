<?php
/**
 * @file
 * rules_config.rules_link_set_campaign_launch_instance.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_link_set_campaign_launch_instance" : {
      "LABEL" : "Rules link: Warzone: Campaign: Launch Instance rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : []
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
