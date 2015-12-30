<?php
/**
 * @file
 * field.node.field_slots_warzone.narrative_campaign_instance.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(),
    'settings' => array(
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
            'field_data_field_slots_warzone' => array(
              'value' => 'field_slots_warzone_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_slots_warzone' => array(
              'value' => 'field_slots_warzone_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_slots_warzone',
    'type' => 'number_integer',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '10',
        'settings' => array(),
      ),
    ),
    'label' => 'Slots',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => '27',
    ),
    'field_name' => 'field_slots_warzone',
    'entity_type' => 'node',
    'bundle' => 'narrative_campaign_instance',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.narrative_campaign_instance' => 'content_type.narrative_campaign_instance',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
