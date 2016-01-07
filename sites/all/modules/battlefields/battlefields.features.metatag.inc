<?php
/**
 * @file
 * battlefields.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function battlefields_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:location.
  $config['node:location'] = array(
    'instance' => 'node:location',
    'config' => array(
      'description' => array(
        'value' => '[node:title], [node:summary]',
      ),
      'keywords' => array(
        'value' => 'miniature war gaming, [node:title]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
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
      'og:type' => array(
        'value' => 'website',
      ),
    ),
  );

  return $config;
}
