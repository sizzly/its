<?php
/**
 * @file
 * page_manager_handlers.forum_panel_context_forum.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'forum_panel_context_forum';
$handler->task = 'forum';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 2;
$handler->conf = array(
  'title' => 'Forum',
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
          'container' => '1',
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
$display->uuid = '8b54b1de-0ae0-4329-9437-1cc918f3fdba';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ba09e4a1-4951-482f-b37a-2748de55ad84';
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
  $pane->uuid = 'ba09e4a1-4951-482f-b37a-2748de55ad84';
  $display->content['new-ba09e4a1-4951-482f-b37a-2748de55ad84'] = $pane;
  $display->panels['center'][0] = 'new-ba09e4a1-4951-482f-b37a-2748de55ad84';
  $pane = new stdClass();
  $pane->pid = 'new-4808b464-6018-49c5-a4ff-cfbb224ddd15';
  $pane->panel = 'center';
  $pane->type = 'forum_topic_list';
  $pane->subtype = 'forum_topic_list';
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
  $pane->uuid = '4808b464-6018-49c5-a4ff-cfbb224ddd15';
  $display->content['new-4808b464-6018-49c5-a4ff-cfbb224ddd15'] = $pane;
  $display->panels['center'][1] = 'new-4808b464-6018-49c5-a4ff-cfbb224ddd15';
  $pane = new stdClass();
  $pane->pid = 'new-ae98556c-f40a-4e08-a02e-1038d64b13d2';
  $pane->panel = 'center';
  $pane->type = 'forum_topic_list_sort';
  $pane->subtype = 'forum_topic_list_sort';
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
  $pane->locks = array();
  $pane->uuid = 'ae98556c-f40a-4e08-a02e-1038d64b13d2';
  $display->content['new-ae98556c-f40a-4e08-a02e-1038d64b13d2'] = $pane;
  $display->panels['center'][2] = 'new-ae98556c-f40a-4e08-a02e-1038d64b13d2';
  $pane = new stdClass();
  $pane->pid = 'new-397365ab-59bc-4932-8d6f-c4a451648e8a';
  $pane->panel = 'center';
  $pane->type = 'forum_topic_legend';
  $pane->subtype = 'forum_topic_legend';
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
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = '397365ab-59bc-4932-8d6f-c4a451648e8a';
  $display->content['new-397365ab-59bc-4932-8d6f-c4a451648e8a'] = $pane;
  $display->panels['center'][3] = 'new-397365ab-59bc-4932-8d6f-c4a451648e8a';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
