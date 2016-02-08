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
    'panels_breadcrumbs_titles' => 'Gazatteer
Galleries',
    'panels_breadcrumbs_paths' => 'gazetteer
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
    $pane->pid = 'new-5acf59ac-3d3f-416d-9fa2-c1f0a978440b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'thumbnail text-center',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5acf59ac-3d3f-416d-9fa2-c1f0a978440b';
    $display->content['new-5acf59ac-3d3f-416d-9fa2-c1f0a978440b'] = $pane;
    $display->panels['contentmain'][1] = 'new-5acf59ac-3d3f-416d-9fa2-c1f0a978440b';
    $pane = new stdClass();
    $pane->pid = 'new-107f4d10-b7f1-4bd0-9572-4e94fef0cd15';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'files_test_modal-panel_pane_2';
    $pane->shown = FALSE;
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
    $pane->uuid = '107f4d10-b7f1-4bd0-9572-4e94fef0cd15';
    $display->content['new-107f4d10-b7f1-4bd0-9572-4e94fef0cd15'] = $pane;
    $display->panels['contentmain'][2] = 'new-107f4d10-b7f1-4bd0-9572-4e94fef0cd15';
    $pane = new stdClass();
    $pane->pid = 'new-579c9d39-b8e4-4e08-96e3-4bd3748cfff4';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_all_image_field_displays-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'id' => '%node:nid',
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
    $pane->uuid = '579c9d39-b8e4-4e08-96e3-4bd3748cfff4';
    $display->content['new-579c9d39-b8e4-4e08-96e3-4bd3748cfff4'] = $pane;
    $display->panels['contentmain'][3] = 'new-579c9d39-b8e4-4e08-96e3-4bd3748cfff4';
    $pane = new stdClass();
    $pane->pid = 'new-8d13aee7-8866-4d1f-b5c3-297122566284';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'files_test_modal-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = '8d13aee7-8866-4d1f-b5c3-297122566284';
    $display->content['new-8d13aee7-8866-4d1f-b5c3-297122566284'] = $pane;
    $display->panels['contentmain'][4] = 'new-8d13aee7-8866-4d1f-b5c3-297122566284';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ae443aa4-e0da-4914-8f2b-648eaa1e4a69';
    $display->content['new-ae443aa4-e0da-4914-8f2b-648eaa1e4a69'] = $pane;
    $display->panels['contentmain'][5] = 'new-ae443aa4-e0da-4914-8f2b-648eaa1e4a69';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c032ac02-12ac-43af-a737-f79bc9978cac';
    $display->content['new-c032ac02-12ac-43af-a737-f79bc9978cac'] = $pane;
    $display->panels['contentmain'][6] = 'new-c032ac02-12ac-43af-a737-f79bc9978cac';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '95ac7e97-707c-41e9-be09-da115ebf34d8';
    $display->content['new-95ac7e97-707c-41e9-be09-da115ebf34d8'] = $pane;
    $display->panels['contentmain'][7] = 'new-95ac7e97-707c-41e9-be09-da115ebf34d8';
    $pane = new stdClass();
    $pane->pid = 'new-3fb3a8d3-898c-4d99-89cf-049bdba14ee0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '3fb3a8d3-898c-4d99-89cf-049bdba14ee0';
    $display->content['new-3fb3a8d3-898c-4d99-89cf-049bdba14ee0'] = $pane;
    $display->panels['contentmain'][8] = 'new-3fb3a8d3-898c-4d99-89cf-049bdba14ee0';
    $pane = new stdClass();
    $pane->pid = 'new-caf0acb0-49e8-44d9-9b6f-36bda4374e14';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'caf0acb0-49e8-44d9-9b6f-36bda4374e14';
    $display->content['new-caf0acb0-49e8-44d9-9b6f-36bda4374e14'] = $pane;
    $display->panels['contentmain'][9] = 'new-caf0acb0-49e8-44d9-9b6f-36bda4374e14';
    $pane = new stdClass();
    $pane->pid = 'new-f691c4be-8369-427e-9d1c-1e2768a9f6e5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'f691c4be-8369-427e-9d1c-1e2768a9f6e5';
    $display->content['new-f691c4be-8369-427e-9d1c-1e2768a9f6e5'] = $pane;
    $display->panels['contentmain'][10] = 'new-f691c4be-8369-427e-9d1c-1e2768a9f6e5';
    $pane = new stdClass();
    $pane->pid = 'new-a1adfb89-c4b6-49de-bcec-7b8db85142e2';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'posts_update_no_battle';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'a1adfb89-c4b6-49de-bcec-7b8db85142e2';
    $display->content['new-a1adfb89-c4b6-49de-bcec-7b8db85142e2'] = $pane;
    $display->panels['contentmain'][11] = 'new-a1adfb89-c4b6-49de-bcec-7b8db85142e2';
    $pane = new stdClass();
    $pane->pid = 'new-68c0f2d9-bc84-4cde-a510-02f59e8aa1ac';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '0',
      'comments_per_page' => '30',
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '68c0f2d9-bc84-4cde-a510-02f59e8aa1ac';
    $display->content['new-68c0f2d9-bc84-4cde-a510-02f59e8aa1ac'] = $pane;
    $display->panels['contentmain'][12] = 'new-68c0f2d9-bc84-4cde-a510-02f59e8aa1ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__galleries'] = $handler;

  return $export;
}
