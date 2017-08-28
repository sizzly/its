<?php
/**
 * @file
 * its_galleries.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_galleries_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_6';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Gallery',
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
      'field_images' => array(
        'override' => 0,
        'label' => 'Images',
        'hidden_field' => 0,
      ),
      'field_armies' => array(
        'override' => 0,
        'label' => 'Categories',
        'hidden_field' => 0,
      ),
      'field_tags' => array(
        'override' => 1,
        'label' => 'Tags',
        'hidden_field' => '1',
      ),
      'field_site_event' => array(
        'override' => 0,
        'label' => 'Taken at a listed event?',
        'hidden_field' => 0,
      ),
      'field_event_link' => array(
        'override' => 0,
        'label' => 'Event',
        'hidden_field' => 0,
      ),
      'field_rating' => array(
        'override' => 0,
        'label' => 'Rating',
        'hidden_field' => 0,
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
              'gallery' => 'gallery',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit_form_mutator_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__galleries';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Galleries',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'galleries',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gallery' => 'gallery',
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
Galleries',
    'panels_breadcrumbs_paths' => 'community
galleries',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = '%node:title';
  $display->uuid = '64eff633-a037-4c73-839c-318c36207725';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__galleries';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dcf7e9fa-51ee-47bb-8de8-f8e19bfe2e89';
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
  $pane->uuid = 'dcf7e9fa-51ee-47bb-8de8-f8e19bfe2e89';
  $display->content['new-dcf7e9fa-51ee-47bb-8de8-f8e19bfe2e89'] = $pane;
  $display->panels['contentmain'][0] = 'new-dcf7e9fa-51ee-47bb-8de8-f8e19bfe2e89';
  $pane = new stdClass();
  $pane->pid = 'new-b0e5d733-a06a-447c-96c0-216d2025e2a0';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b0e5d733-a06a-447c-96c0-216d2025e2a0';
  $display->content['new-b0e5d733-a06a-447c-96c0-216d2025e2a0'] = $pane;
  $display->panels['contentmain'][1] = 'new-b0e5d733-a06a-447c-96c0-216d2025e2a0';
  $pane = new stdClass();
  $pane->pid = 'new-7bcb3c2e-5e3c-40b7-8961-d8557f6f7870';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_node_media_display-panel_pane_1';
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
  $pane->uuid = '7bcb3c2e-5e3c-40b7-8961-d8557f6f7870';
  $display->content['new-7bcb3c2e-5e3c-40b7-8961-d8557f6f7870'] = $pane;
  $display->panels['footer'][0] = 'new-7bcb3c2e-5e3c-40b7-8961-d8557f6f7870';
  $pane = new stdClass();
  $pane->pid = 'new-5d51f092-21ac-4ef2-9059-d2cb5920a9e1';
  $pane->panel = 'footer';
  $pane->type = 'panels_mini';
  $pane->subtype = 'author_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5d51f092-21ac-4ef2-9059-d2cb5920a9e1';
  $display->content['new-5d51f092-21ac-4ef2-9059-d2cb5920a9e1'] = $pane;
  $display->panels['footer'][1] = 'new-5d51f092-21ac-4ef2-9059-d2cb5920a9e1';
  $pane = new stdClass();
  $pane->pid = 'new-d2702f15-7bea-4310-92dc-5fb0cd745995';
  $pane->panel = 'footer';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Add Comment',
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
  $pane->uuid = 'd2702f15-7bea-4310-92dc-5fb0cd745995';
  $display->content['new-d2702f15-7bea-4310-92dc-5fb0cd745995'] = $pane;
  $display->panels['footer'][2] = 'new-d2702f15-7bea-4310-92dc-5fb0cd745995';
  $pane = new stdClass();
  $pane->pid = 'new-68c0f2d9-bc84-4cde-a510-02f59e8aa1ac';
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '68c0f2d9-bc84-4cde-a510-02f59e8aa1ac';
  $display->content['new-68c0f2d9-bc84-4cde-a510-02f59e8aa1ac'] = $pane;
  $display->panels['footer'][3] = 'new-68c0f2d9-bc84-4cde-a510-02f59e8aa1ac';
  $pane = new stdClass();
  $pane->pid = 'new-5acf59ac-3d3f-416d-9fa2-c1f0a978440b';
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
    'css_class' => 'text-center',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5acf59ac-3d3f-416d-9fa2-c1f0a978440b';
  $display->content['new-5acf59ac-3d3f-416d-9fa2-c1f0a978440b'] = $pane;
  $display->panels['header'][0] = 'new-5acf59ac-3d3f-416d-9fa2-c1f0a978440b';
  $pane = new stdClass();
  $pane->pid = 'new-fb3cff6b-f838-4844-b0fb-3e283a541990';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_all_node_layout-panel_pane_6';
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
  $pane->uuid = 'fb3cff6b-f838-4844-b0fb-3e283a541990';
  $display->content['new-fb3cff6b-f838-4844-b0fb-3e283a541990'] = $pane;
  $display->panels['header'][1] = 'new-fb3cff6b-f838-4844-b0fb-3e283a541990';
  $pane = new stdClass();
  $pane->pid = 'new-fabd08c8-e0aa-40e3-add4-347ba867430f';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'add_image_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fabd08c8-e0aa-40e3-add4-347ba867430f';
  $display->content['new-fabd08c8-e0aa-40e3-add4-347ba867430f'] = $pane;
  $display->panels['header'][2] = 'new-fabd08c8-e0aa-40e3-add4-347ba867430f';
  $pane = new stdClass();
  $pane->pid = 'new-f8b80232-d77e-4dd2-aef0-a87d90dd2bd3';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Categories',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-tags fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong><?php print views_embed_view("galleries_all_page_layout", "panel_pane_4"); ?></strong>
        <small>Categories</small>
    </div>
</div>
<div class="seperator"></div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f8b80232-d77e-4dd2-aef0-a87d90dd2bd3';
  $display->content['new-f8b80232-d77e-4dd2-aef0-a87d90dd2bd3'] = $pane;
  $display->panels['sidebar'][0] = 'new-f8b80232-d77e-4dd2-aef0-a87d90dd2bd3';
  $pane = new stdClass();
  $pane->pid = 'new-ae443aa4-e0da-4914-8f2b-648eaa1e4a69';
  $pane->panel = 'sidebar';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Details',
    'override_title_heading' => 'span',
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
  $pane->uuid = 'ae443aa4-e0da-4914-8f2b-648eaa1e4a69';
  $display->content['new-ae443aa4-e0da-4914-8f2b-648eaa1e4a69'] = $pane;
  $display->panels['sidebar'][1] = 'new-ae443aa4-e0da-4914-8f2b-648eaa1e4a69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__galleries'] = $handler;

  return $export;
}
