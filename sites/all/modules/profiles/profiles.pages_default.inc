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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[user:name] | [site:name]',
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%user:name',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => array(
        'region_title' => '',
        'use_title' => 0,
        'panel_body' => 1,
        'context_class' => 'panel-primary',
        'use_footer' => 0,
        'footer_content' => '',
      ),
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'bootstrap_panel',
    ),
  );
  $display->cache = array();
  $display->title = '%user:name';
  $display->uuid = '583f21ba-4e49-48b3-ae26-62c968ea2b67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d1639a5-674a-425e-833a-9ed7b50c3116';
    $pane->panel = 'contentmain';
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
    $display->panels['contentmain'][0] = 'new-9d1639a5-674a-425e-833a-9ed7b50c3116';
    $pane = new stdClass();
    $pane->pid = 'new-040fcd81-26fb-43c6-ae67-8898fcdfd56c';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Featured Content',
      'title' => '',
      'body' => '<?php print views_embed_view("profiles_all_page_layout", "panel_pane_15"); ?>
<div class="row">
    <?php print views_embed_view("profiles_all_page_layout", "panel_pane_9"); ?>
</div>
<div class="clearfix"></div>',
      'format' => 'php_code',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '040fcd81-26fb-43c6-ae67-8898fcdfd56c';
    $display->content['new-040fcd81-26fb-43c6-ae67-8898fcdfd56c'] = $pane;
    $display->panels['contentmain'][1] = 'new-040fcd81-26fb-43c6-ae67-8898fcdfd56c';
    $pane = new stdClass();
    $pane->pid = 'new-fe196493-808c-443e-80f3-ab3a48a8fe75';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_images-panel_pane_1';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe196493-808c-443e-80f3-ab3a48a8fe75';
    $display->content['new-fe196493-808c-443e-80f3-ab3a48a8fe75'] = $pane;
    $display->panels['contentmain'][2] = 'new-fe196493-808c-443e-80f3-ab3a48a8fe75';
    $pane = new stdClass();
    $pane->pid = 'new-944ca6d6-186d-42dd-a802-b8f6498784e0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_10';
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
    $pane->uuid = '944ca6d6-186d-42dd-a802-b8f6498784e0';
    $display->content['new-944ca6d6-186d-42dd-a802-b8f6498784e0'] = $pane;
    $display->panels['contentmain'][3] = 'new-944ca6d6-186d-42dd-a802-b8f6498784e0';
    $pane = new stdClass();
    $pane->pid = 'new-875caeab-5866-4e3f-9fd9-03661f42db3b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_registrations-panel_pane_1';
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
    $pane->uuid = '875caeab-5866-4e3f-9fd9-03661f42db3b';
    $display->content['new-875caeab-5866-4e3f-9fd9-03661f42db3b'] = $pane;
    $display->panels['contentmain'][4] = 'new-875caeab-5866-4e3f-9fd9-03661f42db3b';
    $pane = new stdClass();
    $pane->pid = 'new-ea12fbe0-feeb-4786-8557-79e2493a3296';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_content_pages-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ea12fbe0-feeb-4786-8557-79e2493a3296';
    $display->content['new-ea12fbe0-feeb-4786-8557-79e2493a3296'] = $pane;
    $display->panels['contentmain'][5] = 'new-ea12fbe0-feeb-4786-8557-79e2493a3296';
    $pane = new stdClass();
    $pane->pid = 'new-ec257e39-ac49-43b5-894f-1c83e830f411';
    $pane->panel = 'sidebar';
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
    $display->panels['sidebar'][0] = 'new-ec257e39-ac49-43b5-894f-1c83e830f411';
    $pane = new stdClass();
    $pane->pid = 'new-18f113ee-2da7-49b8-93c1-c211478ac6f9';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '18f113ee-2da7-49b8-93c1-c211478ac6f9';
    $display->content['new-18f113ee-2da7-49b8-93c1-c211478ac6f9'] = $pane;
    $display->panels['sidebar'][1] = 'new-18f113ee-2da7-49b8-93c1-c211478ac6f9';
    $pane = new stdClass();
    $pane->pid = 'new-925394ee-2285-4064-a67d-e3e89af2316d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_13';
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
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '925394ee-2285-4064-a67d-e3e89af2316d';
    $display->content['new-925394ee-2285-4064-a67d-e3e89af2316d'] = $pane;
    $display->panels['sidebar'][2] = 'new-925394ee-2285-4064-a67d-e3e89af2316d';
    $pane = new stdClass();
    $pane->pid = 'new-2b4863f5-1d54-4fdc-9644-6b0f87f86052';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Content Count',
      'title' => 'Content',
      'body' => '<div class="panel panel-default">
    <div class="panel-body no-padding collapse in" id="toDoListWidget">
        <ul class="list-group task-list no-margin collapse in">
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_17"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_6"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_3"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_4"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_5"); ?>
            <?php print views_embed_view("profiles_all_images", "panel_pane_2"); ?>
            <?php print views_embed_view("profiles_all_page_layout", "panel_pane_16"); ?>
        </ul><!-- /list-group -->
    </div>
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2b4863f5-1d54-4fdc-9644-6b0f87f86052';
    $display->content['new-2b4863f5-1d54-4fdc-9644-6b0f87f86052'] = $pane;
    $display->panels['sidebar'][3] = 'new-2b4863f5-1d54-4fdc-9644-6b0f87f86052';
    $pane = new stdClass();
    $pane->pid = 'new-3f50849f-ac18-46a8-855d-ac724a5203ce';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_12';
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
    $pane->uuid = '3f50849f-ac18-46a8-855d-ac724a5203ce';
    $display->content['new-3f50849f-ac18-46a8-855d-ac724a5203ce'] = $pane;
    $display->panels['sidebar'][4] = 'new-3f50849f-ac18-46a8-855d-ac724a5203ce';
    $pane = new stdClass();
    $pane->pid = 'new-a6670304-3c49-4332-b69a-e42de5e9fb26';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a6670304-3c49-4332-b69a-e42de5e9fb26';
    $display->content['new-a6670304-3c49-4332-b69a-e42de5e9fb26'] = $pane;
    $display->panels['sidebar'][5] = 'new-a6670304-3c49-4332-b69a-e42de5e9fb26';
    $pane = new stdClass();
    $pane->pid = 'new-6637cb04-b255-4858-acda-77dd1a9e96e0';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_14';
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
    $pane->uuid = '6637cb04-b255-4858-acda-77dd1a9e96e0';
    $display->content['new-6637cb04-b255-4858-acda-77dd1a9e96e0'] = $pane;
    $display->panels['sidebar'][6] = 'new-6637cb04-b255-4858-acda-77dd1a9e96e0';
  $display->hide_title = PANELS_TITLE_NONE;
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
  $page->path = 'user/%user/trophies/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Decorations',
    'name' => 'navigation',
    'weight' => '-10',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Decorations',
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
  $display->title = '%user:name\'s Decorations';
  $display->uuid = '1c1e1aac-46e6-4e37-b4cc-54f21d8c0bf7';
  $display->content = array();
  $display->panels = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e231ed80-d2e8-4f0e-81b2-2afb49df29ca';
    $display->content['new-e231ed80-d2e8-4f0e-81b2-2afb49df29ca'] = $pane;
    $display->panels['contentmain'][0] = 'new-e231ed80-d2e8-4f0e-81b2-2afb49df29ca';
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c107702a-b4f8-4e4b-b4b6-f95e1eaeb527';
    $display->content['new-c107702a-b4f8-4e4b-b4b6-f95e1eaeb527'] = $pane;
    $display->panels['contentmain'][1] = 'new-c107702a-b4f8-4e4b-b4b6-f95e1eaeb527';
    $pane = new stdClass();
    $pane->pid = 'new-81c75aa8-6206-410e-919a-0a6745611019';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_page_layout-panel_pane_10';
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
    $pane->uuid = '81c75aa8-6206-410e-919a-0a6745611019';
    $display->content['new-81c75aa8-6206-410e-919a-0a6745611019'] = $pane;
    $display->panels['contentmain'][2] = 'new-81c75aa8-6206-410e-919a-0a6745611019';
    $pane = new stdClass();
    $pane->pid = 'new-ac7994b0-6da9-40ca-b6d4-0a7ddf7a1a5d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles_all_registrations-panel_pane_1';
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
    $pane->uuid = 'ac7994b0-6da9-40ca-b6d4-0a7ddf7a1a5d';
    $display->content['new-ac7994b0-6da9-40ca-b6d4-0a7ddf7a1a5d'] = $pane;
    $display->panels['contentmain'][3] = 'new-ac7994b0-6da9-40ca-b6d4-0a7ddf7a1a5d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_all_trophy_room'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_battle_stats_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Battle Stats Page';
  $page->admin_description = '';
  $page->path = 'user/%user/stats/battle-statistics/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Summary',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Battle',
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
  $handler->name = 'page_profiles_battle_stats_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'profiles_battle_stats_page';
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
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
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
  $display->title = 'Battle Statistics: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3f7745f-980a-4577-8bac-c48c06f637ae';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Average Battle Score',
      'body' => '<script src="/sites/all/libraries/highcharts/js/highcharts-more.js"></script>
<script src="/sites/all/libraries/highcharts/js/modules/solid-gauge.js"></script>
<script>
jQuery(document).ready(function($) {
    var gaugeOptions = {

        chart: {
            type: \'solidgauge\'
        },
        credits: {
            enabled: false
        },

        title: null,

        pane: {
            center: [\'50%\', \'85%\'],
            size: \'140%\',
            startAngle: -90,
            endAngle: 90,
            background: {
                backgroundColor: (Highcharts.theme && Highcharts.theme.background2) || \'#EEE\',
                innerRadius: \'60%\',
                outerRadius: \'100%\',
                shape: \'arc\'
            }
        },

        tooltip: {
            enabled: false
        },

        // the value axis
        yAxis: {
            stops: [
                [0.4, \'#DF5353\'], // red
                [0.7, \'#DDDF0D\'], // yellow
                [1.0, \'#55BF3B\'] // green
            ],
            lineWidth: 0,
            minorTickInterval: null,
            tickPixelInterval: 400,
            tickWidth: 0,
            title: {
                y: -70
            },
            labels: {
                y: 16
            }
        },

        plotOptions: {
            solidgauge: {
                dataLabels: {
                    y: 5,
                    borderWidth: 0,
                    useHTML: true
                }
            }
        }
    };

    // The speed gauge
    $(\'#container_avg\').highcharts(Highcharts.merge(gaugeOptions, {
        yAxis: {
            min: 0,
            max: 5,
            title: {
                text: null
            }
        },

        credits: {
            enabled: false
        },

        series: [{
            name: \'AVG Battle Score\',
            data: [<?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_5")); ?>],
            dataLabels: {
                format: \'<div style="text-align:center"><span style="font-size:25px;color:\' +
                    ((Highcharts.theme && Highcharts.theme.contrastTextColor) || \'black\') + \'">{y}</span>\'
            },
        }]
    }));
});
</script>
<div id="container_avg" style="width: 100%; height: 200px; margin: 0 auto"></div>',
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
    $pane->uuid = 'd3f7745f-980a-4577-8bac-c48c06f637ae';
    $display->content['new-d3f7745f-980a-4577-8bac-c48c06f637ae'] = $pane;
    $display->panels['contentmain'][0] = 'new-d3f7745f-980a-4577-8bac-c48c06f637ae';
    $pane = new stdClass();
    $pane->pid = 'new-6723d539-1539-4f7a-ad14-41e6bc0c44d4';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_stats_battle-panel_pane_3';
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
    $pane->uuid = '6723d539-1539-4f7a-ad14-41e6bc0c44d4';
    $display->content['new-6723d539-1539-4f7a-ad14-41e6bc0c44d4'] = $pane;
    $display->panels['contentmain'][1] = 'new-6723d539-1539-4f7a-ad14-41e6bc0c44d4';
    $pane = new stdClass();
    $pane->pid = 'new-32caf0b1-33d7-4916-90f1-a687e1e34aa5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_stats_battle-panel_pane_6';
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
    $pane->uuid = '32caf0b1-33d7-4916-90f1-a687e1e34aa5';
    $display->content['new-32caf0b1-33d7-4916-90f1-a687e1e34aa5'] = $pane;
    $display->panels['contentmain'][2] = 'new-32caf0b1-33d7-4916-90f1-a687e1e34aa5';
    $pane = new stdClass();
    $pane->pid = 'new-b4c6c9bb-aeca-4c9e-8a71-b80973ffa0cc';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Top Row',
      'title' => '',
      'body' => '<div class="row">
<div class="padding-md">
    <div class="row">
        <div class="col-sm-6 col-md-3">
           <a href="/user/%user:uid/content/battles">
            <div class="panel-stat3 bg-danger">
                <h2 class="m-top-none" id="userCount"><?php print views_embed_view("profile_stats_battle" , "panel_pane_1"); ?></h2>
                <h5>Battles</h5>
                <div class="stat-icon">
                    <i class="fa fa-fire fa-3x"></i>
                </div>
            </div>
           </a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
            <a href="/user/%user:uid/stats/battle-statistics/player-army">
            <div class="panel-stat3 bg-info">
                <h2 class="m-top-none"><?php print views_embed_view("profile_stats_battle" , "panel_pane_7"); ?></h2>
                <h5>Player\'s Armies</h5>
                <div class="stat-icon">
                    <i class="fa fa-bookmark fa-3x"></i>
                </div>
            </div>
            </a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
<a href="/user/%user:uid/stats/battle-statistics/opponent-army">
            <div class="panel-stat3 bg-warning">
                <h2 class="m-top-none"><?php print views_embed_view("profile_stats_battle" , "panel_pane_8"); ?></h2>
                <h5>Opponent\'s Armies</h5>
                <div class="stat-icon">
                    <i class="fa fa-bookmark-o fa-3x"></i>
                </div>
            </div>
</a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
<a href="/user/%user:uid/stats/battle-statistics/competitive">
            <div class="panel-stat3 bg-success">
                <h2 class="m-top-none"><?php print views_embed_view("profile_stats_battle" , "panel_pane_9"); ?></h2>
                <h5>Competitive</h5>
                <div class="stat-icon">
                    <i class="fa fa-crosshairs fa-3x"></i>
                </div>
            </div>
</a>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4c6c9bb-aeca-4c9e-8a71-b80973ffa0cc';
    $display->content['new-b4c6c9bb-aeca-4c9e-8a71-b80973ffa0cc'] = $pane;
    $display->panels['header'][0] = 'new-b4c6c9bb-aeca-4c9e-8a71-b80973ffa0cc';
    $pane = new stdClass();
    $pane->pid = 'new-e08061f1-15bd-4cf4-b1db-25a9d8cdb714';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Opponent Faction Panels',
      'title' => 'Opponent Faction',
      'body' => '<div class="row">
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_11"); ?>
</div>
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_12"); ?>
</div>
<div class="col-md-4">
<?php print views_embed_view("profile_stats_battle" , "panel_pane_13"); ?>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e08061f1-15bd-4cf4-b1db-25a9d8cdb714';
    $display->content['new-e08061f1-15bd-4cf4-b1db-25a9d8cdb714'] = $pane;
    $display->panels['sidebar'][0] = 'new-e08061f1-15bd-4cf4-b1db-25a9d8cdb714';
    $pane = new stdClass();
    $pane->pid = 'new-eb7c660b-2486-4a26-8c2a-132a215403c6';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Opponent\'s Army Impact',
      'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_oa\').highcharts({
        chart: {
            type: \'scatter\',
            zoomType: \'xy\'
        },
        title: {
            text: null
        },
        credits: {
            enabled: false
        },
        xAxis: {
            title: {
                enabled: true,
                text: \'Defeat %\'
            },
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            max: 100,
            min: 0
        },
        yAxis: {
            max: 100,
            min: 0,
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            
            title: {
                text: \'Victory %\'
            }
        },
        legend: {
            layout: \'horizontal\',
            align: \'center\',
            verticalAlign: \'bottom\',

            floating: false,
            backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || \'#FFFFFF\',
            borderWidth: 1
        },
        plotOptions: {
            scatter: {
                marker: {
                    radius: 5,
                    states: {
                        hover: {
                            enabled: true,
                            lineColor: \'rgb(100,100,100)\'
                        }
                    }
                },
                states: {
                    hover: {
                        marker: {
                            enabled: false
                        }
                    }
                },
                tooltip: {
                    headerFormat: \'<b>{series.name}</b><br>\',
                    pointFormat: \'{point.y} % Victory<br>{point.x} % Defeat\'
                }
            }
        },
        series: [
            <?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_4")); ?> 
        ]
    });
});
</script>

<div id="container_oa" style="min-width: 310px; height: 400px; max-width: 800px; margin: 0 auto"></div>',
      'format' => 'php_code',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eb7c660b-2486-4a26-8c2a-132a215403c6';
    $display->content['new-eb7c660b-2486-4a26-8c2a-132a215403c6'] = $pane;
    $display->panels['sidebar'][1] = 'new-eb7c660b-2486-4a26-8c2a-132a215403c6';
    $pane = new stdClass();
    $pane->pid = 'new-661eb401-252b-4d1c-93dc-f8d4aa3122cc';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_stats_battle-panel_pane_10';
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
    $pane->uuid = '661eb401-252b-4d1c-93dc-f8d4aa3122cc';
    $display->content['new-661eb401-252b-4d1c-93dc-f8d4aa3122cc'] = $pane;
    $display->panels['sidebar'][2] = 'new-661eb401-252b-4d1c-93dc-f8d4aa3122cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_battle_stats_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_content_stats_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Content Stats Page';
  $page->admin_description = '';
  $page->path = 'user/%user/stats/content-statistics';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Content',
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
  $handler->name = 'page_profiles_content_stats_page__panel_context_77d9607f-eafe-45b2-ad69-028e143d0e19';
  $handler->task = 'page';
  $handler->subtask = 'profiles_content_stats_page';
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
  $display->layout = 'bootopoly_moscone';
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
  $display->title = 'Battle Statistics: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94525b27-0936-48c0-b563-3438337a7cf5';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'coming_soon';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94525b27-0936-48c0-b563-3438337a7cf5';
    $display->content['new-94525b27-0936-48c0-b563-3438337a7cf5'] = $pane;
    $display->panels['header'][0] = 'new-94525b27-0936-48c0-b563-3438337a7cf5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_content_stats_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_modelling_stats_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Modelling Stats Page';
  $page->admin_description = '';
  $page->path = 'user/%user/stats/modelling-statistics';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Modelling',
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
  $handler->name = 'page_profiles_modelling_stats_page__panel_context_74ac2464-1ac2-4520-be01-ecaba0859602';
  $handler->task = 'page';
  $handler->subtask = 'profiles_modelling_stats_page';
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
  $display->layout = 'bootopoly_moscone';
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
  $display->title = 'Battle Statistics: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a42fd03f-8737-40eb-af8a-a5773b9c7e16';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'coming_soon';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a42fd03f-8737-40eb-af8a-a5773b9c7e16';
    $display->content['new-a42fd03f-8737-40eb-af8a-a5773b9c7e16'] = $pane;
    $display->panels['header'][0] = 'new-a42fd03f-8737-40eb-af8a-a5773b9c7e16';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_modelling_stats_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_redirect_old_battles_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles:Redirect Old Battles Page';
  $page->admin_description = '';
  $page->path = 'user/%user/battles';
  $page->access = array();
  $page->menu = array();
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
  $handler->name = 'page-profiles_redirect_old_battles_page__301';
  $handler->task = 'page';
  $handler->subtask = 'profiles_redirect_old_battles_page';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'user/%user:uid/content/battles',
    'name' => '301',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_redirect_old_battles_page'] = $page;

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
    'no_blocks' => 1,
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
  $display->layout = 'bootopoly_moscone';
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
  $display->title = 'Statistic Summary: %user:name';
  $display->uuid = '5ba042ef-3ea9-44ff-9f1a-68234f049142';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-56fc4d07-b966-4a64-86e6-575258a67661';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_stats_battle-panel_pane_3';
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
    $pane->uuid = '56fc4d07-b966-4a64-86e6-575258a67661';
    $display->content['new-56fc4d07-b966-4a64-86e6-575258a67661'] = $pane;
    $display->panels['contentmain'][0] = 'new-56fc4d07-b966-4a64-86e6-575258a67661';
    $pane = new stdClass();
    $pane->pid = 'new-ae12d921-958c-40b2-b923-ad9e8956eb5a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_stats_content-panel_pane_3';
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
    $pane->uuid = 'ae12d921-958c-40b2-b923-ad9e8956eb5a';
    $display->content['new-ae12d921-958c-40b2-b923-ad9e8956eb5a'] = $pane;
    $display->panels['contentmain'][1] = 'new-ae12d921-958c-40b2-b923-ad9e8956eb5a';
    $pane = new stdClass();
    $pane->pid = 'new-0c6e02f2-3ab7-4162-9741-0a909068ec6a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_stats_modeling-panel_pane_3';
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
    $pane->uuid = '0c6e02f2-3ab7-4162-9741-0a909068ec6a';
    $display->content['new-0c6e02f2-3ab7-4162-9741-0a909068ec6a'] = $pane;
    $display->panels['contentmain'][2] = 'new-0c6e02f2-3ab7-4162-9741-0a909068ec6a';
    $pane = new stdClass();
    $pane->pid = 'new-cb241f3f-6ad3-44b5-b758-388a60c257f7';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="row">
<div class="padding-md">
    <div class="row">
        <div class="col-sm-6 col-md-3">
           <a href="/user/%user:uid/stats/battle-statistics">
            <div class="panel-stat3 bg-danger">
                <h2 class="m-top-none" id="userCount"><?php print views_embed_view("profile_stats_battle" , "panel_pane_1"); ?></h2>
                <h5>Battles</h5>
                <div class="stat-icon">
                    <i class="fa fa-fire fa-3x"></i>
                </div>
            </div>
           </a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
            <a href="/user/%user:uid/stats/modelling-statistics">
            <div class="panel-stat3 bg-info">
                <h2 class="m-top-none"><?php print views_embed_view("profile_stats_modeling" , "panel_pane_1"); ?></h2>
                <h5>Models</h5>
                <div class="stat-icon">
                    <i class="fa fa-paint-brush fa-3x"></i>
                </div>
            </div>
            </a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
<a href="/user/%user:uid/stats/content-statistics">
            <div class="panel-stat3 bg-warning">
                <h2 class="m-top-none"><?php print views_embed_view("profile_stats_content" , "panel_pane_1"); ?></h2>
                <h5>Content</h5>
                <div class="stat-icon">
                    <i class="fa fa-pencil fa-3x"></i>
                </div>
            </div>
</a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">

<?php print views_embed_view("profiles_all_page_layout" , "panel_pane_7"); ?>
  
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cb241f3f-6ad3-44b5-b758-388a60c257f7';
    $display->content['new-cb241f3f-6ad3-44b5-b758-388a60c257f7'] = $pane;
    $display->panels['header'][0] = 'new-cb241f3f-6ad3-44b5-b758-388a60c257f7';
    $pane = new stdClass();
    $pane->pid = 'new-1d283835-76ba-4110-baf1-ca317cdaaa17';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Battles over Time',
      'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_bot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'# Battles\'
            },
       min: 0
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Battles\',
            data: [
                <?php print strip_tags(views_embed_view("profile_stats_battle" , "panel_pane_2")); ?>
            ]
        }]
    });
});
</script>

<div id="container_bot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>',
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
    $pane->uuid = '1d283835-76ba-4110-baf1-ca317cdaaa17';
    $display->content['new-1d283835-76ba-4110-baf1-ca317cdaaa17'] = $pane;
    $display->panels['sidebar'][0] = 'new-1d283835-76ba-4110-baf1-ca317cdaaa17';
    $pane = new stdClass();
    $pane->pid = 'new-ad7fc079-1077-4a62-a5b1-5b15104784e8';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Content over Time',
      'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_cot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'Content\'
            },
       min: 0
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Content\',
            data: [
                <?php print strip_tags(views_embed_view("profile_stats_content" , "panel_pane_2")); ?>
            ]
        }]
    });
});
</script>

<div id="container_cot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>',
      'format' => 'php_code',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ad7fc079-1077-4a62-a5b1-5b15104784e8';
    $display->content['new-ad7fc079-1077-4a62-a5b1-5b15104784e8'] = $pane;
    $display->panels['sidebar'][1] = 'new-ad7fc079-1077-4a62-a5b1-5b15104784e8';
    $pane = new stdClass();
    $pane->pid = 'new-438be5b9-65ae-44aa-8be2-50bb8f14375a';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Models Aquired Over Time',
      'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_mot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'# Models\'
            },
       min: 0
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Models\',
            data: [
                <?php print strip_tags(views_embed_view("profile_stats_modeling" , "panel_pane_2")); ?>
            ]
        }]
    });
});
</script>

<div id="container_mot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>',
      'format' => 'php_code',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '438be5b9-65ae-44aa-8be2-50bb8f14375a';
    $display->content['new-438be5b9-65ae-44aa-8be2-50bb8f14375a'] = $pane;
    $display->panels['sidebar'][2] = 'new-438be5b9-65ae-44aa-8be2-50bb8f14375a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_stats'] = $page;

  return $pages;

}
