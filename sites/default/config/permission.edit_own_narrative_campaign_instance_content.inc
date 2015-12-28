<?php
/**
 * @file
 * permission.edit_own_narrative_campaign_instance_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own narrative_campaign_instance content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.narrative_campaign_instance' => 'content_type.narrative_campaign_instance',
);

$optional = array();

$modules = array(
  0 => 'node',
);
