<?php
/**
 * @file
 * content_type.article.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'article',
  'name' => 'Article',
  'description' => 'Use <em>articles</em> for time-sensitive content like news and updates for leagues, tournaments and other special events.  Registered players will be notified of the news.  This is a great way to keep your players interested and up to date on the goings on of your events.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.article' => 'field.node.body.article',
  'field.node.field_tags.article' => 'field.node.field_tags.article',
  'field.node.field_image.article' => 'field.node.field_image.article',
  'field.node.field_event_link.article' => 'field.node.field_event_link.article',
  'field.node.field_website.article' => 'field.node.field_website.article',
  'field.node.og_group_ref.article' => 'field.node.og_group_ref.article',
  'field.node.field_radioactivity.article' => 'field.node.field_radioactivity.article',
  'permission.create_article_content' => 'permission.create_article_content',
  'permission.edit_own_article_content' => 'permission.edit_own_article_content',
  'permission.edit_any_article_content' => 'permission.edit_any_article_content',
  'permission.delete_own_article_content' => 'permission.delete_own_article_content',
  'permission.delete_any_article_content' => 'permission.delete_any_article_content',
);

$modules = array(
  0 => 'node',
);
