<?php
/**
 * @file
 * og_membership_type.og_membership_type_default.inc
 */

$api = '2.0.0';

$data = entity_import('og_membership_type', '{
    "name" : "og_membership_type_default",
    "description" : "Default",
    "language" : ""
  }');

$dependencies = array();

$optional = array(
  'field.og_membership.og_membership_request.og_membership_type_default' => 'field.og_membership.og_membership_request.og_membership_type_default',
);

$modules = array(
  0 => 'entity',
  1 => 'og',
);
