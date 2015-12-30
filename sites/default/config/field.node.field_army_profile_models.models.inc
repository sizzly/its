<?php
/**
 * @file
 * field.node.field_army_profile_models.models.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
      'target_type' => 'node',
      'handler' => 'base',
      'handler_settings' => array(
        'target_bundles' => array(
          'army_profile' => 'army_profile',
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_army_profile_models' => array(
              'target_id' => 'field_army_profile_models_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_army_profile_models' => array(
              'target_id' => 'field_army_profile_models_target_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'node' => array(
        'table' => 'node',
        'columns' => array(
          'target_id' => 'nid',
        ),
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'field_name' => 'field_army_profile_models',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'target_id' => array(
        'description' => 'The id of the target entity.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Army Profile',
    'widget' => array(
      'weight' => '14',
      'type' => 'entityreference_autocomplete',
      'module' => 'entityreference',
      'active' => 1,
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'size' => '60',
        'references_dialog_edit' => 0,
        'references_dialog_add' => 0,
        'references_dialog_search' => 0,
        'path' => '',
        'references_dialog_search_view' => '',
      ),
    ),
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'entityreference_label',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '5',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'default_value_function' => '',
    'field_name' => 'field_army_profile_models',
    'entity_type' => 'node',
    'bundle' => 'models',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.models' => 'content_type.models',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'entityreference',
);
