<?php
/**
 * @file
 * narrative_campaign.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function narrative_campaign_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'hr_spacer';
  $content->admin_title = 'HR Spacer';
  $content->admin_description = 'Used to generate a HR element for spacing purposes.';
  $content->category = 'DEV';
  $content->settings = array(
    'admin_title' => 'HR Spacer',
    'title' => '',
    'body' => '<hr />',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $export['hr_spacer'] = $content;

  return $export;
}
