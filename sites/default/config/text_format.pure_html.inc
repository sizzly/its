<?php
/**
 * @file
 * text_format.pure_html.inc
 */

$api = '2.0.0';

$data = (object) array(
  'format' => 'pure_html',
  'name' => 'Pure HTML',
  'cache' => '1',
  'status' => '1',
  'weight' => '-9',
  'filters' => array(
    'filter_htmlcorrector' => array(
      'weight' => '10',
      'status' => '1',
      'settings' => array(),
    ),
  ),
);

$dependencies = array();

$optional = array(
  'permission.use_text_format_pure_html' => 'permission.use_text_format_pure_html',
  'wysiwyg.pure_html' => 'wysiwyg.pure_html',
);

$modules = array(
  0 => 'filter',
);
