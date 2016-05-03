<?php
/**
 * @file
 * core.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function core_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-faq-field_blog_army'.
  $field_instances['node-faq-field_blog_army'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_blog_army',
    'label' => 'Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'moderate',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 44,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');

  return $field_instances;
}
