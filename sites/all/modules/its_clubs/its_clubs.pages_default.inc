<?php
/**
 * @file
 * its_clubs.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_clubs_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_13';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Club Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'user',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'OG membership from a group node and user',
        'keyword' => 'og_membership',
        'name' => 'og_membership_from_group_and_user',
        'context' => array(
          0 => 'argument_entity_id:node_1',
          1 => 'context_user_1',
        ),
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gaming_club' => 'gaming_club',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Order of Battle
Gaming Clubs',
    'panels_breadcrumbs_paths' => 'order-of-battle
order-of-battle/gaming-clubs',
    'panels_breadcrumbs_home' => 1,
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
      'center' => NULL,
      'data_sheet' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '438a141f-ddf4-4375-905f-2468c61dce38';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cd77a373-26ff-4f72-9466-bf4be29c5a00';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_7';
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
    $pane->uuid = 'cd77a373-26ff-4f72-9466-bf4be29c5a00';
    $display->content['new-cd77a373-26ff-4f72-9466-bf4be29c5a00'] = $pane;
    $display->panels['contentmain'][0] = 'new-cd77a373-26ff-4f72-9466-bf4be29c5a00';
    $pane = new stdClass();
    $pane->pid = 'new-cf99224e-0ea8-451b-a8b9-80a3117ac63a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_4';
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
    $pane->uuid = 'cf99224e-0ea8-451b-a8b9-80a3117ac63a';
    $display->content['new-cf99224e-0ea8-451b-a8b9-80a3117ac63a'] = $pane;
    $display->panels['contentmain'][1] = 'new-cf99224e-0ea8-451b-a8b9-80a3117ac63a';
    $pane = new stdClass();
    $pane->pid = 'new-1f7cbce6-1344-4e9b-a496-14a68ae71f03';
    $pane->panel = 'contentmain';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'current',
      'path-external' => '',
      'override_title' => 1,
      'override_title_text' => 'Share',
      'override_title_heading' => 'h2',
    );
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
    $pane->uuid = '1f7cbce6-1344-4e9b-a496-14a68ae71f03';
    $display->content['new-1f7cbce6-1344-4e9b-a496-14a68ae71f03'] = $pane;
    $display->panels['contentmain'][2] = 'new-1f7cbce6-1344-4e9b-a496-14a68ae71f03';
    $pane = new stdClass();
    $pane->pid = 'new-bd9b844b-73da-4421-a363-8c6241044802';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'clubs_all_content_lists-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->uuid = 'bd9b844b-73da-4421-a363-8c6241044802';
    $display->content['new-bd9b844b-73da-4421-a363-8c6241044802'] = $pane;
    $display->panels['footer'][0] = 'new-bd9b844b-73da-4421-a363-8c6241044802';
    $pane = new stdClass();
    $pane->pid = 'new-3271e649-cb40-48a3-9461-46b516642c27';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'hero_image_newsletter',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '3271e649-cb40-48a3-9461-46b516642c27';
    $display->content['new-3271e649-cb40-48a3-9461-46b516642c27'] = $pane;
    $display->panels['header'][0] = 'new-3271e649-cb40-48a3-9461-46b516642c27';
    $pane = new stdClass();
    $pane->pid = 'new-78092f64-d922-48ca-9ce5-a254911d3150';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_2';
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
    $pane->uuid = '78092f64-d922-48ca-9ce5-a254911d3150';
    $display->content['new-78092f64-d922-48ca-9ce5-a254911d3150'] = $pane;
    $display->panels['header'][1] = 'new-78092f64-d922-48ca-9ce5-a254911d3150';
    $pane = new stdClass();
    $pane->pid = 'new-ab3b27c6-2a7c-407c-9ff6-cdd4cb867344';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'ab3b27c6-2a7c-407c-9ff6-cdd4cb867344';
    $display->content['new-ab3b27c6-2a7c-407c-9ff6-cdd4cb867344'] = $pane;
    $display->panels['sidebar'][0] = 'new-ab3b27c6-2a7c-407c-9ff6-cdd4cb867344';
    $pane = new stdClass();
    $pane->pid = 'new-5706b190-111c-44cf-ae66-cfbf31ab6e5c';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_5';
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
    $pane->uuid = '5706b190-111c-44cf-ae66-cfbf31ab6e5c';
    $display->content['new-5706b190-111c-44cf-ae66-cfbf31ab6e5c'] = $pane;
    $display->panels['sidebar'][1] = 'new-5706b190-111c-44cf-ae66-cfbf31ab6e5c';
    $pane = new stdClass();
    $pane->pid = 'new-a249de3b-2d1c-4dbd-8119-24e07e1bfae9';
    $pane->panel = 'sidebar';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'event' => 'event',
        'article' => 'article',
        'war_zone_league' => 'war_zone_league',
        'war_zone_tournament' => 'war_zone_tournament',
        'forum' => 'forum',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Create Club Content',
      'override_title_heading' => 'h4',
    );
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a249de3b-2d1c-4dbd-8119-24e07e1bfae9';
    $display->content['new-a249de3b-2d1c-4dbd-8119-24e07e1bfae9'] = $pane;
    $display->panels['sidebar'][2] = 'new-a249de3b-2d1c-4dbd-8119-24e07e1bfae9';
    $pane = new stdClass();
    $pane->pid = 'new-e3cabd1b-ff27-4cbe-b639-bef32c206606';
    $pane->panel = 'sidebar';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Information',
      'override_title_heading' => 'h2',
    );
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
    $pane->uuid = 'e3cabd1b-ff27-4cbe-b639-bef32c206606';
    $display->content['new-e3cabd1b-ff27-4cbe-b639-bef32c206606'] = $pane;
    $display->panels['sidebar'][3] = 'new-e3cabd1b-ff27-4cbe-b639-bef32c206606';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_13'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function its_clubs_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gaming_clubs_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Gaming clubs landing page';
  $page->admin_description = '';
  $page->path = 'order-of-battle/gaming-clubs';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Gaming Clubs',
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
  $handler->name = 'page_gaming_clubs_landing_page__panel_context_379a715b-45c4-414e-b3e8-7637123ce562';
  $handler->task = 'page';
  $handler->subtask = 'gaming_clubs_landing_page';
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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Gaming Clubs',
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
  $display->title = 'Gaming Clubs';
  $display->uuid = '1df8c7b8-683e-426b-8471-9c9ca9617b6d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16d0caa4-ba6c-4442-a7d3-9b17d6af6c15';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Write Up',
      'title' => 'Represent Your Club on iToysoldiers',
      'body' => 'Miniature war gaming is a pretty social hobby. We gather together to inflict massive casualties on our model armies and gaming clubs are a pretty important part of the whole dynamic. Whether they’re independent or tied to a local gaming store, our gaming clubs bring players together, work out the details of the venues, arrange events, and all sorts of sundry things to ensure we can all play our games.

So with that in mind, I thought it was important to represent gaming clubs on iToysoldiers. The idea here is to help gaming clubs promote their activities, find new members, and communicate with their existing crew. Put your gaming club on iToysoldiers and become a club of distinction.',
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
    $pane->uuid = '16d0caa4-ba6c-4442-a7d3-9b17d6af6c15';
    $display->content['new-16d0caa4-ba6c-4442-a7d3-9b17d6af6c15'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-16d0caa4-ba6c-4442-a7d3-9b17d6af6c15';
    $pane = new stdClass();
    $pane->pid = 'new-525f11d1-b639-4512-a53d-e33d6791b2da';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_lists-panel_pane_1';
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
    $pane->uuid = '525f11d1-b639-4512-a53d-e33d6791b2da';
    $display->content['new-525f11d1-b639-4512-a53d-e33d6791b2da'] = $pane;
    $display->panels['contentmainright'][0] = 'new-525f11d1-b639-4512-a53d-e33d6791b2da';
    $pane = new stdClass();
    $pane->pid = 'new-ebc0b5fc-d270-4b38-8cc9-2d3015a11624';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>Show off your club</h2>
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
    $pane->uuid = 'ebc0b5fc-d270-4b38-8cc9-2d3015a11624';
    $display->content['new-ebc0b5fc-d270-4b38-8cc9-2d3015a11624'] = $pane;
    $display->panels['header'][0] = 'new-ebc0b5fc-d270-4b38-8cc9-2d3015a11624';
    $pane = new stdClass();
    $pane->pid = 'new-658790ff-4a58-4d4a-8d95-5b1e01dbceac';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Club Nav Bar',
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
      <a class="navbar-brand" href="#">Gaming Clubs</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/community/gaming-clubs/list">All Clubs</a></li>
        <li><a href="/node/add/gaming-club">Register Club</a></li>
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
    $pane->uuid = '658790ff-4a58-4d4a-8d95-5b1e01dbceac';
    $display->content['new-658790ff-4a58-4d4a-8d95-5b1e01dbceac'] = $pane;
    $display->panels['header'][1] = 'new-658790ff-4a58-4d4a-8d95-5b1e01dbceac';
    $pane = new stdClass();
    $pane->pid = 'new-13333c8c-5171-4959-8ed0-293dcce470b2';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Gaming Club Intro',
      'title' => 'Represent Your Club on iToysoldiers',
      'body' => '<p>Miniature war gaming is a pretty social hobby. We gather together to inflict massive casualties on our model armies and gaming clubs are a pretty important part of the whole dynamic. Whether they’re independent or tied to a local gaming store, our gaming clubs bring players together, work out the details of the venues, arrange events, and all sorts of sundry things to ensure we can all play our games.</p>

<p>So with that in mind, I thought it was important to represent gaming clubs on iToysoldiers. The idea here is to help gaming clubs promote their activities, find new members, and communicate with their existing crew. Put your gaming club on iToysoldiers and become a club of distinction.</p>
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
    $pane->uuid = '13333c8c-5171-4959-8ed0-293dcce470b2';
    $display->content['new-13333c8c-5171-4959-8ed0-293dcce470b2'] = $pane;
    $display->panels['sidebar'][0] = 'new-13333c8c-5171-4959-8ed0-293dcce470b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gaming_clubs_landing_page'] = $page;

  return $pages;

}
