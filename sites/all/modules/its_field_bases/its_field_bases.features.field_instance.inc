<?php
/**
 * @file
 * its_field_bases.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function its_field_bases_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-armies-field_battle_ranking'.
  $field_instances['taxonomy_term-armies-field_battle_ranking'] = array(
    'bundle' => 'armies',
    'default_value' => array(
      0 => array(
        'value' => 1200,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_battle_ranking',
    'label' => 'Battle Ranking',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Battle Ranking');

  return $field_instances;
}
