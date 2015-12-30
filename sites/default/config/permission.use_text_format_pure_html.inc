<?php
/**
 * @file
 * permission.use_text_format_pure_html.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'use text format pure_html',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'text_format.pure_html' => 'text_format.pure_html',
);

$optional = array();

$modules = array(
  0 => 'filter',
);
