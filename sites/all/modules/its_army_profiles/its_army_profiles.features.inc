<?php
/**
 * @file
 * its_army_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_army_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function its_army_profiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function its_army_profiles_node_info() {
  $items = array(
    'army_profile' => array(
      'name' => t('Army Profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Army Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function its_army_profiles_paragraphs_info() {
  $items = array(
    'important_battle' => array(
      'name' => 'Important Battle',
      'bundle' => 'important_battle',
      'locked' => '1',
    ),
    'major_campaign' => array(
      'name' => 'Major Campaign',
      'bundle' => 'major_campaign',
      'locked' => '1',
    ),
    'notable_units' => array(
      'name' => 'Notable Units',
      'bundle' => 'notable_units',
      'locked' => '1',
    ),
    'section_header' => array(
      'name' => 'Section Header',
      'bundle' => 'section_header',
      'locked' => '1',
    ),
    'sub_section_header' => array(
      'name' => 'Sub Section Header',
      'bundle' => 'sub_section_header',
      'locked' => '1',
    ),
    'text_block' => array(
      'name' => 'Text Block',
      'bundle' => 'text_block',
      'locked' => '1',
    ),
  );
  return $items;
}
