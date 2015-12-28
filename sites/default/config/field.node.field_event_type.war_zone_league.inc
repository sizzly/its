<?php
/**
 * @file
 * field.node.field_event_type.war_zone_league.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(
      'tid' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'tid' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'event_type',
          'parent' => 0,
          'depth' => '',
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
      'profile2_private' => FALSE,
    ),
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_event_type' => array(
              'tid' => 'field_event_type_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_event_type' => array(
              'tid' => 'field_event_type_tid',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_event_type',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'tid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Event type',
    'widget' => array(
      'weight' => '9',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '13',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '8',
        'settings' => array(),
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_event_type',
    'entity_type' => 'node',
    'bundle' => 'war_zone_league',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.war_zone_league' => 'content_type.war_zone_league',
  'vocabulary.event_type' => 'vocabulary.event_type',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
