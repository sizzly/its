<?php
/**
 * @file
 * wysiwyg.full_html.inc
 */

$api = '2.0.0';

$data = (object) array(
  'format' => 'full_html',
  'editor' => 'tinymce',
  'settings' => FALSE,
);

$dependencies = array(
  'text_format.full_html' => 'text_format.full_html',
);

$optional = array();

$modules = array(
  0 => 'wysiwyg',
);
