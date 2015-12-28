<?php
/**
 * @file
 * games_and_armies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function games_and_armies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function games_and_armies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function games_and_armies_image_default_styles() {
  $styles = array();

  // Exported image style: hero_image_page.
  $styles['hero_image_page'] = array(
    'name' => 'hero_image_page',
    'label' => 'Hero Image Page',
    'effects' => array(
      18 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 750,
          'height' => 240,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
