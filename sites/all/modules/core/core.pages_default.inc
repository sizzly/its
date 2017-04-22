<?php
/**
 * @file
 * core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'decorations_all_renown_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Decorations: All: Renown landing page';
  $page->admin_description = '';
  $page->path = 'wargaming-decorations/renown';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Renown',
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
  $handler->name = 'page_decorations_all_renown_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'decorations_all_renown_landing_page';
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
    'name' => 'panel',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
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
  $display->title = 'Renown';
  $display->uuid = '3f7628f0-f716-4d2f-9d00-49066f83fe1a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d86b505b-2224-47ad-ad2a-99a37df66c96';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'decorations_renown_player_lists-panel_pane_1';
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
    $pane->uuid = 'd86b505b-2224-47ad-ad2a-99a37df66c96';
    $display->content['new-d86b505b-2224-47ad-ad2a-99a37df66c96'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-d86b505b-2224-47ad-ad2a-99a37df66c96';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['decorations_all_renown_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'decorations_medals_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Decorations: Medals: Landing Page';
  $page->admin_description = '';
  $page->path = 'wargaming-decorations/medals';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Medals',
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
  $handler->name = 'page_decorations_medals_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'decorations_medals_landing_page';
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
    'name' => 'panel',
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
  $display->title = 'Medals @ iToysoldiers';
  $display->uuid = '2c0be7c8-5d9f-4444-9fe1-a4524c9a04b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a45bf36d-5122-4015-b65c-8e135d11f086';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'decorations_medals_lists_of_medals-panel_pane_1';
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
    $pane->uuid = 'a45bf36d-5122-4015-b65c-8e135d11f086';
    $display->content['new-a45bf36d-5122-4015-b65c-8e135d11f086'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-a45bf36d-5122-4015-b65c-8e135d11f086';
    $pane = new stdClass();
    $pane->pid = 'new-7f9c876c-fc80-4375-8f79-dd3426e17397';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>rise through the ranks and earn the respect of your opponents</h2>
</div>',
      'format' => 'pure_html',
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
    $pane->uuid = '7f9c876c-fc80-4375-8f79-dd3426e17397';
    $display->content['new-7f9c876c-fc80-4375-8f79-dd3426e17397'] = $pane;
    $display->panels['header'][0] = 'new-7f9c876c-fc80-4375-8f79-dd3426e17397';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7f9c876c-fc80-4375-8f79-dd3426e17397';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['decorations_medals_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'main_gaming_page';
  $page->task = 'page';
  $page->admin_title = 'Main Gaming Page';
  $page->admin_description = 'This page serves as the main category page for gaming.';
  $page->path = 'gaming';
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
  $handler->name = 'page_main_gaming_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'main_gaming_page';
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
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Gaming on iToysoldiers';
  $display->uuid = '748cdab6-cb59-48f9-a6dc-f04f4f11bade';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e42aeb7e-a7af-4b69-9d0f-910ffcba2b14';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'leaderboards_all_tables-panel_pane_5';
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
    $pane->uuid = 'e42aeb7e-a7af-4b69-9d0f-910ffcba2b14';
    $display->content['new-e42aeb7e-a7af-4b69-9d0f-910ffcba2b14'] = $pane;
    $display->panels['contentmain'][0] = 'new-e42aeb7e-a7af-4b69-9d0f-910ffcba2b14';
    $pane = new stdClass();
    $pane->pid = 'new-330eb957-083d-43f1-b38e-5c20565c0f5c';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
  <h1>Gaming on iToysoldiers</h1>
  <h2>battle reports and army lists</h2>
</div>',
      'format' => 'php_code',
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
    $pane->uuid = '330eb957-083d-43f1-b38e-5c20565c0f5c';
    $display->content['new-330eb957-083d-43f1-b38e-5c20565c0f5c'] = $pane;
    $display->panels['header'][0] = 'new-330eb957-083d-43f1-b38e-5c20565c0f5c';
    $pane = new stdClass();
    $pane->pid = 'new-565cbf1c-5520-4a9a-a75b-01c7118d0c2b';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nav Bar',
      'title' => '',
      'body' => '<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">Gaming</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/battle-reports">Battle Reports</a></li>
        <li><a href="/listcrit">ListCrit</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
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
    $pane->uuid = '565cbf1c-5520-4a9a-a75b-01c7118d0c2b';
    $display->content['new-565cbf1c-5520-4a9a-a75b-01c7118d0c2b'] = $pane;
    $display->panels['header'][1] = 'new-565cbf1c-5520-4a9a-a75b-01c7118d0c2b';
    $pane = new stdClass();
    $pane->pid = 'new-fc33bb6b-fc52-45e0-ae5a-939c56df90a3';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_lists-panel_pane_2';
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
    $pane->uuid = 'fc33bb6b-fc52-45e0-ae5a-939c56df90a3';
    $display->content['new-fc33bb6b-fc52-45e0-ae5a-939c56df90a3'] = $pane;
    $display->panels['sidebar'][0] = 'new-fc33bb6b-fc52-45e0-ae5a-939c56df90a3';
    $pane = new stdClass();
    $pane->pid = 'new-bc7979d4-74e7-42c2-9ff1-7446e03aca26';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_lists-panel_pane_4';
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
    $pane->uuid = 'bc7979d4-74e7-42c2-9ff1-7446e03aca26';
    $display->content['new-bc7979d4-74e7-42c2-9ff1-7446e03aca26'] = $pane;
    $display->panels['sidebar'][1] = 'new-bc7979d4-74e7-42c2-9ff1-7446e03aca26';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['main_gaming_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'modelling_main_page';
  $page->task = 'page';
  $page->admin_title = 'Modelling Main Page';
  $page->admin_description = '';
  $page->path = 'modelling';
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
  $handler->name = 'page_modelling_main_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'modelling_main_page';
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
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Modelling | [site:name]',
        ),
        'description' => array(
          'value' => 'Track your miniature wargaming hobby progress with iToysoldiers modelling projects.',
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
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '008f5d04-559b-44b9-b143-8194b54c59a1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6271234c-66b5-42c7-b315-e9d19119d5da';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'leaderboards_all_tables-panel_pane_6';
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
    $pane->uuid = '6271234c-66b5-42c7-b315-e9d19119d5da';
    $display->content['new-6271234c-66b5-42c7-b315-e9d19119d5da'] = $pane;
    $display->panels['contentmain'][0] = 'new-6271234c-66b5-42c7-b315-e9d19119d5da';
    $pane = new stdClass();
    $pane->pid = 'new-68e89326-1fd1-484b-b531-94c54b040164';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
  <h1>Modelling on iToysoldiers</h1>
  <h2>what models are you working on?</h2>
</div>',
      'format' => 'pure_html',
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
    $pane->uuid = '68e89326-1fd1-484b-b531-94c54b040164';
    $display->content['new-68e89326-1fd1-484b-b531-94c54b040164'] = $pane;
    $display->panels['header'][0] = 'new-68e89326-1fd1-484b-b531-94c54b040164';
    $pane = new stdClass();
    $pane->pid = 'new-42b115b6-dd66-4554-a488-b201184b2b9d';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">Modelling</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/munitions/modeling-projects">Modelling Projects</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
      'format' => 'pure_html',
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
    $pane->uuid = '42b115b6-dd66-4554-a488-b201184b2b9d';
    $display->content['new-42b115b6-dd66-4554-a488-b201184b2b9d'] = $pane;
    $display->panels['header'][1] = 'new-42b115b6-dd66-4554-a488-b201184b2b9d';
    $pane = new stdClass();
    $pane->pid = 'new-d4710a37-a348-4446-ba0b-8a3024788b94';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'models_all_lists-panel_pane_3';
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
    $pane->uuid = 'd4710a37-a348-4446-ba0b-8a3024788b94';
    $display->content['new-d4710a37-a348-4446-ba0b-8a3024788b94'] = $pane;
    $display->panels['sidebar'][0] = 'new-d4710a37-a348-4446-ba0b-8a3024788b94';
    $pane = new stdClass();
    $pane->pid = 'new-0a04e013-597c-4326-8fe5-3eead8b1730f';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'models_all_lists-panel_pane_4';
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
    $pane->uuid = '0a04e013-597c-4326-8fe5-3eead8b1730f';
    $display->content['new-0a04e013-597c-4326-8fe5-3eead8b1730f'] = $pane;
    $display->panels['sidebar'][1] = 'new-0a04e013-597c-4326-8fe5-3eead8b1730f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['modelling_main_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'narrative_main_page';
  $page->task = 'page';
  $page->admin_title = 'Narrative Main Page';
  $page->admin_description = '';
  $page->path = 'narrative';
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
  $handler->name = 'page_narrative_main_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'narrative_main_page';
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
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Narrative | [site:name]',
        ),
        'description' => array(
          'value' => 'Narrative features on iToysoldiers help you tell the story of your miniature wargaming armies and chronicle their exploits.',
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
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cc6ee39b-e3b2-44cd-9e20-f5389cae2886';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1f0bd727-3e39-4b3f-aab3-e5deeae21edf';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
  <h1>Narrative on iToysoldiers</h1>
  <h2>tell the story of your armies</h2>
</div>',
      'format' => 'pure_html',
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
    $pane->uuid = '1f0bd727-3e39-4b3f-aab3-e5deeae21edf';
    $display->content['new-1f0bd727-3e39-4b3f-aab3-e5deeae21edf'] = $pane;
    $display->panels['header'][0] = 'new-1f0bd727-3e39-4b3f-aab3-e5deeae21edf';
    $pane = new stdClass();
    $pane->pid = 'new-5e85e64c-ce24-4280-98b9-2b2a4327a347';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nav Bar',
      'title' => '',
      'body' => '<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">Narrative</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/order-of-battle/player-armies">Army Profiles</a></li>
        <li><a href="/theater/narrative-campaigns">Narrative Campaigns</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
      'format' => 'pure_html',
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
    $pane->uuid = '5e85e64c-ce24-4280-98b9-2b2a4327a347';
    $display->content['new-5e85e64c-ce24-4280-98b9-2b2a4327a347'] = $pane;
    $display->panels['header'][1] = 'new-5e85e64c-ce24-4280-98b9-2b2a4327a347';
    $pane = new stdClass();
    $pane->pid = 'new-a6575a56-315a-4bdf-83ab-e3c7453704f2';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profiles_all_lists_2-panel_pane_3';
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
    $pane->uuid = 'a6575a56-315a-4bdf-83ab-e3c7453704f2';
    $display->content['new-a6575a56-315a-4bdf-83ab-e3c7453704f2'] = $pane;
    $display->panels['sidebar'][0] = 'new-a6575a56-315a-4bdf-83ab-e3c7453704f2';
    $pane = new stdClass();
    $pane->pid = 'new-612107de-2bdc-4b59-b358-0da40949c2dc';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'narrative_campaigns_all_lists-panel_pane_1';
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
    $pane->uuid = '612107de-2bdc-4b59-b358-0da40949c2dc';
    $display->content['new-612107de-2bdc-4b59-b358-0da40949c2dc'] = $pane;
    $display->panels['sidebar'][1] = 'new-612107de-2bdc-4b59-b358-0da40949c2dc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1f0bd727-3e39-4b3f-aab3-e5deeae21edf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['narrative_main_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'node_stats_page';
  $page->task = 'page';
  $page->admin_title = 'Node Stats Page';
  $page->admin_description = '';
  $page->path = 'node/%node/stats/main';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'war_zone_league' => 'war_zone_league',
            'war_zone_tournament' => 'war_zone_tournament',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Stats',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Stats',
      'name' => 'navigation',
      'weight' => '150',
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
  $handler->name = 'page_node_stats_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'node_stats_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'War Zone',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'war_zone_league' => 'war_zone_league',
              'war_zone_tournament' => 'war_zone_tournament',
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
  $display->title = '%node:title Stats';
  $display->uuid = 'e08b4969-b2e6-45ce-92c1-01c41ab90c28';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-82c6e2e8-bcf5-4ad2-9077-3eafa2d9f972';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Stat Summary',
      'title' => '',
      'body' => '<div class="row">
<div class="padding-md">
    <div class="row">
        <div class="col-md-4">
           <a href="/node/%node:nid/battle-list">
            <div class="panel-stat3 bg-danger">
                <h2 class="m-top-none" id="userCount"><?php print views_embed_view("war_zone_all_stats" , "panel_pane_3"); ?></h2>
                <h5>Battles</h5>
                <div class="stat-icon">
                    <i class="fa fa-fire fa-3x"></i>
                </div>
            </div>
           </a>
        </div><!-- /.col -->
        <div class="col-md-4">
            <a href="/node/%node:nid/player-list">
            <div class="panel-stat3 bg-info">
                <h2 class="m-top-none"><?php print views_embed_view("war_zone_all_stats" , "panel_pane_4"); ?></h2>
                <h5>Players</h5>
                <div class="stat-icon">
                    <i class="fa fa-user fa-3x"></i>
                </div>
            </div>
            </a>
        </div><!-- /.col -->
<!-- /.col -->
        <div class="col-md-4">
<a href="/node/%node:nid/faction-list">
            <div class="panel-stat3 bg-success">
                <h2 class="m-top-none"><?php print views_embed_view("war_zone_all_stats" , "panel_pane_5"); ?></h2>
                <h5>Factions</h5>
                <div class="stat-icon">
                    <i class="fa fa-bookmark fa-3x"></i>
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
    $pane->uuid = '82c6e2e8-bcf5-4ad2-9077-3eafa2d9f972';
    $display->content['new-82c6e2e8-bcf5-4ad2-9077-3eafa2d9f972'] = $pane;
    $display->panels['contentmain'][0] = 'new-82c6e2e8-bcf5-4ad2-9077-3eafa2d9f972';
    $pane = new stdClass();
    $pane->pid = 'new-ce011952-caa3-4aec-b1be-daa0fa3dc305';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_stats-panel_pane_1';
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
    $pane->uuid = 'ce011952-caa3-4aec-b1be-daa0fa3dc305';
    $display->content['new-ce011952-caa3-4aec-b1be-daa0fa3dc305'] = $pane;
    $display->panels['contentmain'][1] = 'new-ce011952-caa3-4aec-b1be-daa0fa3dc305';
    $pane = new stdClass();
    $pane->pid = 'new-fbb3a1ae-e424-4258-89b8-21a09f6d105d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_stats-panel_pane_2';
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
    $pane->uuid = 'fbb3a1ae-e424-4258-89b8-21a09f6d105d';
    $display->content['new-fbb3a1ae-e424-4258-89b8-21a09f6d105d'] = $pane;
    $display->panels['contentmain'][2] = 'new-fbb3a1ae-e424-4258-89b8-21a09f6d105d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['node_stats_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'renown_all_main_page';
  $page->task = 'page';
  $page->admin_title = 'Decorations: All: Main Page';
  $page->admin_description = '';
  $page->path = 'wargaming-decorations/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Decorations',
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
  $handler->name = 'page_renown_all_main_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'renown_all_main_page';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Decorations @ iToysoldiers',
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
  );
  $display->cache = array();
  $display->title = 'Decorations';
  $display->uuid = '2fbc5f18-c204-4731-a1ee-0b35a8b7a6ae';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-44d74465-3709-4653-8dcd-ff57d12a4e43';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Renown Feature List',
      'title' => 'Available Decorations',
      'body' => '<div class="row">
    <div class="col-xs-12 col-sm-3">
        <a href="/wargaming-decorations/achievements"><img class="center-block" src="/sites/default/files/default_images/league.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-9">
        <h4>Achievements</h4>
        <p>iToysoldiers achievements recognize your miniature wargaming accomplishments. Whether your focus is narrative, gaming, or modeling you’ll gain rewards for your endeavors.  Why should the ‘puter gamers have all the fun. We were here first!</p>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-3">
        <a href="/wargaming-decorations/renown"><img class="center-block" src="/sites/default/files/achievements/Mage%20Hunter%203.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-9">
        <h4>Renown</h4>
        <p>Track your progress through the ranks with iToysoldiers Renown.  Every battle you fight, every model you paint, every achievement you earn generates renown.  Compare yours to other players in the area and the world and strive to become an epic wargamer.</p>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-3">
        <a href="/wargaming-decorations/medals"><img class="center-block" src="sites/default/files/badges/lvl1.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-9">
        <h4>Medals</h4>
        <p><strong>Work in Progress</strong>: Medals represent specific milestones in your quest to become a wargamer to be feared and respected. There are two types of medals: Rank – think of this as a level counter and Career – medals designed to reflect your focus on a particular element of the miniature wargaming hobby.</p>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-3">
        <a href="/wargaming-decorations/leaderboards"><img class="center-block" src="/sites/default/files/achievements/First Place.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-9">
        <h4>Leaderboards</h4>
        <p>Bringing all the Decorations together are the leaderboards.  See how you rank in all sorts of categories: Battle Score, Achievements, Renown and more to come. Do you have what it takes to become number one?</p>
    </div>    
</div>
<div class="seperator"></div>
<div class="seperator"></div>
',
      'format' => 'pure_html',
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
    $pane->uuid = '44d74465-3709-4653-8dcd-ff57d12a4e43';
    $display->content['new-44d74465-3709-4653-8dcd-ff57d12a4e43'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-44d74465-3709-4653-8dcd-ff57d12a4e43';
    $pane = new stdClass();
    $pane->pid = 'new-0d7461c8-2edb-4a9a-8df3-f27a039d7205';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'achievements_main_messages-panel_pane_1';
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
    $pane->uuid = '0d7461c8-2edb-4a9a-8df3-f27a039d7205';
    $display->content['new-0d7461c8-2edb-4a9a-8df3-f27a039d7205'] = $pane;
    $display->panels['contentmainright'][0] = 'new-0d7461c8-2edb-4a9a-8df3-f27a039d7205';
    $pane = new stdClass();
    $pane->pid = 'new-f876ec55-3987-4325-82bf-7d219e130a98';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Decorations</h1>
<h2>reap the rewards of your miniature wargaming exploits</h2>
</div>',
      'format' => 'pure_html',
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
    $pane->uuid = 'f876ec55-3987-4325-82bf-7d219e130a98';
    $display->content['new-f876ec55-3987-4325-82bf-7d219e130a98'] = $pane;
    $display->panels['header'][0] = 'new-f876ec55-3987-4325-82bf-7d219e130a98';
    $pane = new stdClass();
    $pane->pid = 'new-fec92970-24a4-487d-a6bf-bbc8566de84d';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nav Bar',
      'title' => '',
      'body' => '<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">Decorations</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/wargaming-decorations/achievements">Achievements</a></li>
        <li><a href="/wargaming-decorations/renown">Renown</a></li>
        <li><a href="/wargaming-decorations/medals">Medals</a></li>
        <li><a href="/wargaming-decorations/leaderboards">Leaderboards</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
      'format' => 'pure_html',
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
    $pane->uuid = 'fec92970-24a4-487d-a6bf-bbc8566de84d';
    $display->content['new-fec92970-24a4-487d-a6bf-bbc8566de84d'] = $pane;
    $display->panels['header'][1] = 'new-fec92970-24a4-487d-a6bf-bbc8566de84d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['renown_all_main_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'widgets';
  $page->task = 'page';
  $page->admin_title = 'Widgets';
  $page->admin_description = '';
  $page->path = 'widgets';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Widgets',
    'name' => 'menu-extras',
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
  $handler->name = 'page_widgets__panel_context_7ff0c812-792f-49ce-b6e1-9d397c74851c';
  $handler->task = 'page';
  $handler->subtask = 'widgets';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Blog and forum widgets to show off your miniature war gaming exploits. Drawn from activity on iToysoldiers you can decorate your blog and forum signatures with a wide variety of widgets.',
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
        'og:description' => array(
          'value' => 'Widgets to showcase your miniature war gaming exploits.',
        ),
      ),
    ),
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Widgets';
  $display->uuid = 'c29cad9b-d84e-4ad2-8fb2-f211462c4aac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5a397c3e-5dc1-4203-a830-4f7affaab502';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="jumbotron">
Raise the banners! Sound the Horns! Share the glory of your army!
</div>',
      'format' => 'pure_html',
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
    $pane->uuid = '5a397c3e-5dc1-4203-a830-4f7affaab502';
    $display->content['new-5a397c3e-5dc1-4203-a830-4f7affaab502'] = $pane;
    $display->panels['contentmain'][0] = 'new-5a397c3e-5dc1-4203-a830-4f7affaab502';
    $pane = new stdClass();
    $pane->pid = 'new-bda2626b-dd05-44c2-8235-ef51766201dc';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Current Modeling Project',
      'title' => 'Current Modeling Project Blog Widget',
      'body' => '<!-- Sidebar Widget -->
<div class="row">
    <div class="col-md-8">
        <p>Show off your current hobby project on your blog using this widget. It selects the most recently updated modeling project on iToysoldiers that’s a) been marked as “Started” and b) isn’t complete and then displays it in a panel that’s perfect as a sidebar on any of the major blog platforms (like blogger, blogspot, and wordpress).  If you see, “No projects detected” then get on it and start tracking your modeling projects.</p>
        <h5>Your Widget</strong></h5>
        <p>This is what your widget will look like right now.  If it\'s empty you just need to create some of the relevant content in order for your widget to display properly. Click "Example Widget" to see what it looks like fully populated.</p>
        <div class="text-center">
            <button type="button" class="btn btn-primary btn-lg" data-toggle="modal" data-target="#myModal">
                Example Widget
            </button>
        </div>
    </div>
    <div class="col-md-4">
        <!-- insert Widget here -->
        <?php print views_embed_view("modeling_all_widgets", "panel_pane_1"); ?> 

        <!-- Modal -->
        <div class="modal fade" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel">
            <div class="modal-dialog modal-sm" role="document">
                <div class="modal-content">
                    <div class="modal-header">
                        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                        <h4 class="modal-title" id="myModalLabel">Example</h4>
                    </div>
                    <div class="modal-body">
                        <!--insert Widget Code Here -->
                        <script type="text/javascript">
                            widgetContext = {"url": "\\/widget\\/current-project\\/16?width=100%\\u0026height=450", "width": "100%", "height": "450", "widgetid": "web_widget_iframe_3975b96452893d309931aec92087cae8", "scrolling": "auto"};
                        </script>
                        <script id="web_widget_iframe_3975b96452893d309931aec92087cae8" src="/sites/all/modules/web_widgets/iframe/web_widgets_iframe.js"></script>

                    </div>
                </div>
            </div>
        </div>

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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bda2626b-dd05-44c2-8235-ef51766201dc';
    $display->content['new-bda2626b-dd05-44c2-8235-ef51766201dc'] = $pane;
    $display->panels['contentmain'][1] = 'new-bda2626b-dd05-44c2-8235-ef51766201dc';
    $pane = new stdClass();
    $pane->pid = 'new-eb029834-5915-463a-abe2-be7574d6f9f8';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'BBcode Widget',
      'title' => 'Battle Results BBcode Signature Widget',
      'body' => '<p>Cut and paste this into a forum that uses BBcode like phpBB</p>
<p><textarea id=txtArea cols=60 rows=2 onFocus=this.select() onmouseup="return false">
[url=http://itoysoldiers.com/user/%user:uid][img]http://itoysoldiers.com/widget/bbcode.php?user_id=%user:uid[/img][/url]
</textarea></p>

<p>It\'ll look like this:</p>

<a href="http://itoysoldiers.com/user/%user:uid"><img src="http://itoysoldiers.com/widget/bbcode.php?user_id=%user:uid" /></a>

<p>If you haven\'t reported any battles you may want to take a look at what an example looks like when there are battles reported:</p>
        <div class="text-center">
            <button type="button" class="btn btn-primary btn-lg" data-toggle="modal" data-target="#bbcodeModal">
                Example Widget
            </button>
        </div>
        <div class="modal fade" id="bbcodeModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel">
            <div class="modal-dialog" role="document">
                <div class="modal-content">
                    <div class="modal-header">
                        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                        <h4 class="modal-title" id="myModalLabel">Example</h4>
                    </div>
                    <div class="modal-body">
                        <!--insert Widget Code Here -->
<a href="http://itoysoldiers.com/user/16"><img src="http://itoysoldiers.com/widget/bbcode.php?user_id=16" /></a>

                    </div>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eb029834-5915-463a-abe2-be7574d6f9f8';
    $display->content['new-eb029834-5915-463a-abe2-be7574d6f9f8'] = $pane;
    $display->panels['contentmain'][2] = 'new-eb029834-5915-463a-abe2-be7574d6f9f8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['widgets'] = $page;

  return $pages;

}
