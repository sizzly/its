<?php
/**
 * @file
 * radioactivity_decay_profile.prestige.inc
 */

$api = '2.0.0';

$data = $radioactivity_decay_profile = new stdClass();
$radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
$radioactivity_decay_profile->api_version = 1;
$radioactivity_decay_profile->machine_name = 'prestige';
$radioactivity_decay_profile->name = 'Prestige';
$radioactivity_decay_profile->description = 'Battlefield Prestige';
$radioactivity_decay_profile->enable_decay = 1;
$radioactivity_decay_profile->granularity = '60';
$radioactivity_decay_profile->half_life = 241920;
$radioactivity_decay_profile->cut_off = '10';
$radioactivity_decay_profile->storage = 'Deferred';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'radioactivity',
);
