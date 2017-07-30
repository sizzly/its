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
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Blog Entry',
    'form_title' => '',
    'contexts' => array(),
    'relationships' => array(),
    'modification' => array(
      ':title' => array(
        'override' => 0,
        'label' => 'Title',
        'hidden_field' => 0,
      ),
      'body' => array(
        'override' => 0,
        'label' => 'Body',
        'hidden_field' => 0,
      ),
      'field_blog_army' => array(
        'override' => 0,
        'label' => 'Tags',
        'hidden_field' => 0,
      ),
      'field_rate_content' => array(
        'override' => 0,
        'label' => 'Rate Content',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'field_points_per_army' => array(
        'override' => 1,
        'label' => 'Points',
        'hidden_field' => '1',
      ),
      'field_site_event' => array(
        'override' => 1,
        'label' => 'List Crit',
        'hidden_field' => '1',
      ),
      'field_your_army' => array(
        'override' => 1,
        'label' => 'Army',
        'hidden_field' => '1',
      ),
      'field_opponent_s_army' => array(
        'override' => 1,
        'label' => 'Designed to defeat',
        'hidden_field' => '1',
      ),
      'field_list_crit_tags' => array(
        'override' => 1,
        'label' => 'List Crit Tags',
        'hidden_field' => '1',
      ),
      'field_batteresult_commander' => array(
        'override' => 1,
        'label' => 'Commander',
        'hidden_field' => '1',
      ),
      'field_listcrit_component_units' => array(
        'override' => 1,
        'label' => 'Component Units',
        'hidden_field' => '1',
      ),
      'field_allied_detatchment' => array(
        'override' => 1,
        'label' => 'Allied Detatchment',
        'hidden_field' => '1',
      ),
      ':author' => array(
        'override' => 0,
        'label' => 'Authoring information',
        'hidden_field' => 0,
      ),
      ':menu' => array(
        'override' => 0,
        'label' => 'Menu settings',
        'hidden_field' => 0,
      ),
      ':comment_settings' => array(
        'override' => 0,
        'label' => 'Comment settings',
        'hidden_field' => 0,
      ),
      ':path' => array(
        'override' => 0,
        'label' => 'URL path settings',
        'hidden_field' => 0,
      ),
      ':options' => array(
        'override' => 0,
        'label' => 'Publishing options',
        'hidden_field' => 0,
      ),
      ':revision_information' => array(
        'override' => 0,
        'label' => 'Revision information',
        'hidden_field' => 0,
      ),
      ':redirect' => array(
        'override' => 0,
        'label' => 'URL redirects',
        'hidden_field' => 0,
      ),
      ':actions:submit' => array(
        'override' => 0,
        'label' => 'Save',
        'hidden_field' => 0,
      ),
      ':actions:preview' => array(
        'override' => 0,
        'label' => 'Preview',
        'hidden_field' => 0,
      ),
      ':actions:delete' => array(
        'override' => 0,
        'label' => 'Delete',
        'hidden_field' => 0,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit_form_mutator_2'] = $handler;

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
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5bc30c38-a229-4599-a045-db980ef258b7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_11';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-330a9d16-5c12-41da-962d-10219a50a4a3';
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
  $pane->uuid = '330a9d16-5c12-41da-962d-10219a50a4a3';
  $display->content['new-330a9d16-5c12-41da-962d-10219a50a4a3'] = $pane;
  $display->panels['contentmain'][0] = 'new-330a9d16-5c12-41da-962d-10219a50a4a3';
  $pane = new stdClass();
  $pane->pid = 'new-188335b8-4697-49d1-a4d1-7377f4eb7773';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'blogs_all_page_layout-panel_pane_4';
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
  $pane->uuid = '188335b8-4697-49d1-a4d1-7377f4eb7773';
  $display->content['new-188335b8-4697-49d1-a4d1-7377f4eb7773'] = $pane;
  $display->panels['contentmain'][1] = 'new-188335b8-4697-49d1-a4d1-7377f4eb7773';
  $pane = new stdClass();
  $pane->pid = 'new-2b283703-1f43-4894-a0ea-de56b27183fa';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_node_similar_by_term-panel_pane_1';
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
  $pane->uuid = '2b283703-1f43-4894-a0ea-de56b27183fa';
  $display->content['new-2b283703-1f43-4894-a0ea-de56b27183fa'] = $pane;
  $display->panels['contentmain'][2] = 'new-2b283703-1f43-4894-a0ea-de56b27183fa';
  $pane = new stdClass();
  $pane->pid = 'new-a0295247-693b-46a9-88a4-e7c9e6d6b7e1';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_all_node_layout-panel_pane_4';
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
  $pane->uuid = 'a0295247-693b-46a9-88a4-e7c9e6d6b7e1';
  $display->content['new-a0295247-693b-46a9-88a4-e7c9e6d6b7e1'] = $pane;
  $display->panels['footer'][0] = 'new-a0295247-693b-46a9-88a4-e7c9e6d6b7e1';
  $pane = new stdClass();
  $pane->pid = 'new-e00b6621-5b6e-4be1-b849-69a6f0f9e1cf';
  $pane->panel = 'footer';
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
  $pane->uuid = 'e00b6621-5b6e-4be1-b849-69a6f0f9e1cf';
  $display->content['new-e00b6621-5b6e-4be1-b849-69a6f0f9e1cf'] = $pane;
  $display->panels['footer'][1] = 'new-e00b6621-5b6e-4be1-b849-69a6f0f9e1cf';
  $pane = new stdClass();
  $pane->pid = 'new-e5082853-0c5e-4cff-9494-be7b829a3133';
  $pane->panel = 'footer';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '0',
    'comments_per_page' => '30',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e5082853-0c5e-4cff-9494-be7b829a3133';
  $display->content['new-e5082853-0c5e-4cff-9494-be7b829a3133'] = $pane;
  $display->panels['footer'][2] = 'new-e5082853-0c5e-4cff-9494-be7b829a3133';
  $pane = new stdClass();
  $pane->pid = 'new-b66c8982-8287-440f-ac2d-b4efad76723a';
  $pane->panel = 'header';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b66c8982-8287-440f-ac2d-b4efad76723a';
  $display->content['new-b66c8982-8287-440f-ac2d-b4efad76723a'] = $pane;
  $display->panels['header'][0] = 'new-b66c8982-8287-440f-ac2d-b4efad76723a';
  $pane = new stdClass();
  $pane->pid = 'new-eb82bd7d-9cbd-4cea-ad0a-04abfe1d9b56';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_all_node_layout-panel_pane_3';
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
  $pane->uuid = 'eb82bd7d-9cbd-4cea-ad0a-04abfe1d9b56';
  $display->content['new-eb82bd7d-9cbd-4cea-ad0a-04abfe1d9b56'] = $pane;
  $display->panels['header'][1] = 'new-eb82bd7d-9cbd-4cea-ad0a-04abfe1d9b56';
  $pane = new stdClass();
  $pane->pid = 'new-49c691bd-daa5-418a-a667-e41b8f9becd6';
  $pane->panel = 'sidebar';
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
  $pane->uuid = '49c691bd-daa5-418a-a667-e41b8f9becd6';
  $display->content['new-49c691bd-daa5-418a-a667-e41b8f9becd6'] = $pane;
  $display->panels['sidebar'][0] = 'new-49c691bd-daa5-418a-a667-e41b8f9becd6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_7';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
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
        'description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'abstract' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'keywords' => array(
          'value' => '[term:name] battles, [term:field-army-game:name] battles',
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
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'og:type' => array(
          'value' => 'website',
        ),
      ),
    ),
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
  $display->title = '%term:name';
  $display->uuid = 'a5173420-e4f8-436e-9644-c681e4248859';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-51588cfa-c1c9-4563-89b7-36c448171431';
  $pane->panel = 'footer';
  $pane->type = 'views';
  $pane->subtype = 'core_term_content_lists';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_1',
    'context' => array(
      0 => 'argument_term_1.tid',
    ),
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
  $pane->uuid = '51588cfa-c1c9-4563-89b7-36c448171431';
  $display->content['new-51588cfa-c1c9-4563-89b7-36c448171431'] = $pane;
  $display->panels['footer'][0] = 'new-51588cfa-c1c9-4563-89b7-36c448171431';
  $pane = new stdClass();
  $pane->pid = 'new-638f6dc1-29aa-473e-9dbc-66fd8d8f60c9';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'hero_image_newsletter',
      'image_link' => '',
    ),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '638f6dc1-29aa-473e-9dbc-66fd8d8f60c9';
  $display->content['new-638f6dc1-29aa-473e-9dbc-66fd8d8f60c9'] = $pane;
  $display->panels['header'][0] = 'new-638f6dc1-29aa-473e-9dbc-66fd8d8f60c9';
  $pane = new stdClass();
  $pane->pid = 'new-4d5a187c-945c-4bff-99d5-0e8bd4477b21';
  $pane->panel = 'header';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => 'Brief',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4d5a187c-945c-4bff-99d5-0e8bd4477b21';
  $display->content['new-4d5a187c-945c-4bff-99d5-0e8bd4477b21'] = $pane;
  $display->panels['header'][1] = 'new-4d5a187c-945c-4bff-99d5-0e8bd4477b21';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function blogs_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'community_main_page';
  $page->task = 'page';
  $page->admin_title = 'Community Main Page';
  $page->admin_description = '';
  $page->path = 'community';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Community',
    'name' => 'main-menu',
    'weight' => '50',
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
  $handler->name = 'page_community_main_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'community_main_page';
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
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Community | [site:name]',
        ),
        'description' => array(
          'value' => 'Miniature wargamers, their blogs, galleries and discussions. Oh! And site wide leaderboards for all sorts of wargaming stats and achievements.',
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
  $display->layout = 'bootopoly_moscone';
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
  $display->title = '';
  $display->uuid = 'b932ffed-e46a-4626-bde4-a12d83fc291c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_community_main_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-20cff199-115d-4b64-ba49-ff38ae9f69bc';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'leaderboards_all_tables-panel_pane_7';
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
  $pane->uuid = '20cff199-115d-4b64-ba49-ff38ae9f69bc';
  $display->content['new-20cff199-115d-4b64-ba49-ff38ae9f69bc'] = $pane;
  $display->panels['contentmain'][0] = 'new-20cff199-115d-4b64-ba49-ff38ae9f69bc';
  $pane = new stdClass();
  $pane->pid = 'new-5d263c0c-4a14-48d3-8eec-21a509d619f9';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Jumbotron',
    'title' => '',
    'body' => '<div class="jumbotron">
  <h1>Community on iToysoldiers</h1>
  <h2>ranking wargamers and their blogs, galleries and discussions</h2>
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
  $pane->uuid = '5d263c0c-4a14-48d3-8eec-21a509d619f9';
  $display->content['new-5d263c0c-4a14-48d3-8eec-21a509d619f9'] = $pane;
  $display->panels['header'][0] = 'new-5d263c0c-4a14-48d3-8eec-21a509d619f9';
  $pane = new stdClass();
  $pane->pid = 'new-f7440895-104b-4c5a-b15c-9f116864418b';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Nav Bar',
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
      <a class="navbar-brand" href="#">Community</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/blog">Blogs</a></li>
        <li><a href="/galleries">Galleries</a></li>
        <li><a href="/forum">Discussions</a></li>
        <li><a href="/wargaming-decorations/leaderboards">Leaderboards</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
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
  $pane->uuid = 'f7440895-104b-4c5a-b15c-9f116864418b';
  $display->content['new-f7440895-104b-4c5a-b15c-9f116864418b'] = $pane;
  $display->panels['header'][1] = 'new-f7440895-104b-4c5a-b15c-9f116864418b';
  $pane = new stdClass();
  $pane->pid = 'new-c24a6d90-0c0a-47bf-9c70-edb19aa564ea';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'blogs_all_lists-panel_pane_4';
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
  $pane->uuid = 'c24a6d90-0c0a-47bf-9c70-edb19aa564ea';
  $display->content['new-c24a6d90-0c0a-47bf-9c70-edb19aa564ea'] = $pane;
  $display->panels['sidebar'][0] = 'new-c24a6d90-0c0a-47bf-9c70-edb19aa564ea';
  $pane = new stdClass();
  $pane->pid = 'new-1846e006-09b1-4ffd-9d57-8950701e3757';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'galleries_all_lists-panel_pane_1';
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
  $pane->uuid = '1846e006-09b1-4ffd-9d57-8950701e3757';
  $display->content['new-1846e006-09b1-4ffd-9d57-8950701e3757'] = $pane;
  $display->panels['sidebar'][1] = 'new-1846e006-09b1-4ffd-9d57-8950701e3757';
  $pane = new stdClass();
  $pane->pid = 'new-45adc5f6-001f-4808-8144-e388bd840079';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'forum_all_lists-panel_pane_1';
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
  $pane->uuid = '45adc5f6-001f-4808-8144-e388bd840079';
  $display->content['new-45adc5f6-001f-4808-8144-e388bd840079'] = $pane;
  $display->panels['sidebar'][2] = 'new-45adc5f6-001f-4808-8144-e388bd840079';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['community_main_page'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gazetteer_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Gazetteer Landing Page';
  $page->admin_description = '';
  $page->path = 'gazetteer/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Gazetteer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Gazetteer',
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
  $handler->name = 'page_gazetteer_landing_page__panel_context_caf88edd-4546-4f0d-b437-d6b4cc4f2f52';
  $handler->task = 'page';
  $handler->subtask = 'gazetteer_landing_page';
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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Gazetteer',
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
  $display->title = '';
  $display->uuid = '0a3c6fbe-cb58-4cf3-b372-b426899be541';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_gazetteer_landing_page__panel_context_caf88edd-4546-4f0d-b437-d6b4cc4f2f52';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9d72a366-426b-4874-9849-d12ba52cff89';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_node_trending_content-panel_pane_4';
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
  $pane->uuid = '9d72a366-426b-4874-9849-d12ba52cff89';
  $display->content['new-9d72a366-426b-4874-9849-d12ba52cff89'] = $pane;
  $display->panels['contentmainbottom'][0] = 'new-9d72a366-426b-4874-9849-d12ba52cff89';
  $pane = new stdClass();
  $pane->pid = 'new-d5b99858-2ef4-4dd7-b71d-361b9a708f67';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_node_trending_content-panel_pane_3';
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
  $pane->uuid = 'd5b99858-2ef4-4dd7-b71d-361b9a708f67';
  $display->content['new-d5b99858-2ef4-4dd7-b71d-361b9a708f67'] = $pane;
  $display->panels['contentmainbottom'][1] = 'new-d5b99858-2ef4-4dd7-b71d-361b9a708f67';
  $pane = new stdClass();
  $pane->pid = 'new-679f309c-4c8f-4620-b34a-f8e5bf641494';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_node_trending_content-panel_pane_5';
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
  $pane->uuid = '679f309c-4c8f-4620-b34a-f8e5bf641494';
  $display->content['new-679f309c-4c8f-4620-b34a-f8e5bf641494'] = $pane;
  $display->panels['contentmainbottom'][2] = 'new-679f309c-4c8f-4620-b34a-f8e5bf641494';
  $pane = new stdClass();
  $pane->pid = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Jumbotron',
    'title' => '',
    'body' => '<div class="jumbotron">
<h1>Gazetteer</h1>
<h2> player blogs, galleries, and discussions</h2>
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
  $pane->uuid = 'aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
  $display->content['new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc'] = $pane;
  $display->panels['header'][0] = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
  $pane = new stdClass();
  $pane->pid = 'new-d03117a9-5b8c-44be-97e3-d5c0e9f68093';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Nav',
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
      <a class="navbar-brand" href="#">Gazatteer</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/blog">Blogs</a></li>
        <li><a href="/galleries">Galleries</a></li>
        <li><a href="/forum">Discussions</a></li>

      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
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
  $pane->uuid = 'd03117a9-5b8c-44be-97e3-d5c0e9f68093';
  $display->content['new-d03117a9-5b8c-44be-97e3-d5c0e9f68093'] = $pane;
  $display->panels['header'][1] = 'new-d03117a9-5b8c-44be-97e3-d5c0e9f68093';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gazetteer_landing_page'] = $page;

  return $pages;

}
