<?php
/**
 * @file
 * permission.edit_own_war_zone_tournament_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own war_zone_tournament content',
  'roles' => array(
    0 => 'authenticated user',
    1 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.war_zone_tournament' => 'content_type.war_zone_tournament',
);

$optional = array();

$modules = array(
  0 => 'node',
);
