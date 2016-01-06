<?php
/**
 * @file
 * rules_link.warzone_campaign_launch_instance.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Go On Campaign",
      "link_type" : "confirm",
      "bundles" : [],
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "This will launch an instance of the campaign."
    },
    "name" : "warzone_campaign_launch_instance",
    "label" : "Warzone: Campaign: Launch Instance",
    "path" : "warzone_campaign_launch_instance",
    "entity_type" : "node"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
