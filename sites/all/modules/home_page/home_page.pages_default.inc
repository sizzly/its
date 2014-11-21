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
  $handler->name = 'page_home_page_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Main Home Page',
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
    $pane->pid = 'new-46e23046-d574-46ff-abe9-9fa453ee5b29';
    $pane->panel = 'contentmain';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_page_header';
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
    $pane->uuid = '46e23046-d574-46ff-abe9-9fa453ee5b29';
    $display->content['new-46e23046-d574-46ff-abe9-9fa453ee5b29'] = $pane;
    $display->panels['contentmain'][0] = 'new-46e23046-d574-46ff-abe9-9fa453ee5b29';
    $pane = new stdClass();
    $pane->pid = 'new-70da3134-37de-4944-aca9-9651ee0693e4';
    $pane->panel = 'contentmain';
    $pane->type = 'views';
    $pane->subtype = 'maps_battle_map';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hidden-xs hidden-sm',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '70da3134-37de-4944-aca9-9651ee0693e4';
    $display->content['new-70da3134-37de-4944-aca9-9651ee0693e4'] = $pane;
    $display->panels['contentmain'][1] = 'new-70da3134-37de-4944-aca9-9651ee0693e4';
    $pane = new stdClass();
    $pane->pid = 'new-0fcc58aa-ed56-4f2d-b923-55e3a53fd2ce';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page_first_block-panel_pane_1';
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
    $pane->uuid = '0fcc58aa-ed56-4f2d-b923-55e3a53fd2ce';
    $display->content['new-0fcc58aa-ed56-4f2d-b923-55e3a53fd2ce'] = $pane;
    $display->panels['contentmain'][2] = 'new-0fcc58aa-ed56-4f2d-b923-55e3a53fd2ce';
    $pane = new stdClass();
    $pane->pid = 'new-79ee7de9-2c42-4e2e-95e0-122d43592703';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Triptych V2',
      'title' => '',
      'body' => '<div class="row">
<div class="col-xs-12 col-sm-6 col-md-4">
<h2>Trending Players</h2>
<?php print views_embed_view("home_page_trending_player" , "default"); ?>
</div>
<div class="col-xs-12 col-sm-6 col-md-4">
<h2>Top Ranked Lists</h2>
<?php print views_embed_view("home_page_list_crit" , "default"); ?>
</div>
<div class="col-xs-12 col-sm-12 col-md-4">
<h2>Latest Activity</h2>
<?php print views_embed_view("home_page_recent_stuff" , "default"); ?>
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
    $pane->uuid = '79ee7de9-2c42-4e2e-95e0-122d43592703';
    $display->content['new-79ee7de9-2c42-4e2e-95e0-122d43592703'] = $pane;
    $display->panels['contentmain'][3] = 'new-79ee7de9-2c42-4e2e-95e0-122d43592703';
    $pane = new stdClass();
    $pane->pid = 'new-5ae99014-2458-450a-8e4e-1cab82a588cd';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Explore content',
      'title' => ' ',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5ae99014-2458-450a-8e4e-1cab82a588cd';
    $display->content['new-5ae99014-2458-450a-8e4e-1cab82a588cd'] = $pane;
    $display->panels['contentmain'][4] = 'new-5ae99014-2458-450a-8e4e-1cab82a588cd';
    $pane = new stdClass();
    $pane->pid = 'new-a1f76a7f-623f-4877-8240-230c9793fcbe';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page_game_list-panel_pane_1';
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
    $pane->uuid = 'a1f76a7f-623f-4877-8240-230c9793fcbe';
    $display->content['new-a1f76a7f-623f-4877-8240-230c9793fcbe'] = $pane;
    $display->panels['contentmain'][5] = 'new-a1f76a7f-623f-4877-8240-230c9793fcbe';
    $pane = new stdClass();
    $pane->pid = 'new-f113af3d-fab0-4de3-83fe-fb3324af9565';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page_second_block-panel_pane_1';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f113af3d-fab0-4de3-83fe-fb3324af9565';
    $display->content['new-f113af3d-fab0-4de3-83fe-fb3324af9565'] = $pane;
    $display->panels['contentmain'][6] = 'new-f113af3d-fab0-4de3-83fe-fb3324af9565';
    $pane = new stdClass();
    $pane->pid = 'new-93c92206-e1ad-4db7-828d-72c43ec211aa';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Profile Link',
      'title' => ' ',
      'body' => '<div align="center" class="well">
<a href="http://itoysoldiers.com/user/register" class="btn btn-primary btn-lg" style="white-space: normal;">Start your free iToysoldiers profile</a>
<h4>You\'ll be gaining renown and glory in minutes.</h4>

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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '93c92206-e1ad-4db7-828d-72c43ec211aa';
    $display->content['new-93c92206-e1ad-4db7-828d-72c43ec211aa'] = $pane;
    $display->panels['contentmain'][7] = 'new-93c92206-e1ad-4db7-828d-72c43ec211aa';
    $pane = new stdClass();
    $pane->pid = 'new-67043c41-a5e0-4858-a600-e4a3eb592bd2';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Metrics',
      'title' => '',
      'body' => '<div class="row">
<h3 class="text-center">A page for every army, player, game and much more game meta</h3>
<h4 class="text-center">also battlefields, events, and league management, comments, feedback, achievements, and more</h4>
</div>

<div class="row">
<div class="col-sm-3 col-xs-6">
<div align="center">
<span class="glyphicon glyphicon-flag homestat" style="font-size:3em"></span>
<span style="font-size:2.1em; margin-bottom: 5px;"><?php print views_embed_view("home_page_element_count" , "battles"); ?></span>
</div>
</div>

<div class="col-sm-3 col-xs-6">
<div align="center">
<span class="glyphicon glyphicon-picture homestat" style="font-size:3em"></span>
<span style="font-size:2.1em"><?php print views_embed_view("home_page_element_count" , "galleries"); ?></span>
</div>
</div>

<div class="col-sm-3 col-xs-6">
<div align="center">
<span class="glyphicon glyphicon-book homestat" style="font-size:3em"></span>
<span style="font-size:2.1em"><?php print views_embed_view("home_page_element_count" , "blog"); ?></span>
</div>
</div>

<div class="col-sm-3 col-xs-6">
<div align="center">
<span class="glyphicon glyphicon-user homestat" style="font-size:3em"></span>
<span style="font-size:2.1em"><?php print views_embed_view("home_page_element_count_2" , "default"); ?></span>
</div>
</div>
</div>

<div class="row">
   <h2 class="text-center">Pulling the hobby together</h2>
  <h4 class="text-center">No matter what aspect of the hobby is your thing, iToysoldiers.com has you covered.</h4>
</div>

<div class="row">
<div class="col-xs-12 col-sm-4">
<a href="/tabletop-war-gaming" class="btn btn-default" style="white-space: normal;">
<span class="pull-right col-xs-5">
<img src="/sites/default/files/default_images/battle.png" class="thumbnail">
</span>
<p class="text-left"><strong>Gaming</strong></p>
<p class="text-left">Record the results of your battles.  Earn achievements and renown for your battle field prowess.</p>
</a>
</div>

<div class="col-xs-12 col-sm-4">
<a href="#" class="btn btn-default" style="white-space: normal;">
<span class="pull-right col-xs-5">
<img src="/sites/default/files/default_images/gallery.png" class="thumbnail">
</span>
<p class="text-left"><strong>Modelling</strong></p>
<p class="text-left">Show off your armies.  Unlimited photo uploads and prebuilt links let you share your army with the world.</p>
</a>

</div>
<div class="col-xs-12 col-sm-4">
<a href="#" class="btn btn-default" style="white-space: normal;">
<span class="pull-right col-xs-5">
<img src="/sites/default/files/default_images/blog.png" class="thumbnail">
</span>
<p class="text-left"><strong>Narrative</strong>
<p class="text-left">Tell the story of your army or just discuss your thoughts on the hobby in general with a blog system tailor made for war gamers.</p>
</a>
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '67043c41-a5e0-4858-a600-e4a3eb592bd2';
    $display->content['new-67043c41-a5e0-4858-a600-e4a3eb592bd2'] = $pane;
    $display->panels['contentmain'][8] = 'new-67043c41-a5e0-4858-a600-e4a3eb592bd2';
    $pane = new stdClass();
    $pane->pid = 'new-12b3e80d-57b5-4bc6-aa9c-ff46c7422a04';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Store and Widget Links',
      'title' => ' ',
      'body' => '<div class="row">
<div class="well clearfix">
<div class="col-xs-6">
<div class="col-xs-2 pull-left">
<span class="glyphicon glyphicon-tower homestat" style="font-size:3em"></span>
</div>
<p><strong>iToysoldiers for Store and Events</strong><br>
<p> iToysoldiers has an awful lot of features to support the unsung heroes of miniature wargaming!  Game store and event organizers:  Check it out.</p>
</div>
<div class="col-xs-6">
<a href="/widgets">
<div class="col-xs-2 pull-left">
<span class="glyphicon glyphicon-share homestat" style="font-size:3em"></span> 
</div>
<p><strong>Widgets</strong></a></br>
Learn about some of the nifty widgets iToysoldiers offers for your web page or social profiles.</p>
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '12b3e80d-57b5-4bc6-aa9c-ff46c7422a04';
    $display->content['new-12b3e80d-57b5-4bc6-aa9c-ff46c7422a04'] = $pane;
    $display->panels['contentmain'][9] = 'new-12b3e80d-57b5-4bc6-aa9c-ff46c7422a04';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
