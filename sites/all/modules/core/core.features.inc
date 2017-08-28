<?php
/**
 * @file
 * core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function core_flag_default_flags() {
  $flags = array();
  // Exported flag: "Glory".
  $flags['glory'] = array(
    'content_type' => 'node',
    'title' => 'Glory',
    'global' => 0,
    'types' => array(
      0 => 'army_profile',
      1 => 'article',
      2 => 'game_results',
      3 => 'location',
      4 => 'blog',
      5 => 'event',
      6 => 'special_event',
      7 => 'gallery',
      8 => 'game_result_system_',
      9 => 'gaming_club',
      10 => 'war_zone_league',
      11 => 'league',
      12 => 'listcrit',
      13 => 'models',
      14 => 'narrative_campaign',
      15 => 'narrative_campaign_instance',
      16 => 'war_zone_tournament',
    ),
    'flag_short' => 'Salute',
    'flag_long' => 'Show the player that you offer tribute to their content',
    'flag_message' => 'Saluted',
    'unflag_short' => 'Recant',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Saluted',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'core',
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
function core_image_default_styles() {
  $styles = array();

  // Exported image style: 70x70-square.
  $styles['70x70-square'] = array(
    'label' => '480x480 Square',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: avatar_small.
  $styles['avatar_small'] = array(
    'label' => 'Avatar Small',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: button.
  $styles['button'] = array(
    'label' => 'button',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero_image_newsletter.
  $styles['hero_image_newsletter'] = array(
    'label' => 'Hero Image Banner',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 898,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large_button.
  $styles['large_button'] = array(
    'label' => 'Large Button',
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: newsletter_square.
  $styles['newsletter_square'] = array(
    'label' => 'Content Teaser',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 667,
          'height' => 372,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_avatar.
  $styles['user_avatar'] = array(
    'label' => 'user_avatar',
    'effects' => array(
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
