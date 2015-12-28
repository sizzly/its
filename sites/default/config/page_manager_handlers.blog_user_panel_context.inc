<?php
/**
 * @file
 * page_manager_handlers.blog_user_panel_context.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'blog_user_panel_context';
$handler->task = 'blog_user';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'A Player\'s Blog',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'panels_breadcrumbs_state' => 1,
  'panels_breadcrumbs_titles' => 'Gazatteer
Blogs
',
  'panels_breadcrumbs_paths' => 'gazetteer
blog
',
  'panels_breadcrumbs_home' => 1,
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
$display->title = '%user:name\'s Blog';
$display->uuid = 'df7403dc-96b9-45c8-87cd-09d777143bd0';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ad700b85-cfa3-437b-970a-e8d43d9d5e10';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'blogs_all_lists-panel_pane_2';
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
  $pane->uuid = 'ad700b85-cfa3-437b-970a-e8d43d9d5e10';
  $display->content['new-ad700b85-cfa3-437b-970a-e8d43d9d5e10'] = $pane;
  $display->panels['contentmain'][0] = 'new-ad700b85-cfa3-437b-970a-e8d43d9d5e10';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.blogs_all_lists' => 'views_view.blogs_all_lists',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
