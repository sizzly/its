<?php
/**
 * @file
 * its_modelling_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_modelling_projects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
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
 * Implements hook_default_message_type().
 */
function its_modelling_projects_default_message_type() {
  $items = array();
  $items['models_all_complete_project'] = entity_import('message_type', '{
    "name" : "models_all_complete_project",
    "description" : "Models: All: Complete Project",
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
          "value" : "\\u003Cspan\\u003E[message:user] has completed \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E[message:user] has completed \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        }
      ]
    }
  }');
  $items['stream_player_earns_an_achievement'] = entity_import('message_type', '{
    "name" : "stream_player_earns_an_achievement",
    "description" : "Stream: Player Earns an Achievement",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E earned the achievement, \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function its_modelling_projects_node_info() {
  $items = array(
    'models' => array(
      'name' => t('Modeling Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Give Your Project A Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function its_modelling_projects_default_rules_link() {
  $items = array();
  $items['models_all_complete_project'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Complete Project",
      "link_type" : "token",
      "bundles" : { "models" : "models" },
      "entity_link" : 0
    },
    "name" : "models_all_complete_project",
    "label" : "Models: All: Complete Project",
    "path" : "models_all_complete_project",
    "entity_type" : "node"
  }');
  $items['models_all_start_project'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Start Project",
      "link_type" : "token",
      "bundles" : { "models" : "models" },
      "entity_link" : 0
    },
    "name" : "models_all_start_project",
    "label" : "Models: All: Start Project",
    "path" : "models_all_start_project",
    "entity_type" : "node"
  }');
  return $items;
}
