<?php
/**
 * @file
 * its_galleries.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_galleries_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__galleries';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Galleries',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'galleries',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gallery' => 'gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Community
Galleries',
    'panels_breadcrumbs_paths' => 'community
galleries',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '64eff633-a037-4c73-839c-318c36207725';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4fbf8272-19e4-49e0-ba42-d1ae2516240b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'galleries_all_page_layout-panel_pane_1';
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
    $pane->uuid = '4fbf8272-19e4-49e0-ba42-d1ae2516240b';
    $display->content['new-4fbf8272-19e4-49e0-ba42-d1ae2516240b'] = $pane;
    $display->panels['contentmain'][0] = 'new-4fbf8272-19e4-49e0-ba42-d1ae2516240b';
    $pane = new stdClass();
    $pane->pid = 'new-643baf89-3d67-4a67-8d9f-55a3d2cd9969';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'galleries_all_page_layout-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '643baf89-3d67-4a67-8d9f-55a3d2cd9969';
    $display->content['new-643baf89-3d67-4a67-8d9f-55a3d2cd9969'] = $pane;
    $display->panels['contentmain'][1] = 'new-643baf89-3d67-4a67-8d9f-55a3d2cd9969';
    $pane = new stdClass();
    $pane->pid = 'new-ae443aa4-e0da-4914-8f2b-648eaa1e4a69';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ae443aa4-e0da-4914-8f2b-648eaa1e4a69';
    $display->content['new-ae443aa4-e0da-4914-8f2b-648eaa1e4a69'] = $pane;
    $display->panels['contentmain'][2] = 'new-ae443aa4-e0da-4914-8f2b-648eaa1e4a69';
    $pane = new stdClass();
    $pane->pid = 'new-c032ac02-12ac-43af-a737-f79bc9978cac';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'galleries_all_page_layout-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c032ac02-12ac-43af-a737-f79bc9978cac';
    $display->content['new-c032ac02-12ac-43af-a737-f79bc9978cac'] = $pane;
    $display->panels['contentmain'][3] = 'new-c032ac02-12ac-43af-a737-f79bc9978cac';
    $pane = new stdClass();
    $pane->pid = 'new-95ac7e97-707c-41e9-be09-da115ebf34d8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'galleries_all_page_layout-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '95ac7e97-707c-41e9-be09-da115ebf34d8';
    $display->content['new-95ac7e97-707c-41e9-be09-da115ebf34d8'] = $pane;
    $display->panels['contentmain'][4] = 'new-95ac7e97-707c-41e9-be09-da115ebf34d8';
    $pane = new stdClass();
    $pane->pid = 'new-236a28c2-9b9c-4a06-96d9-659d3dbf97f8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'galleries_all_page_layout-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '236a28c2-9b9c-4a06-96d9-659d3dbf97f8';
    $display->content['new-236a28c2-9b9c-4a06-96d9-659d3dbf97f8'] = $pane;
    $display->panels['contentmain'][5] = 'new-236a28c2-9b9c-4a06-96d9-659d3dbf97f8';
    $pane = new stdClass();
    $pane->pid = 'new-7c825983-e81a-4055-b852-3d7f1d074c27';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'galleries_all_page_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '7c825983-e81a-4055-b852-3d7f1d074c27';
    $display->content['new-7c825983-e81a-4055-b852-3d7f1d074c27'] = $pane;
    $display->panels['contentmain'][6] = 'new-7c825983-e81a-4055-b852-3d7f1d074c27';
    $pane = new stdClass();
    $pane->pid = 'new-4e7d7cbb-fce7-4bcf-a3c5-273e5b4cfec6';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'comments_all_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '4e7d7cbb-fce7-4bcf-a3c5-273e5b4cfec6';
    $display->content['new-4e7d7cbb-fce7-4bcf-a3c5-273e5b4cfec6'] = $pane;
    $display->panels['contentmain'][7] = 'new-4e7d7cbb-fce7-4bcf-a3c5-273e5b4cfec6';
    $pane = new stdClass();
    $pane->pid = 'new-199f488f-3ae5-425a-a11d-379af34f83c2';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '199f488f-3ae5-425a-a11d-379af34f83c2';
    $display->content['new-199f488f-3ae5-425a-a11d-379af34f83c2'] = $pane;
    $display->panels['contentmain'][8] = 'new-199f488f-3ae5-425a-a11d-379af34f83c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__galleries'] = $handler;

  return $export;
}
