<?php
/**
 * @file
 * content_type.listcrit.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'listcrit',
  'name' => 'List',
  'description' => 'Submit your list for review. ',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.listcrit' => 'field.node.body.listcrit',
  'field.node.field_your_army.listcrit' => 'field.node.field_your_army.listcrit',
  'field.node.field_points_per_army.listcrit' => 'field.node.field_points_per_army.listcrit',
  'field.node.field_opponent_s_army.listcrit' => 'field.node.field_opponent_s_army.listcrit',
  'field.node.field_batteresult_commander.listcrit' => 'field.node.field_batteresult_commander.listcrit',
  'field.node.field_rate_content.listcrit' => 'field.node.field_rate_content.listcrit',
  'field.node.field_camp.listcrit' => 'field.node.field_camp.listcrit',
  'field.node.field_tactical_focus.listcrit' => 'field.node.field_tactical_focus.listcrit',
  'field.node.field_doctrine.listcrit' => 'field.node.field_doctrine.listcrit',
  'field.node.field_primary_role.listcrit' => 'field.node.field_primary_role.listcrit',
  'field.node.field_aux.listcrit' => 'field.node.field_aux.listcrit',
  'field.node.field_image.listcrit' => 'field.node.field_image.listcrit',
  'field.node.field_radioactivity.listcrit' => 'field.node.field_radioactivity.listcrit',
  'permission.create_listcrit_content' => 'permission.create_listcrit_content',
  'permission.edit_own_listcrit_content' => 'permission.edit_own_listcrit_content',
  'permission.edit_any_listcrit_content' => 'permission.edit_any_listcrit_content',
  'permission.delete_own_listcrit_content' => 'permission.delete_own_listcrit_content',
  'permission.delete_any_listcrit_content' => 'permission.delete_any_listcrit_content',
);

$modules = array(
  0 => 'node',
);
