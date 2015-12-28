<?php
/**
 * @file
 * page_manager_handlers.forum_panel_context_top.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'forum_panel_context_top';
$handler->task = 'forum';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Top Level Forum',
  'no_blocks' => 0,
  'css_id' => 'forum',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'forum_id',
        'settings' => array(
          'tids' => array(
            0 => '0',
          ),
        ),
        'context' => 'argument_forum_id_1',
      ),
    ),
    'logic' => 'and',
  ),
  'pipeline' => 'standard',
);
$display = new panels_display();
$display->layout = 'flexible';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
  ),
);
$display->cache = array();
$display->title = '%forum:name';
$display->uuid = '9acb5e49-2066-425a-981a-517797a56658';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-383c6ea6-84ae-40ad-b22c-aed6c58ad767';
  $pane->panel = 'center';
  $pane->type = 'forum_list';
  $pane->subtype = 'forum_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_forum_id_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '383c6ea6-84ae-40ad-b22c-aed6c58ad767';
  $display->content['new-383c6ea6-84ae-40ad-b22c-aed6c58ad767'] = $pane;
  $display->panels['center'][0] = 'new-383c6ea6-84ae-40ad-b22c-aed6c58ad767';
  $pane = new stdClass();
  $pane->pid = 'new-1fe70d42-839b-47fb-bb8b-ab826539992e';
  $pane->panel = 'center';
  $pane->type = 'forum_legend';
  $pane->subtype = 'forum_legend';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_forum_id_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '1fe70d42-839b-47fb-bb8b-ab826539992e';
  $display->content['new-1fe70d42-839b-47fb-bb8b-ab826539992e'] = $pane;
  $display->panels['center'][1] = 'new-1fe70d42-839b-47fb-bb8b-ab826539992e';
  $pane = new stdClass();
  $pane->pid = 'new-9a3f16f5-9f1a-41cc-8f0f-61b7a7b024b1';
  $pane->panel = 'center';
  $pane->type = 'forum_statistics';
  $pane->subtype = 'forum_statistics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_forum_id_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '9a3f16f5-9f1a-41cc-8f0f-61b7a7b024b1';
  $display->content['new-9a3f16f5-9f1a-41cc-8f0f-61b7a7b024b1'] = $pane;
  $display->panels['center'][2] = 'new-9a3f16f5-9f1a-41cc-8f0f-61b7a7b024b1';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
