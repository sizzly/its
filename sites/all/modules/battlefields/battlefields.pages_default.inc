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
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Battlefields',
    'no_blocks' => 0,
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
  $display->title = '';
  $display->uuid = 'f851aa3e-e0d8-40fb-9e4b-f92ef7882f51';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87da767a-8e6b-4b1c-83bb-0a9c9138833b';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87da767a-8e6b-4b1c-83bb-0a9c9138833b';
    $display->content['new-87da767a-8e6b-4b1c-83bb-0a9c9138833b'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-87da767a-8e6b-4b1c-83bb-0a9c9138833b';
    $pane = new stdClass();
    $pane->pid = 'new-d22e8c4c-0c9b-4a52-8ca8-4b5ea569246b';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_3';
    $pane->shown = FALSE;
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
    $pane->uuid = 'd22e8c4c-0c9b-4a52-8ca8-4b5ea569246b';
    $display->content['new-d22e8c4c-0c9b-4a52-8ca8-4b5ea569246b'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-d22e8c4c-0c9b-4a52-8ca8-4b5ea569246b';
    $pane = new stdClass();
    $pane->pid = 'new-137d11e1-631a-46a6-93f9-f72d0884e320';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:location:body',
          'settings' => array(
            'body' => array(
              'und' => array(),
            ),
            'body_value' => array(),
            'body_summary' => array(),
            'body_format' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '137d11e1-631a-46a6-93f9-f72d0884e320';
    $display->content['new-137d11e1-631a-46a6-93f9-f72d0884e320'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-137d11e1-631a-46a6-93f9-f72d0884e320';
    $pane = new stdClass();
    $pane->pid = 'new-5a454a8a-e7a9-46f0-8fa7-2c58deba3be3';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_1';
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
    $pane->uuid = '5a454a8a-e7a9-46f0-8fa7-2c58deba3be3';
    $display->content['new-5a454a8a-e7a9-46f0-8fa7-2c58deba3be3'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-5a454a8a-e7a9-46f0-8fa7-2c58deba3be3';
    $pane = new stdClass();
    $pane->pid = 'new-0b9b2f40-1511-4ea6-80c7-c11f898d6117';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_2';
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
    $pane->uuid = '0b9b2f40-1511-4ea6-80c7-c11f898d6117';
    $display->content['new-0b9b2f40-1511-4ea6-80c7-c11f898d6117'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-0b9b2f40-1511-4ea6-80c7-c11f898d6117';
    $pane = new stdClass();
    $pane->pid = 'new-e14232de-fc67-493d-a4fd-0c4522fd5eaf';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_page_layout-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e14232de-fc67-493d-a4fd-0c4522fd5eaf';
    $display->content['new-e14232de-fc67-493d-a4fd-0c4522fd5eaf'] = $pane;
    $display->panels['contentmainright'][0] = 'new-e14232de-fc67-493d-a4fd-0c4522fd5eaf';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ecc92142-c97b-40f7-bdd1-3af723a997bf';
    $display->content['new-ecc92142-c97b-40f7-bdd1-3af723a997bf'] = $pane;
    $display->panels['contentmainright'][1] = 'new-ecc92142-c97b-40f7-bdd1-3af723a997bf';
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
  $handler->weight = -28;
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
  $page->path = 'theater/battlefield';
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
  $display->layout = 'bootopoly_its2';
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
    $pane->panel = 'contentmainleft';
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
    $display->panels['contentmainleft'][0] = 'new-9c3a5604-22b0-4c9a-ab87-b008605e4cb8';
    $pane = new stdClass();
    $pane->pid = 'new-2b0b0d56-16bb-4ecc-b562-bd22b2a8e5cc';
    $pane->panel = 'contentmainright';
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
    $display->panels['contentmainright'][0] = 'new-2b0b0d56-16bb-4ecc-b562-bd22b2a8e5cc';
    $pane = new stdClass();
    $pane->pid = 'new-9a2a8c85-176a-4510-82ce-7eeaf596266e';
    $pane->panel = 'contentmainright';
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
    $display->panels['contentmainright'][1] = 'new-9a2a8c85-176a-4510-82ce-7eeaf596266e';
    $pane = new stdClass();
    $pane->pid = 'new-5230aa17-19b0-46b4-8acd-744c5e8c2b13';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_map-panel_pane_2';
    $pane->shown = FALSE;
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
    $pane->pid = 'new-50b0e272-a160-48a1-9cac-8cb1f4dfab10';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battlefield_all_calendar-panel_pane_3';
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
    $pane->uuid = '50b0e272-a160-48a1-9cac-8cb1f4dfab10';
    $display->content['new-50b0e272-a160-48a1-9cac-8cb1f4dfab10'] = $pane;
    $display->panels['contentmain'][0] = 'new-50b0e272-a160-48a1-9cac-8cb1f4dfab10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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

  return $pages;

}
