<?php
/**
 * @file
 * its_articles_and_feed.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_articles_and_feed_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__articles';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Articles',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'articles',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = '5d2bb62c-5743-4542-bda5-938cca876016';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e115be47-58be-4829-9ef0-804ae899dbbf';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_all_page_layout-panel_pane_2';
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
    $pane->uuid = 'e115be47-58be-4829-9ef0-804ae899dbbf';
    $display->content['new-e115be47-58be-4829-9ef0-804ae899dbbf'] = $pane;
    $display->panels['contentmain'][0] = 'new-e115be47-58be-4829-9ef0-804ae899dbbf';
    $pane = new stdClass();
    $pane->pid = 'new-59d6ba56-f828-4a57-ad04-2acec8e778b2';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_all_page_layout-panel_pane_3';
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
    $pane->uuid = '59d6ba56-f828-4a57-ad04-2acec8e778b2';
    $display->content['new-59d6ba56-f828-4a57-ad04-2acec8e778b2'] = $pane;
    $display->panels['contentmain'][1] = 'new-59d6ba56-f828-4a57-ad04-2acec8e778b2';
    $pane = new stdClass();
    $pane->pid = 'new-dae557b1-805b-45fc-80eb-9bd5cf447071';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_all_page_layout-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dae557b1-805b-45fc-80eb-9bd5cf447071';
    $display->content['new-dae557b1-805b-45fc-80eb-9bd5cf447071'] = $pane;
    $display->panels['contentmain'][2] = 'new-dae557b1-805b-45fc-80eb-9bd5cf447071';
    $pane = new stdClass();
    $pane->pid = 'new-69a99065-74b9-4f27-b111-152652ccd789';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_all_page_layout-panel_pane_4';
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
    $pane->uuid = '69a99065-74b9-4f27-b111-152652ccd789';
    $display->content['new-69a99065-74b9-4f27-b111-152652ccd789'] = $pane;
    $display->panels['contentmain'][3] = 'new-69a99065-74b9-4f27-b111-152652ccd789';
    $pane = new stdClass();
    $pane->pid = 'new-c1030460-712e-4096-a42e-94b50c2ee010';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_all_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c1030460-712e-4096-a42e-94b50c2ee010';
    $display->content['new-c1030460-712e-4096-a42e-94b50c2ee010'] = $pane;
    $display->panels['contentmain'][4] = 'new-c1030460-712e-4096-a42e-94b50c2ee010';
    $pane = new stdClass();
    $pane->pid = 'new-d35bcd40-15a3-4691-b314-b65f8682a795';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd35bcd40-15a3-4691-b314-b65f8682a795';
    $display->content['new-d35bcd40-15a3-4691-b314-b65f8682a795'] = $pane;
    $display->panels['contentmain'][5] = 'new-d35bcd40-15a3-4691-b314-b65f8682a795';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__articles'] = $handler;

  return $export;
}
