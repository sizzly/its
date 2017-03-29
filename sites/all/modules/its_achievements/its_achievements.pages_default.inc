<?php
/**
 * @file
 * its_achievements.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_achievements_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_f9cac5d6-9718-4410-a26b-0713d9045879';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'title' => 'Achievements',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'achievement' => 'achievement',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Decorations
Achievements
%node:field_achievement_category',
    'panels_breadcrumbs_paths' => 'wargaming-decorations
wargaming-decorations/achievements
%node:field-achievement-category:url',
    'panels_breadcrumbs_home' => 1,
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
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
  $display->title = '%node:title';
  $display->uuid = 'f7cd8241-907d-4f65-9137-baeb37af419d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e63bf7a6-a3d9-4727-8b74-d5bd9751d29c';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="row">
<div class="col-xs-12 col-sm-6">
<?php print views_embed_view("achievements_all_page_layout" , "panel_pane_5"); ?>
</div>
<div class="col-xs-12 col-sm-6">
<?php print views_embed_view("achievements_all_page_layout" , "panel_pane_7"); ?>
<?php print views_embed_view("achievements_all_page_layout" , "panel_pane_2"); ?>
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
    $pane->uuid = 'e63bf7a6-a3d9-4727-8b74-d5bd9751d29c';
    $display->content['new-e63bf7a6-a3d9-4727-8b74-d5bd9751d29c'] = $pane;
    $display->panels['contentmain'][0] = 'new-e63bf7a6-a3d9-4727-8b74-d5bd9751d29c';
    $pane = new stdClass();
    $pane->pid = 'new-88917c43-7eed-4a92-a699-6b8812dcd9fc';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'achievements_all_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '88917c43-7eed-4a92-a699-6b8812dcd9fc';
    $display->content['new-88917c43-7eed-4a92-a699-6b8812dcd9fc'] = $pane;
    $display->panels['contentmain'][1] = 'new-88917c43-7eed-4a92-a699-6b8812dcd9fc';
    $pane = new stdClass();
    $pane->pid = 'new-933afce9-307c-44aa-b635-d3e7e9ec3c37';
    $pane->panel = 'contentmain';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '933afce9-307c-44aa-b635-d3e7e9ec3c37';
    $display->content['new-933afce9-307c-44aa-b635-d3e7e9ec3c37'] = $pane;
    $display->panels['contentmain'][2] = 'new-933afce9-307c-44aa-b635-d3e7e9ec3c37';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_f9cac5d6-9718-4410-a26b-0713d9045879'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function its_achievements_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'achievements_page';
  $page->task = 'page';
  $page->admin_title = 'Achievements Page';
  $page->admin_description = '';
  $page->path = 'wargaming-decorations/achievements';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Achievements',
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
  $handler->name = 'page_achievements_page__panel_context_2c52bfa7-bb43-4314-9d53-53f889fad11c';
  $handler->task = 'page';
  $handler->subtask = 'achievements_page';
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
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Achievements',
        ),
        'description' => array(
          'value' => 'iToysoldiers Achievements reward table top miniature war gamers for playing games, painting their models, chronicling their armies, and much more. Why should computer gamers have all the glory.',
        ),
        'abstract' => array(
          'value' => 'Achievements on iToysoldiers',
        ),
        'keywords' => array(
          'value' => 'Achievements, rewards, unlocks, tabletop miniature rewards',
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
    'name' => '',
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
  $display->title = 'Achievements';
  $display->uuid = 'bb383f98-009c-4257-90e2-4d31a479d4ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4f633e9a-9acc-4e0f-bd34-6a72ada0d6e2';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'achievement_category_all_page_layout-panel_pane_2';
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
    $pane->uuid = '4f633e9a-9acc-4e0f-bd34-6a72ada0d6e2';
    $display->content['new-4f633e9a-9acc-4e0f-bd34-6a72ada0d6e2'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-4f633e9a-9acc-4e0f-bd34-6a72ada0d6e2';
    $pane = new stdClass();
    $pane->pid = 'new-409783e4-7cb2-4586-8298-a8d0d429ef2d';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'leaderboards_all_tables-panel_pane_2';
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
    $pane->uuid = '409783e4-7cb2-4586-8298-a8d0d429ef2d';
    $display->content['new-409783e4-7cb2-4586-8298-a8d0d429ef2d'] = $pane;
    $display->panels['contentmainright'][0] = 'new-409783e4-7cb2-4586-8298-a8d0d429ef2d';
    $pane = new stdClass();
    $pane->pid = 'new-48c01dd9-1c6a-480f-9236-01a1d9527fc7';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'achievements_main_messages-panel_pane_1';
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
    $pane->uuid = '48c01dd9-1c6a-480f-9236-01a1d9527fc7';
    $display->content['new-48c01dd9-1c6a-480f-9236-01a1d9527fc7'] = $pane;
    $display->panels['contentmainright'][1] = 'new-48c01dd9-1c6a-480f-9236-01a1d9527fc7';
    $pane = new stdClass();
    $pane->pid = 'new-d0157539-0399-4124-9d65-e6a5a7347ea6';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Achievements Write up',
      'title' => 'Claim Your Just Reward',
      'body' => '<p>iToysoldiers achievements reward you for accomplishments with your miniature wargaming armies. Whether it\'s battle related, modelling related, participating in events, or chronicling the glory of your army there\'s an achievement you can unlock. Why should gamers have all the fun?</p>
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
    $pane->uuid = 'd0157539-0399-4124-9d65-e6a5a7347ea6';
    $display->content['new-d0157539-0399-4124-9d65-e6a5a7347ea6'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-d0157539-0399-4124-9d65-e6a5a7347ea6';
    $pane = new stdClass();
    $pane->pid = 'new-e6942da0-29c1-4963-b4e1-addcc0056a70';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Achievement Jumbotron',
      'title' => '',
      'body' => '<h2>Claim your reward for glorious service to your factions</h2>',
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
    $pane->uuid = 'e6942da0-29c1-4963-b4e1-addcc0056a70';
    $display->content['new-e6942da0-29c1-4963-b4e1-addcc0056a70'] = $pane;
    $display->panels['header'][0] = 'new-e6942da0-29c1-4963-b4e1-addcc0056a70';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e6942da0-29c1-4963-b4e1-addcc0056a70';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['achievements_page'] = $page;

  return $pages;

}
