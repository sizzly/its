<?php
/**
 * @file
 * image_style.hero_image_page.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'hero_image_page',
  'label' => 'Hero Image Page',
  'effects' => array(
    0 => array(
      'label' => 'Crop',
      'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
      'effect callback' => 'image_crop_effect',
      'dimensions callback' => 'image_resize_dimensions',
      'form callback' => 'image_crop_form',
      'summary theme' => 'image_crop_summary',
      'module' => 'image',
      'name' => 'image_crop',
      'data' => array(
        'width' => 750,
        'height' => 240,
        'anchor' => 'center-center',
      ),
      'weight' => '2',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);
