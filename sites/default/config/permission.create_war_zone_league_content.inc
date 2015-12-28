<?php
/**
 * @file
 * permission.create_war_zone_league_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create war_zone_league content',
  'roles' => array(
    0 => 'Ironmonger',
  ),
);

$dependencies = array(
  'content_type.war_zone_league' => 'content_type.war_zone_league',
);

$optional = array();

$modules = array(
  0 => 'node',
);
