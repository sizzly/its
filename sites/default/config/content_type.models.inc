<?php
/**
 * @file
 * content_type.models.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'models',
  'name' => 'Models',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Give Your Project A Name',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.models' => 'field.node.body.models',
  'field.node.field_army_models.models' => 'field.node.field_army_models.models',
  'field.node.field_unit_models.models' => 'field.node.field_unit_models.models',
  'field.node.field_model_count.models' => 'field.node.field_model_count.models',
  'field.node.field_aquired_date_models.models' => 'field.node.field_aquired_date_models.models',
  'field.node.field_started_date_models.models' => 'field.node.field_started_date_models.models',
  'field.node.field_completed_date_models.models' => 'field.node.field_completed_date_models.models',
  'field.node.field_image.models' => 'field.node.field_image.models',
  'field.node.field_army_profile_models.models' => 'field.node.field_army_profile_models.models',
  'field.node.field_radioactivity.models' => 'field.node.field_radioactivity.models',
  'permission.create_models_content' => 'permission.create_models_content',
  'permission.edit_own_models_content' => 'permission.edit_own_models_content',
  'permission.edit_any_models_content' => 'permission.edit_any_models_content',
  'permission.delete_own_models_content' => 'permission.delete_own_models_content',
  'permission.delete_any_models_content' => 'permission.delete_any_models_content',
);

$modules = array(
  0 => 'node',
);
