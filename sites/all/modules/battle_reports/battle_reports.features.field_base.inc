<?php
/**
 * @file
 * battle_reports.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function battle_reports_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_army_composition'.
  $field_bases['field_army_composition'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_army_composition',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'listcrit' => 'listcrit',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_battle_rating_change'.
  $field_bases['field_battle_rating_change'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_battle_rating_change',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_integer',
  );

  // Exported field_base: 'field_chart_color'.
  $field_bases['field_chart_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_chart_color',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_verbose_teaser'.
  $field_bases['field_verbose_teaser'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_verbose_teaser',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '//Get Factions
$p1 = taxonomy_term_load($entity->field_your_army[\'und\'][0][\'tid\']);
$p2 = taxonomy_term_load($entity->field_opponent_s_army[\'und\'][0][\'tid\']);

$vowels = array(\'A\', \'E\', \'I\', \'O\', \'U\');  
if (in_array(substr($p1->name, 0, 1), $vowels)) {  
  $start = \'An\';  
} else {  
  $start = \'A\';  
}  

//Get Results
$status = field_get_items($entity_type, $entity, "field_your_results");
$status_display = field_view_value($entity_type, $entity, \'field_your_results\', $status[0], array());

//Get Date
$gamedate = $entity->field_game_date[\'und\'][0][\'value\'];
$format = "M d, Y"; //or something else that date() accepts as a format
$date_formatted = date_format(date_create($gamedate), $format);

//Get Battlefield
$bffield = NULL;
if (isset($entity->field_location[\'und\'][0][\'nid\'])) {
  $bf = node_load($entity->field_location[\'und\'][0][\'nid\']);
  $battlefield = $bf->title;
  $bffield = " on the fields of " . $battlefield . " ";
}

$entity_field[0][\'value\'] = $start . " " .$p1->name . " battle report. " . render($status_display) . " against " . $p2->name . "" .$bffield ." on " . $date_formatted . ".";',
      'database' => array(
        'data_default' => '',
        'data_index' => 1,
        'data_length' => 265,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'profile2_private' => FALSE,
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  return $field_bases;
}
