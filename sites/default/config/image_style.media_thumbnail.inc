<?php
/**
 * @file
 * image_style.media_thumbnail.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'media_thumbnail',
  'label' => 'Media thumbnail (100x100)',
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
        'width' => 100,
        'height' => 100,
      ),
      'weight' => '0',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);
