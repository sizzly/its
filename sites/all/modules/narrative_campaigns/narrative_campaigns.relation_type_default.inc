<?php
/**
 * @file
 * narrative_campaigns.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function narrative_campaigns_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'campaign_phase_instance';
  $relation_type->label = 'Campaign Phase Instance';
  $relation_type->reverse_label = 'campaign_phase_target';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:narrative_campaign_instance',
  );
  $relation_type->target_bundles = array(
    0 => 'entityform:warzone_campaign_phase',
  );
  $export['campaign_phase_instance'] = $relation_type;

  return $export;
}
