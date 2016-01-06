<?php
/**
 * @file
 * field.node.field_tournament_missions.war_zone_tournament.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
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
            'field_data_field_tournament_missions' => array(
              'value' => 'field_tournament_missions_value',
              'revision_id' => 'field_tournament_missions_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_tournament_missions' => array(
              'value' => 'field_tournament_missions_value',
              'revision_id' => 'field_tournament_missions_revision_id',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_tournament_missions',
    'type' => 'field_collection',
    'module' => 'field_collection',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The field collection item id.',
      ),
      'revision_id' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The field collection item revision id.',
      ),
    ),
  ),
  'field_instance' => array(
    'default_value' => array(),
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '16',
        'settings' => array(),
      ),
    ),
    'label' => 'Tournament Missions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => '8',
    ),
    'field_name' => 'field_tournament_missions',
    'entity_type' => 'node',
    'bundle' => 'war_zone_tournament',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.war_zone_tournament' => 'content_type.war_zone_tournament',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'field_collection',
);
