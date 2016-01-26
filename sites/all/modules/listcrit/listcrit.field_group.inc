<?php
/**
 * @file
 * listcrit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function listcrit_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|listcrit|teaser';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_rate_content',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_body_wrapper|node|listcrit|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_row|node|listcrit|form';
  $field_group->group_name = 'group_first_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prop_wrapper';
  $field_group->data = array(
    'label' => 'First Row',
    'weight' => '25',
    'children' => array(
      0 => 'field_camp',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'First Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'col-xs-12 col-sm-6',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_listcrit_form_group_first_row',
      ),
    ),
  );
  $export['group_first_row|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|listcrit|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_image_wrapper|node|listcrit|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oob|node|listcrit|form';
  $field_group->group_name = 'group_oob';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Order of Battle',
    'weight' => '3',
    'children' => array(
      0 => 'field_your_army',
      1 => 'field_points_per_army',
      2 => 'field_batteresult_commander',
      3 => 'field_listcrit_component_units',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-oob field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_oob|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prop_wrapper|node|listcrit|form';
  $field_group->group_name = 'group_prop_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '4',
    'children' => array(
      0 => 'field_doctrine',
      1 => 'field_primary_role',
      2 => 'group_first_row',
      3 => 'group_second_row',
      4 => 'group_third_row',
      5 => 'group_sixth_row',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Classification',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_prop_wrapper|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_row|node|listcrit|form';
  $field_group->group_name = 'group_second_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prop_wrapper';
  $field_group->data = array(
    'label' => 'Second Row',
    'weight' => '26',
    'children' => array(
      0 => 'field_tactical_focus',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Second Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'col-xs-12 col-sm-6',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_listcrit_form_group_second_row',
      ),
    ),
  );
  $export['group_second_row|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sixth_row|node|listcrit|form';
  $field_group->group_name = 'group_sixth_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prop_wrapper';
  $field_group->data = array(
    'label' => 'Sixth Row',
    'weight' => '29',
    'children' => array(
      0 => 'field_aux',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Sixth Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'col-xs-12 col-sm-6',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_listcrit_form_group_sixth_row',
      ),
    ),
  );
  $export['group_sixth_row|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third_row|node|listcrit|form';
  $field_group->group_name = 'group_third_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prop_wrapper';
  $field_group->data = array(
    'label' => 'Third Row',
    'weight' => '30',
    'children' => array(
      0 => 'field_opponent_s_army',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Third Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'col-xs-12 col-sm-6',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_listcrit_form_group_third_row',
      ),
    ),
  );
  $export['group_third_row|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|listcrit|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_body_wrapper',
      1 => 'group_image_wrapper',
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
  $export['group_wrapper|node|listcrit|teaser'] = $field_group;

  return $export;
}
