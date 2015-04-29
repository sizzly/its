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
  $handler->name = 'node_view_panel_context_11';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Blog Posts',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Blogs
%node:author\'s Blog',
    'panels_breadcrumbs_paths' => 'blog
blog/%node:author:uid
',
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
  $display->title = '';
  $display->uuid = '5bc30c38-a229-4599-a045-db980ef258b7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-df68ab97-53cd-40e5-9430-dc7d259016b5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'df68ab97-53cd-40e5-9430-dc7d259016b5';
    $display->content['new-df68ab97-53cd-40e5-9430-dc7d259016b5'] = $pane;
    $display->panels['contentmain'][0] = 'new-df68ab97-53cd-40e5-9430-dc7d259016b5';
    $pane = new stdClass();
    $pane->pid = 'new-24c2f374-74e3-4921-8994-fce9bac4c1b0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'lightbox2__lightbox__hero_image_page__original',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'hero_image_page',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'thumbnail topbuffer',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '24c2f374-74e3-4921-8994-fce9bac4c1b0';
    $display->content['new-24c2f374-74e3-4921-8994-fce9bac4c1b0'] = $pane;
    $display->panels['contentmain'][1] = 'new-24c2f374-74e3-4921-8994-fce9bac4c1b0';
    $pane = new stdClass();
    $pane->pid = 'new-49c691bd-daa5-418a-a667-e41b8f9becd6';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '49c691bd-daa5-418a-a667-e41b8f9becd6';
    $display->content['new-49c691bd-daa5-418a-a667-e41b8f9becd6'] = $pane;
    $display->panels['contentmain'][2] = 'new-49c691bd-daa5-418a-a667-e41b8f9becd6';
    $pane = new stdClass();
    $pane->pid = 'new-f9934437-6285-4389-b5a0-d8e4b9eae6a8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_page_layout-panel_pane_5';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f9934437-6285-4389-b5a0-d8e4b9eae6a8';
    $display->content['new-f9934437-6285-4389-b5a0-d8e4b9eae6a8'] = $pane;
    $display->panels['contentmain'][3] = 'new-f9934437-6285-4389-b5a0-d8e4b9eae6a8';
    $pane = new stdClass();
    $pane->pid = 'new-8ae3751e-25f0-4abf-85c6-2da56e8bd0b0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_page_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8ae3751e-25f0-4abf-85c6-2da56e8bd0b0';
    $display->content['new-8ae3751e-25f0-4abf-85c6-2da56e8bd0b0'] = $pane;
    $display->panels['contentmain'][4] = 'new-8ae3751e-25f0-4abf-85c6-2da56e8bd0b0';
    $pane = new stdClass();
    $pane->pid = 'new-10764bdf-4ded-4269-8b80-53e62d272d1c';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'hr_spacer';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '10764bdf-4ded-4269-8b80-53e62d272d1c';
    $display->content['new-10764bdf-4ded-4269-8b80-53e62d272d1c'] = $pane;
    $display->panels['contentmain'][5] = 'new-10764bdf-4ded-4269-8b80-53e62d272d1c';
    $pane = new stdClass();
    $pane->pid = 'new-b5614d85-09d0-4817-8fab-0cac70c9f1d7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'comments_all_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b5614d85-09d0-4817-8fab-0cac70c9f1d7';
    $display->content['new-b5614d85-09d0-4817-8fab-0cac70c9f1d7'] = $pane;
    $display->panels['contentmain'][6] = 'new-b5614d85-09d0-4817-8fab-0cac70c9f1d7';
    $pane = new stdClass();
    $pane->pid = 'new-e00b6621-5b6e-4be1-b849-69a6f0f9e1cf';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e00b6621-5b6e-4be1-b849-69a6f0f9e1cf';
    $display->content['new-e00b6621-5b6e-4be1-b849-69a6f0f9e1cf'] = $pane;
    $display->panels['contentmain'][7] = 'new-e00b6621-5b6e-4be1-b849-69a6f0f9e1cf';
    $pane = new stdClass();
    $pane->pid = 'new-0a80cc75-a831-4b8c-b6a4-0599ebb5286b';
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
    $pane->uuid = '0a80cc75-a831-4b8c-b6a4-0599ebb5286b';
    $display->content['new-0a80cc75-a831-4b8c-b6a4-0599ebb5286b'] = $pane;
    $display->panels['sidebar'][0] = 'new-0a80cc75-a831-4b8c-b6a4-0599ebb5286b';
    $pane = new stdClass();
    $pane->pid = 'new-42928f83-b347-40ca-af3b-00ea537f6f8a';
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
    $pane->uuid = '42928f83-b347-40ca-af3b-00ea537f6f8a';
    $display->content['new-42928f83-b347-40ca-af3b-00ea537f6f8a'] = $pane;
    $display->panels['sidebar'][1] = 'new-42928f83-b347-40ca-af3b-00ea537f6f8a';
    $pane = new stdClass();
    $pane->pid = 'new-87d3696b-c942-4b13-aed3-9ef98a624daf';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_page_layout-panel_pane_4';
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
    $pane->uuid = '87d3696b-c942-4b13-aed3-9ef98a624daf';
    $display->content['new-87d3696b-c942-4b13-aed3-9ef98a624daf'] = $pane;
    $display->panels['sidebar'][2] = 'new-87d3696b-c942-4b13-aed3-9ef98a624daf';
    $pane = new stdClass();
    $pane->pid = 'new-28024372-b556-4dc4-991a-b6abe66a3865';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_all_page_layout-panel_pane_6';
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
    $pane->uuid = '28024372-b556-4dc4-991a-b6abe66a3865';
    $display->content['new-28024372-b556-4dc4-991a-b6abe66a3865'] = $pane;
    $display->panels['sidebar'][3] = 'new-28024372-b556-4dc4-991a-b6abe66a3865';
    $pane = new stdClass();
    $pane->pid = 'new-9f3873e8-e4ca-46bb-9576-4321cd6271c2';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9f3873e8-e4ca-46bb-9576-4321cd6271c2';
    $display->content['new-9f3873e8-e4ca-46bb-9576-4321cd6271c2'] = $pane;
    $display->panels['sidebar'][4] = 'new-9f3873e8-e4ca-46bb-9576-4321cd6271c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0a80cc75-a831-4b8c-b6a4-0599ebb5286b';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

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
