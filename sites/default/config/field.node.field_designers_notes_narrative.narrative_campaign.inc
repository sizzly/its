<?php
/**
 * @file
 * field.node.field_designers_notes_narrative.narrative_campaign.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'settings' => array(
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
            'field_data_field_designers_notes_narrative' => array(
              'value' => 'field_designers_notes_narrative_value',
              'summary' => 'field_designers_notes_narrative_summary',
              'format' => 'field_designers_notes_narrative_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_designers_notes_narrative' => array(
              'value' => 'field_designers_notes_narrative_value',
              'summary' => 'field_designers_notes_narrative_summary',
              'format' => 'field_designers_notes_narrative_format',
            ),
          ),
        ),
      ),
    ),
    'field_name' => 'field_designers_notes_narrative',
    'type' => 'text_with_summary',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'summary' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'default_value' => NULL,
    'description' => 'Provide potential organizers with some of your thoughts on this campaign.  Number of players, ideal armies, source material, and the like are all excellent things to put here.',
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
        'weight' => '6',
        'settings' => array(),
      ),
    ),
    'label' => 'Designers Notes',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => '8',
    ),
    'field_name' => 'field_designers_notes_narrative',
    'entity_type' => 'node',
    'bundle' => 'narrative_campaign',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.narrative_campaign' => 'content_type.narrative_campaign',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
