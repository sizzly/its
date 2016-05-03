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
    'label' => 'Hero Image Newsletter',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 580,
          'height' => 300,
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
    'label' => 'Newsletter Image (280x144)',
    'effects' => array(
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 144,
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

/**
 * Implements hook_default_mailchimp_signup().
 */
function core_default_mailchimp_signup() {
  $items = array();
  $items['landing_page_signup_block'] = entity_import('mailchimp_signup', '{
    "name" : "landing_page_signup_block",
    "mc_lists" : { "5adf5a8f8c" : "5adf5a8f8c" },
    "mode" : "1",
    "title" : "Newsletter Signup",
    "settings" : {
      "path" : "",
      "submit_button" : "Subscribe",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email Address",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "FNAME" : 0,
        "LNAME" : 0
      },
      "description" : "Subscribe to the iTS Dispatch and stay up to date with what\\u0027s happening with the site. It\\u0027s free and we\\u0027ll never spam you.",
      "doublein" : 1,
      "send_welcome" : 1,
      "include_interest_groups" : 0
    }
  }');
  $items['the_itoysoldiers_dispatch'] = entity_import('mailchimp_signup', '{
    "name" : "the_itoysoldiers_dispatch",
    "mc_lists" : { "5adf5a8f8c" : "5adf5a8f8c" },
    "mode" : "2",
    "title" : "The iToysoldiers Dispatch",
    "settings" : {
      "path" : "newsletters",
      "submit_button" : "Subscribe",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email Address",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "FNAME" : {
          "name" : "First Name",
          "req" : false,
          "field_type" : "text",
          "public" : true,
          "show" : true,
          "order" : "2",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "FNAME",
          "id" : 1
        },
        "LNAME" : 0
      },
      "description" : "\\u003Cp class=\\u0022lead\\u0022\\u003EGreetings!  iToysoldiers is always adding new toys to play with.  Stay up to date by signing up for the Dispatch.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EIf you\\u0027re interested in our tools for event management and local game stores you might also want to sign up for the Ironmongers list as well.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYou can also manage your subscriptions through \\u003Cstrong\\u003EAccount Settings\\u003C\\/strong\\u003E\\u003C\\/p\\u003E",
      "doublein" : 1,
      "send_welcome" : 0,
      "include_interest_groups" : 1
    }
  }');
  return $items;
}
