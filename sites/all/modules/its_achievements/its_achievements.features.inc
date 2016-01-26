<?php
/**
 * @file
 * its_achievements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_achievements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function its_achievements_default_message_type() {
  $items = array();
  $items['statuses_all_new_level'] = entity_import('message_type', '{
    "name" : "statuses_all_new_level",
    "description" : "Statuses: All: New Level",
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
          "value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E has been awarded [message:field_medal_name].\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E has been awarded [message:field_medal_name].\\u003C\\/span\\u003E"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function its_achievements_node_info() {
  $items = array(
    'achievement' => array(
      'name' => t('Achievement'),
      'base' => 'node_content',
      'description' => t('System content type to allow for sharing of achievements'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
