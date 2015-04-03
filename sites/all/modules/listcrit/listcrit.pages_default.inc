<?php
/**
 * @file
 * listcrit.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function listcrit_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__list_crit';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'List Crit',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'list_crit',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'listcrit' => 'listcrit',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Community
ListCrit',
    'panels_breadcrumbs_paths' => 'community
community/listcrit',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = '%node:title';
  $display->uuid = '209d1984-f266-4fc6-af37-d387d83175b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-760550aa-4af8-4acc-8f45-b3f05a0e4828';
    $pane->panel = 'contentmainleft';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '760550aa-4af8-4acc-8f45-b3f05a0e4828';
    $display->content['new-760550aa-4af8-4acc-8f45-b3f05a0e4828'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-760550aa-4af8-4acc-8f45-b3f05a0e4828';
    $pane = new stdClass();
    $pane->pid = 'new-db26f124-e580-4ac1-82b8-d0db64392945';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'db26f124-e580-4ac1-82b8-d0db64392945';
    $display->content['new-db26f124-e580-4ac1-82b8-d0db64392945'] = $pane;
    $display->panels['contentmainright'][0] = 'new-db26f124-e580-4ac1-82b8-d0db64392945';
    $pane = new stdClass();
    $pane->pid = 'new-abb1884a-ae8e-4088-a616-e9c25929e0bf';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_page_layout-panel_pane_2';
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
    $pane->uuid = 'abb1884a-ae8e-4088-a616-e9c25929e0bf';
    $display->content['new-abb1884a-ae8e-4088-a616-e9c25929e0bf'] = $pane;
    $display->panels['footer'][0] = 'new-abb1884a-ae8e-4088-a616-e9c25929e0bf';
    $pane = new stdClass();
    $pane->pid = 'new-8c4794e2-36d2-4ef2-99e3-63bd9ee72b1e';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_page_layout-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8c4794e2-36d2-4ef2-99e3-63bd9ee72b1e';
    $display->content['new-8c4794e2-36d2-4ef2-99e3-63bd9ee72b1e'] = $pane;
    $display->panels['footer'][1] = 'new-8c4794e2-36d2-4ef2-99e3-63bd9ee72b1e';
    $pane = new stdClass();
    $pane->pid = 'new-3687c4fc-71a1-4535-aca3-19609b353faf';
    $pane->panel = 'footer';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '3687c4fc-71a1-4535-aca3-19609b353faf';
    $display->content['new-3687c4fc-71a1-4535-aca3-19609b353faf'] = $pane;
    $display->panels['footer'][2] = 'new-3687c4fc-71a1-4535-aca3-19609b353faf';
    $pane = new stdClass();
    $pane->pid = 'new-f5abb7d5-a7a4-46b4-9268-d0eece1062b1';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_page_layout-panel_pane_3';
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
    $pane->uuid = 'f5abb7d5-a7a4-46b4-9268-d0eece1062b1';
    $display->content['new-f5abb7d5-a7a4-46b4-9268-d0eece1062b1'] = $pane;
    $display->panels['header'][0] = 'new-f5abb7d5-a7a4-46b4-9268-d0eece1062b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__list_crit'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__listcrit_meta';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'ListCrit Meta',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'listcrit_meta',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'list_crit_tags' => 'list_crit_tags',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Community
ListCrit
',
    'panels_breadcrumbs_paths' => 'community
community/listcrit
',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = '%term:name';
  $display->uuid = '663435e4-f798-4757-95e6-4f2c919b62af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-309a8b90-6616-44cc-9a61-19fe0908651e';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_meta_page_layout-panel_pane_1';
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
    $pane->uuid = '309a8b90-6616-44cc-9a61-19fe0908651e';
    $display->content['new-309a8b90-6616-44cc-9a61-19fe0908651e'] = $pane;
    $display->panels['contentmain'][0] = 'new-309a8b90-6616-44cc-9a61-19fe0908651e';
    $pane = new stdClass();
    $pane->pid = 'new-fedde95a-d3aa-4571-8d5c-6eb0bfdae1b6';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_meta_page_layout-panel_pane_2';
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
    $pane->uuid = 'fedde95a-d3aa-4571-8d5c-6eb0bfdae1b6';
    $display->content['new-fedde95a-d3aa-4571-8d5c-6eb0bfdae1b6'] = $pane;
    $display->panels['contentmain'][1] = 'new-fedde95a-d3aa-4571-8d5c-6eb0bfdae1b6';
    $pane = new stdClass();
    $pane->pid = 'new-e6037fb8-62a2-4602-ae00-0bda7d30bc19';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_lists-panel_pane_1';
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
    $pane->uuid = 'e6037fb8-62a2-4602-ae00-0bda7d30bc19';
    $display->content['new-e6037fb8-62a2-4602-ae00-0bda7d30bc19'] = $pane;
    $display->panels['contentmain'][2] = 'new-e6037fb8-62a2-4602-ae00-0bda7d30bc19';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__listcrit_meta'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function listcrit_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'list_crit_main_page';
  $page->task = 'page';
  $page->admin_title = 'List Crit Main Page';
  $page->admin_description = '';
  $page->path = 'community/listcrit';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'ListCrit',
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
  $handler->name = 'page_list_crit_main_page__panel_context_0def2057-f3c0-420a-bc92-0f1f04d2a921';
  $handler->task = 'page';
  $handler->subtask = 'list_crit_main_page';
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
          'value' => 'ListCrit - Peer reviewed army lists',
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
  $display->layout = 'bootopoly_its';
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
  $display->title = 'List Crit';
  $display->uuid = '7d1a3309-eb58-45c7-acee-fd8265ff2c7d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7cf8d596-b12e-4045-b97d-85c9342434c4';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_lists-panel_pane_2';
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
    $pane->uuid = '7cf8d596-b12e-4045-b97d-85c9342434c4';
    $display->content['new-7cf8d596-b12e-4045-b97d-85c9342434c4'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-7cf8d596-b12e-4045-b97d-85c9342434c4';
    $pane = new stdClass();
    $pane->pid = 'new-71102378-3ebf-41e0-b6c5-820409bccda3';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_lists-panel_pane_3';
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
    $pane->uuid = '71102378-3ebf-41e0-b6c5-820409bccda3';
    $display->content['new-71102378-3ebf-41e0-b6c5-820409bccda3'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-71102378-3ebf-41e0-b6c5-820409bccda3';
    $pane = new stdClass();
    $pane->pid = 'new-aa7869fc-d01d-4ff2-a99b-789064dcb865';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_meta_page_layout-panel_pane_3';
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
    $pane->uuid = 'aa7869fc-d01d-4ff2-a99b-789064dcb865';
    $display->content['new-aa7869fc-d01d-4ff2-a99b-789064dcb865'] = $pane;
    $display->panels['contentmainright'][0] = 'new-aa7869fc-d01d-4ff2-a99b-789064dcb865';
    $pane = new stdClass();
    $pane->pid = 'new-fdedd176-bf73-415d-8fb4-3082d9cbdba9';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<h1>ListCrit</h1>
<h2>Peer reviewed army lists. Does your list pass muster?</h2>',
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
    $pane->uuid = 'fdedd176-bf73-415d-8fb4-3082d9cbdba9';
    $display->content['new-fdedd176-bf73-415d-8fb4-3082d9cbdba9'] = $pane;
    $display->panels['header'][0] = 'new-fdedd176-bf73-415d-8fb4-3082d9cbdba9';
    $pane = new stdClass();
    $pane->pid = 'new-a0cb04cb-da21-4841-b0e1-92cdac3f11c4';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'ListCrit = Netlists',
      'body' => '<p>ListCrit on iToysoldiers is the perfect place to find peer reviewed and assessed army lists for all of your favorite miniature wargames. Conveniently categorized by meta data and army, you can find great lists to use with your army or review what opposing commanders are using with their armies.</p>
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
    $pane->uuid = 'a0cb04cb-da21-4841-b0e1-92cdac3f11c4';
    $display->content['new-a0cb04cb-da21-4841-b0e1-92cdac3f11c4'] = $pane;
    $display->panels['sidebar'][0] = 'new-a0cb04cb-da21-4841-b0e1-92cdac3f11c4';
    $pane = new stdClass();
    $pane->pid = 'new-3bcb7be3-4248-4eef-af09-4b08bc778a12';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'dfp-its1_left_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3bcb7be3-4248-4eef-af09-4b08bc778a12';
    $display->content['new-3bcb7be3-4248-4eef-af09-4b08bc778a12'] = $pane;
    $display->panels['sidebar'][1] = 'new-3bcb7be3-4248-4eef-af09-4b08bc778a12';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['list_crit_main_page'] = $page;

  return $pages;

}
