<?php
/**
 * @file
 * rules_link.warzone_campaign_close_and_score.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Close and Score",
      "link_type" : "token",
      "bundles" : { "campaign_phase_instance" : "campaign_phase_instance" },
      "entity_link" : 0
    },
    "name" : "warzone_campaign_close_and_score",
    "label" : "Warzone: Campaign: Close and Score Phase",
    "path" : "warzone_campaign_close_and_score",
    "entity_type" : "relation"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
