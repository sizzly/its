<?php
/**
 * @file
 * its_leagues.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_leagues_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__league_1_0';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'League 1.0',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'league_1_0',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'war_zone_league' => 'war_zone_league',
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
  $display->layout = 'bootopoly_its2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4a6f86da-02a1-4e7f-956e-766160159ec8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d64cd383-a40a-40e7-ac53-78e6a69b7e56';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_achievements-panel_pane_1';
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
    $pane->uuid = 'd64cd383-a40a-40e7-ac53-78e6a69b7e56';
    $display->content['new-d64cd383-a40a-40e7-ac53-78e6a69b7e56'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-d64cd383-a40a-40e7-ac53-78e6a69b7e56';
    $pane = new stdClass();
    $pane->pid = 'new-d15eb854-a0ec-4202-b69f-d01dc41c9d93';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd15eb854-a0ec-4202-b69f-d01dc41c9d93';
    $display->content['new-d15eb854-a0ec-4202-b69f-d01dc41c9d93'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-d15eb854-a0ec-4202-b69f-d01dc41c9d93';
    $pane = new stdClass();
    $pane->pid = 'new-3f2d58fc-a008-42a1-9a8d-0e506dfcc723';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'master_v2_challenges-panel_pane_1';
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
    $pane->uuid = '3f2d58fc-a008-42a1-9a8d-0e506dfcc723';
    $display->content['new-3f2d58fc-a008-42a1-9a8d-0e506dfcc723'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-3f2d58fc-a008-42a1-9a8d-0e506dfcc723';
    $pane = new stdClass();
    $pane->pid = 'new-8ba12542-77a3-4999-8a72-1ba308c95140';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'league_standings-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8ba12542-77a3-4999-8a72-1ba308c95140';
    $display->content['new-8ba12542-77a3-4999-8a72-1ba308c95140'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-8ba12542-77a3-4999-8a72-1ba308c95140';
    $pane = new stdClass();
    $pane->pid = 'new-9eb650e4-aa7b-4475-ad0b-992873e2c5b1';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9eb650e4-aa7b-4475-ad0b-992873e2c5b1';
    $display->content['new-9eb650e4-aa7b-4475-ad0b-992873e2c5b1'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-9eb650e4-aa7b-4475-ad0b-992873e2c5b1';
    $pane = new stdClass();
    $pane->pid = 'new-7cb45f62-d736-463b-84fc-b9897484e693';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
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
    $pane->uuid = '7cb45f62-d736-463b-84fc-b9897484e693';
    $display->content['new-7cb45f62-d736-463b-84fc-b9897484e693'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-7cb45f62-d736-463b-84fc-b9897484e693';
    $pane = new stdClass();
    $pane->pid = 'new-0d121490-77db-4211-9d50-9ab249e10a19';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_news-panel_pane_1';
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
    $pane->uuid = '0d121490-77db-4211-9d50-9ab249e10a19';
    $display->content['new-0d121490-77db-4211-9d50-9ab249e10a19'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-0d121490-77db-4211-9d50-9ab249e10a19';
    $pane = new stdClass();
    $pane->pid = 'new-13946273-c9ed-49bb-b4b1-f20d76524dd4';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_special_event_page_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13946273-c9ed-49bb-b4b1-f20d76524dd4';
    $display->content['new-13946273-c9ed-49bb-b4b1-f20d76524dd4'] = $pane;
    $display->panels['contentmainright'][0] = 'new-13946273-c9ed-49bb-b4b1-f20d76524dd4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7cb45f62-d736-463b-84fc-b9897484e693';
  $handler->conf['display'] = $display;
  $export['node_view__league_1_0'] = $handler;

  return $export;
}
