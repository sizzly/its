<?php
/**
 * @file
 * permission.delete_own_war_zone_league_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own war_zone_league content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.war_zone_league' => 'content_type.war_zone_league',
);

$optional = array();

$modules = array(
  0 => 'node',
);
