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

  return $pages;

}
