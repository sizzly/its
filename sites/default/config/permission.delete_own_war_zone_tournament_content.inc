<?php
/**
 * @file
 * permission.delete_own_war_zone_tournament_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own war_zone_tournament content',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.war_zone_tournament' => 'content_type.war_zone_tournament',
);

$optional = array();

$modules = array(
  0 => 'node',
);
