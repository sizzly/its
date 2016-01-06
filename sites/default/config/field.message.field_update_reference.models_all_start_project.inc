<?php
/**
 * @file
 * field.message.field_update_reference.models_all_start_project.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
      'target_type' => 'entityform',
      'handler' => 'base',
      'handler_settings' => array(
        'target_bundles' => array(
          'status' => 'status',
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
            'field_data_field_update_reference' => array(
              'target_id' => 'field_update_reference_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_update_reference' => array(
              'target_id' => 'field_update_reference_target_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'entityform' => array(
        'table' => 'entityform',
        'columns' => array(
          'target_id' => 'entityform_id',
        ),
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'field_name' => 'field_update_reference',
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
    'label' => 'Update Reference',
    'widget' => array(
      'weight' => '0',
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
        'type' => 'entityreference_entity_view',
        'weight' => '1',
        'settings' => array(
          'view_mode' => 'default',
          'links' => TRUE,
        ),
        'module' => 'entityreference',
      ),
      'message_notify_email_subject' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
      'message_notify_email_body' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'default_value_function' => '',
    'field_name' => 'field_update_reference',
    'entity_type' => 'message',
    'bundle' => 'models_all_start_project',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'entityreference',
);
