<?php
/**
 * @file
 * permission.edit_own_narrative_campaign_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own narrative_campaign content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.narrative_campaign' => 'content_type.narrative_campaign',
);

$optional = array();

$modules = array(
  0 => 'node',
);
