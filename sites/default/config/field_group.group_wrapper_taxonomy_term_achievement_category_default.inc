<?php
/**
 * @file
 * field_group.group_wrapper_taxonomy_term_achievement_category_default.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_wrapper|taxonomy_term|achievement_category|default';
$field_group->group_name = 'group_wrapper';
$field_group->entity_type = 'taxonomy_term';
$field_group->bundle = 'achievement_category';
$field_group->mode = 'default';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Wrapper',
  'weight' => '2',
  'children' => array(
    0 => 'group_image_wrapper',
    1 => 'group_body_wrapper',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Wrapper',
    'instance_settings' => array(
      'classes' => 'row',
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
