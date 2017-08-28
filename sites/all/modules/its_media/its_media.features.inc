<?php
/**
 * @file
 * its_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function its_media_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function its_media_image_default_styles() {
  $styles = array();

  // Exported image style: inline.
  $styles['inline'] = array(
    'label' => 'Inline',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 838,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_message_type().
 */
function its_media_default_message_type() {
  $items = array();
  $items['media_image_new_comment'] = entity_import('message_type', '{
    "name" : "media_image_new_comment",
    "description" : "Media: Image: new comment",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E has commented on \\u003Ca href=\\u0022\\/file\\/[message:field-file-reference:fid]\\u0022\\u003E[message:field-file-reference:name]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E has commented on \\u003Ca href=\\u0022\\/file\\/[message:field-file-reference:fid]\\u0022\\u003E[message:field-file-reference:name]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        }
      ]
    }
  }');
  $items['media_image_salute'] = entity_import('message_type', '{
    "name" : "media_image_salute",
    "description" : "Media: Image: Salute",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E salutes \\u003Ca href=\\u0022\\/file\\/[message:field-file-reference:fid]\\u0022\\u003E[message:field-file-reference:name]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E salutes \\u003Ca href=\\u0022\\/file\\/[message:field-file-reference:fid]\\u0022\\u003E[message:field-file-reference:name]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        }
      ]
    }
  }');
  return $items;
}
