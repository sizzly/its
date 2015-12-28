<?php
/**
 * @file
 * page_manager_handlers.forum_panel_context_container.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'forum_panel_context_container';
$handler->task = 'forum';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 1;
$handler->conf = array(
  'title' => 'Container',
  'no_blocks' => 0,
  'css_id' => 'forum',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'forum_container',
        'settings' => array(
          'container' => '0',
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
$display->uuid = '5b50a303-e2e4-4810-9c07-2b95c459c9f5';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-99fce2bc-a43a-4d24-a3c6-2432adc564a3';
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
  $pane->uuid = '99fce2bc-a43a-4d24-a3c6-2432adc564a3';
  $display->content['new-99fce2bc-a43a-4d24-a3c6-2432adc564a3'] = $pane;
  $display->panels['center'][0] = 'new-99fce2bc-a43a-4d24-a3c6-2432adc564a3';
  $pane = new stdClass();
  $pane->pid = 'new-d202a33d-a917-423b-9b18-39ff883b99ff';
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
  $pane->uuid = 'd202a33d-a917-423b-9b18-39ff883b99ff';
  $display->content['new-d202a33d-a917-423b-9b18-39ff883b99ff'] = $pane;
  $display->panels['center'][1] = 'new-d202a33d-a917-423b-9b18-39ff883b99ff';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
