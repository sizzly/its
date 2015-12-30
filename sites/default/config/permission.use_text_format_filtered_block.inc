<?php
/**
 * @file
 * permission.use_text_format_filtered_block.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'use text format filtered_block',
  'roles' => array(),
);

$dependencies = array(
  'text_format.filtered_block' => 'text_format.filtered_block',
);

$optional = array();

$modules = array(
  0 => 'filter',
);
