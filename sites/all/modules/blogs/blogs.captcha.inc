<?php
/**
 * @file
 * blogs.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function blogs_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_blog_form';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['comment_node_blog_form'] = $captcha;

  return $export;
}
