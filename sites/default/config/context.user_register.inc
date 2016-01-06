<?php
/**
 * @file
 * context.user_register.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'user_register';
$context->description = 'A default Metatag:Context definition for the user registration page. This needs to be enabled and then it can be customized as needed.';
$context->tag = 'Metatag';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'user/register' => 'user/register',
    ),
  ),
  'user' => array(
    'values' => array(
      'anonymous user' => 'anonymous user',
    ),
  ),
);
$context->reactions = array(
  'metatag_context_reaction' => array(
    'metatags' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
        'default' => '[current-page:title] | [site:name]',
      ),
    ),
    'metatag_admin' => 1,
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('A default Metatag:Context definition for the user registration page. This needs to be enabled and then it can be customized as needed.');
t('Metatag');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
