<?php
/**
 * @file
 * blogs.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function blogs_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:blog.
  $config['node:blog'] = array(
    'instance' => 'node:blog',
    'config' => array(
      'keywords' => array(
        'value' => '[node:field_blog_army]',
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
    ),
  );

  return $config;
}
