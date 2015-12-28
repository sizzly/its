<?php
/**
 * @file
 * its_leagues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_leagues_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
