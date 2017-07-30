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
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 0,
      'metatags' => array(),
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '%user:name',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '%user:name';
  $display->uuid = '583f21ba-4e49-48b3-ae26-62c968ea2b67';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7a60f018-1a82-4635-9e5b-a1ba4b7220c5';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_page_layout-panel_pane_11';
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
  $pane->uuid = '7a60f018-1a82-4635-9e5b-a1ba4b7220c5';
  $display->content['new-7a60f018-1a82-4635-9e5b-a1ba4b7220c5'] = $pane;
  $display->panels['contentmain'][0] = 'new-7a60f018-1a82-4635-9e5b-a1ba4b7220c5';
  $pane = new stdClass();
  $pane->pid = 'new-903c3633-bbb1-4318-b622-e10fbeff3bf2';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_page_layout-panel_pane_19';
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
  $pane->uuid = '903c3633-bbb1-4318-b622-e10fbeff3bf2';
  $display->content['new-903c3633-bbb1-4318-b622-e10fbeff3bf2'] = $pane;
  $display->panels['contentmain'][1] = 'new-903c3633-bbb1-4318-b622-e10fbeff3bf2';
  $pane = new stdClass();
  $pane->pid = 'new-3f50849f-ac18-46a8-855d-ac724a5203ce';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_page_layout-panel_pane_12';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3f50849f-ac18-46a8-855d-ac724a5203ce';
  $display->content['new-3f50849f-ac18-46a8-855d-ac724a5203ce'] = $pane;
  $display->panels['contentmain'][2] = 'new-3f50849f-ac18-46a8-855d-ac724a5203ce';
  $pane = new stdClass();
  $pane->pid = 'new-dc75e6a4-69f7-48f5-a7fb-0d8d385014b7';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_page_layout-panel_pane_10';
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
  $pane->uuid = 'dc75e6a4-69f7-48f5-a7fb-0d8d385014b7';
  $display->content['new-dc75e6a4-69f7-48f5-a7fb-0d8d385014b7'] = $pane;
  $display->panels['footer'][0] = 'new-dc75e6a4-69f7-48f5-a7fb-0d8d385014b7';
  $pane = new stdClass();
  $pane->pid = 'new-e4bb20eb-ed30-47a3-a8ce-bba40c5ba430';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_all_content_lists-panel_pane_1';
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
  $pane->uuid = 'e4bb20eb-ed30-47a3-a8ce-bba40c5ba430';
  $display->content['new-e4bb20eb-ed30-47a3-a8ce-bba40c5ba430'] = $pane;
  $display->panels['footer'][1] = 'new-e4bb20eb-ed30-47a3-a8ce-bba40c5ba430';
  $pane = new stdClass();
  $pane->pid = 'new-cbbc6a9a-03f6-4bc6-b226-f3966e2e3ab5';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_all_media_list-panel_pane_1';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cbbc6a9a-03f6-4bc6-b226-f3966e2e3ab5';
  $display->content['new-cbbc6a9a-03f6-4bc6-b226-f3966e2e3ab5'] = $pane;
  $display->panels['footer'][2] = 'new-cbbc6a9a-03f6-4bc6-b226-f3966e2e3ab5';
  $pane = new stdClass();
  $pane->pid = 'new-9d1639a5-674a-425e-833a-9ed7b50c3116';
  $pane->panel = 'header';
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
  $display->panels['header'][0] = 'new-9d1639a5-674a-425e-833a-9ed7b50c3116';
  $pane = new stdClass();
  $pane->pid = 'new-7b6d2e8c-1f5c-49a2-b868-796bf519d73d';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_page_layout-panel_pane_2';
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
  $pane->uuid = '7b6d2e8c-1f5c-49a2-b868-796bf519d73d';
  $display->content['new-7b6d2e8c-1f5c-49a2-b868-796bf519d73d'] = $pane;
  $display->panels['sidebar'][0] = 'new-7b6d2e8c-1f5c-49a2-b868-796bf519d73d';
  $pane = new stdClass();
  $pane->pid = 'new-3e8b9ede-9086-4a46-b950-70a2dd395cdc';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_page_layout-panel_pane_8';
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
  $pane->uuid = '3e8b9ede-9086-4a46-b950-70a2dd395cdc';
  $display->content['new-3e8b9ede-9086-4a46-b950-70a2dd395cdc'] = $pane;
  $display->panels['sidebar'][1] = 'new-3e8b9ede-9086-4a46-b950-70a2dd395cdc';
  $display->hide_title = PANELS_TITLE_FIXED;
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
  $page->path = 'community/leaderboards/main';
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_leaderboards_panel_context';
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
  $page->name = 'player_army_stats';
  $page->task = 'page';
  $page->admin_title = 'Player Army Stats';
  $page->admin_description = '';
  $page->path = 'user/%user/gaming/stats/%army';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Stats',
    'name' => 'navigation',
    'weight' => '45',
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
    'army' => array(
      'id' => 2,
      'identifier' => 'Taxonomy term: ID 2',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vocabularies' => array(
          'armies' => 'armies',
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_player_army_stats__panel_context_ff6c1975-8b9e-42db-ae42-9949cd4093ad';
  $handler->task = 'page';
  $handler->subtask = 'player_army_stats';
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
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '%node:title',
    'panels_breadcrumbs_paths' => '%node:url',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '%user:name %army:name Battle Stats',
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
  $display->title = '%user:name %army:name Battle Stats';
  $display->uuid = 'f5d91163-3a9d-420b-aea8-f081d0193789';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_player_army_stats__panel_context_ff6c1975-8b9e-42db-ae42-9949cd4093ad';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7d7f236b-9218-4656-930d-b309ec671155';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7d7f236b-9218-4656-930d-b309ec671155';
  $display->content['new-7d7f236b-9218-4656-930d-b309ec671155'] = $pane;
  $display->panels['contentmain'][0] = 'new-7d7f236b-9218-4656-930d-b309ec671155';
  $pane = new stdClass();
  $pane->pid = 'new-6d507527-838f-4d78-94ff-cec31d1cb3bd';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle_faction-panel_pane_6';
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
  $pane->uuid = '6d507527-838f-4d78-94ff-cec31d1cb3bd';
  $display->content['new-6d507527-838f-4d78-94ff-cec31d1cb3bd'] = $pane;
  $display->panels['contentmain'][1] = 'new-6d507527-838f-4d78-94ff-cec31d1cb3bd';
  $pane = new stdClass();
  $pane->pid = 'new-ef267980-b0b0-495d-9a8b-ccae7955c9f3';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle_faction-panel_pane_3';
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
  $pane->uuid = 'ef267980-b0b0-495d-9a8b-ccae7955c9f3';
  $display->content['new-ef267980-b0b0-495d-9a8b-ccae7955c9f3'] = $pane;
  $display->panels['contentmain'][2] = 'new-ef267980-b0b0-495d-9a8b-ccae7955c9f3';
  $pane = new stdClass();
  $pane->pid = 'new-25035bef-546f-4583-8b64-fec6e63bfc1f';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle_faction-panel_pane_18';
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
  $pane->uuid = '25035bef-546f-4583-8b64-fec6e63bfc1f';
  $display->content['new-25035bef-546f-4583-8b64-fec6e63bfc1f'] = $pane;
  $display->panels['footer'][0] = 'new-25035bef-546f-4583-8b64-fec6e63bfc1f';
  $pane = new stdClass();
  $pane->pid = 'new-4147391c-db16-4330-a0ff-c51d8cdecae8';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_gaming_stats-panel_pane_2';
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
  $pane->uuid = '4147391c-db16-4330-a0ff-c51d8cdecae8';
  $display->content['new-4147391c-db16-4330-a0ff-c51d8cdecae8'] = $pane;
  $display->panels['sidebar'][0] = 'new-4147391c-db16-4330-a0ff-c51d8cdecae8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_army_stats'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_all_trophy_room_panel_context';
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
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_battle_stats_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bd1b031f-47d6-4a28-8a80-621d65a008c5';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle-panel_pane_17';
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
  $pane->uuid = 'bd1b031f-47d6-4a28-8a80-621d65a008c5';
  $display->content['new-bd1b031f-47d6-4a28-8a80-621d65a008c5'] = $pane;
  $display->panels['contentmain'][0] = 'new-bd1b031f-47d6-4a28-8a80-621d65a008c5';
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
  $pane->pid = 'new-c07f427d-f88b-4ff3-ae12-f5f82164e7f2';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle-panel_pane_15';
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
  $pane->uuid = 'c07f427d-f88b-4ff3-ae12-f5f82164e7f2';
  $display->content['new-c07f427d-f88b-4ff3-ae12-f5f82164e7f2'] = $pane;
  $display->panels['sidebar'][0] = 'new-c07f427d-f88b-4ff3-ae12-f5f82164e7f2';
  $pane = new stdClass();
  $pane->pid = 'new-05b6d78d-c63d-4052-82fe-75adb5f59684';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle-panel_pane_16';
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
  $pane->uuid = '05b6d78d-c63d-4052-82fe-75adb5f59684';
  $display->content['new-05b6d78d-c63d-4052-82fe-75adb5f59684'] = $pane;
  $display->panels['sidebar'][1] = 'new-05b6d78d-c63d-4052-82fe-75adb5f59684';
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
  $page->name = 'profiles_community_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Community Page';
  $page->admin_description = '';
  $page->path = 'user/%user/community/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Community',
      'name' => 'navigation',
      'weight' => '30',
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
  $handler->name = 'page_profiles_community_page__panel_context_661caca4-1b0d-4880-b46e-10fedaf903ce';
  $handler->task = 'page';
  $handler->subtask = 'profiles_community_page';
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
  $display->title = 'Community: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_community_page__panel_context_661caca4-1b0d-4880-b46e-10fedaf903ce';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9ad7caf4-2e6b-49e2-89b5-4c6d77d2bc58';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9ad7caf4-2e6b-49e2-89b5-4c6d77d2bc58';
  $display->content['new-9ad7caf4-2e6b-49e2-89b5-4c6d77d2bc58'] = $pane;
  $display->panels['contentmain'][0] = 'new-9ad7caf4-2e6b-49e2-89b5-4c6d77d2bc58';
  $pane = new stdClass();
  $pane->pid = 'new-a9dc263f-dc1a-47df-acd9-27cc72793da1';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_all_content_lists-panel_pane_2';
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
  $pane->uuid = 'a9dc263f-dc1a-47df-acd9-27cc72793da1';
  $display->content['new-a9dc263f-dc1a-47df-acd9-27cc72793da1'] = $pane;
  $display->panels['sidebar'][0] = 'new-a9dc263f-dc1a-47df-acd9-27cc72793da1';
  $pane = new stdClass();
  $pane->pid = 'new-01e18ec3-82e0-4d91-aa05-6b21fca1e56a';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_all_content_lists-panel_pane_3';
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
  $pane->uuid = '01e18ec3-82e0-4d91-aa05-6b21fca1e56a';
  $display->content['new-01e18ec3-82e0-4d91-aa05-6b21fca1e56a'] = $pane;
  $display->panels['sidebar'][1] = 'new-01e18ec3-82e0-4d91-aa05-6b21fca1e56a';
  $pane = new stdClass();
  $pane->pid = 'new-c64c8047-f50a-4457-82ef-8572b4397fcc';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_all_content_lists-panel_pane_4';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c64c8047-f50a-4457-82ef-8572b4397fcc';
  $display->content['new-c64c8047-f50a-4457-82ef-8572b4397fcc'] = $pane;
  $display->panels['sidebar'][2] = 'new-c64c8047-f50a-4457-82ef-8572b4397fcc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_community_page'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
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
  $display->title = 'Content Statistics: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_content_stats_page__panel_context_77d9607f-eafe-45b2-ad69-028e143d0e19';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bdff9f34-5276-4fd8-bced-d369118cbace';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_content-panel_pane_5';
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
  $pane->uuid = 'bdff9f34-5276-4fd8-bced-d369118cbace';
  $display->content['new-bdff9f34-5276-4fd8-bced-d369118cbace'] = $pane;
  $display->panels['header'][0] = 'new-bdff9f34-5276-4fd8-bced-d369118cbace';
  $pane = new stdClass();
  $pane->pid = 'new-a895e1f3-af39-4122-8f19-1a67e0417a28';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_content-panel_pane_10';
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
  $pane->uuid = 'a895e1f3-af39-4122-8f19-1a67e0417a28';
  $display->content['new-a895e1f3-af39-4122-8f19-1a67e0417a28'] = $pane;
  $display->panels['header'][1] = 'new-a895e1f3-af39-4122-8f19-1a67e0417a28';
  $pane = new stdClass();
  $pane->pid = 'new-98b18112-fb15-47f7-ab61-fd6ef23b255d';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_content-panel_pane_4';
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
  $pane->uuid = '98b18112-fb15-47f7-ab61-fd6ef23b255d';
  $display->content['new-98b18112-fb15-47f7-ab61-fd6ef23b255d'] = $pane;
  $display->panels['header'][2] = 'new-98b18112-fb15-47f7-ab61-fd6ef23b255d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_content_stats_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_gaming_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Gaming Page';
  $page->admin_description = '';
  $page->path = 'user/%user/gaming/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Gaming',
      'name' => 'navigation',
      'weight' => '10',
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
  $handler->name = 'page_profiles_gaming_page__panel_context_19b2f8ff-f0bc-467e-8957-920e1bba8d64';
  $handler->task = 'page';
  $handler->subtask = 'profiles_gaming_page';
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
  $display->title = 'Gaming: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_gaming_page__panel_context_19b2f8ff-f0bc-467e-8957-920e1bba8d64';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-06aa8dee-11f5-4140-a902-ddb3a40e3a3c';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle-panel_pane_6';
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
  $pane->uuid = '06aa8dee-11f5-4140-a902-ddb3a40e3a3c';
  $display->content['new-06aa8dee-11f5-4140-a902-ddb3a40e3a3c'] = $pane;
  $display->panels['contentmain'][0] = 'new-06aa8dee-11f5-4140-a902-ddb3a40e3a3c';
  $pane = new stdClass();
  $pane->pid = 'new-a03a883c-522c-4255-9ae5-787b6d0ea51c';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle-panel_pane_3';
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
  $pane->uuid = 'a03a883c-522c-4255-9ae5-787b6d0ea51c';
  $display->content['new-a03a883c-522c-4255-9ae5-787b6d0ea51c'] = $pane;
  $display->panels['contentmain'][1] = 'new-a03a883c-522c-4255-9ae5-787b6d0ea51c';
  $pane = new stdClass();
  $pane->pid = 'new-48b88c6d-db29-4b89-b2cd-2e7b6298f810';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_gaming_content_views-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'use_title' => 1,
      'use_footer' => 1,
      'panel_body' => 1,
      'footer_content' => 'Click for Battle Stats',
      'context_class' => 'panel-default',
    ),
    'style' => 'bootstrap_panel',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '48b88c6d-db29-4b89-b2cd-2e7b6298f810';
  $display->content['new-48b88c6d-db29-4b89-b2cd-2e7b6298f810'] = $pane;
  $display->panels['footer'][0] = 'new-48b88c6d-db29-4b89-b2cd-2e7b6298f810';
  $pane = new stdClass();
  $pane->pid = 'new-621de92d-b8bc-4d5e-a1ab-33bb5ea66e9f';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_gaming_content_views-panel_pane_2';
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
  $pane->uuid = '621de92d-b8bc-4d5e-a1ab-33bb5ea66e9f';
  $display->content['new-621de92d-b8bc-4d5e-a1ab-33bb5ea66e9f'] = $pane;
  $display->panels['sidebar'][0] = 'new-621de92d-b8bc-4d5e-a1ab-33bb5ea66e9f';
  $pane = new stdClass();
  $pane->pid = 'new-5c3943e2-b680-43e1-8d0e-448e375c8851';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_gaming_content_views-panel_pane_3';
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
  $pane->uuid = '5c3943e2-b680-43e1-8d0e-448e375c8851';
  $display->content['new-5c3943e2-b680-43e1-8d0e-448e375c8851'] = $pane;
  $display->panels['sidebar'][1] = 'new-5c3943e2-b680-43e1-8d0e-448e375c8851';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_gaming_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_modelling_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Modelling Page';
  $page->admin_description = '';
  $page->path = 'user/%user/modelling/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Modelling',
      'name' => 'navigation',
      'weight' => '15',
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
  $handler->name = 'page_profiles_modelling_page__panel_context_fe138d96-d0cf-424f-ace3-f59555d7d0d3';
  $handler->task = 'page';
  $handler->subtask = 'profiles_modelling_page';
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
  $display->title = 'Modelling: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_modelling_page__panel_context_fe138d96-d0cf-424f-ace3-f59555d7d0d3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aebd678a-4a63-4285-929c-9b040f30ecad';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aebd678a-4a63-4285-929c-9b040f30ecad';
  $display->content['new-aebd678a-4a63-4285-929c-9b040f30ecad'] = $pane;
  $display->panels['contentmain'][0] = 'new-aebd678a-4a63-4285-929c-9b040f30ecad';
  $pane = new stdClass();
  $pane->pid = 'new-772cdea9-3ebe-422d-9f4f-9f080bc91283';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_modelling_content_views-panel_pane_1';
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
  $pane->uuid = '772cdea9-3ebe-422d-9f4f-9f080bc91283';
  $display->content['new-772cdea9-3ebe-422d-9f4f-9f080bc91283'] = $pane;
  $display->panels['contentmain'][1] = 'new-772cdea9-3ebe-422d-9f4f-9f080bc91283';
  $pane = new stdClass();
  $pane->pid = 'new-1acf33ff-dd09-4f72-acc1-2760576f3eef';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_modelling_content_views-panel_pane_2';
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
  $pane->uuid = '1acf33ff-dd09-4f72-acc1-2760576f3eef';
  $display->content['new-1acf33ff-dd09-4f72-acc1-2760576f3eef'] = $pane;
  $display->panels['footer'][0] = 'new-1acf33ff-dd09-4f72-acc1-2760576f3eef';
  $pane = new stdClass();
  $pane->pid = 'new-c3adbf07-b7ee-4f3c-acc6-7c342e0a6372';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_page_layout-panel_pane_20';
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
  $pane->uuid = 'c3adbf07-b7ee-4f3c-acc6-7c342e0a6372';
  $display->content['new-c3adbf07-b7ee-4f3c-acc6-7c342e0a6372'] = $pane;
  $display->panels['footer'][1] = 'new-c3adbf07-b7ee-4f3c-acc6-7c342e0a6372';
  $pane = new stdClass();
  $pane->pid = 'new-8c95045d-a48f-47d7-bce2-3693b1375004';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_modelling_content_views-panel_pane_3';
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
  $pane->uuid = '8c95045d-a48f-47d7-bce2-3693b1375004';
  $display->content['new-8c95045d-a48f-47d7-bce2-3693b1375004'] = $pane;
  $display->panels['sidebar'][0] = 'new-8c95045d-a48f-47d7-bce2-3693b1375004';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_modelling_page'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_modelling_stats_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Modelling Page';
  $page->admin_description = '';
  $page->path = 'user/%user/modelling/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Modelling',
      'name' => 'navigation',
      'weight' => '15',
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
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Modelling Statistics: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_modelling_stats_page__panel_context_74ac2464-1ac2-4520-be01-ecaba0859602';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_modelling_stats_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_narrative_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Narrative Page';
  $page->admin_description = '';
  $page->path = 'user/%user/narrative/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Narrative',
      'name' => 'navigation',
      'weight' => '20',
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
  $handler->name = 'page_profiles_narrative_page__panel_context_566c27c7-686a-416d-ae8a-f2d5ebb2d897';
  $handler->task = 'page';
  $handler->subtask = 'profiles_narrative_page';
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
  $display->title = 'Narrative: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_narrative_page__panel_context_566c27c7-686a-416d-ae8a-f2d5ebb2d897';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-642ba36d-b4a2-4e7d-96c2-3911da28e9b1';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '642ba36d-b4a2-4e7d-96c2-3911da28e9b1';
  $display->content['new-642ba36d-b4a2-4e7d-96c2-3911da28e9b1'] = $pane;
  $display->panels['contentmain'][0] = 'new-642ba36d-b4a2-4e7d-96c2-3911da28e9b1';
  $pane = new stdClass();
  $pane->pid = 'new-9643175c-f334-4232-a0b9-77691ebad974';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_all_content_lists-panel_pane_5';
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
  $pane->uuid = '9643175c-f334-4232-a0b9-77691ebad974';
  $display->content['new-9643175c-f334-4232-a0b9-77691ebad974'] = $pane;
  $display->panels['sidebar'][0] = 'new-9643175c-f334-4232-a0b9-77691ebad974';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_narrative_page'] = $page;

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
  $page->name = 'profiles_theater_page';
  $page->task = 'page';
  $page->admin_title = 'Profiles: Theater Page';
  $page->admin_description = '';
  $page->path = 'user/%user/theater/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Theater',
      'name' => 'navigation',
      'weight' => '25',
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
  $handler->name = 'page_profiles_theater_page__panel_context_00388911-c03f-46d8-aa89-ad9a0ddce895';
  $handler->task = 'page';
  $handler->subtask = 'profiles_theater_page';
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
  $display->title = 'Theater: %user:name';
  $display->uuid = 'b1731d5f-7101-4868-bdd4-1b0bffe9e059';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_profiles_theater_page__panel_context_00388911-c03f-46d8-aa89-ad9a0ddce895';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-39e80c67-bc80-40c5-a9d8-126318b1c94e';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '39e80c67-bc80-40c5-a9d8-126318b1c94e';
  $display->content['new-39e80c67-bc80-40c5-a9d8-126318b1c94e'] = $pane;
  $display->panels['contentmain'][0] = 'new-39e80c67-bc80-40c5-a9d8-126318b1c94e';
  $pane = new stdClass();
  $pane->pid = 'new-081dbee0-c5d2-4c11-9509-d607a1dec823';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_page_layout-panel_pane_21';
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
  $pane->uuid = '081dbee0-c5d2-4c11-9509-d607a1dec823';
  $display->content['new-081dbee0-c5d2-4c11-9509-d607a1dec823'] = $pane;
  $display->panels['contentmain'][1] = 'new-081dbee0-c5d2-4c11-9509-d607a1dec823';
  $pane = new stdClass();
  $pane->pid = 'new-8684d87f-9420-4787-936a-d6cbf60cebc0';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'profiles_all_registrations-panel_pane_1';
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
  $pane->uuid = '8684d87f-9420-4787-936a-d6cbf60cebc0';
  $display->content['new-8684d87f-9420-4787-936a-d6cbf60cebc0'] = $pane;
  $display->panels['footer'][0] = 'new-8684d87f-9420-4787-936a-d6cbf60cebc0';
  $pane = new stdClass();
  $pane->pid = 'new-f5c2740f-2a90-4aaa-9276-e5999badc370';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_all_content_lists-panel_pane_6';
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
  $pane->uuid = 'f5c2740f-2a90-4aaa-9276-e5999badc370';
  $display->content['new-f5c2740f-2a90-4aaa-9276-e5999badc370'] = $pane;
  $display->panels['sidebar'][0] = 'new-f5c2740f-2a90-4aaa-9276-e5999badc370';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_theater_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'redirect_to_edit';
  $page->task = 'page';
  $page->admin_title = 'Redirect to Edit';
  $page->admin_description = '';
  $page->path = 'user/edit';
  $page->access = array(
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
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page-redirect_to_edit__user';
  $handler->task = 'page';
  $handler->subtask = 'redirect_to_edit';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Redirect to user edit',
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
    'code' => '301',
    'destination' => 'user/%user:uid/edit',
    'name' => 'user',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['redirect_to_edit'] = $page;

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
    'type' => 'none',
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_user_stats__panel_context_6e376f25-9573-4fa9-89b3-9986f26a9313';
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
  $pane->pid = 'new-a549bd78-863c-49eb-be11-de45fdcd1478';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_battle-panel_pane_14';
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
  $pane->uuid = 'a549bd78-863c-49eb-be11-de45fdcd1478';
  $display->content['new-a549bd78-863c-49eb-be11-de45fdcd1478'] = $pane;
  $display->panels['sidebar'][0] = 'new-a549bd78-863c-49eb-be11-de45fdcd1478';
  $pane = new stdClass();
  $pane->pid = 'new-745f4b83-cc12-4fa4-abb4-a64fc7377844';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_content-panel_pane_9';
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
  $pane->uuid = '745f4b83-cc12-4fa4-abb4-a64fc7377844';
  $display->content['new-745f4b83-cc12-4fa4-abb4-a64fc7377844'] = $pane;
  $display->panels['sidebar'][1] = 'new-745f4b83-cc12-4fa4-abb4-a64fc7377844';
  $pane = new stdClass();
  $pane->pid = 'new-54bd52a3-dc69-42e3-82ec-831a1e5622a5';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_stats_modeling-panel_pane_4';
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
  $pane->uuid = '54bd52a3-dc69-42e3-82ec-831a1e5622a5';
  $display->content['new-54bd52a3-dc69-42e3-82ec-831a1e5622a5'] = $pane;
  $display->panels['sidebar'][2] = 'new-54bd52a3-dc69-42e3-82ec-831a1e5622a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_stats'] = $page;

  return $pages;

}
