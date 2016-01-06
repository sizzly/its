<?php
/**
 * @file
 * field.entityform.field_location.quick_battle.inc
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
    'label' => 'Battlefield',
    'widget' => array(
      'weight' => '3',
      'type' => 'node_reference_autocomplete',
      'module' => 'node_reference',
      'active' => 1,
      'settings' => array(
        'autocomplete_match' => 'contains',
        'size' => '60',
        'references_dialog_search' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_add' => 1,
        'autocomplete_path' => 'node_reference/autocomplete',
        'references_dialog_search_view' => '',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'node_reference_default',
        'settings' => array(),
        'module' => 'node_reference',
        'weight' => 5,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_location',
    'entity_type' => 'entityform',
    'bundle' => 'quick_battle',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'node_reference',
);
