<?php
/**
 * @file
 * listcrit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function listcrit_field_group_info() {
  $field_groups = array();

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
  $field_groups['group_body_wrapper|node|listcrit|teaser'] = $field_group;

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
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'First Row',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '6',
        'bootstrap_grid_col_lg' => '6',
        'required_fields' => 1,
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_first_row|node|listcrit|form'] = $field_group;

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
      0 => 'group_spacer',
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
  $field_groups['group_image_wrapper|node|listcrit|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_list|node|listcrit|form';
  $field_group->group_name = 'group_list_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nav_core';
  $field_group->data = array(
    'label' => 'Core',
    'weight' => '32',
    'children' => array(
      0 => 'body',
      1 => 'field_your_army',
      2 => 'field_points_per_army',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Core',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-list-list field-group-bootstrap_fieldgroup_nav_item',
      ),
    ),
  );
  $field_groups['group_list_list|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nav_classification|node|listcrit|form';
  $field_group->group_name = 'group_nav_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nav_core';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '34',
    'children' => array(
      0 => 'group_prop_wrapper',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-nav-classification field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nav_classification|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nav_core|node|listcrit|form';
  $field_group->group_name = 'group_nav_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nav',
    'weight' => '2',
    'children' => array(
      0 => 'group_oob',
      1 => 'group_list_list',
      2 => 'group_nav_classification',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-nav-core field-group-bootstrap_fieldgroup_nav',
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => 0,
        'bootstrap_orientation' => 0,
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nav_core|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oob|node|listcrit|form';
  $field_group->group_name = 'group_oob';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nav_core';
  $field_group->data = array(
    'label' => 'Order of Battle',
    'weight' => '33',
    'children' => array(
      0 => 'field_batteresult_commander',
      1 => 'field_listcrit_component_units',
      2 => 'field_allied_detatchment',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_oob|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prop_wrapper|node|listcrit|form';
  $field_group->group_name = 'group_prop_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nav_classification';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '13',
    'children' => array(
      0 => 'group_first_row',
      1 => 'group_second_row',
      2 => 'group_third_row',
      3 => 'group_sixth_row',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Classification',
      'instance_settings' => array(
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '12',
        'bootstrap_grid_col_lg' => '12',
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_prop_wrapper|node|listcrit|form'] = $field_group;

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
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Second Row',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '6',
        'bootstrap_grid_col_lg' => '6',
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_second_row|node|listcrit|form'] = $field_group;

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
    'weight' => '30',
    'children' => array(),
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
  $field_groups['group_sixth_row|node|listcrit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|listcrit|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listcrit';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '17',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'thumbnail',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spacer|node|listcrit|teaser'] = $field_group;

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
    'weight' => '27',
    'children' => array(
      0 => 'field_opponent_s_army',
      1 => 'field_doctrine',
      2 => 'field_primary_role',
      3 => 'field_aux',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Third Row',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '12',
        'bootstrap_grid_col_lg' => '12',
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_third_row|node|listcrit|form'] = $field_group;

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
  $field_groups['group_wrapper|node|listcrit|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Body Wrapper');
  t('Classification');
  t('Core');
  t('First Row');
  t('Image Wrapper');
  t('Nav');
  t('Order of Battle');
  t('Second Row');
  t('Sixth Row');
  t('Spacer');
  t('Third Row');
  t('Wrapper');

  return $field_groups;
}
