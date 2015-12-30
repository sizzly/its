<?php
/**
 * @file
 * field.node.og_group_ref.article.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
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
    'settings' => array(
      'handler' => 'og',
      'handler_settings' => array(
        'behaviors' => array(
          'og_behavior' => array(
            'status' => TRUE,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'membership_type' => 'og_membership_type_default',
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'handler_submit' => 'Change handler',
      'profile2_private' => FALSE,
      'target_type' => 'node',
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
            'field_data_og_group_ref' => array(
              'target_id' => 'og_group_ref_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_og_group_ref' => array(
              'target_id' => 'og_group_ref_target_id',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'og_group_ref',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
    'label' => 'Groups audience',
    'widget' => array(
      'weight' => '6',
      'type' => 'og_complex',
      'module' => 'og',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 1,
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'skip_perm' => '0',
          'providers' => array(
            'url' => 1,
            'og_context' => 1,
            'token_patterns' => 0,
          ),
          'token_patterns' => '',
        ),
        'og_widget' => array(
          'status' => TRUE,
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'access_override' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'label' => 'Full',
        'type' => 'og_list_default',
        'custom settings' => FALSE,
      ),
      'teaser' => array(
        'label' => 'Teaser',
        'type' => 'og_list_default',
        'custom settings' => FALSE,
      ),
    ),
    'display' => array(
      'default' => array(
        'type' => 'og_list_default',
        'label' => 'above',
        'settings' => array(),
        'module' => 'og_ui',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'ical' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'field_name' => 'og_group_ref',
    'entity_type' => 'node',
    'bundle' => 'article',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.article' => 'content_type.article',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'entityreference',
  2 => 'og',
);
