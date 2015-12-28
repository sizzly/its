<?php
/**
 * @file
 * field.node.field_location.narrative_campaign_instance.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'referenceable_types' => array(
        'location' => 'location',
        'achievement' => 0,
        'army_profile' => 0,
        'article' => 0,
        'game_results' => 0,
        'blog' => 0,
        'challenge' => 0,
        'event' => 0,
        'forum' => 0,
        'gallery' => 0,
        'game_result_system_' => 0,
        'gaming_club' => 0,
        'war_zone_league' => 0,
        'league' => 0,
        'listcrit' => 0,
        'narrative_campaign' => 0,
        'narrative_campaign_instance' => 0,
        'news_source' => 0,
        'product' => 0,
        'question' => 0,
        'remote_blog' => 0,
        'special_event' => 0,
        'war_zone_tournament' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'view_name' => '',
        'display_name' => '',
        'args' => array(),
      ),
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
            'field_data_field_location' => array(
              'nid' => 'field_location_nid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_location' => array(
              'nid' => 'field_location_nid',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'nid' => array(
        'table' => 'node',
        'columns' => array(
          'nid' => 'nid',
        ),
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'field_name' => 'field_location',
    'type' => 'node_reference',
    'module' => 'node_reference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'nid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'default_value' => NULL,
    'description' => 'Where will this campaign take place?  Your home? Local gaming store? Convention?  Enter it here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '14',
        'settings' => array(),
      ),
    ),
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'label' => 'Battlefield',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => '25',
    ),
    'field_name' => 'field_location',
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
  1 => 'node_reference',
);
