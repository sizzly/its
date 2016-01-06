<?php
/**
 * @file
 * text_format.mailchimp_campaign.inc
 */

$api = '2.0.0';

$data = (object) array(
  'format' => 'mailchimp_campaign',
  'name' => 'MailChimp campaign',
  'cache' => '1',
  'status' => '1',
  'weight' => '-8',
  'filters' => array(
    'mailchimp_campaign' => array(
      'weight' => '0',
      'status' => '1',
      'settings' => array(),
    ),
    'filter_htmlcorrector' => array(
      'weight' => '1',
      'status' => '1',
      'settings' => array(),
    ),
  ),
);

$dependencies = array();

$optional = array(
  'permission.use_text_format_mailchimp_campaign' => 'permission.use_text_format_mailchimp_campaign',
  'wysiwyg.mailchimp_campaign' => 'wysiwyg.mailchimp_campaign',
);

$modules = array(
  0 => 'mailchimp_campaign',
  1 => 'filter',
);
