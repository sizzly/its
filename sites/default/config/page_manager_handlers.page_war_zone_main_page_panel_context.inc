<?php
/**
 * @file
 * page_manager_handlers.page_war_zone_main_page_panel_context.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_war_zone_main_page_panel_context';
$handler->task = 'page';
$handler->subtask = 'war_zone_main_page';
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
  'metatag_panels' => array(
    'enabled' => 1,
    'metatags' => array(
      'title' => array(
        'value' => 'War Zones',
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
$display->title = 'War Zones';
$display->uuid = 'ec64381b-9065-42df-8568-fb65686c7160';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a638f55d-281b-4f2f-9a0f-8057843edab0';
  $pane->panel = 'contentmainleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Calendar Block',
    'title' => 'This Month',
    'body' => '<div class="seperator"></div>
<?php
  $block = module_invoke(\'views\', \'block_view\', \'event_calendar-block_1\');
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a638f55d-281b-4f2f-9a0f-8057843edab0';
  $display->content['new-a638f55d-281b-4f2f-9a0f-8057843edab0'] = $pane;
  $display->panels['contentmainleft'][0] = 'new-a638f55d-281b-4f2f-9a0f-8057843edab0';
  $pane = new stdClass();
  $pane->pid = 'new-9d4ac9b8-7bfd-42fe-82ba-b74ec818e1ac';
  $pane->panel = 'contentmainright';
  $pane->type = 'views_panes';
  $pane->subtype = 'war_zone_all_lists-panel_pane_1';
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
  $pane->uuid = '9d4ac9b8-7bfd-42fe-82ba-b74ec818e1ac';
  $display->content['new-9d4ac9b8-7bfd-42fe-82ba-b74ec818e1ac'] = $pane;
  $display->panels['contentmainright'][0] = 'new-9d4ac9b8-7bfd-42fe-82ba-b74ec818e1ac';
  $pane = new stdClass();
  $pane->pid = 'new-595564dd-216b-46ce-a90a-ee5fd51b010d';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Jumbotron',
    'title' => '',
    'body' => '<div class="jumbotron">
  <h1>Theaters</h1>
  <h2>a world of war - events and locations to field your toy soldier armies</h2>
</div>
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
  $pane->uuid = '595564dd-216b-46ce-a90a-ee5fd51b010d';
  $display->content['new-595564dd-216b-46ce-a90a-ee5fd51b010d'] = $pane;
  $display->panels['header'][0] = 'new-595564dd-216b-46ce-a90a-ee5fd51b010d';
  $pane = new stdClass();
  $pane->pid = 'new-c2b6aed7-555c-4b61-86f2-4e89c91dfdd5';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Nav',
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
      <a class="navbar-brand" href="#">Theaters</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/theater/battlefield">Battlefields</a></li>
        <li><a href="/theater/events">Calendar</a></li>
        <li><a href="/theater/narrative-campaigns">Campaigns</a></li>
        <li><a href="/theater/warzone">War Zones</a></li>
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
  $pane->uuid = 'c2b6aed7-555c-4b61-86f2-4e89c91dfdd5';
  $display->content['new-c2b6aed7-555c-4b61-86f2-4e89c91dfdd5'] = $pane;
  $display->panels['header'][1] = 'new-c2b6aed7-555c-4b61-86f2-4e89c91dfdd5';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.war_zone_all_lists' => 'views_view.war_zone_all_lists',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
