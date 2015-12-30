<?php
/**
 * @file
 * rules_link.war_zone_tournament_next_round.inc
 */

$api = '2.0.0';

$data = entity_import('rules_link', '{
    "settings" : {
      "text" : "Start Next Round",
      "link_type" : "confirm",
      "bundles" : { "war_zone_tournament" : "war_zone_tournament" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure?",
      "confirm_description" : "You will start a new round and generate matches. This cannot be undone."
    },
    "name" : "war_zone_tournament_next_round",
    "label" : "War Zone: Tournament: Next Round",
    "path" : "war_zone_tournament_next_round",
    "entity_type" : "node"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules_link',
);
