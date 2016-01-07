<?php
/**
 * @file
 * content_type.narrative_campaign.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'narrative_campaign',
  'name' => 'Narrative Campaign',
  'description' => 'Create a narrative campaign on iToysoldiers.  Publish the rules, scenarios, time line, maps, etc.  Once you have this page in place you can link it to War Zone to keep track of the battles.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.narrative_campaign' => 'field.node.body.narrative_campaign',
  'field.node.field_blog_army.narrative_campaign' => 'field.node.field_blog_army.narrative_campaign',
  'field.node.field_campaign_badge.narrative_campaign' => 'field.node.field_campaign_badge.narrative_campaign',
  'field.node.field_designers_notes_narrative.narrative_campaign' => 'field.node.field_designers_notes_narrative.narrative_campaign',
  'field.node.field_game_warzone.narrative_campaign' => 'field.node.field_game_warzone.narrative_campaign',
  'field.node.field_header_image.narrative_campaign' => 'field.node.field_header_image.narrative_campaign',
  'field.node.field_image.narrative_campaign' => 'field.node.field_image.narrative_campaign',
  'field.node.field_radioactivity.narrative_campaign' => 'field.node.field_radioactivity.narrative_campaign',
  'permission.create_narrative_campaign_content' => 'permission.create_narrative_campaign_content',
  'permission.edit_own_narrative_campaign_content' => 'permission.edit_own_narrative_campaign_content',
  'permission.edit_any_narrative_campaign_content' => 'permission.edit_any_narrative_campaign_content',
  'permission.delete_own_narrative_campaign_content' => 'permission.delete_own_narrative_campaign_content',
  'permission.delete_any_narrative_campaign_content' => 'permission.delete_any_narrative_campaign_content',
);

$modules = array(
  0 => 'node',
);
