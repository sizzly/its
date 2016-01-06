<?php
/**
 * @file
 * permission.delete_any_narrative_campaign_instance_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any narrative_campaign_instance content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.narrative_campaign_instance' => 'content_type.narrative_campaign_instance',
);

$optional = array();

$modules = array(
  0 => 'node',
);
