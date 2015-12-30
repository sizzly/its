<?php
/**
 * @file
 * its_achievements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_achievements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function its_achievements_node_info() {
  $items = array(
    'achievement' => array(
      'name' => t('Achievement'),
      'base' => 'node_content',
      'description' => t('System content type to allow for sharing of achievements'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
