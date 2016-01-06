<?php
/**
 * @file
 * profile2_type.main.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Personal",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');

$dependencies = array();

$optional = array(
  'field.profile2.field_bio.main' => 'field.profile2.field_bio.main',
  'field.profile2.field_website.main' => 'field.profile2.field_website.main',
  'field.profile2.field_profile_location.main' => 'field.profile2.field_profile_location.main',
  'field.profile2.field_geolocation.main' => 'field.profile2.field_geolocation.main',
  'field.profile2.field_facebook.main' => 'field.profile2.field_facebook.main',
  'field.profile2.field_pinterest.main' => 'field.profile2.field_pinterest.main',
  'field.profile2.field_twitter.main' => 'field.profile2.field_twitter.main',
);

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
