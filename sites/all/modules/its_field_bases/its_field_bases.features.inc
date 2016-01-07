<?php
/**
 * @file
 * its_field_bases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_field_bases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
