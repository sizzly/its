<?php
/**
 * @file
 * image_style.large_button.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'large_button',
  'label' => 'Large Button',
  'effects' => array(
    0 => array(
      'label' => 'Scale and crop',
      'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
      'effect callback' => 'image_scale_and_crop_effect',
      'dimensions callback' => 'image_resize_dimensions',
      'form callback' => 'image_resize_form',
      'summary theme' => 'image_resize_summary',
      'module' => 'image',
      'name' => 'image_scale_and_crop',
      'data' => array(
        'width' => '120',
        'height' => '120',
      ),
      'weight' => '1',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);
