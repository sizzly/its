<?php
/**
 * @file
 * ctools_custom_content.coming_soon.inc
 */

$api = '2.0.0';

$data = $content = new stdClass();
$content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
$content->api_version = 1;
$content->name = 'coming_soon';
$content->admin_title = 'Coming Soon';
$content->admin_description = '';
$content->category = 'DEV';
$content->settings = array(
  'admin_title' => 'Coming Soon',
  'title' => 'Coming Soon',
  'body' => 'This part of iToysoldiers is under development and not quite ready for you yet.  The stuff you see may be usable or not. You may, of course, submit bugs or feature requests against it though. ',
  'format' => 'filtered_html',
  'substitute' => TRUE,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ctools_custom_content',
);
