<?php
/**
 * @file
 * home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = 'The about page for iToysoldiers.';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'menu-about-itoysoldiers',
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
  $handler->name = 'page_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about';
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
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'select',
        'uid' => '16',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'iToysoldiers | About Us',
        ),
        'description' => array(
          'value' => 'Everything you wanted to know about iToysoldiers and the wargaming nerd who built it.',
        ),
        'abstract' => array(
          'value' => 'The about page for iToysoldiers',
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
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_burr_flipped';
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
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About iToysoldiers';
  $display->uuid = 'b7ddf18d-5d56-4a9f-887d-ab91e5f9a099';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-69a8c9e1-be54-4e43-ba2e-f23bcb3d006d';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About',
      'title' => '',
      'body' => '<h3>iToysoldiers is <em>the</em> place to chronicle the glory of your miniature war gaming armies.&nbsp;&nbsp;</h3>

<h3>Product</h3>

<p>On iToysoldiers you can do a fair number of things.&nbsp; I’ve endeavored to create a platform where you can capture your miniature war gaming endeavors no matter what element of the hobby you’re into.&nbsp; Think of iToysoldiers as a social media platform specifically for miniature war gaming – cause that’s really what it is.&nbsp;</p>

<ul>
	<li>You can record battles and track your ongoing statistics.</li>
	<li>You can participate in competitive leagues and tournaments at participating battlefields.&nbsp;</li>
	<li>You can engage in rich narrative campaigns that tell the story of a major engagement within your game’s world.&nbsp;</li>
	<li>You can post photos and stories of your armies. &nbsp;</li>
	<li>And lots more.</li>
</ul>

<p>iToysoldiers isn’t locked to one game either.&nbsp; I thought it was really important to support any table top miniature war game because us gamers tend to play a number of games and I want iToysoldiers to be the place you go to show off your gaming prowess.</p>

<h3>Vision</h3>

<blockquote>
<p>Why should ‘puter gamers have all the cool tools.&nbsp; We were here first!</p>
</blockquote>

<p>iToysoldiers believes that miniature war games can be better by bringing the gaming, narrative, and modelling elements of the hobby together to tell the story of your army.&nbsp;&nbsp;</p>
',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '43200',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '69a8c9e1-be54-4e43-ba2e-f23bcb3d006d';
    $display->content['new-69a8c9e1-be54-4e43-ba2e-f23bcb3d006d'] = $pane;
    $display->panels['contentmain'][0] = 'new-69a8c9e1-be54-4e43-ba2e-f23bcb3d006d';
    $pane = new stdClass();
    $pane->pid = 'new-dc3a4b64-e637-4b25-8534-ef0038ec6e72';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Order of Battle',
      'title' => '',
      'body' => '<h3>Order of Battle</h3>
<p>iToysoldiers was founded in 2012 by Rob Tacey  and launched on 2013/06/01.  It’s a work of love by a lone miniature war game enthusiast.</p>
<div class="media">
  <div class="media-left pull-left">
    <a href="/users/sizzly">
      %user:picture
    </a>
  </div>
  <div class="media-body">
    <h4 class="media-heading">Rob Tacey</h4>
    Dark Eldar snob...  Oh, and I made this site!
  </div>
</div>',
      'format' => 'pure_html',
      'substitute' => 1,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '43200',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dc3a4b64-e637-4b25-8534-ef0038ec6e72';
    $display->content['new-dc3a4b64-e637-4b25-8534-ef0038ec6e72'] = $pane;
    $display->panels['contentmain'][1] = 'new-dc3a4b64-e637-4b25-8534-ef0038ec6e72';
    $pane = new stdClass();
    $pane->pid = 'new-f110f741-f02f-49f5-be5c-cdce6aa4c500';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'What People are Saying',
      'title' => '',
      'body' => '<h3>What People are Saying</h3>

<blockquote>
<p>“It’s fun to broadcast your fights”</p>
</blockquote>

<p><em>Dreggrod da Traitor</em> (Windsor, ON)</p>

<blockquote>
<p>"I think it\'s a great resource for sharing miniature gaming pics and thoughts, and it has a lot of tools for running campaigns and tournaments."</p>
</blockquote>

<p><em>Thade</em> (Windsor, ON)</p>
',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '43200',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f110f741-f02f-49f5-be5c-cdce6aa4c500';
    $display->content['new-f110f741-f02f-49f5-be5c-cdce6aa4c500'] = $pane;
    $display->panels['contentmain'][2] = 'new-f110f741-f02f-49f5-be5c-cdce6aa4c500';
    $pane = new stdClass();
    $pane->pid = 'new-d6445211-4876-4ca4-b00d-de22c81f3e4b';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-about-itoysoldiers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6445211-4876-4ca4-b00d-de22c81f3e4b';
    $display->content['new-d6445211-4876-4ca4-b00d-de22c81f3e4b'] = $pane;
    $display->panels['sidebar'][0] = 'new-d6445211-4876-4ca4-b00d-de22c81f3e4b';
    $pane = new stdClass();
    $pane->pid = 'new-1aead36b-f581-4907-b18c-4195de28116c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-itoysoldiers-elsewhere';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1aead36b-f581-4907-b18c-4195de28116c';
    $display->content['new-1aead36b-f581-4907-b18c-4195de28116c'] = $pane;
    $display->panels['sidebar'][1] = 'new-1aead36b-f581-4907-b18c-4195de28116c';
    $pane = new stdClass();
    $pane->pid = 'new-836df7bd-4c3a-4ce8-90cc-9d6b0d7b372a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-contact-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '836df7bd-4c3a-4ce8-90cc-9d6b0d7b372a';
    $display->content['new-836df7bd-4c3a-4ce8-90cc-9d6b0d7b372a'] = $pane;
    $display->panels['sidebar'][2] = 'new-836df7bd-4c3a-4ce8-90cc-9d6b0d7b372a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'access_denied';
  $page->task = 'page';
  $page->admin_title = 'Access Denied';
  $page->admin_description = '';
  $page->path = 'access-denied';
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
  $handler->name = 'page_access_denied_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'access_denied';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
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
  $display->layout = 'bootopoly_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Access Denied';
  $display->uuid = 'eab098b5-3540-4b87-9943-d556e01c1c05';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ba152eb9-1c3d-424b-9e3f-57a37402a4e3';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h3>You are not authorized to access this page.</h3>

<p>The likely reason is that you need to log in.</p>

<p>If you feel you\'ve been restricted in error please <a href="http://itoysoldiers.com/contact">contact iToysoldiers</a>.</p>
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
    $pane->uuid = 'ba152eb9-1c3d-424b-9e3f-57a37402a4e3';
    $display->content['new-ba152eb9-1c3d-424b-9e3f-57a37402a4e3'] = $pane;
    $display->panels['contentmain'][0] = 'new-ba152eb9-1c3d-424b-9e3f-57a37402a4e3';
    $pane = new stdClass();
    $pane->pid = 'new-b2b574a2-66a2-4299-a7c3-5dea9aa7c916';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b2b574a2-66a2-4299-a7c3-5dea9aa7c916';
    $display->content['new-b2b574a2-66a2-4299-a7c3-5dea9aa7c916'] = $pane;
    $display->panels['sidebar'][0] = 'new-b2b574a2-66a2-4299-a7c3-5dea9aa7c916';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b2b574a2-66a2-4299-a7c3-5dea9aa7c916';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['access_denied'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bc_landing_page';
  $page->task = 'page';
  $page->admin_title = 'BC landing page';
  $page->admin_description = '';
  $page->path = 'joinnow';
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
  $handler->name = 'page_bc_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'bc_landing_page';
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
          'value' => 'Join iToysoldiers Now',
        ),
        'description' => array(
          'value' => 'Join iToysoldiers and chronicle the glories of your miniature wargaming armies. Digital tools for tabletop wargamers.',
        ),
        'abstract' => array(
          'value' => 'Reasons to join iToysoldiers',
        ),
        'keywords' => array(
          'value' => 'tools for miniature wargaming, battle reports for miniature wargaming',
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
        'og:description' => array(
          'value' => 'Join iToysoldiers and chronicle the glories of your miniature wargaming armies. Digital tools for tabletop wargamers.',
        ),
        'og:type' => array(
          'value' => 'website',
        ),
        'og:image' => array(
          'value' => 'http://itoysoldiers.com/sites/default/files/default_images/itslogo.jpg',
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
  $display->title = 'Join Now';
  $display->uuid = 'e4bd4069-0d2f-4177-8c18-96d21643e729';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-950c2b6f-e007-4203-a1d5-6e2503e5cd5e';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Headline',
      'title' => '',
      'body' => '<div class="text-center">
  <h1>Chronicle the Glory of Your Armies</h1>
  <h2>Join iToysoldiers and show off your miniature wargaming exploits</h2>
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
    $pane->uuid = '950c2b6f-e007-4203-a1d5-6e2503e5cd5e';
    $display->content['new-950c2b6f-e007-4203-a1d5-6e2503e5cd5e'] = $pane;
    $display->panels['contentmain'][0] = 'new-950c2b6f-e007-4203-a1d5-6e2503e5cd5e';
    $pane = new stdClass();
    $pane->pid = 'new-493a12a7-b5eb-46bd-8ecb-c3ef3b774c1d';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
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
      'admin_title' => 'Hero Image and Registration form',
      'title' => '',
      'body' => '<div class="row">
  <div class="col-xs-12 col-sm-8">
<div class="thumbnail">
<div id="carousel-example-generic" class="carousel slide" data-ride="carousel">
  <!-- Indicators -->
  <ol class="carousel-indicators">
    <li data-target="#carousel-example-generic" data-slide-to="0" class="active"></li>
    <li data-target="#carousel-example-generic" data-slide-to="1"></li>
  </ol>

  <!-- Wrapper for slides -->
  <div class="carousel-inner" role="listbox">
    <div class="item active">
      <img src="/img/landing_hero.JPG" alt="...">
    </div>
    <div class="item">
      <img src="/img/landing_hero2.JPG" alt="...">
    </div>
  </div>

  <!-- Controls -->
  <a class="left carousel-control" href="#carousel-example-generic" role="button" data-slide="prev">
    <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="right carousel-control" href="#carousel-example-generic" role="button" data-slide="next">
    <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
    <span class="sr-only">Next</span>
  </a>
</div>
</div>
    <p>iToysoldiers is a website for people who love miniature war games. No matter what game you play, iToysoldiers lets you record and share all your hobby activities whether you’re into the gaming, the modelling or building a narrative around your models.</p>
<div class="media">
  <div class="media-left pull-left">
     <span class="glyphicon glyphicon-fire" aria-hidden="true" style="font-size: 3em;"></span>
  </div>
  <div class="media-body">
    <h4 class="media-heading">Battles</h4>
    <p>Record your glorious victories and crushing defeats. Capture the details of your battles.</p>
  </div>
  <div class="media-left pull-left">
     <span class="glyphicon glyphicon-flag" aria-hidden="true" style="font-size: 3em;"></span>
  </div>
  <div class="media-body">
    <h4 class="media-heading">Narrative</h4>
    <p>Tell your army’s story in words or with pictures using iToysoldiers blogs and galleries. </p>
  </div>
  <div class="media-left pull-left">
     <span class="glyphicon glyphicon-certificate" aria-hidden="true" style="font-size: 3em;"></span>
  </div>
  <div class="media-body">
    <h4 class="media-heading">Achievements</h4>
    <p>Earn renown and glory – along with achievements and badges for your wargaming exploits</p>
  </div>
</div>
  </div>
  <div class="col-xs-12 col-sm-4">
<div class="well">
<h3 class="text-center">Sign Up</h3>
<?php
print render(drupal_get_form(\'user_register_form\'));
?>
</div>
  </div>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '493a12a7-b5eb-46bd-8ecb-c3ef3b774c1d';
    $display->content['new-493a12a7-b5eb-46bd-8ecb-c3ef3b774c1d'] = $pane;
    $display->panels['contentmain'][1] = 'new-493a12a7-b5eb-46bd-8ecb-c3ef3b774c1d';
    $pane = new stdClass();
    $pane->pid = 'new-d7214049-9242-4765-bb0b-9f590ccdb29c';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
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
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Authenticated User: Hero and Comment',
      'title' => '',
      'body' => '<div class="row">
  <div class="col-xs-12 col-sm-8">
<div class="thumbnail">
<div id="carousel-example-generic" class="carousel slide" data-ride="carousel">
  <!-- Indicators -->
  <ol class="carousel-indicators">
    <li data-target="#carousel-example-generic" data-slide-to="0" class="active"></li>
    <li data-target="#carousel-example-generic" data-slide-to="1"></li>
  </ol>

  <!-- Wrapper for slides -->
  <div class="carousel-inner" role="listbox">
    <div class="item active">
      <img src="/img/landing_hero.JPG" alt="...">
    </div>
    <div class="item">
      <img src="/img/landing_hero2.JPG" alt="...">
    </div>
  </div>

  <!-- Controls -->
  <a class="left carousel-control" href="#carousel-example-generic" role="button" data-slide="prev">
    <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="right carousel-control" href="#carousel-example-generic" role="button" data-slide="next">
    <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
    <span class="sr-only">Next</span>
  </a>
</div>
</div>
    <p>iToysoldiers is a website for people who love miniature war games. No matter what game you play, iToysoldiers lets you record and share all your hobby activities whether you’re into the gaming, the modelling or building a narrative around your models.</p>
<div class="media">
  <div class="media-left pull-left">
     <span class="glyphicon glyphicon-fire" aria-hidden="true" style="font-size: 3em;"></span>
  </div>
  <div class="media-body">
    <h4 class="media-heading">Battles</h4>
    <p>Record your glorious victories and crushing defeats. Capture the details of your battles.</p>
  </div>
  <div class="media-left pull-left">
     <span class="glyphicon glyphicon-flag" aria-hidden="true" style="font-size: 3em;"></span>
  </div>
  <div class="media-body">
    <h4 class="media-heading">Narrative</h4>
    <p>Tell your army’s story in words or with pictures using iToysoldiers blogs and galleries. </p>
  </div>
  <div class="media-left pull-left">
     <span class="glyphicon glyphicon-certificate" aria-hidden="true" style="font-size: 3em;"></span>
  </div>
  <div class="media-body">
    <h4 class="media-heading">Achievements</h4>
    <p>Earn renown and glory – along with achievements and badges for your wargaming exploits</p>
  </div>
</div>
  </div>
  <div class="col-xs-12 col-sm-4">
<div class="well">
<h3 class="text-center">Comment</h3>
<p>What do you think of the new "Join Now" page?</p>
<form name="Comment On Join Now" action="http://support.itoysoldiers.com/modules/Webforms/capture.php" method="post" accept-charset="utf-8" enctype="multipart/form-data">
    <input type="hidden" name="__vtrftk" value="sid:60950f91d5577340ede65c6f894c1eb71ef54e81,1441726109">
    <input type="hidden" name="publicid" value="090e219549b1ede1b7211ec3258e2aaa">
    <input type="hidden" name="name" value="Comment On Join Now">
    <input type="hidden" name="VTIGER_RECAPTCHA_PUBLIC_KEY" value="RECAPTCHA PUBLIC KEY FOR THIS DOMAIN">
    <input type="hidden" name="ticket_title" value="Comment on Join Now" required="">
    <select name="ticketstatus" required="" hidden="">
        <option value="">Select Value</option>
        <option value="Open" selected="">Open</option>
        <option value="In Progress">In Progress</option>
        <option value="Wait For Response">Wait For Response</option>
        <option value="Closed">Closed</option>
    </select>
    <div class="form-group">
        <label>Commentary*</label>
        <textarea name="description" class="form-control" required=""></textarea>
    </div>
    <select name="ticketpriorities" hidden="">
        <option value="">Select Value</option>
        <option value="Low">Low</option>
        <option value="Normal" selected="">Normal</option>
        <option value="High">High</option>
        <option value="Urgent">Urgent</option>
    </select>
    <textarea name="solution" hidden="">
<?php
global $user;
print_r($user->name);
?>
    </textarea>

    <button type="submit" value="Submit" class="btn btn-default">Submit</button>
</form>
<script  type="text/javascript">window.onload = function() { var N=navigator.appName, ua=navigator.userAgent, tem;var M=ua.match(/(opera|chrome|safari|firefox|msie)\\/?\\s*(\\.?\\d+(\\.\\d+)*)/i);if(M && (tem= ua.match(/version\\/([\\.\\d]+)/i))!= null) M[2]= tem[1];M=M? [M[1], M[2]]: [N, navigator.appVersion, "-?"];var browserName = M[0];var form = document.forms[0], inputs = form.elements; form.onsubmit = function() { var required = [], att, val; for (var i = 0; i < inputs.length; i++) { att = inputs[i].getAttribute("required"); val = inputs[i].value; type = inputs[i].type; if(type == "email") {if(val != "") {var elemLabel = inputs[i].getAttribute("label");var emailFilter = /^[_/a-zA-Z0-9]+([!"#$%&()*+,./:;<=>?\\^_`{|}~-]?[a-zA-Z0-9/_/-])*@[a-zA-Z0-9]+([\\_\\-\\.]?[a-zA-Z0-9]+)*\\.([\\-\\_]?[a-zA-Z0-9])+(\\.?[a-zA-Z0-9]+)?$/;var illegalChars= /[\\(\\)\\<\\>\\,\\;\\:\\"\\[\\]]/ ;if (!emailFilter.test(val)) {alert("For "+ elemLabel +" field please enter valid email address"); return false;} else if (val.match(illegalChars)) {alert(elemLabel +" field contains illegal characters");return false;}}}if (att != null) { if (val.replace(/^\\s+|\\s+$/g, "") == "") { required.push(inputs[i].getAttribute("label")); } } } if (required.length > 0) { alert("The following fields are required: " + required.join()); return false; } var numberTypeInputs = document.querySelectorAll("input[type=number]");for (var i = 0; i < numberTypeInputs.length; i++) { val = numberTypeInputs[i].value;var elemLabel = numberTypeInputs[i].getAttribute("label");if(val != "") {var intRegex = /^[+-]?\\d+$/;if (!intRegex.test(val)) {alert("For "+ elemLabel +" field please enter valid number"); return false;}}}}; }</script>

<p>This is where the "Registration form" would go.</p>
<p>I really appreciate any commentary you might have.  Oh! And this is a great page to send people who you think might get some enjoyment out of the site \'cause it gives a quick run down of what\'s available on the site.</p>
<p>Thanks!<br>Rob</p>
</div>
  </div>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd7214049-9242-4765-bb0b-9f590ccdb29c';
    $display->content['new-d7214049-9242-4765-bb0b-9f590ccdb29c'] = $pane;
    $display->panels['contentmain'][2] = 'new-d7214049-9242-4765-bb0b-9f590ccdb29c';
    $pane = new stdClass();
    $pane->pid = 'new-49efbd0f-1056-444b-bad5-62cda492c08c';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'home_page_register_now';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '49efbd0f-1056-444b-bad5-62cda492c08c';
    $display->content['new-49efbd0f-1056-444b-bad5-62cda492c08c'] = $pane;
    $display->panels['contentmain'][3] = 'new-49efbd0f-1056-444b-bad5-62cda492c08c';
    $pane = new stdClass();
    $pane->pid = 'new-094a1982-1042-4a09-b065-583177738f91';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Detailed Features and Benefits',
      'title' => '',
      'body' => '<div><hr></div>
<div class="row">
<div class="col-xs-12 col-sm-4">
<img class="center-block img-circle" src="http://itoysoldiers.com/sites/default/files/user/u1/statistics2.png" height=100px width=100px>
<h4 class="text-center strong">Know Your Enemy. Know Thy Self</h4>
<p class="text-center">Stats are cool.  We have stats. Compare your deeds in battle with gamers both local and worldwide.</p>
</div>
<div class="col-xs-12 col-sm-4">
<img class="center-block img-circle" src="/sites/default/files/achievements/award.png" height=100px width=100px>
<h4 class="text-center strong">Renown</h4>
<p>Why should computer gamers get all the badges, points, and achievements! iToysoldiers awards all sorts of… well… awards.</p>
</div>
<div class="col-xs-12 col-sm-4">
<img class="center-block img-circle" src="/sites/default/files/default_images/army.png" height=100px width=100px>
<h4 class="text-center strong">Your Army. On Display</h4>
<p>All of your wargaming deeds collected together to tell the story of your armies.</p>
</div>
</div>
<div class="clearfix"></div>
<div class="seperator"></div>
<div class="row">
<div class="col-xs-12 col-sm-4">
<img class="center-block img-circle" src="/sites/default/files/styles/medium/public/default_images/battle.png" height=100px width=100px>
<h4 class="text-center strong">Battles</h4>
<p>Report your battles and track your stats. Earn renown and awards for battle field prowess.</p>
</div>
<div class="col-xs-12 col-sm-4">
<img class="center-block img-circle" src="/sites/default/files/styles/medium/public/default_images/blog.png" height=100px width=100px>
<h4 class="text-center strong">Blogs</h4>
<p>Show off your modelling and painting acumen with unlimited photo storage.</p>
</div>
<div class="col-xs-12 col-sm-4">
<img class="center-block img-circle" src="/sites/default/files/styles/medium/public/default_images/gallery.png" height=100px width=100px>
<h4 class="text-center strong">Galleries</h4>
<p>Post the tales of your army or wax philosophical on all things war game related.</p>
</div>
</div>
<div class="seperator"></div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '094a1982-1042-4a09-b065-583177738f91';
    $display->content['new-094a1982-1042-4a09-b065-583177738f91'] = $pane;
    $display->panels['contentmain'][4] = 'new-094a1982-1042-4a09-b065-583177738f91';
    $pane = new stdClass();
    $pane->pid = 'new-ca63930a-bb54-4229-8cba-b79fd857de57';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Final Call to Action',
      'title' => '',
      'body' => '<div class="center-block">
<h2 class="text-center">There\'s the Pitch.  Join iToysoldiers.</h2>
<p>So there’s my pitch. I made iToysoldiers ‘cause I thought the idea is cool. The whole idea is to make our social hobby even more social by adding all the neat gamification bits that we love about computer games and applying it to table top war games. If you have an idea to make the site better please let me know. If you want more games on the site let me know. iToysoldiers is an ongoing labour of love. A love of games, miniatures, and mashing the two together. Thanks for dropping by and I can’t wait to see you post some battles.</p>

<a href="/user/register" class="btn btn-primary">Register on iToysoldiers</a>
<div class="seperator"></div>
<p>Carpe Acies!<br> Rob</p>
</div>
',
      'format' => 'pure_html',
      'substitute' => TRUE,
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ca63930a-bb54-4229-8cba-b79fd857de57';
    $display->content['new-ca63930a-bb54-4229-8cba-b79fd857de57'] = $pane;
    $display->panels['contentmain'][5] = 'new-ca63930a-bb54-4229-8cba-b79fd857de57';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bc_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'copyright';
  $page->task = 'page';
  $page->admin_title = 'Copyright';
  $page->admin_description = '';
  $page->path = 'copyright';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Copyright',
    'name' => 'menu-legal',
    'weight' => '5',
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
  $handler->name = 'page_copyright_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'copyright';
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
          'value' => 'Copyright | [site:name]',
        ),
        'description' => array(
          'value' => 'The iToysoldiers Copyright Statements',
        ),
        'abstract' => array(
          'value' => 'A page that details the iToysoldiers copyright statement',
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
  $display->layout = 'bootopoly_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Copyright ';
  $display->uuid = '75df8005-99d3-4399-a1e1-aefb6ca37e48';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c4f28f4-ce76-4381-b5ca-fb5e13a8a49a';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Copyright Statement',
      'title' => '',
      'body' => '<p><strong>Last Revised: 2015-07-20</strong></p>

<p>An awful lot of the content of the iToysoldiers website is derived from the intellectual property of the various game companies that produce the games we love and play. Miniature war gaming is, by its nature, an extremely social activity and folks love to share photos of their models, fiction that they’ve written around their armies, and discuss rule sets.&nbsp; As a result models, factions, armies, locations, iconography, and terms owned as Intellectual Property of various game companies are all present on the iToysoldiers site. We strive to use player created content whenever possible but sometimes we rely upon the images and/or text provided by the game manufacturers to supply context or frameworks for players to structure their content on the site. Allow me to assure you that iToysoldiers does not attempt to claim these trademarks or copyrights as our own. No infringement is intended. This website is unofficial and not endorsed by any of the game manufacturers that produce the fabulous games included on iToysoldiers. We wish they\'d endorse us. We\'d happily accept an endorsement or at least some kudos for creating a nifty resource for players but there it is. In any case, thanks to all the great game makers who cater to us basement generals.</p>

<p>All correspondence relevant to copyright information, issues, questions or concerns may be directed to <a href="mailto:admin@itoysoldiers.com">admin@itoysoldiers.com</a>.</p>

<p>If you believe any content hosted on the iToysoldiers Platform infringes your copyrights, then you may submit a notification pursuant to the Digital Millennium Copyright Act (“DCMA”) by providing iToysoldiers’s Designated Copyright Agent with the following information in writing (email works):</p>

<ul>
	<li>a physical or electronic signature of a person authorized to act on behalf of the owner of an exclusive right that is allegedly infringed;</li>
	<li>identification of the copyrighted work claimed to have been infringed, or, if multiple copyrighted works on the iToysoldiers Platform are covered by a single notification, a representative list of such works on the iToysoldiers Platform;</li>
	<li>identification of the material that is claimed to be infringing or to be the subject of infringing activity and that is to be removed or access to which is to be disabled, and information reasonably sufficient to permit iToysoldiers to locate the material;</li>
	<li>information reasonably sufficient to permit iToysoldiers to contact the complaining party, such as an address, telephone number, and, if available, an electronic mail address at which the complaining party may be contacted;</li>
	<li>a statement that the complaining party has a good faith belief that use of the material in the manner complained of is not authorized by the copyright owner, its agent, or the law (for example, "I am under the good faith belief that the use of the copyrighted content that is identified herein is not authorized by the copyright owner, its agent, or the law."); and</li>
	<li>a statement that the information in the notification is accurate, and under penalty of perjury, that the complaining party is authorized to act on behalf of the owner of an exclusive right that is allegedly infringed (for example, "I swear, under penalty of perjury, that the information in this notification is accurate and that I am the copyright owner, or authorized to act on behalf of the copyright owner, of the copyright(s) that is/are allegedly infringed by the aforementioned content.").</li>
</ul>

<p>Please consult your legal counsel or see 17 U.S.C. § 512 to confirm these requirements.</p>

<p>iToysoldiers does not permit copyright infringing activities and infringement of intellectual property rights on the iToysoldiers Platform, and iToysoldiers will remove all Content and User Submissions if properly notified that such Content or User Submission infringes on another\'s intellectual property rights. It is iToysoldiers\'s policy to respond promptly to notices of alleged infringement that comply with the DMCA. In addition, iToysoldiers will promptly terminate without notice the accounts of Users that are determined by iToysoldiers to be "repeat infringers." A repeat infringer is a User who has been notified of infringing activity more than twice and/or has had a User Submission removed from the Website more than twice.</p>

<p>iToysoldiers\'s Designated Copyright Agent to receive notifications and counter-notifications of claimed infringement can be reached as follows: Attention: Robert Tacey, 24 Azar Avenue, Tilbury, Ontario, N0P 2L0, Canada, or by electronic mail at&nbsp;<a href="mailto:admin@iToysoldiers.com">admin@iToysoldiers.com</a>. For clarity, only DMCA notices should go to the Designated Copyright Agent. Any other feedback, comments, requests for technical support or other communications should be directed to iToysoldiers customer service through&nbsp;<a href="mailto:support@iToysoldiers.uservoice.com">support@iToysoldiers.uservoice.com</a>. You acknowledge that if you fail to comply with all of the requirements of this section, your DMCA notice may not be valid. Please note that under Section 512(f) of the DMCA, any person who knowingly materially misrepresents that material or activity is infringing may be subject to liability.</p>
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
    $pane->uuid = '2c4f28f4-ce76-4381-b5ca-fb5e13a8a49a';
    $display->content['new-2c4f28f4-ce76-4381-b5ca-fb5e13a8a49a'] = $pane;
    $display->panels['contentmain'][0] = 'new-2c4f28f4-ce76-4381-b5ca-fb5e13a8a49a';
    $pane = new stdClass();
    $pane->pid = 'new-c3ab7f4e-eda5-4862-851c-a66ac60bd38a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-legal';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3ab7f4e-eda5-4862-851c-a66ac60bd38a';
    $display->content['new-c3ab7f4e-eda5-4862-851c-a66ac60bd38a'] = $pane;
    $display->panels['sidebar'][0] = 'new-c3ab7f4e-eda5-4862-851c-a66ac60bd38a';
    $pane = new stdClass();
    $pane->pid = 'new-00092d84-b563-4efe-8b62-67742aafeea2';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-itoysoldiers-elsewhere';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '00092d84-b563-4efe-8b62-67742aafeea2';
    $display->content['new-00092d84-b563-4efe-8b62-67742aafeea2'] = $pane;
    $display->panels['sidebar'][1] = 'new-00092d84-b563-4efe-8b62-67742aafeea2';
    $pane = new stdClass();
    $pane->pid = 'new-05d00efc-4ff5-437c-9520-d2bfdd2305ca';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-contact-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '05d00efc-4ff5-437c-9520-d2bfdd2305ca';
    $display->content['new-05d00efc-4ff5-437c-9520-d2bfdd2305ca'] = $pane;
    $display->panels['sidebar'][2] = 'new-05d00efc-4ff5-437c-9520-d2bfdd2305ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2c4f28f4-ce76-4381-b5ca-fb5e13a8a49a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['copyright'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'feedback_thanks';
  $page->task = 'page';
  $page->admin_title = 'Feedback Thanks';
  $page->admin_description = 'This is a generic landing page for forms and stuff to say thanks for the feedback.';
  $page->path = 'thanks';
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
  $handler->name = 'page_feedback_thanks__panel_context_896fdd8d-bca7-4f9b-abb8-8c342047114c';
  $handler->task = 'page';
  $handler->subtask = 'feedback_thanks';
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
  $display->title = 'Thanks for the Feedback!';
  $display->uuid = '28b881c3-0b4d-4a36-a10b-e6852b2d09f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01bccb44-bc23-4336-80fb-0e9f60f56cc0';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Thanks for the feedback!</p>

<p>I really appreciate it. iToysoldiers thrives on your feedback and I use it to make the site better. &nbsp;Never hesitate to reach out to me at admin@itoysoldiers.com.</p>

<p>Carpe Acies!<br />
Rob</p>
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
    $pane->uuid = '01bccb44-bc23-4336-80fb-0e9f60f56cc0';
    $display->content['new-01bccb44-bc23-4336-80fb-0e9f60f56cc0'] = $pane;
    $display->panels['contentmain'][0] = 'new-01bccb44-bc23-4336-80fb-0e9f60f56cc0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-01bccb44-bc23-4336-80fb-0e9f60f56cc0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['feedback_thanks'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gaming_page';
  $page->task = 'page';
  $page->admin_title = 'Gaming Page';
  $page->admin_description = 'The landing page for selling the site with gaming info.';
  $page->path = 'tabletop-war-gaming';
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
  $handler->name = 'page_gaming_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'gaming_page';
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
          'value' => 'Tabletop War Gaming: Tools for the avid player',
        ),
        'description' => array(
          'value' => 'Free online tools for miniature war games:  battle reports, statistics, achievements, and more.',
        ),
        'keywords' => array(
          'value' => 'miniature war gaming, battle reports, battle statistics, miniature war game',
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
  $display->layout = 'bootopoly_boxton';
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
  $display->title = 'We have stats.  Stats are cool.';
  $display->uuid = 'a50ae75c-08ed-4e36-af73-83e75a1dc1df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0984b595-4ece-485d-8681-f2442943d7c3';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Hero Image',
      'title' => '',
      'body' => '<div class="row">
<div class="col-xs-12 col-sm-9 clearfix">
  <h1>Tools for Gamers</h1>
  <h2>Show off your table top war gaming prowess</h2>
</div>

<div class="col-xs-12 col-sm-3 clearfix">
  <?php 
     if (!user_is_logged_in()) {
        print \'<div align="center"><a href="http://itoysoldiers.com/user/register" class="btn btn-primary btn-lg">Start your profile</a></div>\';
   }  else {
      print \'<div align="center"><a href="http://itoysoldiers.com/dashboard" class="btn btn-primary btn-lg">Your Dashboard</a></div>\';
   }   
?>
</div>
</div>

<div class="row">
<div class="col-xs-12 clearfix">
<?php print views_embed_view("_battles_page" , "panel_pane_2"); ?>
</div>
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
      'css_class' => 'jumbotron',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0984b595-4ece-485d-8681-f2442943d7c3';
    $display->content['new-0984b595-4ece-485d-8681-f2442943d7c3'] = $pane;
    $display->panels['contentmain'][0] = 'new-0984b595-4ece-485d-8681-f2442943d7c3';
    $pane = new stdClass();
    $pane->pid = 'new-01355c50-dac7-416e-af17-6fa75b75f83a';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Tryptich',
      'title' => '',
      'body' => '<div class="col-sm-4">
<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">What is it?</h3>
  </div>
  <div class="panel-body">
    <p>Powerful digital tools custom made for miniature war game enthusiasts. It’s the only platform in the world you can use to track all of your war gaming exploits, chronicle the glory of your armies, and share it with the world.  <a href="/user/register">Sign up for free</a>.</p>
  </div>
</div>
</div>
<div class="col-sm-4">
<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">Who is it for?</h3>
  </div>
  <div class="panel-body">
    <p>iToysoldiers is for anyone who loves miniature war games.  With features including aggregate battle results, competitive leagues and tournaments, galleries, blogs and much more, iToysoldiers is the best place on the web to record your battles.  There’s also features for hobbyists who prefer the modelling and fluff elements as well.</p>
  </div>
</div>
</div>
<div class="col-sm-4">
<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">Why use it?</h3>
  </div>
  <div class="panel-body">
    <p>Chronicle all of your miniature war gaming activities in one place.  iToysoldiers makes it easy for players to record battles, participate in leagues and events, and share the glory of their little toy soldier armies with the world.  <a href="/user/register">Start your profile now</a>.</p>
  </div>
</div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
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
    $pane->uuid = '01355c50-dac7-416e-af17-6fa75b75f83a';
    $display->content['new-01355c50-dac7-416e-af17-6fa75b75f83a'] = $pane;
    $display->panels['contentmain'][1] = 'new-01355c50-dac7-416e-af17-6fa75b75f83a';
    $pane = new stdClass();
    $pane->pid = 'new-377a9246-6931-4ddc-98f3-c936b0cdebc5';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Features',
      'title' => '',
      'body' => '<div class="col-sm-3">
   <div class="thumbnail">
      <img src="/sites/default/files/default_images/league.png" alt="iToysoldiers Achievements">
      <div class="caption">
        <h3>Achievements</h3>
        <p><strong>Seize the glory.</strong> Earn achievements, reknown, and badges for the battles you participate in.  Share your accolades with the world.</p>
        <p><a href="/leaderboard" class="btn btn-primary" role="button">Learn More</a></p>
      </div>
   </div>
</div>

<div class="col-sm-3">
   <div class="thumbnail">
      <img src="/sites/default/files/default_images/battle.png" alt="iToysoldiers Battle Reports">
      <div class="caption">
        <h3>Battle Reports</h3>
        <p><strong>Chronicle your deeds.</strong>  Muse on battle tactics or crow about your victories.  Easily share your battles on social media, message boards or your blog.</p>
        <p><a href="/battle-reports" class="btn btn-primary" role="button">Learn More</a></p>
      </div>
   </div>
</div>
<div class="col-sm-3">
   <div class="thumbnail">
      <img src="/sites/default/files/default_images/event.png" alt="Game Statistics">
      <div class="caption">
        <h3>Stats</h3>
        <p><strong>Analyze your results</strong> using a huge array of game meta - no matter what games you play.</p>
        <p><a href="/stats" class="btn btn-primary" role="button">Learn More</a></p>
      </div>
   </div>
</div>
<div class="col-sm-3">
   <div class="thumbnail">
      <img src="/sites/default/files/default_images/location_0.png" alt="War Zones">
      <div class="caption">
        <h3>War Zones</h3>
        <p><strong>Explore the gaming community</strong> near you.  Find game days, events, tournaments, and local gaming stores.</p>
        <p><a href="/warzone" class="btn btn-primary" role="button">Learn More</a></p>
      </div>
   </div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '377a9246-6931-4ddc-98f3-c936b0cdebc5';
    $display->content['new-377a9246-6931-4ddc-98f3-c936b0cdebc5'] = $pane;
    $display->panels['contentmain'][2] = 'new-377a9246-6931-4ddc-98f3-c936b0cdebc5';
    $pane = new stdClass();
    $pane->pid = 'new-69307c50-e513-4233-948a-27060824c556';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Get Started',
      'title' => '',
      'body' => '<div align="center" class="well">
<a href="http://itoysoldiers.com/user/register" class="btn btn-primary btn-lg" style="white-space: normal;">Start your free iToysoldiers profile</a>
<h4>You\'ll be gaining renown and glory in minutes.</h4>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
      'name' => 'home_page_register_now',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '69307c50-e513-4233-948a-27060824c556';
    $display->content['new-69307c50-e513-4233-948a-27060824c556'] = $pane;
    $display->panels['contentmain'][3] = 'new-69307c50-e513-4233-948a-27060824c556';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gaming_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_page__panel_context_edd206fc-0014-4a68-ac49-c82d97525db9';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Authenticated User',
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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
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
  $display->uuid = '7077fdbc-6db4-43f9-8de0-d0d18be8e8ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fe8099c2-5f90-4026-8d25-5e9754ec8f73';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Announcement Banner',
      'title' => '',
      'body' => '<ins data-revive-zoneid="27" data-revive-id="4f7dfffe8e8e5dcd2cbcc3bb4563f765"></ins>
<script async src="//ads.itoysoldiers.com/www/delivery/asyncjs.php"></script>',
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
    $pane->uuid = 'fe8099c2-5f90-4026-8d25-5e9754ec8f73';
    $display->content['new-fe8099c2-5f90-4026-8d25-5e9754ec8f73'] = $pane;
    $display->panels['contentmain'][0] = 'new-fe8099c2-5f90-4026-8d25-5e9754ec8f73';
    $pane = new stdClass();
    $pane->pid = 'new-ff19d553-d9bc-4b62-8c62-6fae301b609f';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hidden-xs',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ff19d553-d9bc-4b62-8c62-6fae301b609f';
    $display->content['new-ff19d553-d9bc-4b62-8c62-6fae301b609f'] = $pane;
    $display->panels['contentmain'][1] = 'new-ff19d553-d9bc-4b62-8c62-6fae301b609f';
    $pane = new stdClass();
    $pane->pid = 'new-7a8d6a70-688f-4376-a556-704f146e3143';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add to Stream',
      'title' => '',
      'body' => '<ul class="nav nav-tabs">
    <li class="active"><a href="#stream" data-toggle="tab"><i class="fa fa-road"></i> Activity</a></li>
    <li><a href="#profile1" data-toggle="tab"><i class="fa fa-fire"></i> Battle</a></li>
    <li><a href="/node/add/models"><i class="fa fa-paint-brush"></i> New Models</a></li>
    <li><a href="/node/add/listcrit"><i class="fa fa-th-list"></i> New List</a></li>
</ul>
<div class="tab-content">
    <div class="tab-pane fade in active" id="stream">
        <?php print views_embed_view("core_all_node_timeline", "panel_pane_2"); ?>  
    </div>
    <div class="tab-pane fade" id="home1">
        <?php
        module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
        $entity_form_name = \'status\';
        $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
        echo drupal_render($render_estimate_form);
        ?>
    </div>
    <div class="tab-pane fade" id="profile1">
        <div class="well well-sm">
            <?php
            module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
            $entity_form_name = \'quick_battle\';
            $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
            echo drupal_render($render_estimate_form);
            ?>
        </div>
    </div>
    <div class="tab-pane fade" id="message1">
        <div class="well well-sm">
            <?php
            module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
            $entity_form_name = \'status_all_upload_image\';
            $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
            echo drupal_render($render_estimate_form);
            ?>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7a8d6a70-688f-4376-a556-704f146e3143';
    $display->content['new-7a8d6a70-688f-4376-a556-704f146e3143'] = $pane;
    $display->panels['contentmain'][2] = 'new-7a8d6a70-688f-4376-a556-704f146e3143';
    $pane = new stdClass();
    $pane->pid = 'new-70244192-bfd0-46cd-b527-a074a19aefee';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_2';
    $pane->shown = FALSE;
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
    $pane->uuid = '70244192-bfd0-46cd-b527-a074a19aefee';
    $display->content['new-70244192-bfd0-46cd-b527-a074a19aefee'] = $pane;
    $display->panels['contentmain'][3] = 'new-70244192-bfd0-46cd-b527-a074a19aefee';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Anonymous Home Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[site:name] | Chronicle the glory of your little toysoldiers.',
        ),
        'description' => array(
          'value' => 'iToysoldiers lets you chronicle the glories of your tabletop miniature armies.  Galleries, blogs, battle reports an stats, plus more.',
        ),
        'abstract' => array(
          'value' => 'iToysoldiers is a tabletop war gaming community and portal.',
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
        'canonical' => array(
          'value' => 'http://itoysoldiers.com',
        ),
        'shortlink' => array(
          'value' => 'http://itoysoldiers.com',
        ),
        'og:description' => array(
          'value' => '[site:name] | Chronicle the glory of your little toysoldiers',
        ),
        'og:type' => array(
          'value' => 'website',
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'de5eb265-ceae-4d51-ae3e-b63d89501252';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d70e6cf7-a006-41a9-a4bc-85720c2d5df3';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Announcement Banner',
      'title' => '',
      'body' => '<ins data-revive-zoneid="27" data-revive-id="4f7dfffe8e8e5dcd2cbcc3bb4563f765"></ins>
<script async src="//ads.itoysoldiers.com/www/delivery/asyncjs.php"></script>',
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
    $pane->uuid = 'd70e6cf7-a006-41a9-a4bc-85720c2d5df3';
    $display->content['new-d70e6cf7-a006-41a9-a4bc-85720c2d5df3'] = $pane;
    $display->panels['contentmain'][0] = 'new-d70e6cf7-a006-41a9-a4bc-85720c2d5df3';
    $pane = new stdClass();
    $pane->pid = 'new-2a6a4d6e-df03-4e75-b4fe-ae903d28c127';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Slider',
      'title' => '',
      'body' => '<div id="main-slider" class="carousel slide bg-dark" data-ride="carousel">
    <ol class="carousel-indicators">
        <li data-target="#main-slider" data-slide-to="0" class="active"></li>
        <li data-target="#main-slider" data-slide-to="1"></li>
        <li data-target="#main-slider" data-slide-to="2"></li>
        <li data-target="#main-slider" data-slide-to="3"></li>
    </ol>
    <div class="carousel-inner">
        <div class="item active">
            <img src="https://s3.amazonaws.com/itoysoldiers/slider0.png" alt="" class="img-background">
            <div class="row">
                <div class="col-xs-12 text-center">
                    <h2 class="m-top-lg text-warning">Pulling the hobby together</h2>
                    <p class="text-white hidden-xs">
                        No matter what aspect of the hobby is your thing,<br>
                        iToysoldiers has you covered.                        
                    </p>
                    <a href="/user/register" class="btn btn-danger btn-lg">Sign Up</a>
                </div>
            </div>
        </div>
        <div class="item">
            <img src="https://s3.amazonaws.com/itoysoldiers/slider1.png" alt="" class="img-background">
            <div class="row">
                <div class="col-xs-12 text-center">
                    <h2 class="m-top-lg text-warning">Gaming</h2>
                    <p class="text-white hidden-xs">

                        Record the results of your battles.<br>
                        Earn achievements and renown for your battle field prowess.

                    </p>
                    <a href="/user/register" class="btn btn-danger btn-lg">Sign Up</a>
                </div>

            </div>
        </div>
        <div class="item">
            <img src="https://s3.amazonaws.com/itoysoldiers/slider2.png" alt="" class="img-background">
            <div class="row">
                <div class="col-xs-12 text-center">
                    <h2 class="m-top-lg text-warning">Modelling</h2>
                    <p class="text-white hidden-xs">
                        Show off your armies and modelling projects.                        
                    </p>
                    <a href="/user/register" class="btn btn-danger btn-lg">Sign Up</a>
                </div>
            </div>
        </div>
        <div class="item">
            <img src="https://s3.amazonaws.com/itoysoldiers/slider3.png" alt="" class="img-background">
            <div class="row">
                <div class="col-xs-12 text-center">
                    <h2 class="m-top-lg text-warning">Narrative</h2>
                    <p class="text-white hidden-xs">
                        Tell the story of your army.                        
                    </p>
                    <a href="/user/register" class="btn btn-danger btn-lg">Sign Up</a>
                </div>
            </div>
        </div>
    </div>
    <a class="left carousel-control" href="#main-slider" data-slide="prev">
        <span class="fa fa-chevron-left"></span>
    </a>
    <a class="right carousel-control" href="#main-slider" data-slide="next">
        <span class="fa fa-chevron-right"></span>
    </a>
</div>

<div class="bg-white content-padding text-center font-lg">
    <span class="m-right-sm">Chronicle the Glory of your Miniature Wargaming Armies</span>
    <div class="inline-block m-top-sm">
        <a href="/user/register" class="btn btn-info btn-lg m-bottom-sm"><i class="fa fa-sign-in"></i> Join Now</a>
    </div>
</div>
',
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
    $pane->uuid = '2a6a4d6e-df03-4e75-b4fe-ae903d28c127';
    $display->content['new-2a6a4d6e-df03-4e75-b4fe-ae903d28c127'] = $pane;
    $display->panels['contentmain'][1] = 'new-2a6a4d6e-df03-4e75-b4fe-ae903d28c127';
    $pane = new stdClass();
    $pane->pid = 'new-366668ef-b583-45ae-acb4-3536c8e4d65b';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Feature List',
      'title' => '',
      'body' => '<div class="bg-light padding-md" id="feature">
    <div class="row">
        <div class="col-sm-4 content-padding">
            <div class="feature-icon text-center ">
                <i class="fa fa-fire fa-4x"></i>
            </div>
            <div class="text-center font-lg">
                <h3>Battles</h3>
            </div>
            <p>Record your glorious exploits on the field of battle. Battle reports generate stats and as we all know, stats are cool. You can also upload photos of your battles and gain achievements for your exploits.</p>
        </div><!-- /.col -->
        <div class="col-sm-4 content-padding">
            <div class="feature-icon text-center">
                <i class="fa fa-paint-brush fa-4x"></i>
            </div>
            <div class="text-center font-lg">
                <h3>Modeling Projects</h3>
            </div>
            <p>iToysoldiers let you track the progress of your miniature collection from acquisition to completion.  Upload work in progress photos.  Elaborate on your painting and modeling techniques. Keep track of your collection and how far you have to go to completion.</p>
        </div><!-- /.col -->
        <div class="col-sm-4 content-padding">
            <div class="feature-icon text-center">
                <i class="fa fa-flag fa-4x"></i>
            </div>
            <div class="text-center font-lg">
                <h3>Army Profiles</h3>
            </div>
            <p>The fluff behind your army is important and Army Profiles let you feature the stories, battles, and notable characters that have shaped your collection of miniatures into a fighting force to be feared.</p>
        </div><!-- /.col -->
    </div><!-- /.row -->
    <div class="row">
        <div class="col-sm-4 content-padding">
            <div class="feature-icon text-center">
                <i class="fa fa-th-list fa-4x"></i>
            </div>
            <div class="text-center font-lg">
                <h3>ListCrit</h3>
            </div>
            <p>Do your army lists have what it take to be reviewed by other miniature wargaming enthusiasts? Find out by submitting your list to iToysoldiers ListCrit and then vote up or down the lists of your peers.</p>
        </div><!-- /.col -->
        <div class="col-sm-4 content-padding">
            <div class="feature-icon text-center">
                <i class="fa fa-trophy fa-4x"></i>
            </div>
            <div class="text-center font-lg">
                <h3>Achievements</h3>
            </div>
            <p>Why should computer gamers have all the fun? We were here first! iToysoldiers rewards you with renown, achievements, and levels as you chronicle the glory of your miniature armies.</p>
        </div><!-- /.col -->
        <div class="col-sm-4 content-padding">
            <div class="feature-icon text-center">
                <i class="fa fa-book fa-4x"></i>
            </div>
            <div class="text-center font-lg">
                <h3>Every Game</h3>
            </div>
            <p>We play lots of games! iToysoldiers is different from other miniature gaming sites because we support any game. Is your favorite game not here? Let us know.</p>
        </div><!-- /.col -->
    </div><!-- /.row -->
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '366668ef-b583-45ae-acb4-3536c8e4d65b';
    $display->content['new-366668ef-b583-45ae-acb4-3536c8e4d65b'] = $pane;
    $display->panels['contentmain'][2] = 'new-366668ef-b583-45ae-acb4-3536c8e4d65b';
    $pane = new stdClass();
    $pane->pid = 'new-67043c41-a5e0-4858-a600-e4a3eb592bd2';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Social Proof',
      'title' => '',
      'body' => '<div class="section-header">
    <hr class="left visible-lg">
    <span>
        A page for every army, player, game and much more game meta
    </span>
    <hr class="right visible-lg">
</div>
<h4 class="text-center">also battlefields, events, and league management, comments, feedback, achievements, and more</h4>

<div class="row">
    <div class="col-sm-3 col-xs-6">
        <div align="center">
            <span class="glyphicon glyphicon-flag homestat" style="font-size:3em"></span>
            <span><?php print views_embed_view("home_page_element_count", "battles"); ?></span>
        </div>
    </div>

    <div class="col-sm-3 col-xs-6">
        <div align="center">
            <span class="glyphicon glyphicon-picture homestat" style="font-size:3em"></span>
            <span><?php print views_embed_view("home_page_element_count", "galleries"); ?></span>
        </div>
    </div>

    <div class="col-sm-3 col-xs-6">
        <div align="center">
            <span class="glyphicon glyphicon-book homestat" style="font-size:3em"></span>
            <span><?php print views_embed_view("home_page_element_count", "blog"); ?></span>
        </div>
    </div>

    <div class="col-sm-3 col-xs-6">
        <div align="center">
            <span class="glyphicon glyphicon-user homestat" style="font-size:3em"></span>
            <span><?php print views_embed_view("home_page_element_count_2", "default"); ?></span>
        </div>
    </div>
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '67043c41-a5e0-4858-a600-e4a3eb592bd2';
    $display->content['new-67043c41-a5e0-4858-a600-e4a3eb592bd2'] = $pane;
    $display->panels['contentmain'][3] = 'new-67043c41-a5e0-4858-a600-e4a3eb592bd2';
    $pane = new stdClass();
    $pane->pid = 'new-11a4a34f-938d-4873-9562-07884eb224cb';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Benefits',
      'title' => '',
      'body' => '<div class="bg-white text-center content-padding">
    <h3>Chronicle the Glory of Your Armies</h3>
    <h5 class="text-muted">Super Powerful & Easy to Use Theme</h5>
    <div class="seperator"></div>
    <div class="seperator"></div>
    <p>
        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur bibendum ornare dolor, quis ullamcorper ligula sodales at. Nulla tellus elit, varius non commodo eget, mattis vel eros. In sed ornare nulla. Donec consectetur, velit a pharetra ultricies, diam lorem lacinia risus, ac commodo orci erat eu massa. Sed sit amet nulla ipsum. Donec felis mauris, vulputate sed tempor at, aliquam a ligula. Pellentesque non pulvinar nisi...
    </p>
    <a href="/user/register" class="btn btn-lg btn-success">JOIN NOW</a>
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '11a4a34f-938d-4873-9562-07884eb224cb';
    $display->content['new-11a4a34f-938d-4873-9562-07884eb224cb'] = $pane;
    $display->panels['contentmain'][4] = 'new-11a4a34f-938d-4873-9562-07884eb224cb';
    $pane = new stdClass();
    $pane->pid = 'new-1b1872fc-d3c5-4f6f-a975-af4e49c0c210';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Recent Highlights',
      'title' => '',
      'body' => '<div id="portfolio">
    <div class="section-header">
        <hr class="left visible-lg">
        <span>
            RECENT HIGHLIGHTS
        </span>
        <hr class="right visible-lg">
    </div>
    <?php print views_embed_view("home_page_latest_highlights" , "panel_pane_3"); ?>
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1b1872fc-d3c5-4f6f-a975-af4e49c0c210';
    $display->content['new-1b1872fc-d3c5-4f6f-a975-af4e49c0c210'] = $pane;
    $display->panels['contentmain'][5] = 'new-1b1872fc-d3c5-4f6f-a975-af4e49c0c210';
    $pane = new stdClass();
    $pane->pid = 'new-ee19956f-d9c6-4a8e-be9f-03716ca708bf';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Call to action',
      'title' => '',
      'body' => '<div class="bg-white content-padding text-center font-lg">
        
        <div class="inline-block m-top-sm">
            <a href="/user/register" class="btn btn-info btn-lg m-bottom-sm"><i class="fa fa-sign-in"></i> Start your free profile</a>
            <div class="m-right-sm">You\'ll be gaining renown and glory in minutes</div>
        </div>
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ee19956f-d9c6-4a8e-be9f-03716ca708bf';
    $display->content['new-ee19956f-d9c6-4a8e-be9f-03716ca708bf'] = $pane;
    $display->panels['contentmain'][6] = 'new-ee19956f-d9c6-4a8e-be9f-03716ca708bf';
    $pane = new stdClass();
    $pane->pid = 'new-5ae99014-2458-450a-8e4e-1cab82a588cd';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Explore content',
      'title' => '',
      'body' => '<div class="clearfix well">
<div align="center">
<h2>Explore the exploits of other commanders</h2>
<h4>With iToysoldiers.com you can view blogs, battle reports, galleries, and stats of your favorite army</h4>
</div>
<div class="col-md-6 col-md-offset-3 clearfix">
<?php 
    print drupal_render(drupal_get_form(\'search_form\'));
?>
</div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '5ae99014-2458-450a-8e4e-1cab82a588cd';
    $display->content['new-5ae99014-2458-450a-8e4e-1cab82a588cd'] = $pane;
    $display->panels['contentmain'][7] = 'new-5ae99014-2458-450a-8e4e-1cab82a588cd';
    $pane = new stdClass();
    $pane->pid = 'new-a1f76a7f-623f-4877-8240-230c9793fcbe';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page_game_list-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bg-light padding-md',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'a1f76a7f-623f-4877-8240-230c9793fcbe';
    $display->content['new-a1f76a7f-623f-4877-8240-230c9793fcbe'] = $pane;
    $display->panels['contentmain'][8] = 'new-a1f76a7f-623f-4877-8240-230c9793fcbe';
    $pane = new stdClass();
    $pane->pid = 'new-824d81c9-f53c-450d-b610-73d0cd3311f2';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Newsletter Signup',
      'title' => '',
      'body' => '<div class="bg-white">
  <div class="text-center content-padding" id="contact">
      <h3>NEWSLETTER SIGNUP</h3>
      <p class="m-bottom-md">Subscribing to our newsletter you will always be update with the latest news from us.</p>
      <script type="text/javascript" src="http://l.itoysoldiers.com/index.php/form/generate.js?id=7"></script>
  </div>
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '824d81c9-f53c-450d-b610-73d0cd3311f2';
    $display->content['new-824d81c9-f53c-450d-b610-73d0cd3311f2'] = $pane;
    $display->panels['contentmain'][9] = 'new-824d81c9-f53c-450d-b610-73d0cd3311f2';
    $pane = new stdClass();
    $pane->pid = 'new-bf3391f0-a8c5-44fd-8647-89c994a5350e';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Final Call to Action',
      'title' => '',
      'body' => '<div class="content-padding bg-light">
    <div class="panel">
        <div class="panel-body content-padding">
            <div class="pull-left">
                <p class="font-lg">iToysoldiers is a website all about showing off your miniature wargaming exploits.</p>
                <p class="text-muted">Tell the story of your army for the world to see.</p>
            </div>
            <a href="/user/register" class="btn btn-lg btn-danger pull-right m-top-xs">SIGN UP NOW</a>
        </div>
    </div>
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'bf3391f0-a8c5-44fd-8647-89c994a5350e';
    $display->content['new-bf3391f0-a8c5-44fd-8647-89c994a5350e'] = $pane;
    $display->panels['contentmain'][10] = 'new-bf3391f0-a8c5-44fd-8647-89c994a5350e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

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
        'entity_id' => '5294',
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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'itoysoldiers_for_narrative';
  $page->task = 'page';
  $page->admin_title = 'Home Page: All: Narrative Landing';
  $page->admin_description = 'This is the "landing" page for showing off the narrative element tools on iToysoldiers';
  $page->path = 'narrative-war-gaming';
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
  $handler->name = 'page_itoysoldiers_for_narrative__panel_context_111a8371-d0d1-4034-8c97-9c44fd55d95d';
  $handler->task = 'page';
  $handler->subtask = 'itoysoldiers_for_narrative';
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
          'value' => 'Narrative War Gaming | [site:name]',
        ),
        'description' => array(
          'value' => 'iToysoldiers provides the tools for you to chronicle the glory of your miniature war gaming armies with great tools to provide a narrative context to your war games.',
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
  $display->uuid = '57275256-bd92-4192-afed-3bcfb0c5161e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-42d92332-2f59-4859-be30-cd3093e09f3a';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<h1>Your Army is Epic</h1>
<h2>Tell the story on iToysoldiers</h2>',
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
    $pane->uuid = '42d92332-2f59-4859-be30-cd3093e09f3a';
    $display->content['new-42d92332-2f59-4859-be30-cd3093e09f3a'] = $pane;
    $display->panels['contentmain'][0] = 'new-42d92332-2f59-4859-be30-cd3093e09f3a';
    $pane = new stdClass();
    $pane->pid = 'new-8dc39e9c-fe9c-4206-8514-dcda635e4045';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'First Call to Action',
      'title' => '',
      'body' => '<h4 class="text-center">iToysoldiers is a website to share the glory of your miniature war gaming armies <a href="/user/register" class="btn btn-primary">REGISTER NOW</a></h4>
<div class="seperator"></div>
<div class="seperator"></div>',
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
    $pane->uuid = '8dc39e9c-fe9c-4206-8514-dcda635e4045';
    $display->content['new-8dc39e9c-fe9c-4206-8514-dcda635e4045'] = $pane;
    $display->panels['contentmain'][1] = 'new-8dc39e9c-fe9c-4206-8514-dcda635e4045';
    $pane = new stdClass();
    $pane->pid = 'new-dbf4e4c1-3457-428c-b3af-3fb11a483bbd';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Triptych',
      'title' => '',
      'body' => '<div class="row">
<div class="col-sm-4">
<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">What is it?</h3>
  </div>
  <div class="panel-body">
    <p>Powerful digital tools custom made for miniature war game enthusiasts. It’s the only platform in the world you can use to track all of your war gaming exploits, chronicle the glory of your armies, and share it with the world.  <a href="/user/register">Sign up for free</a>.</p>
  </div>
</div>
</div>
<div class="col-sm-4">
<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">Who is it for?</h3>
  </div>
  <div class="panel-body">
    <p>iToysoldiers is for anyone who loves miniature war games.  With features including aggregate battle results, competitive leagues and tournaments, galleries, blogs and much more, iToysoldiers is the best place on the web to record your battles.  There’s also features for hobbyists who prefer the modelling and fluff elements as well.</p>
  </div>
</div>
</div>
<div class="col-sm-4">
<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">Why use it?</h3>
  </div>
  <div class="panel-body">
    <p>Chronicle all of your miniature war gaming activities in one place.  iToysoldiers makes it easy for players to record battles, participate in leagues and events, and share the glory of their little toy soldier armies with the world.  <a href="/user/register">Start your profile now</a>.</p>
  </div>
</div>
</div>
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
    $pane->uuid = 'dbf4e4c1-3457-428c-b3af-3fb11a483bbd';
    $display->content['new-dbf4e4c1-3457-428c-b3af-3fb11a483bbd'] = $pane;
    $display->panels['contentmain'][2] = 'new-dbf4e4c1-3457-428c-b3af-3fb11a483bbd';
    $pane = new stdClass();
    $pane->pid = 'new-ef2977fb-e466-434c-bd3b-8d0a5b7ad68f';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Narrative Features',
      'title' => '',
      'body' => '<h3 class="text-center">Narrative Features</h3>
<div class="row">
    <div class="col-xs-12 col-sm-2">
        <a href="/warzone/narrative-campaigns"><img class="center-block" src="/sites/default/files/default_images/league.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-10">
        <h4>Narrative Campaigns</h4>
        <p>Put your battles into a strategic context with iToysoldiers Narrative Campaigns.  Whether you’re running a campaign between two commanders or an epic struggle amongst your club, you can tell the story of a major engagement. iToysoldiers does all the score keeping for you so you can concentrate on the narrative. </p>
        <p>Explore <a href="/warzone/narrative-campaigns">iToysoldiers Narrative Campaigns</a>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-2">
        <a href="/community/achievements"><img class="center-block" src="/sites/default/files/achievements/Mage%20Hunter%203.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-10">
        <h4>Trophy Room</h4>
        <p>Why should computer gamers be the only ones to gain achievements and recognition for their exploits? iToysoldiers awards achievements and renown for chronicling the exploits of your army. As you accomplish goals with your army you’ll be rewarded in kind.</p>
        <p>Explore: <a href="/community/achievements">Achievements</a> | <a href="/community/leaderboards">Leaderboards</a></p>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-2">
        <a href="/community/army-profiles"><img class="center-block" src="/sites/default/files/default_images/army.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-10">
        <h4>Army Profiles</h4>
        <p>Tie it all together and show off the splendour of your army with iToysoldiers Army Profiles. Create a rich history of your army along with pictures, accomplishments, blog posts, pictures, and more. Various display options show your army in the best way possible.</p>
        <p>Explore <a href="community/army-profiles">iToysoldiers Army Profiles</a></p>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-2">
        <a href="/blog"><img class="center-block" src="/sites/default/files/default_images/blog_0.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-10">
        <h4>Blogs</h4>
        <p>There’s lots of blog platforms in the world but only one is custom designed for miniature war gamers. Blog posts can be associated with a particular army or game system so visitors to the site will find it easy to discover your blog posts. Share the story of your army project with the world or peruse the thoughts of other commanders.</p>
        <p>Explore <a href="/blog">Blogs on iToysoldiers</a></p>
    </div>    
</div>
<div class="seperator"></div>
<div class="seperator"></div>',
      'format' => 'pure_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ef2977fb-e466-434c-bd3b-8d0a5b7ad68f';
    $display->content['new-ef2977fb-e466-434c-bd3b-8d0a5b7ad68f'] = $pane;
    $display->panels['contentmain'][3] = 'new-ef2977fb-e466-434c-bd3b-8d0a5b7ad68f';
    $pane = new stdClass();
    $pane->pid = 'new-324372b2-309a-46a2-afc8-5d49653d2406';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'mailchimp_signup-landing_page_signup_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Newsletter Signup',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'form-group ranking75 center-block text-center',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '324372b2-309a-46a2-afc8-5d49653d2406';
    $display->content['new-324372b2-309a-46a2-afc8-5d49653d2406'] = $pane;
    $display->panels['contentmain'][4] = 'new-324372b2-309a-46a2-afc8-5d49653d2406';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-42d92332-2f59-4859-be30-cd3093e09f3a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['itoysoldiers_for_narrative'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'privacy';
  $page->task = 'page';
  $page->admin_title = 'Privacy';
  $page->admin_description = '';
  $page->path = 'privacy';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Privacy',
    'name' => 'menu-legal',
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
  $handler->name = 'page_privacy_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'privacy';
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
          'value' => 'Privacy Policy | [site:name]',
        ),
        'description' => array(
          'value' => 'The iToysoldiers privacy policy',
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
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Privacy',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_burr_flipped';
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
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Privacy Policy';
  $display->uuid = 'cb75c140-b42f-4faa-8872-1b273a386f38';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e23b7d1f-ea5d-45ef-bc2c-11d32fb7749d';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Privacy Policy',
      'title' => '',
      'body' => '<p><strong>Last Updated: 2015-07-20 10:02 EST</strong></p>

<p><strong>Preface</strong>: I cribbed this privacy policy from a number of sites and it covers just about all eventualities. Let me be clear. I use Google Analytics, Google Adsense (for advertisement), Double Click for Publishers, and drupal. All of these things generate cookies and capture data. Most of it isn’t able to be tracked directly to an individual except the activity you perform on the site, like comments, battle results, participation in leagues and the like. The data I capture, as described below in further detail, is used to a) provide the functionality of the site, and b) to fulfill my addiction to statistics. Stats are cool. iToysoldiers is an act of love by a guy who loves miniature war gaming as much as you. I’m not doing this to make money by stealing your personal data. Good gaming!</p>

<p>The iToysoldiers Platform, including the website http://itoysoldiers.com, is owned and operated by Rob Tacey (“<strong>iToysoldiers</strong>” or “<strong>We</strong>”). We understand you value your privacy. At iToysoldiers, we want to make your experience online satisfying and safe. This statement governs information you provide to us or we learn from your use of the iToysoldiers Platform and tells you how we may collect, use and, in some instances, share this information.</p>

<p><u>The Information iToysoldiers Collects</u></p>

<p><strong>Information You Provide:</strong> You may provide to iToysoldiers what is generally called “personally identifiable” information (such as your name, age, zip code, email address, postal mailing address, and telephone number) if you use certain services or products from the iToysoldiers Platform or otherwise use the features and functionality of the iToysoldiers Platform.</p>

<p><strong>“Automatically Collected” Information:</strong> When you access the iToysoldiers Platform (including through your computer or your mobile device) or open one of our HTML emails, we may automatically record certain information from your system by using different types of tracking technology. This “automatically collected” information my include Internet Protocol address (“IP Address”), a unique user ID, version of software installed, system type, your gaming preferences, the content and pages that you access on the iToysoldiers Platform, and the dates and times that you visit the iToysoldiers Platform.</p>

<p><strong>“Cookies” Information:</strong> When you access the iToysoldiers Platform, we may send one or more cookies — small text files containing a string of alphanumeric characters — to your computer. iToysoldiers may use both session cookies and persistent cookies. A session cookie disappears after you close your browser. A persistent cookie remains after you close your browser and may be used by your browser on subsequent visits to the iToysoldiers Platform in order to improve your experience, as explained in B below. Persistent cookies can be removed. Please review your web browser "Help" file to learn the best way to modify your cookie settings.</p>

<p><strong>Your User ID:</strong> Your User ID is displayed throughout the iToysoldiers Platform and is therefore available to the public. Other people can see your battle results, pictures, feedback, ratings and associated comments, etc. Therefore, if you associate your actual name with your User ID, the people to whom you have revealed your name will be able to personally identify your activities on the iToysoldiers Platform.</p>

<p><u><strong>The Way iToysoldiers Uses Information.</strong></u> iToysoldiers uses the information that you provide or that we collect to operate, maintain, enhance, and provide all of the features and services found on the iToysoldiers Platform as well as to track user-generated content and Users to the extent necessary to comply as a service provider with the Digital Millennium Copyright Act and other applicable laws.</p>

<p>We may use your email address, without further consent, for administrative communications such as notifying you of major iToysoldiers Platform updates, for customer service purposes, and to send privacy or security related notices.</p>

<p>iToysoldiers uses all of the information that we collect to understand the usage trends and preferences of our Users, to improve the way the iToysoldiers Platform works and looks, and to create new features and functionality.</p>

<p>iToysoldiers may use "Automatically Collected" information and "Cookies" information to: (a) automatically update the iToysoldiers application on your system; (b) remember your information so that you will not have to re-enter it during your visit or the next time you access the iToysoldiers Platform; (c) provide customized third-party advertisements, content and information both on and off the iToysoldiers Platform; (d) monitor and report on the effectiveness of third-party marketing campaigns; (e) monitor and report aggregate usage metrics such as total number of visitors and pages accessed; and (d) track your entries, submissions, and status in any promotions or other activities.</p>

<p><u><strong>When iToysoldiers Discloses Information.</strong></u> iToysoldiers does not share your personally identifiable information with other organizations for their marketing or promotional uses without your prior express consent. Please be aware, however, that any personally identifiable information that you voluntarily choose to display on any publicly available portion of the iToysoldiers Platform — such as when you publish contact information to complete your profile information — becomes publicly available and may be collected and used by others without restriction.</p>

<p>iToysoldiers may disclose Automatically Collected and other aggregate and/or anonymous non-personally-identifiable information (such as IP addresses, anonymous User usage data, listening preferences, referring or exit pages and URLs, platform types, number of clicks) with interested third parties to assist those parties in understanding the usage and demographic patterns for certain content, services, advertisements, promotions, or other functionality on the iToysoldiers Platform.</p>

<p>We may disclose some limited User information to affiliated companies or other businesses or persons to: provide website hosting, maintenance, and security services; fulfill orders; conduct data analysis and create reports; offer certain functionality; and assist iToysoldiers in improving the iToysoldiers Platform and creating new services features. We contractually require that these parties process such information in compliance with this Privacy Policy, we authorize only a limited use of such information, and we require these parties to use reasonable confidentiality measures.</p>

<p>iToysoldiers may disclose User information if required to do so by law or in the good-faith belief that such action is necessary to comply with state and federal laws (such as U.S. copyright or trademark law) or respond to a court order, judicial or other government subpoena, or warrant in the manner required by the requesting entity.</p>

<p>iToysoldiers also reserves the right to disclose User information that we believe, in good faith, is appropriate or necessary to take precautions against liability; enforce our Terms of Use; protect iToysoldiers from fraudulent, abusive, or unlawful uses; to investigate and defend ourselves against third-party claims or allegations; to assist government enforcement agencies; to protect the security or integrity of the iToysoldiers Platform; or to protect the rights, property, or personal safety of iToysoldiers, our Users, or others.</p>

<p><u><strong>Your Choices and Access to your Personal Information</strong></u>. You may, of course, decline to share your personally-identifiable information with iToysoldiers, in which case iToysoldiers will not be able to provide to you some of the features and functionality found on the iToysoldiers Platform. You may view, update, correct, or delete your user information and preferences by contacting us at admin@iToysoldiers.com.</p>

<p>To protect your privacy and security, we take reasonable steps to verify your identity before granting you account access or making corrections to your information. YOU ARE RESPONSIBLE FOR MAINTAINING THE SECRECY OF YOUR UNIQUE PASSWORD AND ACCOUNT INFORMATION AT ALL TIMES.</p>

<p><u><strong>Advertisers.</strong></u> iToysoldiers may use third-party ad servers or ad networks to serve advertisements both on and off the iToysoldiers Platform. These third-party ad servers or ad networks may use technology to send, directly to your browser, the advertisements that appear within the iToysoldiers Platform and they automatically receive your IP Address and other automatically collected information when this happens. Such third-party ad servers may also use other technologies (such as cookies, javascript, or web beacons) to measure the effectiveness of their advertisements and to personalize their advertising content.</p>

<p>iToysoldiers does not provide your personally identifiable information to these third-party ad servers or ad networks without your consent. However, please note that if an advertiser asks iToysoldiers to show an advertisement to a certain audience or audience segment and you respond to that advertisement, the advertiser or ad-server may conclude that you fit the description of the audience that they were trying to reach.</p>

<p>You should consult the respective privacy policies of these third-party ad servers or ad networks for further information. This Privacy Policy does not apply to, and we cannot control the activities of, such other advertisers or websites. iToysoldiers reserves the right the add or remove third-party ad networks or ad servers in its discretion and iToysoldiers may not at all times list such updated ad network or ad server partners in this Privacy Policy.</p>

<p><u><strong>Our Commitment to Data Security.</strong></u> iToysoldiers uses commercially reasonable physical, managerial, and technical safeguards to preserve the integrity and security of your personal information. We cannot, however, ensure or warrant the security of any information you transmit to iToysoldiers, and you do so at your own risk. Once we receive your transmission of information, iToysoldiers makes commercially reasonable efforts to ensure the security of our systems. However, please note that this is not a guarantee that such information may not be accessed, disclosed, altered, or destroyed by breach of any of our physical, technical, or managerial safeguards. If iToysoldiers learns of a security systems breach, then we may attempt to notify you electronically so that you can take appropriate protective steps. iToysoldiers may post a notice on the iToysoldiers Platform if a security breach occurs. Depending on where you live, you may have a legal right to receive notice of a security breach in writing. To receive a free written notice of a security breach you should notify us at privacy@iToysoldiers.com.</p>

<p><u><strong>Our Commitment to Children\'s Privacy.</strong></u> IF YOU ARE UNDER 13 YEARS OF AGE, THEN PLEASE DO NOT USE OR ACCESS THE iToysoldiers PLATFORM AT ANY TIME OR IN ANY MANNER. Protecting the privacy of young children is especially important. For that reason, iToysoldiers does not knowingly collect or maintain personally identifiable information from persons under 13 years-of-age. If iToysoldiers learns that personally-identifiable information of persons less than 13-years-of-age has been collected on or through the iToysoldiers Platform, then iToysoldiers will take the appropriate steps to delete this information.</p>

<p>If you are the parent or legal guardian of a child under 13 who has become a iToysoldiers Platform member, then please contact iToysoldiers at admin@iToysoldiers.com to have that child\'s account terminated and information deleted.</p>

<p><strong><u>International Visitors</u></strong>. For Users visiting the iToysoldiers Platform from the European Union or other non-U.S. territories, please note that any data you enter into the iToysoldiers Platform will be transferred outside the European Union or such other non-U.S. territory for use by iToysoldiers and its affiliates for any of the purposes described herein. In addition, because iToysoldiers operates globally, we may make information we gather available to worldwide business units and affiliates. By providing any data on the iToysoldiers Platform, you hereby expressly consent to:</p>

<p>• the use of your personal data for the uses identified above in accordance with this policy; and</p>

<p>• the transfer of your personal data to the United States as indicated above.</p>

<p><u><strong>In the Event of Merger, Sale or Other Change in Conrol.</strong></u> In the event that iToysoldiers is acquired by or merged with a third-party entity or ever files for bankruptcy, we reserve the right, in any of these circumstances, to transfer or assign the information that we have collected from Users as part of that merger, acquisition, sale, or other change of control. Information iToysoldiers receives from you may be considered an asset subject to bankruptcy could jurisdiction and disposition pursuant to procedures thereunder.</p>

<p><u><strong>Third Parties</strong></u>. Except as otherwise expressly provided otherwise, this document addresses only the use and disclosure of information we collect from you or that you disclose to us. If you disclose your information to others besides iToysoldiers, whether they are users of the iToysoldiers Platform or on other sites or services, different rules may apply to their use or disclosure of the information you disclose to them. iToysoldiers does not control the privacy policies of third parties, and you are subject to the privacy policies of those third parties where applicable. We encourage you to ask questions before you disclose your personal information to others.</p>

<p><u><strong>Changes and Updates to this Privacy Policy. </strong></u>This Privacy Policy may be revised periodically without further notice to you and this will be reflected by a "last modified" date below. Please revisit this page to stay aware of any changes. In general, we only use your information in the manner described in the Privacy Policy in effect when we received that information, unless you agree otherwise. Your continued use of the iToysoldiers Platform constitutes your agreement to this Privacy Policy and any future revisions. For revisions to this Privacy Policy that may be materially less restrictive on our use or disclosure of personal information you have provided to us, we will make reasonable efforts to notify you and obtain your consent before implementing revisions with respect to such information.</p>

<p><u><strong>iToysoldiers Contact Information.</strong></u> Please contact iToysoldiers with any questions or comments about this Privacy Policy, to obtain access to your personal information, and our third-party disclosure practices or your consent choices at 24 Azar Ave, Tilbury, Ontario, n0p2l0, Canada, or by email at admin@iToysoldiers.com. We will respond to your inquiry within 30 days of its receipt.</p>
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
    $pane->uuid = 'e23b7d1f-ea5d-45ef-bc2c-11d32fb7749d';
    $display->content['new-e23b7d1f-ea5d-45ef-bc2c-11d32fb7749d'] = $pane;
    $display->panels['contentmain'][0] = 'new-e23b7d1f-ea5d-45ef-bc2c-11d32fb7749d';
    $pane = new stdClass();
    $pane->pid = 'new-3a94308c-9f0b-49b3-b37b-070e7c8fdc8a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-legal';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a94308c-9f0b-49b3-b37b-070e7c8fdc8a';
    $display->content['new-3a94308c-9f0b-49b3-b37b-070e7c8fdc8a'] = $pane;
    $display->panels['sidebar'][0] = 'new-3a94308c-9f0b-49b3-b37b-070e7c8fdc8a';
    $pane = new stdClass();
    $pane->pid = 'new-a4295001-61ef-40e8-8ede-f6412de68c35';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-itoysoldiers-elsewhere';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a4295001-61ef-40e8-8ede-f6412de68c35';
    $display->content['new-a4295001-61ef-40e8-8ede-f6412de68c35'] = $pane;
    $display->panels['sidebar'][1] = 'new-a4295001-61ef-40e8-8ede-f6412de68c35';
    $pane = new stdClass();
    $pane->pid = 'new-20ee5021-f32c-4d1a-bedb-7dcbdc7193e9';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-contact-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '20ee5021-f32c-4d1a-bedb-7dcbdc7193e9';
    $display->content['new-20ee5021-f32c-4d1a-bedb-7dcbdc7193e9'] = $pane;
    $display->panels['sidebar'][2] = 'new-20ee5021-f32c-4d1a-bedb-7dcbdc7193e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['privacy'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'terms';
  $page->task = 'page';
  $page->admin_title = 'Terms';
  $page->admin_description = 'The terms of service page';
  $page->path = 'terms';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Terms',
    'name' => 'menu-legal',
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
  $handler->name = 'page_terms_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'terms';
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
          'value' => 'Terms of Service | [site:name]',
        ),
        'description' => array(
          'value' => 'The iToysoldiers Terms of Service',
        ),
        'abstract' => array(
          'value' => 'Terms of service page',
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
  $display->layout = 'bootopoly_burr_flipped';
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
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Terms of Service';
  $display->uuid = '21e2d9cb-831a-429d-8be6-9940506b1310';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-28b3c918-514b-48ba-b196-517a75d6a3a2';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Terms of Service',
      'title' => '',
      'body' => '<p>Last Updated: 2015-07-20</p>

<p>Welcome to the iToysoldiers, Inc. ("<strong>iToysoldiers</strong>") website —&nbsp;<a href="http://8tracks.com/" target="_blank">http://iToysoldiers.com</a>&nbsp;— and any and all products, services, applications, platforms, websites, or other affiliated ventures offered, controlled, owned or operated by iToysoldiers (the "<strong>iToysoldiers Platform</strong>"). The following Terms of Use for the iToysoldiers Platform creates a legal contract between you, either an individual customer, member or user, or a single entity, and iToysoldiers regarding your use of the iToysoldiers Platform. Throughout these Terms of Use, "<strong>iToysoldiers</strong>" and "<strong>We</strong>" refers to iToysoldiers, Inc. and its affiliates. "<strong>You</strong>" or "<strong>Users</strong>" refers to you, our users — everyone who uses, subscribes to, publishes through, joins, or visits iToysoldiers.</p>

<p>&nbsp;</p>

<p>BEFORE USING THE iToysoldiers PLATFORM, PLEASE READ CAREFULLY THE FOLLOWING CONDITIONS AND TERMS OF USE. BY REGISTERING FOR AND/OR ACCESSING, BROWSING, AND USING THE iToysoldiers PLATFORM, YOU ACKNOWLEDGE THAT YOU HAVE READ, UNDERSTOOD, AND AGREE TO BE BOUND BY THE FOLLOWING TERMS, INCLUDING ANY ADDITIONAL GUIDELINES, AND ANY FUTURE MODIFICATIONS (COLLECTIVELY, THE "<strong>TERMS</strong>"), AND THAT YOUR USE OF THE iToysoldiers PLATFORM WILL COMPLY WITH ANY AND ALL APPLICABLE LAWS AND REGULATIONS AT ALL TIMES DURING YOUR USE OF THE iToysoldiers PLATFORM. IF AT ANY TIME YOU DO NOT AGREE TO THESE TERMS, PLEASE IMMEDIATELY TERMINATE YOUR USE OF THE iToysoldiers PLATFORM.</p>

<p>&nbsp;</p>

<p><strong>NOTE TO CHILDREN UNDER 13 YEARS OF AGE: THE iToysoldiers PLATFORM IS NOT FOR PERSONS UNDER THE AGE OF 13.</strong>&nbsp;If you are under 13 years of age, then please do not use the iToysoldiers Platform.</p>

<p>&nbsp;</p>

<p>You may receive a copy of these Terms of Use by e-mailing us at&nbsp;<a href="mailto:support@itoysoldiers.uservoice.com">support@itoysoldiers.uservoice.com</a>&nbsp;and identifying the subject line of the e-mail as "Terms of Use."</p>

<p>&nbsp;</p>

<p><strong>1. Eligibility</strong></p>

<p>You represent that you are 18 years of age or older and are fully able and competent to enter into the terms, conditions, obligations, affirmations, representations and warranties set forth in these Terms and to abide by and comply with these Terms. In any case, you affirm that you are over the age of 13, as the iToysoldiers Platform is not intended for children under the age of 13. If you are using or opening an account on the iToysoldiers Platform on behalf of a company, entity, or organization (collectively "<strong>Subscribing Organization</strong>"), then you represent and warrant that you: (1) are an authorized representative of that Subscribing Organization with the authority to bind such organization to these Terms and (2) agree to be bound by these Terms on behalf of such Subscribing Organization.</p>

<p>&nbsp;</p>

<p><strong>2. Privacy policy</strong></p>

<p>iToysoldiers understands that privacy is important. By using the iToysoldiers Platform, you expressly consent to the information handling practices described in the iToysoldiers Privacy Policy (<a href="http://8tracks.com/privacy" target="_blank">http://iToysoldiers.com/privacy</a>), which is incorporated into and is subject to the Terms. Your use of the iToysoldiers Platform and any personal information you provide through the iToysoldiers Platform are subject at all times to the Privacy Policy and the Terms.</p>

<p>&nbsp;</p>

<p><strong>3. Individual Features and Services</strong></p>

<p>When using the iToysoldiers Platform, you will be subject to any additional posted guidelines or rules applicable to specific services, and features which may be posted from time to time (the "<strong>Guidelines</strong>"). All such Guidelines are hereby incorporated by reference into the Terms.</p>

<p>&nbsp;</p>

<p><strong>4. Modification of the Terms</strong></p>

<p>iToysoldiers reserves the right, at its discretion, to change, modify, add, or remove portions of these Terms at any time and from time to time with or without specific notice to you other than through posting such modified Terms on the iToysoldiers Platform. The Terms will be identified as of the most recent date of revision. Notwithstanding the preceding sentences, no modifications to these Terms will apply to any dispute between you and iToysoldiers that arose prior to the date of such modification. For the avoidance of doubt, the foregoing limitation will not apply to changes made to these Terms necessary to ensure continued compliance with any statutory licenses contained in the United States Copyright Act. Please check these Terms and any Guidelines periodically for changes. Your continued use of the iToysoldiers Platform after the posting of changes constitutes your binding acceptance of such changes. If you are dissatisfied with the iToysoldiers Platform, the content thereon, or the Terms or the Privacy Policy, then you agree that your sole and exclusive remedy is to discontinue any use of the iToysoldiers Platform.</p>

<p><strong>5. iToysoldiers Platform Access</strong></p>

<p>iToysoldiers grants you permission to use the iToysoldiers Platform as set forth in these Terms, provided that: (1) you use the iToysoldiers Platform solely for your personal, private, noncommercial use; (2) you do not copy, publicly display or distribute any part of the iToysoldiers Platform in any medium without iToysoldiers\' prior written authorization; (3) you do not alter or modify any part of the iToysoldiers Platform other than as may be reasonably necessary to use the iToysoldiers Platform for its intended purposes; (4) you do not engage in any of the prohibited uses described below; and (5) you will otherwise fully comply with these Terms. The iToysoldiers Platform is controlled and offered by iToysoldiers from its facilities in the United States of America and Canada. iToysoldiers make no representations that the iToysoldiers Platform is appropriate or available for use in other locations. Those who access or use the iToysoldiers Platform from other jurisdictions do so at their own risk and are responsible for compliance with local law.</p>

<p><strong>6. Ownership; Proprietary Rights</strong></p>

<p>The iToysoldiers Platform is owned and operated by Robert Tacey. The content, visual interfaces, interactive features, information, graphics, design, compilation, computer code, products, software, services, and all other elements of the iToysoldiers Platform that are provided by iToysoldiers ("<strong>iToysoldiers Materials</strong>") are protected by United States and Canada copyright, trade dress, patent, and trademark laws, international conventions, and all other relevant intellectual property and proprietary rights, and applicable laws..<strong>iToysoldiers Materials do not include User Submissions (defined below) or any other content owned by and submitted by Users or the relevant game company to the iToysoldiers Platform.</strong>&nbsp;All iToysoldiers Materials contained on the iToysoldiers Platform are the property of iToysoldiers or its subsidiaries or affiliated companies and/or third-party licensors. All trademarks, service marks, and trade names contained in the iToysoldiers Materials or on the iToysoldiers Platform are proprietary to iToysoldiers or its affiliates and/or third-party game companies. Except as expressly authorized by iToysoldiers, you agree not to sell, license, distribute, copy, modify, publicly perform or display, transmit, publish, edit, adapt, create derivative works from, or otherwise make unauthorized use of the iToysoldiers Materials. iToysoldiers reserves all rights not expressly granted in these Terms. You shall not acquire any right, title or interest to the iToysoldiers Materials, except for the limited rights set forth in these Terms.</p>

<p>&nbsp;</p>

<p><strong>7. User Submissions.</strong></p>

<p>7.1&nbsp;General. The iToysoldiers Platform may now or in the future permit the submission and posting or linking of media, commentary, user names, mi names or any other content (including Audio or Video Content) submitted by you and other users ("<strong>User Submissions</strong>"), and the hosting, sharing, and/or publishing of such User Submissions. User Submissions are displayed for entertainment and informational purposes only and are not controlled by iToysoldiers. iToysoldiers makes no representations that it will publish or use your User Submissions in any way and may or may not use your User Submissions in its sole discretion. iToysoldiers may remove any User Submissions from the iToysoldiers Platform at any time in its sole discretion, with or without notice, including, but not limited to, any User Submissions that request, facilitate or support the unauthorized sharing of copyrighted material. You understand that whether or not User Submissions are published, iToysoldiers does not guarantee any confidentiality with respect to any User Submissions.&nbsp;In the event of a dispute between two or more Users with respect to any User Submisssions, such as, by way of example and not limitation, the identification of any User name, iToysoldiers reserves the right, in its sole discretion, to deny one or more users of the use of any name, including trademarked names, without liability to any Users and grant use rights to a single User. &nbsp;If two or more Users claim the rights to any name, then iToysoldiers may, in its sole discretion, suspend the use of such name until the parties agree between or among themselves as to the parties’ respective rights in and to such names or until such time as a court of competent jurisdiction, in a final, non-appealable decision, resolves the parties’ respective rights in and to such name.</p>

<p>7.2&nbsp;Grant of Rights. You shall retain all of your ownership rights in your User Submissions. However, by submitting User Submissions to iToysoldiers, you hereby grant iToysoldiers and its affiliates a non-exclusive, fully paid-up, royalty-free, perpetual, irrevocable, sublicenseable, and transferable license, throughout the universe, to use, reproduce, distribute, modify, adapt, prepare derivative works of, publicly display, publicly perform, and otherwise exploit your User Submissions in connection with the iToysoldiers Platform and iToysoldiers\' (and its successor\'s) business, including, without limitation, for promoting and redistributing part or all of the iToysoldiers Platform (and derivative works thereof) in any media formats and through any media channels now known or hereafter discovered. You hereby grant iToysoldiers and its affiliates and sublicensees the right to use the name that you submit in connection with such User Submission if they choose to do so. You hereby irrevocably waive (and cause to be waived) any claims and assertions of moral rights or attribution with respect to your User Submissions. You also hereby grant to each user of the iToysoldiers Platform a non-exclusive license to access your User Submissions through the iToysoldiers Platform, and to use, reproduce, distribute, prepare derivative works of, display, and perform such User Submissions as permitted by the functionality of the iToysoldiers Platform and these Terms.</p>

<p>7.3&nbsp;User Submissions Representations and Warranties. You shall be solely responsible for your own User Submissions and the consequences of posting or publishing them. In connection with User Submissions, you affirm, represent, and/or warrant that: (a) you own, or have the necessary licenses, rights, consents, and permissions to use and authorize iToysoldiers to use all patent, trademark, copyright, or other proprietary rights in and to any and all User Submissions to enable inclusion and use of User Submissions in the manner contemplated by iToysoldiers and these Terms, and to grant the rights and license set forth above; and (b) your User Submissions, iToysoldiers\' use of such User Submissions pursuant to these Terms , and iToysoldiers\' exercise of the license rights set forth above, do not and will not: (i) infringe, violate, or misappropriate any third-party right, including any copyright, trademark, patent, trade secret, moral right, privacy right, right of publicity, or any other intellectual property or proprietary right; (ii) slander, defame, libel, or invade the right of privacy, publicity or other property rights of any other person; or (iii) violate any applicable law or regulation.</p>

<p>7.4&nbsp;User Submissions Prohibited Uses. In connection with your User Submissions, you further agree that you will not: (a) publish falsehoods or misrepresentations that could damage iToysoldiers or any third party; (b) intentionally misidentify the identifying information of User Submissions; (c) submit material that is unlawful, defamatory, libelous, slanderous, threatening, pornographic, obscene, vulgar, harassing, harmful, hateful, abusive, racially or ethnically offensive or encourages conduct that would be considered a criminal offense, give rise to civil liability, violate any law or any right of privacy or publicity, or is otherwise inappropriate; (d) post advertisements or solicitations of business; (e) impersonate another person or entity or falsely state or otherwise misrepresent your affiliation with a person or entity; or (f) solicit or engage in communications with other users for the unauthorized distribution and sharing of mixes or the individual sound recordings in any mix; or (g) post User Submissions that would be harmful to minors in any manner.</p>

<p>&nbsp;</p>

<p><strong>8. Content Disclaimer</strong></p>

<p>You understand that when using the iToysoldiers Platform, you will be exposed to User Submissions and other content (such User Submissions and other content, collectively, "<strong>Content</strong>") from a variety of sources, and that iToysoldiers is not responsible for the accuracy, integrity, quality, legality, usefulness, safety, or intellectual property rights of or relating to such Content. You further understand and acknowledge that you may be exposed to Content that is inaccurate, offensive, indecent, or objectionable, and you agree to waive, and hereby do waive, any legal or equitable rights or remedies you have or may have against iToysoldiers with respect thereto. iToysoldiers does not endorse any User Submission or other Content or any opinion, recommendation, or advice expressed therein. Under no circumstances will iToysoldiers be liable in any way for or in connection with any User Submissions or other Content, including, but not limited to, for any inaccuracies, errors or omissions in any Content, any intellectual property infringement with regard to any Content, or for any loss or damage of any kind incurred as a result of the use of any Content posted, electronically mailed or otherwise displayed or transmitted through the iToysoldiers Platform.</p>

<p>&nbsp;</p>

<p><strong>9. Monitoring Users and Content</strong></p>

<p>You understand that all Content is the sole responsibility of the person from whom such Content originated. This means that you, and not iToysoldiers, are entirely responsible for all User Submissions that you upload, post, e-mail, transmit or otherwise make available through the iToysoldiers Platform. iToysoldiers does not control the Content posted by Users or otherwise made available by other persons and does not have any obligation to monitor such Content for any purpose. If at any time, iToysoldiers chooses, in its sole discretion, to monitor Content, iToysoldiers nonetheless assumes no responsibility for the Content, no obligation to modify or remove any inappropriate Content, and no responsibility for the conduct of the User submitting any such Content. You acknowledge that iToysoldiers may or may not pre-screen User Submissions, but that iToysoldiers and its designees shall have the right (but not the obligation) in their sole discretion to pre-screen, refuse, or remove any User Submission that is available via the iToysoldiers Platform. Without limiting the foregoing, iToysoldiers and its designees may, at any time and without prior notice, remove any User Submission that in the sole judgment of iToysoldiers violates these Terms or is otherwise objectionable. You agree that you must evaluate, and bear all risks associated with the use of any User Submissions or other Content, including any reliance on the accuracy, completeness, usefulness or legality of such User Submission or other Content.</p>

<p><strong>10. Removal of Content</strong></p>

<p>iToysoldiers and its designees shall have the right (but not the obligation) in their sole discretion to refuse or remove any Content that is available on the iToysoldiers Platform, in whole or in part, at any time for any reason or no reason, with or without notice and with no liability of any kind.</p>

<p><strong>11. Prohibited Uses</strong></p>

<p>11.1 As a condition of your use of the iToysoldiers Platform, you will not use the iToysoldiers Platform for any purpose that is unlawful or prohibited by these Terms. Access to the iToysoldiers Materials and the iToysoldiers Platform from territories where their access or use thereof is illegal is strictly prohibited. iToysoldiers Users are responsible for complying with all local rules, laws, and regulations including, without limitation, rules about intellectual property rights, the Internet, technology, data, electronic mail, or privacy.</p>

<p>11.2 Any use by you of any of the iToysoldiers Materials and iToysoldiers Platform other than for private, non-commercial use is strictly prohibited. You agree not to reproduce, duplicate, copy, sell, trade, resell, distribute or exploit any portion of the iToysoldiers Platform, use of the iToysoldiers Platform, access to the iToysoldiers Platform, or Content obtained through the iToysoldiers Platform, for any purpose other than for your personal, private, non-commercial purposes. You further agree not to engage in the unauthorized sharing of sound recordings with other users of the iToysoldiers Platform, including, but not limited to, the sharing of some or all of the individual sound recordings embodied in any mixes available on the iToysoldiers Platform, or the individual sound recordings comprising a mix.</p>

<p>11.3 You agree not to defame, harass, abuse, threaten, stalk or defraud Users of the iToysoldiers Platform, or collect, or attempt to collect, personal information about Users or third parties without their consent.</p>

<p>11.4 You agree not to intentionally interfere with or damage, impair or disable the operation of the iToysoldiers Platform or any User\'s enjoyment of it, by any means, including uploading or otherwise disseminating viruses, worms, spyware, adware or other malicious code.</p>

<p>11.5 You agree not to remove, circumvent, disable, damage or otherwise interfere with any security-related features of the iToysoldiers Platform, features that prevent or restrict the use or copying of any content accessible through the iToysoldiers Platform, or features that enforce limitations on the use of the iToysoldiers Platform. The iToysoldiers Platform contains programming limitations that are enforced through technical measures adopted by iToysoldiers, and any efforts to disable or defeat those efforts for the purpose of violating any provisions of the statutory licenses set forth in Sections 112 and 114 of the U.S. Copyright Act, 17 U.S.C. §§ 112 and 114, is strictly prohibited.</p>

<p>11.6 You agree not to attempt to gain unauthorized access to the iToysoldiers Platform, or any part of it, other accounts, computer systems or networks connected to the iToysoldiers Platform, or any part of it, through hacking, password mining or any other means or interfere or attempt to interfere with the proper working of the iToysoldiers Platform or any activities conducted on the iToysoldiers Platform.</p>

<p>11.7 You agree not to obtain or attempt to obtain any materials or information through any means not intentionally made available through the iToysoldiers Platform. You agree neither to modify the iToysoldiers Platform in any manner or form, nor to use modified versions of the iToysoldiers Platform, including, without limitation, for the purpose of obtaining unauthorized access to the iToysoldiers Platform.</p>

<p>11.8 You agree that you will not use any robot, spider, scraper, or other automated means to access the iToysoldiers Platform for any purpose without our express written permission or bypass our robot exclusion headers or other measures we may use to prevent or restrict access to the iToysoldiers Platform.</p>

<p>11.9 You agree not to utilize framing techniques to enclose any trademark, logo, or other iToysoldiers Materials without our express written consent. You agree not to use any meta tags or any other "hidden text" utilizing iToysoldiers\' name or trademarks without our express written consent.</p>

<p>11.10 You will promptly remove any links that iToysoldiers finds objectionable in its sole discretion. You agree not to use any iToysoldiers logos, graphics, or trademarks as part of the link without our express written consent.</p>

<p>11.11 You agree not to make unsolicited offers, advertisements, proposals, or send junk mail or spam to other Users of the iToysoldiers Platform. This includes, but is not limited to, unsolicited advertising, promotional materials or other solicitation material, bulk mailing of commercial advertising, chain mail, informational announcements, charity requests, and petitions for signatures.</p>

<p>11.12 You agree not to reverse engineer, decompile, disassemble or otherwise attempt to discover the source code of the iToysoldiers Platform or any part thereof, except and only to the extent that such activity is expressly permitted by applicable law notwithstanding this limitation.</p>

<p>11.13 You agree not to modify, adapt, translate or create derivative works based upon the iToysoldiers Platform or any part thereof, except and only to the extent that such activity is expressly permitted by applicable law notwithstanding this limitation.</p>

<p><strong>12. Account Information</strong></p>

<p>In order to access some features of the iToysoldiers Platform, you will have to create an account. You agree that the information you provide to iToysoldiers upon registration and, at all other times, will be true, accurate, current, and complete. You also agree that you will ensure that this information is kept accurate and up-to-date at all times. You acknowledge, consent and agree that iToysoldiers may access, preserve and disclose your account information and User Submission if required to do so by law or in a good faith belief that such access preservation or disclosure is reasonably necessary to: (1) comply with legal process; (2) enforce the Terms; (3) respond to a claim that any User Submission violates the rights of third parties; (4) respond to your requests for customer service; or (5) protect the rights, property or personal safety of iToysoldiers, its users and the public.</p>

<p><strong>13. Password</strong></p>

<p>When you register you will be asked to provide a password. As you will be responsible for all activities that occur under your password, you should keep your password confidential. You are solely responsible for maintaining the confidentiality of your account and password and for restricting access to your computer, and you agree to accept responsibility for all activities that occur under your account or password. If you have reason to believe that your account is no longer secure (for example, in the event of a loss, theft or unauthorized disclosure or use of your account ID or password), you will immediately notify iToysoldiers. You may be liable for the losses incurred by iToysoldiers or others due to any unauthorized use of your account.</p>

<p><strong>14. Dealings with Advertisers</strong></p>

<p>Your correspondence or business dealings with, or participation in promotions of, advertisers found on or through the iToysoldiers Platform are solely between you and such advertiser. YOU AGREE THAT iToysoldiers WILL NOT BE RESPONSIBLE OR LIABLE FOR ANY LOSS OR DAMAGE OF ANY SORT INCURRED AS THE RESULT OF ANY SUCH DEALINGS OR AS THE RESULT OF THE PRESENCE OF SUCH ADVERTISERS ON THE iToysoldiers Platform.</p>

<p><strong>15. Links and Third Party Content</strong></p>

<p>iToysoldiers or third parties may provide links on the iToysoldiers Platform to other sites or content ("<strong>Reference Sites</strong>"). iToysoldiers has no control over such Reference Sites or content, and therefore makes no claim or representation regarding, and expressly disclaims responsibility for, the accuracy, quality, legality, nature, availability or reliability of Reference Sites or content linked to by the iToysoldiers Platform. iToysoldiers provides links to you only as a convenience, and the inclusion of any link on the iToysoldiers Platform does not imply our affiliation, endorsement, or adoption of the linked site or any information therein. ACCESS AND USE OF REFERENCE SITES, INCLUDING THE INFORMATION, MATERIAL, PRODUCTS, AND SERVICES ON REFERENCE SITES OR AVAILABLE THROUGH REFERENCE SITES, IS SOLELY AT YOUR OWN RISK. When you leave the iToysoldiers Platform, our Terms and Privacy policy no longer govern. You should review applicable terms and policies, including the privacy and data gathering practices, of any Reference Sites.</p>

<p><strong>16. Availability of Service</strong></p>

<p>iToysoldiers may make changes to or discontinue any of the media, web communities, products, or services available within the iToysoldiers Platform at any time, and without notice. You agree that any changes to or discontinuation of the iToysoldiers Platform by iToysoldiers will be without liability to you, even if such changes or discontinuation results in your loss of access to or use of User Submissions, iToysoldiers Materials or any other Content. The media, products, or services on the iToysoldiers Platform may be out of date, and iToysoldiers makes no commitment to update these materials on the iToysoldiers Platform.</p>

<p><strong>17. User Disagreements</strong></p>

<p>You are solely responsible for your involvement with other Users.</p>

<p><strong>18. Terms of Use Violations; Termination</strong></p>

<p>19.1&nbsp;iToysoldiers. You agree that iToysoldiers, in its sole discretion and for any or no reason, may terminate any User or customer account (or any part thereof) you may have on the iToysoldiers Platform or your use of the iToysoldiers Platform, and remove and discard all or any part of your account or any User Submission, at any time, with or without notice. You agree that any termination of your access to the iToysoldiers Platform or any account you may have or portion thereof may be effected without prior notice, and you agree that iToysoldiers shall not be liable to you or any third-party for any such termination. iToysoldiers does not permit infringing activities, including any violations of the conditions set forth in Sections 112 and 114 of the United States Copyright Act, on the iToysoldiers Platform, and reserves the right to terminate access to the iToysoldiers Platform, and remove all content submitted, by any persons who are found to be infringers. Any suspected fraudulent, abusive, or illegal activity may be referred to appropriate law enforcement authorities. These remedies are in addition to any other remedies iToysoldiers may have at law or in equity.</p>

<p>19.2&nbsp;User. If you are dissatisfied with the iToysoldiers Platform, please let us know by electronic mailing us at&nbsp;<a href="mailto:support@itoysoldiers.uservoice.com">support@itoysoldiers.uservoice.com</a>. Your input is valuable to us. Your only other remedy with respect to any dissatisfaction with (a) the iToysoldiers Platform, (b) any term of these Terms, (c) any policy or practice of iToysoldiers in operating the iToysoldiers Platform, or (d) any content or information transmitted through the iToysoldiers Platform, is to terminate these Terms and your account. You may terminate these Terms at any time by closing your account, discontinuing your use of any and all parts of the iToysoldiers Platform, and providing iToysoldiers notice of termination by e-mailing us at support@itoysoldiers.uservoice.com.</p>

<p><strong>19. Indemnification; Hold Harmless</strong></p>

<p>You agree to indemnify and hold harmless iToysoldiers, and its parent, subsidiaries, affiliates or any related companies (including those which share substantially common ownership), its suppliers, licensors and partners, and the officers, directors, employees, agents and representatives of any of them from any and all claims, losses, obligations, damages, liabilities, costs or debt and expenses (including attorney\'s fees) arising out of: (1) your use or misuse of the iToysoldiers Platform; (2) your User Submissions, including iToysoldiers\' use, display or other exercise of its license rights granted herein with respect to your User Submissions; (3) your violation of these Terms; (4) your violation of the rights of any other person or entity, including claims that any User Submission infringes or violates any third party intellectual property rights; and (5) your breach of the foregoing representations, warranties, and covenants. iToysoldiers reserves the right, at your expense, to assume the exclusive defense and control of any matter for which you are required to indemnify us and you agree to cooperate with our defense of these claims. You agree not to settle any matter without the prior written consent of iToysoldiers. iToysoldiers will use reasonable efforts to notify you of any such claim, action or proceeding upon becoming aware of it.</p>

<p><strong>20. Disclaimers; No Warranties</strong></p>

<p>20.1&nbsp;No warranties. TO THE FULLEST EXTENT PERMISSIBLE PURSUANT TO APPLICABLE LAW, iToysoldiers, AND ITS AFFILIATES, PARTNERS, AND SUPPLIERS DISCLAIM ALL WARRANTIES, STATUTORY, EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE, AND NON-INFRINGEMENT OF PROPRIETARY RIGHTS. NO ADVICE OR INFORMATION, WHETHER ORAL OR WRITTEN, OBTAINED BY YOU FROM iToysoldiers OR THROUGH THE iToysoldiers Platform WILL CREATE ANY WARRANTY NOT EXPRESSLY STATED HEREIN. YOU EXPRESSLY ACKNOWLEDGE THAT AS USED IN THIS SECTION 21, THE TERM iToysoldiers INCLUDES iToysoldiers\' OFFICERS, DIRECTORS, EMPLOYEES, SHAREHOLDERS, AGENTS, SUPPLIERS, LICENSORS, AFFILIATES AND SUBCONTRACTORS.</p>

<p>20.2 "As is" and "As available" and "With All Faults".&nbsp;YOU EXPRESSLY AGREE THAT THE USE OF THE iToysoldiers Platform IS AT YOUR SOLE RISK. THE iToysoldiers Platform, USER SUBMISSIONS AND ANY THIRD-PARTY MEDIA, CONTENT, SOFTWARE, SERVICES OR APPLICATIONS MADE AVAILABLE IN CONJUNCTION WITH OR THROUGH THE iToysoldiers Platform ARE PROVIDED ON AN "AS IS" AND "AS AVAILABLE", "WITH ALL FAULTS" BASIS AND WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.</p>

<p>20.3&nbsp;Platform Operation and Content. iToysoldiers, ITS SUPPLIERS, LICENSORS, AFFILIATES, AND PARTNERS DO NOT WARRANT THAT THE iToysoldiers MATERIALS, USER SUBMISSIONS, iToysoldiers Platform, OR ANY OTHER INFORMATION OFFERED ON OR THROUGH THE iToysoldiers Platform OR ANY REFERENCE SITES WILL BE UNINTERRUPTED, OR FREE OF ERRORS, VIRUSES OR OTHER HARMFUL COMPONENTS, AND DO NOT WARRANT THAT ANY OF THE FOREGOING WILL BE CORRECTED.</p>

<p>20.4&nbsp;Accuracy. iToysoldiers, ITS SUPPLIERS, LICENSORS, AFFILIATES, AND PARTNERS DO NOT WARRANT OR MAKE ANY REPRESENTATIONS REGARDING THE USE OR THE RESULTS OF THE USE OF THE iToysoldiers Platform OR ANY REFERENCE SITES IN TERMS OF CORRECTNESS, ACCURACY, RELIABILITY, OR OTHERWISE.</p>

<p>20.5&nbsp;Harm to Your Computer. YOU UNDERSTAND AND AGREE THAT YOU USE, ACCESS, DOWNLOAD, OR OTHERWISE OBTAIN INFORMATION, MATERIALS, OR DATA THROUGH THE iToysoldiers Platform (INCLUDING RSS FEEDS) OR ANY REFERENCE SITES AT YOUR OWN DISCRETION AND RISK AND THAT YOU WILL BE SOLELY RESPONSIBLE FOR ANY DAMAGE TO YOUR PROPERTY (INCLUDING YOUR COMPUTER SYSTEM) OR LOSS OF DATA THAT RESULTS FROM THE DOWNLOAD OR USE OF SUCH MATERIAL OR DATA.</p>

<p><strong>21. Limitation of Liability and Damages</strong></p>

<p>21.1&nbsp;Limitation of Liability. UNDER NO CIRCUMSTANCES, AND UNDER NO LEGAL THEORY, INCLUDING, BUT NOT LIMITED TO, NEGLIGENCE, SHALL iToysoldiers OR ITS AFFILIATES, CONTRACTORS, DIRECTORS, EMPLOYEES, AGENTS, OR THIRD PARTY PARTNERS OR SUPPLIERS, BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL, CONSEQUENTIAL, OR EXEMPLARY DAMAGES (INCLUDING WITHOUT LIMITATION, LOSS OF PROFITS, DATA OR USE OR COST OF COVER) ARISING OUT OF OR RELATING TO THESE TERMS OR THAT RESULT FROM YOUR USE OR THE INABILITY TO USE THE iToysoldiers MATERIALS AND USER SUBMISSIONS ON THE iToysoldiers Platform OR ANY REFERENCE SITES, THE iToysoldiers Platform ITSELF, OR ANY OTHER INTERACTIONS WITH iToysoldiers, EVEN IF iToysoldiers OR A iToysoldiers AUTHORIZED REPRESENTATIVE HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES. APPLICABLE LAW MAY NOT ALLOW THE LIMITATION OR EXCLUSION OF LIABILITY OR INCIDENTAL OR CONSEQUENTIAL DAMAGES, SO THE ABOVE LIMITATION OR EXCLUSION MAY NOT APPLY TO YOU. IN SUCH CASES, iToysoldiers\' LIABILITY WILL BE LIMITED TO THE EXTENT PERMITTED BY LAW.</p>

<p>21.2&nbsp;Limitation of Damages. IN NO EVENT SHALL iToysoldiers OR ITS AFFILIATES, CONTRACTORS, EMPLOYEES, AGENTS, OR THIRD PARTY PARTNERS, LICENSORS OR SUPPLIERS\' TOTAL LIABILITY TO YOU FOR ALL DAMAGES, LOSSES, AND CAUSES OF ACTION ARISING OUT OF OR RELATING TO THESE TERMS OR YOUR USE OF THE iToysoldiers Platform (WHETHER IN CONTRACT, TORT (INCLUDING NEGLIGENCE), WARRANTY, OR OTHERWISE) EXCEED THE GREATER OF THE AMOUNT OF (A) ONE HUNDRED DOLLARS OR (B) THE AMOUNT OF FEES YOU HAVE PAID iToysoldiers IN THE 12 MONTHS PRIOR TO THE ACTION GIVING RISE TO THE LIABILITY.</p>

<p>21.3&nbsp;Reference Sites. THESE LIMITATIONS SHALL ALSO APPLY WITH RESPECT TO DAMAGES INCURRED BY REASON OF ANY PRODUCTS OR SERVICES SOLD OR PROVIDED ON ANY REFERENCE SITES OR OTHERWISE BY THIRD PARTIES OTHER THAN iToysoldiers AND RECEIVED BY YOU THROUGH OR ADVERTISED ON THE iToysoldiers Platform OR RECEIVED BY YOU THROUGH ANY REFERENCE SITES.</p>

<p><strong>22. Limitations by Applicable Law; Basis of the Bargain</strong></p>

<p>22.1&nbsp;Limitations by Applicable Law. CERTAIN JURISDICTIONS DO NOT ALLOW LIMITATIONS ON IMPLIED WARRANTIES OR THE EXCLUSION OR LIMITATION OF CERTAIN DAMAGES. IF YOU RESIDE IN SUCH A JURISDICTION, SOME OR ALL OF THE ABOVE DISCLAIMERS, EXCLUSIONS, OR LIMITATIONS MAY NOT APPLY TO YOU, AND YOU MAY HAVE ADDITIONAL RIGHTS. THE LIMITATIONS OR EXCLUSIONS OF WARRANTIES, REMEDIES OR LIABILITY CONTAINED IN THESE TERMS APPLY TO YOU TO THE FULLEST EXTENT SUCH LIMITATIONS OR EXCLUSIONS ARE PERMITTED UNDER THE LAWS OF THE JURISDICTION IN WHICH YOU ARE LOCATED.</p>

<p>22.2&nbsp;Basis of the Bargain. YOU ACKNOWLEDGE AND AGREE THAT iToysoldiers HAS OFFERED ITS PRODUCTS AND SERVICES, SET ITS PRICES AND ENTERED INTO THESE TERMS IN RELIANCE UPON THE WARRANTY DISCLAIMERS AND THE LIMITATIONS OF LIABILITY SET FORTH HEREIN, THAT THE WARRANTY DISCLAIMERS AND THE LIMITATIONS OF LIABILITY SET FORTH HEREIN REFLECT A REASONABLE AND FAIR ALLOCATION OF RISK BETWEEN YOU AND iToysoldiers, AND THAT THE WARRANTY DISCLAIMERS AND THE LIMITATIONS OF LIABILITY SET FORTH HEREIN FORM AN ESSENTIAL BASIS OF THE BARGAIN BETWEEN YOU AND iToysoldiers. YOU ACKNOWLEDGE AND AGREE THAT iToysoldiers WOULD NOT BE ABLE TO PROVIDE THE iToysoldiers Platform TO YOU ON AN ECONOMICALLY REASONABLE BASIS WITHOUT THESE LIMITATIONS.</p>

<p><strong>23. Digital Millennium Copyright Act</strong></p>

<p>If any intellectual property hosted on the iToysoldiers Platform infringes your intellectual property rights, then you may submit a notification pursuant to the Digital Millennium Copyright Act ("<strong>DMCA</strong>") by providing iToysoldiers\' Designated Agent with the following information in writing:</p>

<ul>
	<li>a physical or electronic signature of a person authorized to act on behalf of the owner of an exclusive right that is allegedly infringed;</li>
	<li>identification of the works or materials claimed to have been infringed, or, if multiple works or materials on the iToysoldiers Platform are covered by a single notification, a representative list of such works on the iToysoldiers Platform;</li>
	<li>identification of the material that is claimed to be infringing or to be the subject of infringing activity and that is to be removed or access to which is to be disabled, and information reasonably sufficient to permit iToysoldiers to locate the material;</li>
	<li>information reasonably sufficient to permit iToysoldiers to contact the complaining party, such as an address, telephone number, and, if available, an electronic mail address at which the complaining party may be contacted;</li>
	<li>a statement that the complaining party has a good faith belief that use of the material in the manner complained of is not authorized by the owner, its agent, or the law; and</li>
	<li>a statement that the information in the notification is accurate, and under penalty of perjury, that the complaining party is authorized to act on behalf of the owner of an exclusive right that is allegedly infringed.</li>
</ul>

<p>&nbsp;</p>

<p>Please consult your legal counsel or see 17 U.S.C. § 512 to confirm these requirements.</p>

<p>(b) iToysoldiers does not permit infringement of intellectual property rights on the iToysoldiers Platform, and iToysoldiers will remove all Content and User Submissions if properly notified that such Content or User Submission infringes on another\'s intellectual property rights. It is iToysoldiers\' policy to respond promptly to notices of alleged infringement that comply with the DMCA. In addition, iToysoldiers will promptly terminate without notice the accounts of Users that are determined by iToysoldiers to be "repeat infringers." A&nbsp;<strong>repeat infringer</strong>&nbsp;is a User who has been notified of infringing activity more than twice and/or has had a User Submission removed from the Website more than twice.</p>

<p>(c)&nbsp;Designated Agent Contact Information. iToysoldiers\' designated agent for notices of claimed infringement can be contacted at:</p>

<p>Via E-mail:&nbsp;<a href="mailto:admin@iToysoldiers.com">admin@iToysoldiers.com</a></p>

<p>Via Canadian Post:</p>

<p>&nbsp; Robert Tacey<br />
&nbsp; 24 Azar Ave<br />
&nbsp; Tilbury, ON N0P 2L0</p>

<p>(d)&nbsp;Counter Notification. If you receive a notification from iToysoldiers that material made available by you on or through the Service has been the subject of a Notification of Claimed Infringement, then you will have the right to provide iToysoldiers with what is called a "Counter Notification." To be effective, a Counter Notification must be in writing, provided to iToysoldiers\' Designated Agent through one of the methods identified in paragraph (c), and include substantially the following information:</p>

<ul>
	<li>A physical or electronic signature of the subscriber;</li>
	<li>Identification of the material that has been removed or to which access has been disabled and the location at which the material appeared before it was removed or access to it was disabled;</li>
	<li>A statement under penalty of perjury that the subscriber has a good faith belief that the material was removed or disabled as a result of mistake or misidentification of the material to be removed or disabled; and</li>
	<li>The subscriber\'s name, address, and telephone number, and a statement that the subscriber consents to the jurisdiction of Federal District Court for the judicial district in which the address is located, or if the subscriber\'s address is outside of the United States, for any judicial district in which iToysoldiers may be found, and that the subscriber will accept service of process from the person who provided notification under Section 17.3 above or an agent of such person.</li>
</ul>

<p>A party submitting a Counter Notification should consult a lawyer or see 17 U.S.C. § 512 to confirm the party\'s obligations to provide a valid counter notification under the Copyright Act.</p>

<p>&nbsp;</p>

<p>(e)&nbsp;False Notifications of Claimed Infringement or Counter Notifications. The Copyright Act provides that:</p>

<p>[a]ny person who knowingly materially misrepresents under [Section 512 of the Copyright Act (17 U.S.C. § 512)] (1) that material or activity is infringing, or (2) that material or activity was removed or disabled by mistake or misidentification, shall be liable for any damages, including costs and attorneys\' fees, incurred by the alleged infringer, by any copyright owner or copyright owner\'s authorized licensee, or by a service provider, who is injured by such misrepresentation, as the result of [iToysoldiers] relying upon such misrepresentation in removing or disabling access to the material or activity claimed to be infringing, or in replacing the removed material or ceasing to disable access to it.</p>

<p>17 U.S.C. § 512(f).</p>

<p>iToysoldiers reserves the right to seek damages from any party that submits a notification of claimed infringement or counter notification in violation of the law.</p>

<p>For the avoidance of doubt, only notices submitted under the Digital Millennium Copyright Act and the procedures set forth in this Section 17 should be sent to the Designated Agent at admin@itoysoldiers.com&nbsp;or to the postal address identified above. Any other comments, compliments, complaints or suggestions about iToysoldiers, the operation of the Service or any other matter should be sent to&nbsp;<a href="mailto:support@8tracks.com" target="_blank">support@itoysoldiers.uservoice.com</a>.</p>

<p><strong>24. United States Export Controls</strong></p>

<p>You agree to comply with all export laws and restrictions and regulations of the United States Department of Commerce or other United States or other sovereign agency or authority, and not to export, or allow the export or re-export of any technical data or any direct product thereof in violation of any such restrictions, laws or regulations, or unless and until all required licenses and authorizations are obtained with respect to the countries specified in the applicable United States Export Administration Regulations (or any successor supplement or regulations). The transfer of certain technical data and commodities may require a license from an agency of the United States government and/or written assurances by you that you will not export such technical data or commodities to certain foreign countries without prior approval of such agency. Your rights under these Terms are contingent on your compliance with this provision.</p>

<p><strong>25. Miscellaneous</strong></p>

<p>25.1&nbsp;Notice. iToysoldiers may provide you with notices, including those regarding changes to iToysoldiers\' terms and conditions, by postings on the iToysoldiers Platform, via electronic mail, or by U.S. Mail. Notice sent via e-mail will be deemed given twenty-four hours after such e-mail is sent, unless iToysoldiers is notified that the electronic mail address is invalid. Alternatively, we may give you legal notice by mail to a postal address, if provided by you through the iToysoldiers Platform. In such case, notice will be deemed given three days after the date of mailing.</p>

<p>25.2&nbsp;Dispute Resolution</p>

<p>(a)&nbsp;Mandatory Arbitration. Please read this carefully. It affects your rights. YOU AND iToysoldiers AND EACH OF OUR RESPECTIVE SUBSIDIARIES, AFFILIATES, PREDECESSORS IN INTEREST, SUCCESSORS, AND PERMITTED ASSIGNS AGREE TO ARBITRATION (EXCEPT FOR MATTERS THAT MAY BE TAKEN TO SMALL CLAIMS COURT), AS THE EXCLUSIVE FORM OF DISPUTE RESOLUTION EXCEPT AS PROVIDED FOR BELOW, FOR ALL DISPUTES AND CLAIMS ARISING OUT OF OR RELATING TO THESE TERMS OR YOUR USE OF THE SERVICE. Arbitration is more informal than a lawsuit in court. Arbitration uses a neutral arbitrator instead of a judge or jury, allows for more limited discovery than in court, and is subject to very limited review by courts. Arbitrators can award the same damages and relief that a court can award. Please visit&nbsp;<a href="http://www.adr.org/" target="_blank">www.adr.org</a>&nbsp;for more information about arbitration.</p>

<p>(b)&nbsp;Commencing Arbitration. A party who intends to seek arbitration must first send to the other, by certified mail, a written notice of intent to arbitrate (a "Notice"), or, in the absence of a mailing address provided by you to iToysoldiers, to you via any other method available to iToysoldiers, including via e-mail. The Notice to iToysoldiers should be addressed to: Robert Tacey, 24 Azar Ave, Tilbury, ON, N0P 2L0. The Notice must (i) describe the nature and basis of the claim or dispute; and (ii) set forth the specific relief sought (the "Demand"). If you and iToysoldiers do not reach an agreement to resolve the claim within 30 days after the Notice is received, you or iToysoldiers may commence an arbitration proceeding as set forth below or file a claim in small claims court. THE ARBITRATION SHALL BE ADMINISTERED BY THE AMERICAN ARBITRATION ASSOCIATION ("AAA") IN ACCORDANCE WITH ITS COMMERCIAL ARBITRATION RULES AND THE SUPPLEMENTARY PROCEDURES FOR CONSUMER RELATED DISPUTES (the "Rules"), AS MODIFIED BY THIS AGREEMENT. The Rules and AAA forms are available online at&nbsp;<a href="http://www.adr.org/" target="_blank">www.adr.org</a>&nbsp;or by calling the AAA at&nbsp;<a href="tel:1-800-778-7879" target="_blank">1-800-778-7879</a>, or by writing to the Notice Address. If you are required to pay a filing fee to commence an arbitration against iToysoldiers, then iToysoldiers will promptly reimburse you for your confirmed payment of the filing fee upon iToysoldiers\' receipt of Notice at the Arbitration Notice Address that you have commenced arbitration along with a receipt evidencing payment of the filing fee, unless your Demand is equal to or greater than $1,000, in which case you are solely responsible for the payment of the filing fee.</p>

<p>(c)&nbsp;Arbitration Proceeding. The arbitration shall be conducted in the English language. A single independent and impartial arbitrator shall be appointed pursuant to the Rules, as modified herein. You and iToysoldiers agree to comply with the following rules, which are intended to streamline the dispute resolution process and reduce the costs and burdens on the parties: (i) the arbitration shall be conducted by telephone, online and/or be solely based on written submissions, the specific manner to be chosen by the party initiating the arbitration; (ii) the arbitration shall not require any personal appearance by the parties or witnesses unless otherwise mutually agreed in writing by the parties; and (iii) any judgment on the award rendered by the arbitrator may be entered in any court of competent jurisdiction.</p>

<p>(d)&nbsp;No Class Actions. YOU AND iToysoldiers AGREE THAT YOU AND iToysoldiers MAY BRING CLAIMS AGAINST THE OTHER ONLY IN YOUR OR ITS INDIVIDUAL CAPACITY AND NOT AS A PLAINTIFF OR CLASS MEMBER IN ANY PURPORTED CLASS OR REPRESENTATIVE PROCEEDING. FURTHER, YOU AGREE THAT THE ARBITRATOR MAY NOT CONSOLIDATE PROCEEDINGS OF MORE THAN ONE PERSON\'S CLAIMS, AND MAY NOT OTHERWISE PRESIDE OVER ANY FORM OF A REPRESENTATIVE OR CLASS PROCEEDING, AND THAT IF THIS SPECIFIC PROVISO IS FOUND TO BE UNENFORCEABLE, THEN THE ENTIRETY OF THIS MANDATORY ARBITRATION SECTION SHALL BE NULL AND VOID.</p>

<p>(e)&nbsp;Decision of the Arbitrator. Barring extraordinary circumstances, the arbitrator shall issue his or her decision within 120 days from the date the arbitrator is appointed. The arbitrator may extend this time limit for an additional 30 days in the interests of justice. All arbitration proceedings shall be closed to the public and confidential and all records relating thereto shall be permanently sealed, except as necessary to obtain court confirmation of the arbitration award. The award of the arbitrator shall be in writing and shall include a statement setting forth the reasons for the disposition of any claim. The arbitrator shall apply the laws of the State of California in conducting the arbitration. You acknowledge that these terms and your use of the Service evidences a transaction involving interstate commerce. The United States Federal Arbitration Act shall govern the interpretation, enforcement, and proceedings pursuant to the Mandatory Arbitration clause in these Terms.</p>

<p>(f) These Terms and your use of the Service shall be governed by the substantive laws of the State of California without reference to its choice or conflicts of law principles. Only if the Mandatory Arbitration clause is deemed to be null and void, then all disputes arising between you and iToysoldiers under these Terms shall be subject to the exclusive jurisdiction of the state and federal courts located in Chatham-Kent, Ontario, and you and iToysoldiers hereby submit to the personal jurisdiction and venue of these courts.</p>

<p>(g)&nbsp;Equitable Relief. The foregoing provisions of this Dispute Resolution section do not apply to any claim in which iToysoldiers seeks equitable relief of any kind. You acknowledge that, in the event of a breach of these Terms by iToysoldiers or any third party, the damage or harm, if any, caused to you will not entitle you to seek injunctive or other equitable relief against iToysoldiers, including with respect to any User Submissions, and your only remedy shall be for monetary damages, subject to the limitations of liability set forth in these Terms.</p>

<p>(h)&nbsp;Claims. You and iToysoldiers agree that, notwithstanding any other rights the party may have under law or equity, any cause of action arising out of or related to these Terms or the Service, excluding a claim for indemnification, must commence within one year after the cause of action accrues. Otherwise, such cause of action is permanently barred.</p>

<p>(i)&nbsp;Improperly Filed Claims. All claims you bring against iToysoldiers must be resolved in accordance with this Dispute Resolution section.</p>

<p>All claims filed or brought contrary to this Dispute Resolution section shall be considered improperly filed. Should you file a claim contrary to this Dispute Resolution section, iToysoldiers may recover attorneys\' fees and costs up to $5,000, provided that iToysoldiers has notified you in writing of the improperly filed claim, and you have failed to promptly withdraw the claim.</p>

<p>25.3&nbsp;Waiver. A provision of these Terms may be waived only by a written instrument executed by the party entitled to the benefit of such provision. The failure of iToysoldiers to exercise or enforce any right or provision of these Terms will not constitute a waiver of such right or provision.</p>

<p>25.4&nbsp;Severability. If any provision of these Terms shall be unlawful, void, or for any reason unenforceable, then that provision shall be deemed severable from these Terms and shall not affect the validity and enforceability of any remaining provisions.</p>

<p>25.5&nbsp;Assignment. The Terms and related Guidelines, and any rights and licenses granted hereunder, may not be transferred or assigned by you, but may be assigned by iToysoldiers without restriction. Any assignment attempted to be made in violation of these Terms shall be void.</p>

<p>25.6&nbsp;No Agency. You agree that no joint venture, partnership, employment, or agency relationship exists between you and iToysoldiers as a result of these Terms or use of the iToysoldiers Platform. You further acknowledge that by submitting User Submissions or other Content, no confidential, fiduciary, contractually implied or other relationship is created between you and iToysoldiers other than pursuant to these Terms.</p>

<p>25.7&nbsp;Survival. The Sections entitled "Ownership; Proprietary Rights", "Audio Content", "User Submissions", "Password", "Indemnification; Hold Harmless", "Disclaimers; No Warranties", "Limitation of Liability and Damages", "Limitations by Applicable Law; Basis of the Bargain", and "Miscellaneous" will survive any termination of these Terms.</p>

<p>25.8&nbsp;Headings. The heading references herein are for convenience purposes only, do not constitute a part of these Terms, and shall not be deemed to limit or affect any of the provisions hereof.</p>

<p>25.9&nbsp;Entire Agreement. This is the entire agreement between you and iToysoldiers relating to the subject matter herein and supersedes all previous communications, representations, understandings and agreements, either oral or written, between the parties with respect to said subject matter. These Terms shall not be modified except in a writing, signed by both parties, or by a change to these Terms or Guidelines made by iToysoldiers as set forth in Section 4 above.</p>

<p>25.10&nbsp;Disclosures. The services hereunder are offered by Robert Tacey, 24 Azar Avenue, Tilbury, Ontario, N0P 2L0, or by electronic mail at&nbsp;<a href="mailto:support@iToysoldiers.uservoice.com">support@iToysoldiers.uservoice.com</a>. If you are a California resident, you may have this same information electronic mailed to you by sending a letter to the foregoing address with your electronic mail address and a request for this information.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '43200',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '28b3c918-514b-48ba-b196-517a75d6a3a2';
    $display->content['new-28b3c918-514b-48ba-b196-517a75d6a3a2'] = $pane;
    $display->panels['contentmain'][0] = 'new-28b3c918-514b-48ba-b196-517a75d6a3a2';
    $pane = new stdClass();
    $pane->pid = 'new-4d9e1b9a-e5f4-4a84-9926-fdc5b4d42e54';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-legal';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4d9e1b9a-e5f4-4a84-9926-fdc5b4d42e54';
    $display->content['new-4d9e1b9a-e5f4-4a84-9926-fdc5b4d42e54'] = $pane;
    $display->panels['sidebar'][0] = 'new-4d9e1b9a-e5f4-4a84-9926-fdc5b4d42e54';
    $pane = new stdClass();
    $pane->pid = 'new-915dfbf8-22ef-452d-97d3-d89bdc514a70';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-itoysoldiers-elsewhere';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '915dfbf8-22ef-452d-97d3-d89bdc514a70';
    $display->content['new-915dfbf8-22ef-452d-97d3-d89bdc514a70'] = $pane;
    $display->panels['sidebar'][1] = 'new-915dfbf8-22ef-452d-97d3-d89bdc514a70';
    $pane = new stdClass();
    $pane->pid = 'new-870c6138-de40-44f6-8234-743d9776a608';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-contact-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '870c6138-de40-44f6-8234-743d9776a608';
    $display->content['new-870c6138-de40-44f6-8234-743d9776a608'] = $pane;
    $display->panels['sidebar'][2] = 'new-870c6138-de40-44f6-8234-743d9776a608';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['terms'] = $page;

  return $pages;

}
