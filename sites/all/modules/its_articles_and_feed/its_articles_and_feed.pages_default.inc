<?php
/**
 * @file
 * its_articles_and_feed.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_articles_and_feed_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__articles';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Articles',
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
      'field_tags' => array(
        'override' => 0,
        'label' => 'Tags',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'field_event_link' => array(
        'override' => 1,
        'label' => 'War Zone',
        'hidden_field' => '1',
      ),
      'field_website' => array(
        'override' => 1,
        'label' => 'Source',
        'hidden_field' => '1',
      ),
      'og_group_ref' => array(
        'override' => 0,
        'label' => 'Groups audience',
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
      ':flag' => array(
        'override' => 0,
        'label' => 'Flags',
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
    'name' => 'articles',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $export['node_edit__articles'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__articles';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Articles',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'articles',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
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
  $display->title = '%node:title';
  $display->uuid = '5d2bb62c-5743-4542-bda5-938cca876016';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__articles';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bc73b34e-a21f-42a0-a644-7362bba38383';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_all_page_layout-panel_pane_7';
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
  $pane->uuid = 'bc73b34e-a21f-42a0-a644-7362bba38383';
  $display->content['new-bc73b34e-a21f-42a0-a644-7362bba38383'] = $pane;
  $display->panels['contentmain'][0] = 'new-bc73b34e-a21f-42a0-a644-7362bba38383';
  $pane = new stdClass();
  $pane->pid = 'new-7f1ac6bf-7e3e-430c-a066-0d979f7716b2';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_all_page_layout-panel_pane_1';
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
  $pane->uuid = '7f1ac6bf-7e3e-430c-a066-0d979f7716b2';
  $display->content['new-7f1ac6bf-7e3e-430c-a066-0d979f7716b2'] = $pane;
  $display->panels['contentmain'][1] = 'new-7f1ac6bf-7e3e-430c-a066-0d979f7716b2';
  $pane = new stdClass();
  $pane->pid = 'new-97166ed1-9653-452b-93f2-e448c2e4dd1c';
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
  $pane->uuid = '97166ed1-9653-452b-93f2-e448c2e4dd1c';
  $display->content['new-97166ed1-9653-452b-93f2-e448c2e4dd1c'] = $pane;
  $display->panels['contentmain'][2] = 'new-97166ed1-9653-452b-93f2-e448c2e4dd1c';
  $pane = new stdClass();
  $pane->pid = 'new-3679b156-13a1-4bc3-8626-8696b7808b48';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3679b156-13a1-4bc3-8626-8696b7808b48';
  $display->content['new-3679b156-13a1-4bc3-8626-8696b7808b48'] = $pane;
  $display->panels['footer'][0] = 'new-3679b156-13a1-4bc3-8626-8696b7808b48';
  $pane = new stdClass();
  $pane->pid = 'new-17e9f7ef-4572-4de1-b423-605f23342964';
  $pane->panel = 'footer';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Comment',
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
  $pane->uuid = '17e9f7ef-4572-4de1-b423-605f23342964';
  $display->content['new-17e9f7ef-4572-4de1-b423-605f23342964'] = $pane;
  $display->panels['footer'][1] = 'new-17e9f7ef-4572-4de1-b423-605f23342964';
  $pane = new stdClass();
  $pane->pid = 'new-b511b900-ad91-4acf-82b4-b713226442ec';
  $pane->panel = 'footer';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '300',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Comments',
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
  $pane->uuid = 'b511b900-ad91-4acf-82b4-b713226442ec';
  $display->content['new-b511b900-ad91-4acf-82b4-b713226442ec'] = $pane;
  $display->panels['footer'][2] = 'new-b511b900-ad91-4acf-82b4-b713226442ec';
  $pane = new stdClass();
  $pane->pid = 'new-55afcbfc-827e-4095-ab31-bd2453deb0eb';
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
  $pane->uuid = '55afcbfc-827e-4095-ab31-bd2453deb0eb';
  $display->content['new-55afcbfc-827e-4095-ab31-bd2453deb0eb'] = $pane;
  $display->panels['header'][0] = 'new-55afcbfc-827e-4095-ab31-bd2453deb0eb';
  $pane = new stdClass();
  $pane->pid = 'new-e84e881b-956a-4764-a812-f2de5358d4a3';
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
  $pane->uuid = 'e84e881b-956a-4764-a812-f2de5358d4a3';
  $display->content['new-e84e881b-956a-4764-a812-f2de5358d4a3'] = $pane;
  $display->panels['header'][1] = 'new-e84e881b-956a-4764-a812-f2de5358d4a3';
  $pane = new stdClass();
  $pane->pid = 'new-30b0ddd8-f591-453c-a601-0f00fb6da530';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'expandText' => 'Expand »',
      'expandPrefix' => '...',
      'collapseTimer' => '',
      'slicePoint' => '450',
      'userCollapseText' => 'Collapse',
      'userCollapsePrefix' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '30b0ddd8-f591-453c-a601-0f00fb6da530';
  $display->content['new-30b0ddd8-f591-453c-a601-0f00fb6da530'] = $pane;
  $display->panels['sidebar'][0] = 'new-30b0ddd8-f591-453c-a601-0f00fb6da530';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__articles'] = $handler;

  return $export;
}
