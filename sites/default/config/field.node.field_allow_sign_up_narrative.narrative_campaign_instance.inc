<?php
/**
 * @file
 * field.node.field_allow_sign_up_narrative.narrative_campaign_instance.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
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
            'field_data_field_allow_sign_up_narrative' => array(
              'value' => 'field_allow_sign_up_narrative_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_allow_sign_up_narrative' => array(
              'value' => 'field_allow_sign_up_narrative_value',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_allow_sign_up_narrative',
    'type' => 'list_boolean',
    'module' => 'list',
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
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '20',
        'settings' => array(),
      ),
    ),
    'label' => 'Allow sign up after campaign starts?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '13',
    ),
    'field_name' => 'field_allow_sign_up_narrative',
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
  1 => 'list',
  2 => 'options',
);
