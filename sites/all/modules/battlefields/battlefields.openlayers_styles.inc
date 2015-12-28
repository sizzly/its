<?php
/**
 * @file
 * battlefields.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function battlefields_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'clone_of_location_type2';
  $openlayers_styles->title = 'Location type 2';
  $openlayers_styles->description = 'Location type icon based on taxonomy term.';
  $openlayers_styles->data = array(
    'externalGraphic' => '${uri_rendered}',
    'pointRadius' => 12,
    'fillColor' => '#888888',
    'fillOpacity' => 0.5,
    'strokeColor' => '#222222',
    'strokeWidth' => 4,
    'strokeOpacity' => 0.7,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['clone_of_location_type2'] = $openlayers_styles;

  return $export;
}
