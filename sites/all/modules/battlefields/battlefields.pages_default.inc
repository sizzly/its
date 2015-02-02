<?php
/**
 * @file
 * battlefields.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function battlefields_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Battlefields',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'location' => 'location',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'War Zones
Battlefields',
    'panels_breadcrumbs_paths' => 'warzone
warzone/battlefield',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its';
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
  $display->title = '';
  $display->uuid = 'f851aa3e-e0d8-40fb-9e4b-f92ef7882f51';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7f90e354-50c9-40ce-b611-abd3b604045f';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_7';
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
    $pane->uuid = '7f90e354-50c9-40ce-b611-abd3b604045f';
    $display->content['new-7f90e354-50c9-40ce-b611-abd3b604045f'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-7f90e354-50c9-40ce-b611-abd3b604045f';
    $pane = new stdClass();
    $pane->pid = 'new-1d2be59c-fa47-42ac-b741-bfb15d23051a';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_calendar-panel_pane_2';
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
    $pane->uuid = '1d2be59c-fa47-42ac-b741-bfb15d23051a';
    $display->content['new-1d2be59c-fa47-42ac-b741-bfb15d23051a'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-1d2be59c-fa47-42ac-b741-bfb15d23051a';
    $pane = new stdClass();
    $pane->pid = 'new-e14232de-fc67-493d-a4fd-0c4522fd5eaf';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_6';
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
    $pane->uuid = 'e14232de-fc67-493d-a4fd-0c4522fd5eaf';
    $display->content['new-e14232de-fc67-493d-a4fd-0c4522fd5eaf'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-e14232de-fc67-493d-a4fd-0c4522fd5eaf';
    $pane = new stdClass();
    $pane->pid = 'new-4274f85c-836b-4cbe-a14f-b91146000cbc';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4274f85c-836b-4cbe-a14f-b91146000cbc';
    $display->content['new-4274f85c-836b-4cbe-a14f-b91146000cbc'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-4274f85c-836b-4cbe-a14f-b91146000cbc';
    $pane = new stdClass();
    $pane->pid = 'new-be319c19-766e-4180-b573-9e4aee75e5c2';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'messages_lists_for_nodes-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'be319c19-766e-4180-b573-9e4aee75e5c2';
    $display->content['new-be319c19-766e-4180-b573-9e4aee75e5c2'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-be319c19-766e-4180-b573-9e4aee75e5c2';
    $pane = new stdClass();
    $pane->pid = 'new-ecc92142-c97b-40f7-bdd1-3af723a997bf';
    $pane->panel = 'contentmainright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 9,
            ),
          ),
          'context' => 'relationship_entity_from_schema:uid-node-user_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:location:field_location_type',
          'settings' => array(
            'field_location_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '135',
                ),
              ),
            ),
            'field_location_type_tid' => '135',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Unofficial Page',
      'title' => '',
      'body' => '<h4>Unofficial Battlefield</h4>
<p>Do you represent %node:title? If so, take control of this page now by clicking the link below.</p>
<div align="center">
<a href="/local-game-store-tools" class="btn btn-default">I Represent This Battlefield</a>
</div>',
      'format' => 'pure_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alert alert-danger',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ecc92142-c97b-40f7-bdd1-3af723a997bf';
    $display->content['new-ecc92142-c97b-40f7-bdd1-3af723a997bf'] = $pane;
    $display->panels['contentmainright'][0] = 'new-ecc92142-c97b-40f7-bdd1-3af723a997bf';
    $pane = new stdClass();
    $pane->pid = 'new-f999a964-da68-4558-992e-0ff460d04fbf';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_stats-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f999a964-da68-4558-992e-0ff460d04fbf';
    $display->content['new-f999a964-da68-4558-992e-0ff460d04fbf'] = $pane;
    $display->panels['contentmainright'][1] = 'new-f999a964-da68-4558-992e-0ff460d04fbf';
    $pane = new stdClass();
    $pane->pid = 'new-d22e8c4c-0c9b-4a52-8ca8-4b5ea569246b';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_3';
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
    $pane->uuid = 'd22e8c4c-0c9b-4a52-8ca8-4b5ea569246b';
    $display->content['new-d22e8c4c-0c9b-4a52-8ca8-4b5ea569246b'] = $pane;
    $display->panels['contentmainright'][2] = 'new-d22e8c4c-0c9b-4a52-8ca8-4b5ea569246b';
    $pane = new stdClass();
    $pane->pid = 'new-225a1760-9501-45d7-983e-5d3c06620678';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_stats-panel_pane_1';
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
    $pane->uuid = '225a1760-9501-45d7-983e-5d3c06620678';
    $display->content['new-225a1760-9501-45d7-983e-5d3c06620678'] = $pane;
    $display->panels['contentmainright'][3] = 'new-225a1760-9501-45d7-983e-5d3c06620678';
    $pane = new stdClass();
    $pane->pid = 'new-0b8c01e0-c52e-48a3-9c90-db3ac40de683';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_stats-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '0b8c01e0-c52e-48a3-9c90-db3ac40de683';
    $display->content['new-0b8c01e0-c52e-48a3-9c90-db3ac40de683'] = $pane;
    $display->panels['contentmainright'][4] = 'new-0b8c01e0-c52e-48a3-9c90-db3ac40de683';
    $pane = new stdClass();
    $pane->pid = 'new-1dd770cd-5220-42a0-a71b-d45558eaffcb';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alert alert-danger',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1dd770cd-5220-42a0-a71b-d45558eaffcb';
    $display->content['new-1dd770cd-5220-42a0-a71b-d45558eaffcb'] = $pane;
    $display->panels['header'][0] = 'new-1dd770cd-5220-42a0-a71b-d45558eaffcb';
    $pane = new stdClass();
    $pane->pid = 'new-74972030-7f45-461f-a913-88002a84a72e';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '74972030-7f45-461f-a913-88002a84a72e';
    $display->content['new-74972030-7f45-461f-a913-88002a84a72e'] = $pane;
    $display->panels['sidebar'][0] = 'new-74972030-7f45-461f-a913-88002a84a72e';
    $pane = new stdClass();
    $pane->pid = 'new-389cfc56-9309-4782-ae4f-bf5b179676ab';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '389cfc56-9309-4782-ae4f-bf5b179676ab';
    $display->content['new-389cfc56-9309-4782-ae4f-bf5b179676ab'] = $pane;
    $display->panels['sidebar'][1] = 'new-389cfc56-9309-4782-ae4f-bf5b179676ab';
    $pane = new stdClass();
    $pane->pid = 'new-e5eb7731-9188-4e8f-8f36-28009cd6cff7';
    $pane->panel = 'sidebar';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'current',
      'path-external' => '',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e5eb7731-9188-4e8f-8f36-28009cd6cff7';
    $display->content['new-e5eb7731-9188-4e8f-8f36-28009cd6cff7'] = $pane;
    $display->panels['sidebar'][2] = 'new-e5eb7731-9188-4e8f-8f36-28009cd6cff7';
    $pane = new stdClass();
    $pane->pid = 'new-fc639eb9-8907-4e1a-966b-ac415e94c948';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 1,
        'panel_body' => 1,
        'footer_content' => 'Click on a game for local meta',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fc639eb9-8907-4e1a-966b-ac415e94c948';
    $display->content['new-fc639eb9-8907-4e1a-966b-ac415e94c948'] = $pane;
    $display->panels['sidebar'][3] = 'new-fc639eb9-8907-4e1a-966b-ac415e94c948';
    $pane = new stdClass();
    $pane->pid = 'new-08549135-d3f9-4cc3-be14-4489992d01f7';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_5';
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
    $pane->uuid = '08549135-d3f9-4cc3-be14-4489992d01f7';
    $display->content['new-08549135-d3f9-4cc3-be14-4489992d01f7'] = $pane;
    $display->panels['sidebar'][4] = 'new-08549135-d3f9-4cc3-be14-4489992d01f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Location Type',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'location_type' => 'location_type',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'War Zones
Battlefields',
    'panels_breadcrumbs_paths' => 'warzone
warzone/battlefield',
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
  $display->title = '%term:name';
  $display->uuid = '19fca040-0c94-47e7-a37e-a13513db50a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-da7dd36e-57e8-4ab6-ba59-53901c913c34';
    $pane->panel = 'contentmain';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da7dd36e-57e8-4ab6-ba59-53901c913c34';
    $display->content['new-da7dd36e-57e8-4ab6-ba59-53901c913c34'] = $pane;
    $display->panels['contentmain'][0] = 'new-da7dd36e-57e8-4ab6-ba59-53901c913c34';
    $pane = new stdClass();
    $pane->pid = 'new-1cebeabc-82ce-4556-b382-de42960f001f';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefields_all_lists-panel_pane_2';
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
    $pane->uuid = '1cebeabc-82ce-4556-b382-de42960f001f';
    $display->content['new-1cebeabc-82ce-4556-b382-de42960f001f'] = $pane;
    $display->panels['contentmain'][1] = 'new-1cebeabc-82ce-4556-b382-de42960f001f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function battlefields_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'battlefield';
  $page->task = 'page';
  $page->admin_title = 'Battlefield';
  $page->admin_description = '';
  $page->path = 'warzone/battlefield';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Battlefields',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_battlefield_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'battlefield';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Main',
    'no_blocks' => 1,
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
        'title' => array(
          'value' => 'Battlefields',
        ),
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
  $display->layout = 'bootopoly_its';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
    ),
    'header' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Battlefields';
  $display->uuid = 'f770b9c8-b915-46da-b684-4e404317991b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9c3a5604-22b0-4c9a-ab87-b008605e4cb8';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefields_all_lists-panel_pane_1';
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
    $pane->uuid = '9c3a5604-22b0-4c9a-ab87-b008605e4cb8';
    $display->content['new-9c3a5604-22b0-4c9a-ab87-b008605e4cb8'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-9c3a5604-22b0-4c9a-ab87-b008605e4cb8';
    $pane = new stdClass();
    $pane->pid = 'new-5230aa17-19b0-46b4-8acd-744c5e8c2b13';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_map-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'jumbotron',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5230aa17-19b0-46b4-8acd-744c5e8c2b13';
    $display->content['new-5230aa17-19b0-46b4-8acd-744c5e8c2b13'] = $pane;
    $display->panels['header'][0] = 'new-5230aa17-19b0-46b4-8acd-744c5e8c2b13';
    $pane = new stdClass();
    $pane->pid = 'new-2b0b0d56-16bb-4ecc-b562-bd22b2a8e5cc';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2>A World of War</h2>

<p>Behold, commander! &nbsp;A multitude of battlefields await the might of your armies.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2b0b0d56-16bb-4ecc-b562-bd22b2a8e5cc';
    $display->content['new-2b0b0d56-16bb-4ecc-b562-bd22b2a8e5cc'] = $pane;
    $display->panels['sidebar'][0] = 'new-2b0b0d56-16bb-4ecc-b562-bd22b2a8e5cc';
    $pane = new stdClass();
    $pane->pid = 'new-9a2a8c85-176a-4510-82ce-7eeaf596266e';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php
  $block = module_invoke(\'views\', \'block_view\', \'-exp-battlefields_all_lists-panel_pane_1\');
  print render($block[\'content\']);
?>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9a2a8c85-176a-4510-82ce-7eeaf596266e';
    $display->content['new-9a2a8c85-176a-4510-82ce-7eeaf596266e'] = $pane;
    $display->panels['sidebar'][1] = 'new-9a2a8c85-176a-4510-82ce-7eeaf596266e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['battlefield'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'battlefield_camera';
  $page->task = 'page';
  $page->admin_title = 'Battlefield Calendar';
  $page->admin_description = '';
  $page->path = 'node/%node/calendar';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'location' => 'location',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Calendar',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_battlefield_camera_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'battlefield_camera';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'location' => 'location',
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
  $display->title = '';
  $display->uuid = 'a8a4db03-1c2e-4733-bd51-c8af66407740';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-15428fa7-29fd-4d52-9d34-5f113bb5d0f9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_calendar-panel_pane_3';
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
    $pane->uuid = '15428fa7-29fd-4d52-9d34-5f113bb5d0f9';
    $display->content['new-15428fa7-29fd-4d52-9d34-5f113bb5d0f9'] = $pane;
    $display->panels['contentmain'][0] = 'new-15428fa7-29fd-4d52-9d34-5f113bb5d0f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-15428fa7-29fd-4d52-9d34-5f113bb5d0f9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['battlefield_camera'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'battlefield_local_meta';
  $page->task = 'page';
  $page->admin_title = 'Battlefield Local Meta';
  $page->admin_description = '';
  $page->path = 'node/%node/%game/meta';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'location' => 'location',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'game' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          2 => '2',
          20 => 0,
          29 => 0,
          19 => 0,
          17 => 0,
          9 => 0,
          3 => 0,
          13 => 0,
          22 => 0,
          11 => 0,
          8 => 0,
          4 => 0,
          28 => 0,
          5 => 0,
          16 => 0,
          1 => 0,
          18 => 0,
          21 => 0,
          15 => 0,
          10 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_battlefield_local_meta_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'battlefield_local_meta';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node:title',
    'panels_breadcrumbs_paths' => '%node:url',
    'panels_breadcrumbs_home' => 1,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[node:title] Local Meta',
        ),
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
  $display->layout = 'bootopoly_its';
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
  $display->title = '%node:title %game:name Meta';
  $display->uuid = 'f5d91163-3a9d-420b-aea8-f081d0193789';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd12bc38-af0a-4eb2-a17a-b3eb74187145';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_game_meta-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_nid' => '%node:nid',
        'term_node_tid_depth' => '%game:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd12bc38-af0a-4eb2-a17a-b3eb74187145';
    $display->content['new-bd12bc38-af0a-4eb2-a17a-b3eb74187145'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-bd12bc38-af0a-4eb2-a17a-b3eb74187145';
    $pane = new stdClass();
    $pane->pid = 'new-2f833312-44d0-4dce-8372-742ebaec4f77';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_game_meta-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_nid' => '%node:nid',
        'term_node_tid_depth' => '%game:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2f833312-44d0-4dce-8372-742ebaec4f77';
    $display->content['new-2f833312-44d0-4dce-8372-742ebaec4f77'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-2f833312-44d0-4dce-8372-742ebaec4f77';
    $pane = new stdClass();
    $pane->pid = 'new-9f9c9c53-aa20-49db-b989-ca3a8ae4d573';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_game_meta-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_nid' => '%node:nid',
        'term_node_tid_depth' => '%game:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9f9c9c53-aa20-49db-b989-ca3a8ae4d573';
    $display->content['new-9f9c9c53-aa20-49db-b989-ca3a8ae4d573'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-9f9c9c53-aa20-49db-b989-ca3a8ae4d573';
    $pane = new stdClass();
    $pane->pid = 'new-738d24f0-791c-405c-b71f-dde2249cabee';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_game_meta-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_nid' => '%node:nid',
        'term_node_tid_depth' => '%game:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '738d24f0-791c-405c-b71f-dde2249cabee';
    $display->content['new-738d24f0-791c-405c-b71f-dde2249cabee'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-738d24f0-791c-405c-b71f-dde2249cabee';
    $pane = new stdClass();
    $pane->pid = 'new-a6e1ae25-982a-48bf-84ca-b03a4dc565f9';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_game_meta-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_nid' => '%node:nid',
        'term_node_tid_depth' => '%game:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6e1ae25-982a-48bf-84ca-b03a4dc565f9';
    $display->content['new-a6e1ae25-982a-48bf-84ca-b03a4dc565f9'] = $pane;
    $display->panels['contentmainright'][0] = 'new-a6e1ae25-982a-48bf-84ca-b03a4dc565f9';
    $pane = new stdClass();
    $pane->pid = 'new-91070153-c75b-41b2-954b-428f631148a7';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_game_meta-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_nid' => '%node:nid',
        'term_node_tid_depth' => '%game:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '91070153-c75b-41b2-954b-428f631148a7';
    $display->content['new-91070153-c75b-41b2-954b-428f631148a7'] = $pane;
    $display->panels['contentmainright'][1] = 'new-91070153-c75b-41b2-954b-428f631148a7';
    $pane = new stdClass();
    $pane->pid = 'new-c9c5bc67-2f1b-4c9b-b3c8-25add608f519';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_game_meta-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_nid' => '%node:nid',
        'term_node_tid_depth' => '%game:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c9c5bc67-2f1b-4c9b-b3c8-25add608f519';
    $display->content['new-c9c5bc67-2f1b-4c9b-b3c8-25add608f519'] = $pane;
    $display->panels['contentmainright'][2] = 'new-c9c5bc67-2f1b-4c9b-b3c8-25add608f519';
    $pane = new stdClass();
    $pane->pid = 'new-1426d11a-e589-4cc5-9af7-19c0da11277d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1426d11a-e589-4cc5-9af7-19c0da11277d';
    $display->content['new-1426d11a-e589-4cc5-9af7-19c0da11277d'] = $pane;
    $display->panels['sidebar'][0] = 'new-1426d11a-e589-4cc5-9af7-19c0da11277d';
    $pane = new stdClass();
    $pane->pid = 'new-dff8ab97-3d9f-48f2-b497-007afabc2f2b';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dff8ab97-3d9f-48f2-b497-007afabc2f2b';
    $display->content['new-dff8ab97-3d9f-48f2-b497-007afabc2f2b'] = $pane;
    $display->panels['sidebar'][1] = 'new-dff8ab97-3d9f-48f2-b497-007afabc2f2b';
    $pane = new stdClass();
    $pane->pid = 'new-7d7f236b-9218-4656-930d-b309ec671155';
    $pane->panel = 'sidebar';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'current',
      'path-external' => '',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7d7f236b-9218-4656-930d-b309ec671155';
    $display->content['new-7d7f236b-9218-4656-930d-b309ec671155'] = $pane;
    $display->panels['sidebar'][2] = 'new-7d7f236b-9218-4656-930d-b309ec671155';
    $pane = new stdClass();
    $pane->pid = 'new-1e0c8d54-3c48-4746-93eb-2fc4c9246d79';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_2';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1e0c8d54-3c48-4746-93eb-2fc4c9246d79';
    $display->content['new-1e0c8d54-3c48-4746-93eb-2fc4c9246d79'] = $pane;
    $display->panels['sidebar'][3] = 'new-1e0c8d54-3c48-4746-93eb-2fc4c9246d79';
    $pane = new stdClass();
    $pane->pid = 'new-72e2b0f5-2dfc-4d7e-869b-3c24a607b070';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_5';
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
    $pane->uuid = '72e2b0f5-2dfc-4d7e-869b-3c24a607b070';
    $display->content['new-72e2b0f5-2dfc-4d7e-869b-3c24a607b070'] = $pane;
    $display->panels['sidebar'][4] = 'new-72e2b0f5-2dfc-4d7e-869b-3c24a607b070';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1426d11a-e589-4cc5-9af7-19c0da11277d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['battlefield_local_meta'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ironmonger_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Ironmonger landing page';
  $page->admin_description = '';
  $page->path = 'local-game-store-tools';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ironmonger_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ironmonger_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '5059',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Ironmongers: Tools for the Local Game Store',
        ),
        'description' => array(
          'value' => 'iToysoldiers is looking for a handful of local game store owners to partner with us to create the best online tools for miniature war gaming stores. Learn more about what we have to offer you to make your war gaming even better.',
        ),
        'abstract' => array(
          'value' => 'An invitation for local game store owners to join the iToysoldiers Ironmonger program.',
        ),
        'keywords' => array(
          'value' => 'miniature war gaming, stores, tools for local game store, table top war gaming',
        ),
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
        'og:type' => array(
          'value' => 'website',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1a5861fc-0473-4263-9e2e-7f9974d6e645';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-faf92acf-cc32-464d-baac-bafef45daa8b';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Invitation',
      'title' => '',
      'body' => '<h3>Greetings, Honoured Game Store Owner.</h3>

<p><strong>I’d like to invite you to become a life-long “premium” member of iToysoldiers as part of our Ironmonger program. &nbsp;I’m looking for a handful of game store owners to help me develop tools and features that’ll help you in the tabletop war gaming portion of your business. You can help me prioritize what I’m working on, suggest new features, and get access to these features before anyone else.&nbsp; It’s your input that’ll help shape how iToysoldiers supports the local game store.</strong></p>

<p>Intrigued? You should be. &nbsp;Here are a few of the benefits you\'ll receive for joining the Ironmonger program.</p>

<h3>Free For Life</h3>

<p>If you’re selected as one of the first Ironmongers your Ironmonger status lasts forever.&nbsp; You’ll always have premium access to exclusive tools.&nbsp; It’s my way of saying thank you for your help.&nbsp; Ultimately, I intend to charge a subscription for the Ironmonger features so jumping on board now is a great way to lock yourself in as part of the iToysoldiers community.</p>

<h3>What’s the Ironmonger Program?</h3>

<p>The idea is pretty simple: The Ironmonger program provides a suite of tools to help local game stores support a wide variety of table top gaming activities.&nbsp; iToysoldiers wants to make your leagues, tournaments, and special events bigger and better. &nbsp;Better support of miniature war gaming means more players which leads to bigger and better events.&nbsp; And that leads to happier players who’ll spend more on miniature games.</p>

<h3>How do I become an Ironmonger?</h3>

<ul>
	<li>Do you run&nbsp;a game store that carries miniature war gaming products?</li>
	<li>Are you&nbsp;willing to chat with me about the challenges you have in supporting miniature war gaming?</li>
	<li>Are you&nbsp;excited about an online tool that’ll automate leagues, reward your players, and generally make your life easier?</li>
	<li>Are you&nbsp;willing to let me know what’s working for you on iToysoldiers and, more importantly, what isn’t? &nbsp;I need your candid feedback.</li>
</ul>

<p>If you fulfill these requirements then fill out the form and we’ll start chatting about how iToysoldiers can help your store.&nbsp;</p>

<p>Still on the fence?&nbsp; Read on:</p>

<h3>What you get right now</h3>

<ul>
	<li>As a partner with iToysoldiers you’ll get all of these features right out of the gate and you’ll never lose this premium access.</li>
	<li>A really slick <a href="http://itoysoldiers.com/battlefield/brimstone-games">profile page</a> for your store that includes game stats, upcoming events, local meta for each game you support and more.&nbsp;</li>
	<li>Influence in what tools and features iToysoldiers builds to support the unsung heroes of the table top war gaming hobby.&nbsp; That’d be you!</li>
	<li>Priority iToysoldiers support&nbsp;&nbsp;– which is really handy if you or your players are having issues.</li>
	<li>The ability to earn prestige points for your store.&nbsp; What’s prestige?&nbsp; It measures how active (and thus cool) a gaming store is.</li>
	<li>Access to the League Manager.</li>
	<li>Co-branding on a number of pages on iToysoldiers.</li>
</ul>

<h3>What’s on the Horizon?</h3>

<p>Right now I’ve got some additional features in the pipeline.&nbsp; As these get released you’ll also get them as part of this partnership.&nbsp; Cool, eh?</p>

<ul>
	<li>More League types including the Privateer Press Journeyman league format.</li>
	<li>A tournament manager with support for a whole bunch of popular tournament formats.</li>
	<li>The ability to award your players with custom achievements on iToysoldiers.</li>
	<li>Store rankings</li>
	<li>A personal profile on iToysoldiers that better represents your role as a store owner.</li>
	<li>And more, more, more…</li>
</ul>

<p>So there’s my pitch.&nbsp; I’m looking forward to working with you to support table top war gaming at your store.&nbsp; I aim to please and I live for feedback.&nbsp; If you have any questions or comments at all feel free to drop me a line at <a href="mailto:support@itoysoldiers.uservoice.com">support@itoysoldiers.uservoice.com</a> (I use this email address to organize all the incoming feedback – I know it looks impersonal.&nbsp; I promise I watch it like a hawk).</p>

<p>Carpe Acies,<br />
Rob<br />
<a href="http://itoysoldiers.com/">itoysoldiers.com</a></p>
',
      'format' => 'filtered_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'faf92acf-cc32-464d-baac-bafef45daa8b';
    $display->content['new-faf92acf-cc32-464d-baac-bafef45daa8b'] = $pane;
    $display->panels['contentmain'][0] = 'new-faf92acf-cc32-464d-baac-bafef45daa8b';
    $pane = new stdClass();
    $pane->pid = 'new-8882395a-3623-4ed0-ab2a-989cceeaa090';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>Become an iToysoldiers Ironmonger</h1>

<h2>An Invitation for Game Store Owners</h2>',
      'format' => 'pure_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'jumbotron',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8882395a-3623-4ed0-ab2a-989cceeaa090';
    $display->content['new-8882395a-3623-4ed0-ab2a-989cceeaa090'] = $pane;
    $display->panels['header'][0] = 'new-8882395a-3623-4ed0-ab2a-989cceeaa090';
    $pane = new stdClass();
    $pane->pid = 'new-1bb24b85-1d05-47bf-b3dd-9db9df295082';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'context_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Let\'s Talk',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1bb24b85-1d05-47bf-b3dd-9db9df295082';
    $display->content['new-1bb24b85-1d05-47bf-b3dd-9db9df295082'] = $pane;
    $display->panels['sidebar'][0] = 'new-1bb24b85-1d05-47bf-b3dd-9db9df295082';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8882395a-3623-4ed0-ab2a-989cceeaa090';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ironmonger_landing_page'] = $page;

  return $pages;

}
