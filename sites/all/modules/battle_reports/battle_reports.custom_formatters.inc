<?php
/**
 * @file
 * battle_reports.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function battle_reports_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'battles_verbose_header';
  $formatter->label = 'Battles: Verbose Header';
  $formatter->description = 'Puts the proper wrapper around the Verbose Teaser for headers.';
  $formatter->mode = 'php';
  $formatter->field_types = 'computed';
  $formatter->code = '$output = "";

$verbose = $variables[\'#items\'][0][\'value\'];

$output = \'<div class="grey-container shortcut-wrapper"><span class="lead">\'. $verbose .\'</span></div>\';

return $output;';
  $formatter->fapi = '';
  $export['battles_verbose_header'] = $formatter;

  return $export;
}
