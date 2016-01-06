<?php
/**
 * @file
 * field.node.field_event_link.achievement.inc
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
      'profile2_private' => FALSE,
      'target_type' => 'node',
      'handler' => 'base',
      'handler_settings' => array(
        'target_bundles' => array(
          'war_zone_league' => 'war_zone_league',
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
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_event_link' => array(
              'target_id' => 'field_event_link_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_event_link' => array(
              'target_id' => 'field_event_link_target_id',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_event_link',
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
    'description' => 'If the achievement is tied to a League',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '8',
        'settings' => array(),
      ),
    ),
    'label' => 'Event',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 55,
    ),
    'field_name' => 'field_event_link',
    'entity_type' => 'node',
    'bundle' => 'achievement',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.achievement' => 'content_type.achievement',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'entityreference',
  2 => 'options',
);
