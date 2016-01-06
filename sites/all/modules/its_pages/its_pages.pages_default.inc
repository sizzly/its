<?php
/**
 * @file
 * its_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_pages_default_page_manager_handlers() {
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
    'panels_breadcrumbs_titles' => 'Community',
    'panels_breadcrumbs_paths' => 'community',
    'panels_breadcrumbs_home' => 0,
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
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gazatteer
Blogs
',
    'panels_breadcrumbs_paths' => 'gazetteer
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
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Blog Posts',
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
    $pane->pid = 'new-b66c8982-8287-440f-ac2d-b4efad76723a';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'thumbnail text-center',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b66c8982-8287-440f-ac2d-b4efad76723a';
    $display->content['new-b66c8982-8287-440f-ac2d-b4efad76723a'] = $pane;
    $display->panels['contentmain'][1] = 'new-b66c8982-8287-440f-ac2d-b4efad76723a';
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
    $pane->pid = 'new-df02baff-76ac-4cb2-af02-001ec9cff576';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_1';
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
    $pane->uuid = 'df02baff-76ac-4cb2-af02-001ec9cff576';
    $display->content['new-df02baff-76ac-4cb2-af02-001ec9cff576'] = $pane;
    $display->panels['contentmain'][5] = 'new-df02baff-76ac-4cb2-af02-001ec9cff576';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '10764bdf-4ded-4269-8b80-53e62d272d1c';
    $display->content['new-10764bdf-4ded-4269-8b80-53e62d272d1c'] = $pane;
    $display->panels['contentmain'][6] = 'new-10764bdf-4ded-4269-8b80-53e62d272d1c';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b5614d85-09d0-4817-8fab-0cac70c9f1d7';
    $display->content['new-b5614d85-09d0-4817-8fab-0cac70c9f1d7'] = $pane;
    $display->panels['contentmain'][7] = 'new-b5614d85-09d0-4817-8fab-0cac70c9f1d7';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'e00b6621-5b6e-4be1-b849-69a6f0f9e1cf';
    $display->content['new-e00b6621-5b6e-4be1-b849-69a6f0f9e1cf'] = $pane;
    $display->panels['contentmain'][8] = 'new-e00b6621-5b6e-4be1-b849-69a6f0f9e1cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
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
  $export['node_view_panel_context_8'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
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
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'achievement_category' => 'achievement_category',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Decorations
Achievements',
    'panels_breadcrumbs_paths' => 'wargaming-decorations
wargaming-decorations/achievements',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
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
  $display->title = 'Achievements: %term:name';
  $display->uuid = 'f7326251-f11b-44ed-9e4d-3377f26b74a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ea0c1355-124d-4db1-a2f5-a1f5745ff8c0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'achievement_category_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'ea0c1355-124d-4db1-a2f5-a1f5745ff8c0';
    $display->content['new-ea0c1355-124d-4db1-a2f5-a1f5745ff8c0'] = $pane;
    $display->panels['contentmain'][0] = 'new-ea0c1355-124d-4db1-a2f5-a1f5745ff8c0';
    $pane = new stdClass();
    $pane->pid = 'new-1aa5f7ae-7703-4747-849b-442151fc3f60';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'achievements_all_lists-panel_pane_1';
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
    $pane->uuid = '1aa5f7ae-7703-4747-849b-442151fc3f60';
    $display->content['new-1aa5f7ae-7703-4747-849b-442151fc3f60'] = $pane;
    $display->panels['contentmain'][1] = 'new-1aa5f7ae-7703-4747-849b-442151fc3f60';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function its_pages_default_page_manager_pages() {
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
  $handler->name = 'page_achievements_page_panel_context';
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
