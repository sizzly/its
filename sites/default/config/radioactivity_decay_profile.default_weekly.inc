<?php
/**
 * @file
 * radioactivity_decay_profile.default_weekly.inc
 */

$api = '2.0.0';

$data = $radioactivity_decay_profile = new stdClass();
$radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
$radioactivity_decay_profile->api_version = 1;
$radioactivity_decay_profile->machine_name = 'default_weekly';
$radioactivity_decay_profile->name = 'Default weekly';
$radioactivity_decay_profile->description = '';
$radioactivity_decay_profile->enable_decay = 1;
$radioactivity_decay_profile->granularity = '60';
$radioactivity_decay_profile->half_life = 432000;
$radioactivity_decay_profile->cut_off = '50';
$radioactivity_decay_profile->storage = 'Live';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'radioactivity',
);
