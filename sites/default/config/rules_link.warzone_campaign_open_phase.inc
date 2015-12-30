<?php
/**
 * @file
 * rules_link.warzone_campaign_open_phase.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Commence Battle",
      "link_type" : "confirm",
      "bundles" : { "campaign_phase_instance" : "campaign_phase_instance" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will open a campaign phase for battle"
    },
    "name" : "warzone_campaign_open_phase",
    "label" : "Warzone: Campaign: Open Phase",
    "path" : "warzone_campaign_open_phase",
    "entity_type" : "relation"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
