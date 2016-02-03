<?php
/**
 * @file
 * profiles.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function profiles_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Profiles 2.0',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = '%user:name';
  $display->uuid = '583f21ba-4e49-48b3-ae26-62c968ea2b67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-43756f2d-684a-4827-ae16-84163dd14c55';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_10';
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
    $pane->uuid = '43756f2d-684a-4827-ae16-84163dd14c55';
    $display->content['new-43756f2d-684a-4827-ae16-84163dd14c55'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-43756f2d-684a-4827-ae16-84163dd14c55';
    $pane = new stdClass();
    $pane->pid = 'new-9b3f8652-0c7a-466d-93c5-f27254f90570';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_registrations-panel_pane_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9b3f8652-0c7a-466d-93c5-f27254f90570';
    $display->content['new-9b3f8652-0c7a-466d-93c5-f27254f90570'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-9b3f8652-0c7a-466d-93c5-f27254f90570';
    $pane = new stdClass();
    $pane->pid = 'new-ec257e39-ac49-43b5-894f-1c83e830f411';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_2';
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
    $pane->uuid = 'ec257e39-ac49-43b5-894f-1c83e830f411';
    $display->content['new-ec257e39-ac49-43b5-894f-1c83e830f411'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-ec257e39-ac49-43b5-894f-1c83e830f411';
    $pane = new stdClass();
    $pane->pid = 'new-d5bd52ec-5958-437d-8f57-a0af1bb5c167';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_8';
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
    $pane->uuid = 'd5bd52ec-5958-437d-8f57-a0af1bb5c167';
    $display->content['new-d5bd52ec-5958-437d-8f57-a0af1bb5c167'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-d5bd52ec-5958-437d-8f57-a0af1bb5c167';
    $pane = new stdClass();
    $pane->pid = 'new-cb7fd310-a6b5-403c-b292-73f94fc6eafa';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_7';
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
    $pane->uuid = 'cb7fd310-a6b5-403c-b292-73f94fc6eafa';
    $display->content['new-cb7fd310-a6b5-403c-b292-73f94fc6eafa'] = $pane;
    $display->panels['contentmainright'][0] = 'new-cb7fd310-a6b5-403c-b292-73f94fc6eafa';
    $pane = new stdClass();
    $pane->pid = 'new-82f0b9dd-9e5a-4f78-b3b3-e788bee6048d';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_6';
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
    $pane->uuid = '82f0b9dd-9e5a-4f78-b3b3-e788bee6048d';
    $display->content['new-82f0b9dd-9e5a-4f78-b3b3-e788bee6048d'] = $pane;
    $display->panels['contentmainright'][1] = 'new-82f0b9dd-9e5a-4f78-b3b3-e788bee6048d';
    $pane = new stdClass();
    $pane->pid = 'new-fc58bce7-bb7a-48ae-baeb-0e4fccc71b1f';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_9';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fc58bce7-bb7a-48ae-baeb-0e4fccc71b1f';
    $display->content['new-fc58bce7-bb7a-48ae-baeb-0e4fccc71b1f'] = $pane;
    $display->panels['contentmainright'][2] = 'new-fc58bce7-bb7a-48ae-baeb-0e4fccc71b1f';
    $pane = new stdClass();
    $pane->pid = 'new-9d1639a5-674a-425e-833a-9ed7b50c3116';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_1';
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
    $pane->uuid = '9d1639a5-674a-425e-833a-9ed7b50c3116';
    $display->content['new-9d1639a5-674a-425e-833a-9ed7b50c3116'] = $pane;
    $display->panels['sidebar'][0] = 'new-9d1639a5-674a-425e-833a-9ed7b50c3116';
    $pane = new stdClass();
    $pane->pid = 'new-2b4863f5-1d54-4fdc-9644-6b0f87f86052';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Content Count',
      'title' => '',
      'body' => '<div class="panel m-top-md">
    <div class="panel-body">
        <div class="row">
            
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("profiles_all_page_layout" , "panel_pane_3"); ?></span>
                <small class="text-muted">Blogs</small>
            </div><!-- /.col -->
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("profiles_all_page_layout" , "panel_pane_4"); ?></span>
                <small class="text-muted">Galleries</small>
            </div><!-- /.col -->
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("profiles_all_page_layout" , "panel_pane_5"); ?></span>
                <small class="text-muted">Lists</small>
            </div><!-- /.col -->
        </div>
    </div>
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b4863f5-1d54-4fdc-9644-6b0f87f86052';
    $display->content['new-2b4863f5-1d54-4fdc-9644-6b0f87f86052'] = $pane;
    $display->panels['sidebar'][1] = 'new-2b4863f5-1d54-4fdc-9644-6b0f87f86052';
    $pane = new stdClass();
    $pane->pid = 'new-662160f5-efa4-478c-bee9-718c9a27b7dc';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'text-center',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '662160f5-efa4-478c-bee9-718c9a27b7dc';
    $display->content['new-662160f5-efa4-478c-bee9-718c9a27b7dc'] = $pane;
    $display->panels['sidebar'][2] = 'new-662160f5-efa4-478c-bee9-718c9a27b7dc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function profiles_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'leaderboards';
  $page->task = 'page';
  $page->admin_title = 'Leaderboards';
  $page->admin_description = '';
  $page->path = 'wargaming-decorations/leaderboards/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Summary',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Leaderboards',
      'name' => 'main-menu',
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
  $handler->name = 'page_leaderboards_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'leaderboards';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'Leaderboards';
  $display->uuid = 'b7c37cf0-5901-41cd-ba08-5525869dfac6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-399d2e4a-4fbe-420c-9dde-8c4a0c936376';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'leaderboards_all_tables-panel_pane_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '399d2e4a-4fbe-420c-9dde-8c4a0c936376';
    $display->content['new-399d2e4a-4fbe-420c-9dde-8c4a0c936376'] = $pane;
    $display->panels['contentmain'][0] = 'new-399d2e4a-4fbe-420c-9dde-8c4a0c936376';
    $pane = new stdClass();
    $pane->pid = 'new-0210b2a1-3fbb-48b8-9607-ca3febd3cd73';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'leaderboards_all_tables-panel_pane_2';
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
    $pane->uuid = '0210b2a1-3fbb-48b8-9607-ca3febd3cd73';
    $display->content['new-0210b2a1-3fbb-48b8-9607-ca3febd3cd73'] = $pane;
    $display->panels['contentmain'][1] = 'new-0210b2a1-3fbb-48b8-9607-ca3febd3cd73';
    $pane = new stdClass();
    $pane->pid = 'new-9173b3e8-906e-4691-8202-a3283850e8ec';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'leaderboards_all_tables-panel_pane_3';
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
    $pane->uuid = '9173b3e8-906e-4691-8202-a3283850e8ec';
    $display->content['new-9173b3e8-906e-4691-8202-a3283850e8ec'] = $pane;
    $display->panels['contentmain'][2] = 'new-9173b3e8-906e-4691-8202-a3283850e8ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['leaderboards'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_all_trophy_room';
  $page->task = 'page';
  $page->admin_title = 'Profiles: All: Trophy Room';
  $page->admin_description = '';
  $page->path = 'user/%user/trophies';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Trophy Room',
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
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
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
  $handler->name = 'page_profiles_all_trophy_room_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'profiles_all_trophy_room';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = '%user:name\'s Trophy Room';
  $display->uuid = '1c1e1aac-46e6-4e37-b4cc-54f21d8c0bf7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1102c91b-add0-498d-a87c-47e1f3265c23';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Shortcuts',
      'title' => '',
      'body' => '<div class="grey-container shortcut-wrapper">
  <a href="#medals" class="shortcut-link">
    <span class="shortcut-icon">
      <i class="fa fa-angle-double-down"></i>
    </span>
    <span class="text">Medals</span>
  </a>

  <a href="#campaign-badges" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-screenshot" aria-hidden="true"></span>
    </span>
    <span class="text">Campaign Badges</span>
  </a>

  <a href="#achievements" class="shortcut-link">
    <span class="shortcut-icon">
      <i class="fa fa-certificate"></i>
    </span>
    <span class="text">Achievements</span>
  </a>
</div>',
      'format' => 'php_code',
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
    $pane->uuid = '1102c91b-add0-498d-a87c-47e1f3265c23';
    $display->content['new-1102c91b-add0-498d-a87c-47e1f3265c23'] = $pane;
    $display->panels['contentmain'][0] = 'new-1102c91b-add0-498d-a87c-47e1f3265c23';
    $pane = new stdClass();
    $pane->pid = 'new-e231ed80-d2e8-4f0e-81b2-2afb49df29ca';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_trophy_room-panel_pane_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e231ed80-d2e8-4f0e-81b2-2afb49df29ca';
    $display->content['new-e231ed80-d2e8-4f0e-81b2-2afb49df29ca'] = $pane;
    $display->panels['contentmain'][1] = 'new-e231ed80-d2e8-4f0e-81b2-2afb49df29ca';
    $pane = new stdClass();
    $pane->pid = 'new-c107702a-b4f8-4e4b-b4b6-f95e1eaeb527';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_trophy_room-panel_pane_2';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c107702a-b4f8-4e4b-b4b6-f95e1eaeb527';
    $display->content['new-c107702a-b4f8-4e4b-b4b6-f95e1eaeb527'] = $pane;
    $display->panels['contentmain'][2] = 'new-c107702a-b4f8-4e4b-b4b6-f95e1eaeb527';
    $pane = new stdClass();
    $pane->pid = 'new-846162ba-15cf-4a6e-8830-bf16979d4264';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_registrations-panel_pane_4';
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
    $pane->uuid = '846162ba-15cf-4a6e-8830-bf16979d4264';
    $display->content['new-846162ba-15cf-4a6e-8830-bf16979d4264'] = $pane;
    $display->panels['contentmain'][3] = 'new-846162ba-15cf-4a6e-8830-bf16979d4264';
    $pane = new stdClass();
    $pane->pid = 'new-451f8f43-90a8-4268-8a80-7b70231e5603';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_trophy_room-panel_pane_3';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '451f8f43-90a8-4268-8a80-7b70231e5603';
    $display->content['new-451f8f43-90a8-4268-8a80-7b70231e5603'] = $pane;
    $display->panels['contentmain'][4] = 'new-451f8f43-90a8-4268-8a80-7b70231e5603';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_all_trophy_room'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_stats';
  $page->task = 'page';
  $page->admin_title = 'User Stats';
  $page->admin_description = '';
  $page->path = 'user/%user/stats/main';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Summary',
    'name' => 'navigation',
    'weight' => '-1',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Stats',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
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
  $handler->name = 'page_user_stats__panel_context_6e376f25-9573-4fa9-89b3-9986f26a9313';
  $handler->task = 'page';
  $handler->subtask = 'user_stats';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'half' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:name Stats';
  $display->uuid = '5ba042ef-3ea9-44ff-9f1a-68234f049142';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e1c4dcf5-d855-430f-991c-b662fb9d38d8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_1';
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
    $pane->uuid = 'e1c4dcf5-d855-430f-991c-b662fb9d38d8';
    $display->content['new-e1c4dcf5-d855-430f-991c-b662fb9d38d8'] = $pane;
    $display->panels['contentmain'][0] = 'new-e1c4dcf5-d855-430f-991c-b662fb9d38d8';
    $pane = new stdClass();
    $pane->pid = 'new-06c0b4b5-ab2a-4eda-8940-1cc77b9f733d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_7';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06c0b4b5-ab2a-4eda-8940-1cc77b9f733d';
    $display->content['new-06c0b4b5-ab2a-4eda-8940-1cc77b9f733d'] = $pane;
    $display->panels['contentmain'][1] = 'new-06c0b4b5-ab2a-4eda-8940-1cc77b9f733d';
    $pane = new stdClass();
    $pane->pid = 'new-08f056ea-c8db-408b-9bf1-1df762053aaa';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_3';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '08f056ea-c8db-408b-9bf1-1df762053aaa';
    $display->content['new-08f056ea-c8db-408b-9bf1-1df762053aaa'] = $pane;
    $display->panels['contentmain'][2] = 'new-08f056ea-c8db-408b-9bf1-1df762053aaa';
    $pane = new stdClass();
    $pane->pid = 'new-0f78d26d-19d5-488b-94ed-570b08c1d080';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_4';
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
    $pane->uuid = '0f78d26d-19d5-488b-94ed-570b08c1d080';
    $display->content['new-0f78d26d-19d5-488b-94ed-570b08c1d080'] = $pane;
    $display->panels['contentmain'][3] = 'new-0f78d26d-19d5-488b-94ed-570b08c1d080';
    $pane = new stdClass();
    $pane->pid = 'new-2d2cfe5a-aae6-43f2-ae74-5415724f5cd9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_2';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2d2cfe5a-aae6-43f2-ae74-5415724f5cd9';
    $display->content['new-2d2cfe5a-aae6-43f2-ae74-5415724f5cd9'] = $pane;
    $display->panels['contentmain'][4] = 'new-2d2cfe5a-aae6-43f2-ae74-5415724f5cd9';
    $pane = new stdClass();
    $pane->pid = 'new-2b87b68d-289b-4019-91dd-755d3cfd1e4a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_1';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2b87b68d-289b-4019-91dd-755d3cfd1e4a';
    $display->content['new-2b87b68d-289b-4019-91dd-755d3cfd1e4a'] = $pane;
    $display->panels['contentmain'][5] = 'new-2b87b68d-289b-4019-91dd-755d3cfd1e4a';
    $pane = new stdClass();
    $pane->pid = 'new-440affee-298a-47d5-b81f-7fe465bf3415';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_5';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '440affee-298a-47d5-b81f-7fe465bf3415';
    $display->content['new-440affee-298a-47d5-b81f-7fe465bf3415'] = $pane;
    $display->panels['contentmain'][6] = 'new-440affee-298a-47d5-b81f-7fe465bf3415';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_stats'] = $page;

  return $pages;

}
