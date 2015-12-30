<?php
/**
 * @file
 * rules_link.warzone_campaign_skip_phase.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Skip",
      "link_type" : "confirm",
      "bundles" : { "campaign_phase_instance" : "campaign_phase_instance" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will skip this phase in the campaign."
    },
    "name" : "warzone_campaign_skip_phase",
    "label" : "Warzone: Campaign: Skip Phase",
    "path" : "warzone_campaign_skip_phase",
    "entity_type" : "relation"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
