<?php
/**
 * @file
 * field_group.group_mission_label_wrapper_field_collection_item_field_tournament_missions_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_mission_label_wrapper|field_collection_item|field_tournament_missions|default';
$field_group->group_name = 'group_mission_label_wrapper';
$field_group->entity_type = 'field_collection_item';
$field_group->bundle = 'field_tournament_missions';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Mission Label Wrapper',
  'weight' => '0',
  'children' => array(
    0 => 'field_mission_name_tourney',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Mission Label Wrapper',
    'instance_settings' => array(
      'classes' => 'h2',
      'element' => 'div',
      'show_label' => '0',
      'label_element' => 'div',
      'attributes' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
