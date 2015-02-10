<?php
/**
 * @file
 * blogs.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function blogs_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_panel_context';
  $handler->task = 'blog';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'All Blogs',
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
    'panels_breadcrumbs_titles' => 'Community',
    'panels_breadcrumbs_paths' => 'community',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = 'Blogs';
  $display->uuid = '3b5fc809-b9e9-4054-ae3f-e9c23b4d864e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e744023d-3bde-4163-8896-d485e6aa184d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_lists-panel_pane_1';
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
    $pane->uuid = 'e744023d-3bde-4163-8896-d485e6aa184d';
    $display->content['new-e744023d-3bde-4163-8896-d485e6aa184d'] = $pane;
    $display->panels['contentmain'][0] = 'new-e744023d-3bde-4163-8896-d485e6aa184d';
    $pane = new stdClass();
    $pane->pid = 'new-8c409cfc-ec25-4a79-b7c6-ae4f9888c4bc';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '8c409cfc-ec25-4a79-b7c6-ae4f9888c4bc';
    $display->content['new-8c409cfc-ec25-4a79-b7c6-ae4f9888c4bc'] = $pane;
    $display->panels['sidebar'][0] = 'new-8c409cfc-ec25-4a79-b7c6-ae4f9888c4bc';
    $pane = new stdClass();
    $pane->pid = 'new-de8969ab-f497-44bf-8d8c-c834188ad9cb';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_page_layout-panel_pane_3';
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
    $pane->uuid = 'de8969ab-f497-44bf-8d8c-c834188ad9cb';
    $display->content['new-de8969ab-f497-44bf-8d8c-c834188ad9cb'] = $pane;
    $display->panels['sidebar'][1] = 'new-de8969ab-f497-44bf-8d8c-c834188ad9cb';
    $pane = new stdClass();
    $pane->pid = 'new-ae1c6aa9-8bbd-4d7b-8d00-6e1b719526d1';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_lists-panel_pane_3';
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
    $pane->uuid = 'ae1c6aa9-8bbd-4d7b-8d00-6e1b719526d1';
    $display->content['new-ae1c6aa9-8bbd-4d7b-8d00-6e1b719526d1'] = $pane;
    $display->panels['sidebar'][2] = 'new-ae1c6aa9-8bbd-4d7b-8d00-6e1b719526d1';
    $pane = new stdClass();
    $pane->pid = 'new-f9550f19-cb0f-4425-ab02-1d59c429ae23';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_messages-panel_pane_1';
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
    $pane->uuid = 'f9550f19-cb0f-4425-ab02-1d59c429ae23';
    $display->content['new-f9550f19-cb0f-4425-ab02-1d59c429ae23'] = $pane;
    $display->panels['sidebar'][3] = 'new-f9550f19-cb0f-4425-ab02-1d59c429ae23';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e744023d-3bde-4163-8896-d485e6aa184d';
  $handler->conf['display'] = $display;
  $export['blog_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_user_panel_context';
  $handler->task = 'blog_user';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'A Player\'s Blog',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Community
Blogs
',
    'panels_breadcrumbs_paths' => 'community
blog
',
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
  $display->title = '%user:name\'s Blog';
  $display->uuid = 'df7403dc-96b9-45c8-87cd-09d777143bd0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ad700b85-cfa3-437b-970a-e8d43d9d5e10';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_lists-panel_pane_2';
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
    $pane->uuid = 'ad700b85-cfa3-437b-970a-e8d43d9d5e10';
    $display->content['new-ad700b85-cfa3-437b-970a-e8d43d9d5e10'] = $pane;
    $display->panels['contentmain'][0] = 'new-ad700b85-cfa3-437b-970a-e8d43d9d5e10';
    $pane = new stdClass();
    $pane->pid = 'new-dcd4f2b9-fa13-4de3-90d0-d610416cd40c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'dcd4f2b9-fa13-4de3-90d0-d610416cd40c';
    $display->content['new-dcd4f2b9-fa13-4de3-90d0-d610416cd40c'] = $pane;
    $display->panels['sidebar'][0] = 'new-dcd4f2b9-fa13-4de3-90d0-d610416cd40c';
    $pane = new stdClass();
    $pane->pid = 'new-eeb76bf6-a93f-42c0-b76a-e5db252c05ff';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_page_layout-panel_pane_3';
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
    $pane->uuid = 'eeb76bf6-a93f-42c0-b76a-e5db252c05ff';
    $display->content['new-eeb76bf6-a93f-42c0-b76a-e5db252c05ff'] = $pane;
    $display->panels['sidebar'][1] = 'new-eeb76bf6-a93f-42c0-b76a-e5db252c05ff';
    $pane = new stdClass();
    $pane->pid = 'new-6ba3d90c-9bff-494a-856b-2bf6b3b7a112';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_page_layout-panel_pane_7';
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
    $pane->uuid = '6ba3d90c-9bff-494a-856b-2bf6b3b7a112';
    $display->content['new-6ba3d90c-9bff-494a-856b-2bf6b3b7a112'] = $pane;
    $display->panels['sidebar'][2] = 'new-6ba3d90c-9bff-494a-856b-2bf6b3b7a112';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog_user_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Tags',
    'no_blocks' => 1,
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
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'tags' => 'tags',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = 'Tag: %term:name';
  $display->uuid = '41846613-02b0-4982-b959-669c563a6938';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4e7a2c0a-6e88-4fc4-8159-bba1cfaf1b5d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'terms_tags_page_layout-panel_pane_1';
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
    $pane->uuid = '4e7a2c0a-6e88-4fc4-8159-bba1cfaf1b5d';
    $display->content['new-4e7a2c0a-6e88-4fc4-8159-bba1cfaf1b5d'] = $pane;
    $display->panels['contentmain'][0] = 'new-4e7a2c0a-6e88-4fc4-8159-bba1cfaf1b5d';
    $pane = new stdClass();
    $pane->pid = 'new-2da9b69d-a578-4dc3-a205-f1f0cc1c49a0';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '2da9b69d-a578-4dc3-a205-f1f0cc1c49a0';
    $display->content['new-2da9b69d-a578-4dc3-a205-f1f0cc1c49a0'] = $pane;
    $display->panels['sidebar'][0] = 'new-2da9b69d-a578-4dc3-a205-f1f0cc1c49a0';
    $pane = new stdClass();
    $pane->pid = 'new-6f5cec9c-cb1c-47c2-9954-ca08c7fc0ba8';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'terms_tags_page_layout-panel_pane_2';
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
    $pane->uuid = '6f5cec9c-cb1c-47c2-9954-ca08c7fc0ba8';
    $display->content['new-6f5cec9c-cb1c-47c2-9954-ca08c7fc0ba8'] = $pane;
    $display->panels['sidebar'][1] = 'new-6f5cec9c-cb1c-47c2-9954-ca08c7fc0ba8';
    $pane = new stdClass();
    $pane->pid = 'new-282b0e0b-c544-4e58-bf66-9823cda967cf';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => 'About This Category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '282b0e0b-c544-4e58-bf66-9823cda967cf';
    $display->content['new-282b0e0b-c544-4e58-bf66-9823cda967cf'] = $pane;
    $display->panels['sidebar'][2] = 'new-282b0e0b-c544-4e58-bf66-9823cda967cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}
