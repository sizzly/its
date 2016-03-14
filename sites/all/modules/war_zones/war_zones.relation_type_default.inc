<?php
/**
 * @file
 * war_zones.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function war_zones_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'warzone_score';
  $relation_type->label = 'WarZone Score';
  $relation_type->reverse_label = 'WarZone Score';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:special_event',
    1 => 'node:war_zone_league',
    2 => 'node:narrative_campaign_instance',
    3 => 'node:war_zone_tournament',
  );
  $relation_type->target_bundles = array(
    0 => 'node_registration:special_event',
    1 => 'node_registration:war_zone_league',
    2 => 'node_registration:narrative_campaign_instance',
    3 => 'node_registration:war_zone_tournament',
    4 => 'user:user',
  );
  $export['warzone_score'] = $relation_type;

  return $export;
}
