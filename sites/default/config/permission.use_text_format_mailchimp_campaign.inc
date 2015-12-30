<?php
/**
 * @file
 * permission.use_text_format_mailchimp_campaign.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'use text format mailchimp_campaign',
  'roles' => array(),
);

$dependencies = array(
  'text_format.mailchimp_campaign' => 'text_format.mailchimp_campaign',
);

$optional = array();

$modules = array(
  0 => 'filter',
);
