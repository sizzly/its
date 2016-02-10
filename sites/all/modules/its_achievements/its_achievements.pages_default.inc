<?php
/**
 * @file
 * its_achievements.pages_default.inc
 */

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
