<?php
/**
 * @file
 * its_army_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function its_army_profiles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|army_profile|teaser';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'army_profile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_army_profile',
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
  $field_groups['group_body_wrapper|node|army_profile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|army_profile|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'army_profile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '3',
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
  $field_groups['group_image_wrapper|node|army_profile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_body|paragraphs_item|important_battle|default';
  $field_group->group_name = 'group_profile_body';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'important_battle';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'field_profile_text_block',
      1 => 'field_profile_battle_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-body',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_body|paragraphs_item|important_battle|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_body|paragraphs_item|notable_units|default';
  $field_group->group_name = 'group_profile_body';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'notable_units';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '8',
    'children' => array(
      0 => 'field_profile_text_block',
      1 => 'field_profile_unit_link',
      2 => 'field_profile_unit_project',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-body',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_body|paragraphs_item|notable_units|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_image|paragraphs_item|important_battle|default';
  $field_group->group_name = 'group_profile_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'important_battle';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'field_profile_list_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-object pull-left hidden-xs',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_image|paragraphs_item|important_battle|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_image|paragraphs_item|notable_units|default';
  $field_group->group_name = 'group_profile_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'notable_units';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'field_profile_list_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-object pull-left hidden-xs',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_image|paragraphs_item|notable_units|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_title|paragraphs_item|important_battle|default';
  $field_group->group_name = 'group_profile_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'important_battle';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title Lead',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_section_header',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title Lead',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_title|paragraphs_item|important_battle|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_title|paragraphs_item|notable_units|default';
  $field_group->group_name = 'group_profile_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'notable_units';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title Lead',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_unit_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title Lead',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => 'span',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_title|paragraphs_item|notable_units|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_wrapper|paragraphs_item|important_battle|default';
  $field_group->group_name = 'group_profile_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'important_battle';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_profile_image',
      1 => 'group_profile_body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_wrapper|paragraphs_item|important_battle|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_wrapper|paragraphs_item|notable_units|default';
  $field_group->group_name = 'group_profile_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'notable_units';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_profile_image',
      1 => 'group_profile_body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_wrapper|paragraphs_item|notable_units|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_wrapper|paragraphs_item|section_header|default';
  $field_group->group_name = 'group_section_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'section_header';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_profile_section_header',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Section Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'headline',
        'element' => 'h3',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_section_wrapper|paragraphs_item|section_header|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_wrapper|paragraphs_item|sub_section_header|default';
  $field_group->group_name = 'group_section_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'sub_section_header';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_section_header',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-section-wrapper field-group-html-element',
        'element' => 'h4',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_section_wrapper|paragraphs_item|sub_section_header|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|army_profile|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'army_profile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '9',
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
  $field_groups['group_spacer|node|army_profile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|army_profile|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'army_profile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '1',
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
  $field_groups['group_wrapper|node|army_profile|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Body Wrapper');
  t('Image Wrapper');
  t('Section Wrapper');
  t('Spacer');
  t('Title Lead');
  t('Wrapper');

  return $field_groups;
}
