<?php
/**
 * @file
 * battle_reports.default_dfp_tags.inc
 */

/**
 * Implements hook_default_dfp_tag().
 */
function battle_reports_default_dfp_tag() {
  $export = array();

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'battles_sidebar2';
  $tag->slot = 'battles/sidebar2';
  $tag->adunit = '[dfp_tag:slot]';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(),
  );
  $export['battles_sidebar2'] = $tag;

  return $export;
}
