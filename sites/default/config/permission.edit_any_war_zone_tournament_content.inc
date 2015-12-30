<?php
/**
 * @file
 * permission.edit_any_war_zone_tournament_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any war_zone_tournament content',
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
