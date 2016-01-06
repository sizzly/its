<?php
/**
 * @file
 * field.message.field_stream_node_ref.models_all_complete_project.inc
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
          'achievement' => 'achievement',
          'army_profile' => 'army_profile',
          'article' => 'article',
          'game_results' => 'game_results',
          'location' => 'location',
          'blog' => 'blog',
          'event' => 'event',
          'forum' => 'forum',
          'gallery' => 'gallery',
          'gaming_club' => 'gaming_club',
          'war_zone_league' => 'war_zone_league',
          'league' => 'league',
          'listcrit' => 'listcrit',
          'models' => 'models',
          'narrative_campaign' => 'narrative_campaign',
          'narrative_campaign_instance' => 'narrative_campaign_instance',
          'special_event' => 'special_event',
          'war_zone_tournament' => 'war_zone_tournament',
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
            'field_data_field_stream_node_ref' => array(
              'target_id' => 'field_stream_node_ref_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_stream_node_ref' => array(
              'target_id' => 'field_stream_node_ref_target_id',
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
    'field_name' => 'field_stream_node_ref',
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
    'label' => 'Stream Reference Node',
    'widget' => array(
      'weight' => '2',
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
        'weight' => 2,
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
    'field_name' => 'field_stream_node_ref',
    'entity_type' => 'message',
    'bundle' => 'models_all_complete_project',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'entityreference',
);
