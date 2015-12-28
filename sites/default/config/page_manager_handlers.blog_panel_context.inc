<?php
/**
 * @file
 * page_manager_handlers.blog_panel_context.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'blog_panel_context';
$handler->task = 'blog';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'All Blogs',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'metatag_panels' => array(
    'enabled' => 1,
    'metatags' => array(
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
    ),
  ),
  'panels_breadcrumbs_state' => 0,
  'panels_breadcrumbs_titles' => 'Community',
  'panels_breadcrumbs_paths' => 'community',
  'panels_breadcrumbs_home' => 0,
);
$display = new panels_display();
$display->layout = 'bootopoly_boxton';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'sidebar' => NULL,
    'contentmain' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Blogs';
$display->uuid = '3b5fc809-b9e9-4054-ae3f-e9c23b4d864e';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e744023d-3bde-4163-8896-d485e6aa184d';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'blogs_all_lists-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e744023d-3bde-4163-8896-d485e6aa184d';
  $display->content['new-e744023d-3bde-4163-8896-d485e6aa184d'] = $pane;
  $display->panels['contentmain'][0] = 'new-e744023d-3bde-4163-8896-d485e6aa184d';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-e744023d-3bde-4163-8896-d485e6aa184d';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.blogs_all_lists' => 'views_view.blogs_all_lists',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
