<?php
/**
 * @file
 * field.node.field_army_profile_elements.army_profile.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_army_profile_elements' => array(
              'value' => 'field_army_profile_elements_value',
              'revision_id' => 'field_army_profile_elements_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_army_profile_elements' => array(
              'value' => 'field_army_profile_elements_value',
              'revision_id' => 'field_army_profile_elements_revision_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_army_profile_elements',
    'type' => 'paragraphs',
    'module' => 'paragraphs',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The paragraph item id.',
      ),
      'revision_id' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The paragraph item revision id.',
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Army Profile Elements',
    'widget' => array(
      'weight' => '31',
      'type' => 'paragraphs_embed',
      'module' => 'paragraphs',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'default_edit_mode' => 'open',
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'home_world' => 'home_world',
      ),
      'bundle_weights' => array(
        'home_world' => '2',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'paragraphs_view',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'module' => 'paragraphs',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '4',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(),
    'field_name' => 'field_army_profile_elements',
    'entity_type' => 'node',
    'bundle' => 'army_profile',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.army_profile' => 'content_type.army_profile',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'paragraphs',
);
