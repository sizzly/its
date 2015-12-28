<?php
/**
 * @file
 * field.node.field_aux.listcrit.inc
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
          'vocabulary' => 'list_crit_tags',
          'parent' => 969,
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
            'field_data_field_aux' => array(
              'tid' => 'field_aux_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_aux' => array(
              'tid' => 'field_aux_tid',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_aux',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
    'default_value' => NULL,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '4',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '7',
        'settings' => array(),
      ),
    ),
    'label' => 'Auxillary',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '28',
    ),
    'field_name' => 'field_aux',
    'entity_type' => 'node',
    'bundle' => 'listcrit',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.listcrit' => 'content_type.listcrit',
  'vocabulary.list_crit_tags' => 'vocabulary.list_crit_tags',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
