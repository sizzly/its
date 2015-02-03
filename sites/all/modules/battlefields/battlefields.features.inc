<?php
/**
 * @file
 * battlefields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function battlefields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_styles") {
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
function battlefields_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function battlefields_flag_default_flags() {
  $flags = array();
  // Exported flag: "Battlefield Closed".
  $flags['battlefield_closed'] = array(
    'content_type' => 'node',
    'title' => 'Battlefield Closed',
    'global' => 1,
    'types' => array(
      0 => 'location',
    ),
    'flag_short' => 'Mark Closed',
    'flag_long' => '',
    'flag_message' => 'Closed',
    'unflag_short' => 'Mark Open',
    'unflag_long' => '',
    'unflag_message' => 'Reopened',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
        1 => 7,
        2 => 9,
      ),
      'unflag' => array(
        0 => 3,
        1 => 7,
        2 => 9,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'battlefields',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Claim Battlefield".
  $flags['claim_battlefield'] = array(
    'content_type' => 'node',
    'title' => 'Claim Battlefield',
    'global' => 1,
    'types' => array(
      0 => 'location',
    ),
    'flag_short' => 'Claim',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unclaim',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Claimed',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => 3,
        1 => 9,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure?',
    'unflag_confirmation' => 'This will assign the ownership of this battlefield to you and open up additional options. ',
    'module' => 'battlefields',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function battlefields_image_default_styles() {
  $styles = array();

  // Exported image style: avatar_small.
  $styles['avatar_small'] = array(
    'name' => 'avatar_small',
    'label' => 'Avatar Small',
    'effects' => array(
      17 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 68,
          'height' => 52,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function battlefields_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Battlefield'),
      'base' => 'node_content',
      'description' => t('A physical location.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
