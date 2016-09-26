<?php
/**
 * @file
 * its_articles_and_feed.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function its_articles_and_feed_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|article|teaser';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Content Wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Content Wrapper',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_article_teaser_group_content_wrapper',
      ),
    ),
  );
  $field_groups['group_content_wrapper|node|article|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|article|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-xs-3',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_article_teaser_group_image_wrapper',
      ),
    ),
  );
  $field_groups['group_image_wrapper|node|article|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|article|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_image_wrapper',
      1 => 'group_content_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => 'clearfix',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_article_teaser_group_wrapper',
      ),
    ),
  );
  $field_groups['group_wrapper|node|article|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Wrapper');
  t('Image Wrapper');
  t('Wrapper');

  return $field_groups;
}
