<?php
/**
 * @file
 * battle_reports.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function battle_reports_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:game_results.
  $config['node:game_results'] = array(
    'instance' => 'node:game_results',
    'config' => array(
      'description' => array(
        'value' => '[node:field-verbose-teaser]',
      ),
      'abstract' => array(
        'value' => '[node:field-verbose-teaser]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'rating' => array(
        'value' => 'general',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:description' => array(
        'value' => '[node:field-verbose-teaser]',
      ),
      'og:image' => array(
        'value' => '[node:field_images]',
      ),
    ),
  );

  return $config;
}
