<?php
/**
 * @file
 * page_manager_handlers.page_battles_main_page_panel_context.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_battles_main_page_panel_context';
$handler->task = 'page';
$handler->subtask = 'battles_main_page';
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
  'panels_breadcrumbs_titles' => '',
  'panels_breadcrumbs_paths' => '',
  'panels_breadcrumbs_home' => 0,
  'metatag_panels' => array(
    'enabled' => 1,
    'metatags' => array(
      'title' => array(
        'value' => 'Battle Reports on iToysoldiers',
      ),
      'description' => array(
        'value' => 'All the table top miniature war game battle reports on iToysoldiers. We\'ve got reports for all of your favorite games including Warmachine, Hordes, Warhammer 40K, WFB, Infinity the game, Helldorado and more.',
      ),
      'abstract' => array(
        'value' => 'A list and relevant stats for battle reports on iToysoldiers',
      ),
      'keywords' => array(
        'value' => 'battle reports, table top war gaming, miniature war gaming battle reports',
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
      'og:determiner' => array(
        'value' => 'auto',
      ),
      'og:description' => array(
        'value' => 'Stats and lists of table top miniature war game battle results',
      ),
      'og:image' => array(
        'value' => 'http://itoysoldiers.com/sites/default/files/default_images/itslogo.jpg',
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
$display->title = 'Battles';
$display->uuid = '4e887355-8530-4653-bca8-e3e6217c3bf5';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-844ca8ef-45eb-47d7-aad3-76f101e0de62';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'battles_all_lists-panel_pane_1';
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
  $pane->uuid = '844ca8ef-45eb-47d7-aad3-76f101e0de62';
  $display->content['new-844ca8ef-45eb-47d7-aad3-76f101e0de62'] = $pane;
  $display->panels['contentmainbottom'][0] = 'new-844ca8ef-45eb-47d7-aad3-76f101e0de62';
  $pane = new stdClass();
  $pane->pid = 'new-50ae70be-b4a9-4ddd-af8d-7643c3361878';
  $pane->panel = 'contentmainleft';
  $pane->type = 'views_panes';
  $pane->subtype = 'battles_all_stats_and_charts-panel_pane_5';
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
  $pane->uuid = '50ae70be-b4a9-4ddd-af8d-7643c3361878';
  $display->content['new-50ae70be-b4a9-4ddd-af8d-7643c3361878'] = $pane;
  $display->panels['contentmainleft'][0] = 'new-50ae70be-b4a9-4ddd-af8d-7643c3361878';
  $pane = new stdClass();
  $pane->pid = 'new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
  $pane->panel = 'contentmainright';
  $pane->type = 'views_panes';
  $pane->subtype = 'battles_all_stats_and_charts-panel_pane_7';
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
  $pane->uuid = 'cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
  $display->content['new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f'] = $pane;
  $display->panels['contentmainright'][0] = 'new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
  $pane = new stdClass();
  $pane->pid = 'new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
  $pane->panel = 'contentmainright';
  $pane->type = 'views_panes';
  $pane->subtype = 'battles_all_stats_and_charts-panel_pane_8';
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
  $pane->uuid = 'cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
  $display->content['new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077'] = $pane;
  $display->panels['contentmainright'][1] = 'new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
  $pane = new stdClass();
  $pane->pid = 'new-a653366a-97d7-444c-be86-e2bb79546f71';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Page Header',
    'title' => '',
    'body' => '<div class="jumbotron clearfix">
  <h1>Battle Reports</h1>
  <h2>Wars and rumors of wars</h2>
</div>

',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a653366a-97d7-444c-be86-e2bb79546f71';
  $display->content['new-a653366a-97d7-444c-be86-e2bb79546f71'] = $pane;
  $display->panels['header'][0] = 'new-a653366a-97d7-444c-be86-e2bb79546f71';
  $pane = new stdClass();
  $pane->pid = 'new-f17ed422-b0b3-4bfe-b737-46a3637da36e';
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
      <a class="navbar-brand" href="#">Battles</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/battle-reports/all-battles">All Battles</a></li>
        <li><a href="/battle-reports/stats">Stats</a></li>
        <li><a href="/battle-reports/battle-meta">Meta</a></li>
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f17ed422-b0b3-4bfe-b737-46a3637da36e';
  $display->content['new-f17ed422-b0b3-4bfe-b737-46a3637da36e'] = $pane;
  $display->panels['header'][1] = 'new-f17ed422-b0b3-4bfe-b737-46a3637da36e';
  $pane = new stdClass();
  $pane->pid = 'new-e60b2437-9b81-48bb-8036-63761cecf86a';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Write Up',
    'title' => 'Battles',
    'body' => 'Battle reports on iToysoldiers drive the stats and rankings of players and armies across all sorts of your favorite table top miniature war games. Record your battles, gather intelligence on your opponents, scope out the battlefields, and claim glory and renown through the exploits of your armies.',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e60b2437-9b81-48bb-8036-63761cecf86a';
  $display->content['new-e60b2437-9b81-48bb-8036-63761cecf86a'] = $pane;
  $display->panels['header'][2] = 'new-e60b2437-9b81-48bb-8036-63761cecf86a';
  $pane = new stdClass();
  $pane->pid = 'new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Battle Reports',
    'body' => '<p>Battle reports on iToysoldiers drive the stats and rankings of players and armies across all sorts of your favorite table top miniature war games. Record your battles, gather intelligence on your opponents, scope out the battlefields, and claim glory and renown through the exploits of your armies.</p>
',
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
  $pane->uuid = '5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
  $display->content['new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7'] = $pane;
  $display->panels['sidebar'][0] = 'new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
  $pane = new stdClass();
  $pane->pid = 'new-0443c10f-d952-49a8-9380-1c12c1ebd151';
  $pane->panel = 'sidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'login_and_new_user_block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->locks = array();
  $pane->uuid = '0443c10f-d952-49a8-9380-1c12c1ebd151';
  $display->content['new-0443c10f-d952-49a8-9380-1c12c1ebd151'] = $pane;
  $display->panels['sidebar'][1] = 'new-0443c10f-d952-49a8-9380-1c12c1ebd151';
  $pane = new stdClass();
  $pane->pid = 'new-22fc9460-9056-494a-9b17-569d196f23ca';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
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
    'admin_title' => 'Report Battle Button',
    'title' => '',
    'body' => '<div class="grey-container">
<a href="/node/add/game-results" class="btn btn-primary btn-lg btn-block">Report a Battle</a>
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '22fc9460-9056-494a-9b17-569d196f23ca';
  $display->content['new-22fc9460-9056-494a-9b17-569d196f23ca'] = $pane;
  $display->panels['sidebar'][2] = 'new-22fc9460-9056-494a-9b17-569d196f23ca';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.battles_all_lists' => 'views_view.battles_all_lists',
  'views_view.battles_all_stats_and_charts' => 'views_view.battles_all_stats_and_charts',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
