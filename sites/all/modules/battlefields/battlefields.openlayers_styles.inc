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
  $openlayers_styles->name = 'clone_of_default_marker_black';
  $openlayers_styles->title = 'Battle Icon';
  $openlayers_styles->description = 'The battle icon used by itoysoldiers.';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/default/files/battlefield.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 25,
    'graphicHeight' => 41,
    'graphicOpacity' => 1,
    'graphicXOffset' => -12,
    'graphicYOffset' => -41,
    'labelAlign' => 'cm',
  );
  $export['clone_of_default_marker_black'] = $openlayers_styles;

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
