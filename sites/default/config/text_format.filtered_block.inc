<?php
/**
 * @file
 * text_format.filtered_block.inc
 */

$api = '2.0.0';

$data = (object) array(
  'format' => 'filtered_block',
  'name' => 'Filtered Block',
  'cache' => '1',
  'status' => '1',
  'weight' => '0',
  'filters' => array(
    'filter_html' => array(
      'weight' => '-10',
      'status' => '1',
      'settings' => array(
        'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
        'filter_html_help' => 0,
        'filter_html_nofollow' => 0,
      ),
    ),
    'filter_autop' => array(
      'weight' => '0',
      'status' => '1',
      'settings' => array(),
    ),
    'filter_url' => array(
      'weight' => '0',
      'status' => '1',
      'settings' => array(
        'filter_url_length' => '72',
      ),
    ),
    'filter_htmlcorrector' => array(
      'weight' => '10',
      'status' => '1',
      'settings' => array(),
    ),
  ),
);

$dependencies = array();

$optional = array(
  'permission.use_text_format_filtered_block' => 'permission.use_text_format_filtered_block',
  'wysiwyg.filtered_block' => 'wysiwyg.filtered_block',
);

$modules = array(
  0 => 'filter',
);
