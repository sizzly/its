<?php
/**
 * @file
 * field.message.field_stream_node_ref.war_zone_all_new_round_message.inc
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
    'default_value' => NULL,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
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
    'label' => 'Stream Node',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => '2',
    ),
    'field_name' => 'field_stream_node_ref',
    'entity_type' => 'message',
    'bundle' => 'war_zone_all_new_round_message',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'entityreference',
);
