<?php
/**
 * @file
 * profile2_type.ironmonger.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "ironmonger",
    "label" : "Ironmonger",
    "weight" : "9",
    "data" : { "registration" : 0 }
  }');

$dependencies = array();

$optional = array(
  'field.profile2.field_image.ironmonger' => 'field.profile2.field_image.ironmonger',
  'field.profile2.field_website.ironmonger' => 'field.profile2.field_website.ironmonger',
);

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
