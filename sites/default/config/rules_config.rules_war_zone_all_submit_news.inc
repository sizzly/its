<?php
/**
 * @file
 * rules_config.rules_war_zone_all_submit_news.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_war_zone_all_submit_news" : {
      "LABEL" : "War Zone: All: Submit News",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "USES VARIABLES" : { "fid" : { "label" : "Form", "type" : "entityform" } },
      "DO" : []
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
