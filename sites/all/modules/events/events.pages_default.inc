<?php
/**
 * @file
 * events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function events_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Events',
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
        'label' => 'Description',
        'hidden_field' => 0,
      ),
      'field_event_date' => array(
        'override' => 0,
        'label' => 'Date',
        'hidden_field' => 0,
      ),
      'field_event_type' => array(
        'override' => 0,
        'label' => 'Event type',
        'hidden_field' => 0,
      ),
      'field_location' => array(
        'override' => 0,
        'label' => 'Location',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'field_supported_games' => array(
        'override' => 0,
        'label' => 'Supported Games',
        'hidden_field' => 0,
      ),
      'field_event_link' => array(
        'override' => 1,
        'label' => 'War Zone',
        'hidden_field' => '1',
      ),
      'field_website' => array(
        'override' => 0,
        'label' => 'More Info',
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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit_form_mutator'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Events',
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
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'War Zones
Events',
    'panels_breadcrumbs_paths' => 'warzone
warzone/events',
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
  $display->uuid = '93df7b4d-4261-45e1-a437-c8e3eba524ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-285b6bca-7d6d-4a7f-97a1-c422a8464e01';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_1';
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
    $pane->uuid = '285b6bca-7d6d-4a7f-97a1-c422a8464e01';
    $display->content['new-285b6bca-7d6d-4a7f-97a1-c422a8464e01'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-285b6bca-7d6d-4a7f-97a1-c422a8464e01';
    $pane = new stdClass();
    $pane->pid = 'new-64cc4a0a-8732-40cd-9d4c-417fa65094b8';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_6';
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
    $pane->uuid = '64cc4a0a-8732-40cd-9d4c-417fa65094b8';
    $display->content['new-64cc4a0a-8732-40cd-9d4c-417fa65094b8'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-64cc4a0a-8732-40cd-9d4c-417fa65094b8';
    $pane = new stdClass();
    $pane->pid = 'new-e73ce7c7-050f-45c4-b9ab-ee243f6f5056';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_2';
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
    $pane->uuid = 'e73ce7c7-050f-45c4-b9ab-ee243f6f5056';
    $display->content['new-e73ce7c7-050f-45c4-b9ab-ee243f6f5056'] = $pane;
    $display->panels['contentmainright'][0] = 'new-e73ce7c7-050f-45c4-b9ab-ee243f6f5056';
    $pane = new stdClass();
    $pane->pid = 'new-7369f905-2ee7-46b1-84de-d3bde7bb58d2';
    $pane->panel = 'footer';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Details',
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
    $pane->uuid = '7369f905-2ee7-46b1-84de-d3bde7bb58d2';
    $display->content['new-7369f905-2ee7-46b1-84de-d3bde7bb58d2'] = $pane;
    $display->panels['footer'][0] = 'new-7369f905-2ee7-46b1-84de-d3bde7bb58d2';
    $pane = new stdClass();
    $pane->pid = 'new-941a6d00-81d6-4788-b35d-8a45f504ad23';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_3';
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
    $pane->uuid = '941a6d00-81d6-4788-b35d-8a45f504ad23';
    $display->content['new-941a6d00-81d6-4788-b35d-8a45f504ad23'] = $pane;
    $display->panels['footer'][1] = 'new-941a6d00-81d6-4788-b35d-8a45f504ad23';
    $pane = new stdClass();
    $pane->pid = 'new-fdbc0602-61bd-426b-bd94-66548d5b9361';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_4';
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
    $pane->uuid = 'fdbc0602-61bd-426b-bd94-66548d5b9361';
    $display->content['new-fdbc0602-61bd-426b-bd94-66548d5b9361'] = $pane;
    $display->panels['footer'][2] = 'new-fdbc0602-61bd-426b-bd94-66548d5b9361';
    $pane = new stdClass();
    $pane->pid = 'new-a2a81cbb-1e71-4845-885c-92407239fec0';
    $pane->panel = 'footer';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a2a81cbb-1e71-4845-885c-92407239fec0';
    $display->content['new-a2a81cbb-1e71-4845-885c-92407239fec0'] = $pane;
    $display->panels['footer'][3] = 'new-a2a81cbb-1e71-4845-885c-92407239fec0';
    $pane = new stdClass();
    $pane->pid = 'new-7d026729-d49a-4bc5-b60d-8e4e52b621db';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '7d026729-d49a-4bc5-b60d-8e4e52b621db';
    $display->content['new-7d026729-d49a-4bc5-b60d-8e4e52b621db'] = $pane;
    $display->panels['footer'][4] = 'new-7d026729-d49a-4bc5-b60d-8e4e52b621db';
    $pane = new stdClass();
    $pane->pid = 'new-f567cda4-1e7e-4eaa-87df-262c737684c8';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_5';
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
    $pane->uuid = 'f567cda4-1e7e-4eaa-87df-262c737684c8';
    $display->content['new-f567cda4-1e7e-4eaa-87df-262c737684c8'] = $pane;
    $display->panels['header'][0] = 'new-f567cda4-1e7e-4eaa-87df-262c737684c8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Event Type',
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
              'event_type' => 'event_type',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'War Zones
Events',
    'panels_breadcrumbs_paths' => 'warzone
warzone/events',
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Event Type: %term:name';
  $display->uuid = 'f7326251-f11b-44ed-9e4d-3377f26b74a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-98034a8b-8d71-498c-806f-50124a2eb403';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_default_page_layout-panel_pane_1';
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
    $pane->uuid = '98034a8b-8d71-498c-806f-50124a2eb403';
    $display->content['new-98034a8b-8d71-498c-806f-50124a2eb403'] = $pane;
    $display->panels['contentmain'][0] = 'new-98034a8b-8d71-498c-806f-50124a2eb403';
    $pane = new stdClass();
    $pane->pid = 'new-fbafcc1d-84fd-4ff1-8174-427cfbf527c9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_lists-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'term_node_tid_depth' => '%term:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fbafcc1d-84fd-4ff1-8174-427cfbf527c9';
    $display->content['new-fbafcc1d-84fd-4ff1-8174-427cfbf527c9'] = $pane;
    $display->panels['contentmain'][1] = 'new-fbafcc1d-84fd-4ff1-8174-427cfbf527c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_5'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_main_page';
  $page->task = 'page';
  $page->admin_title = 'Events Main Page';
  $page->admin_description = '';
  $page->path = 'warzone/events';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Events',
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
  $handler->name = 'page_events_main_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_main_page';
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
          'value' => 'Miniature War Gaming Events List|',
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
  $display->title = '';
  $display->uuid = 'cd4967bf-cc17-43fa-aa23-b8e2e94d5a66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-df48bf15-e13f-431c-bde8-062ecb223329';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_type_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'df48bf15-e13f-431c-bde8-062ecb223329';
    $display->content['new-df48bf15-e13f-431c-bde8-062ecb223329'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-df48bf15-e13f-431c-bde8-062ecb223329';
    $pane = new stdClass();
    $pane->pid = 'new-c646ed72-a3be-4e51-9f00-de3b82d8207e';
    $pane->panel = 'contentmainright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'This Month',
      'body' => '<div class="seperator"></div>
<?php
  $block = module_invoke(\'views\', \'block_view\', \'event_calendar-block_1\');
  print render($block[\'content\']);
?>',
      'format' => 'php_code',
      'substitute' => TRUE,
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
    $pane->uuid = 'c646ed72-a3be-4e51-9f00-de3b82d8207e';
    $display->content['new-c646ed72-a3be-4e51-9f00-de3b82d8207e'] = $pane;
    $display->panels['contentmainright'][0] = 'new-c646ed72-a3be-4e51-9f00-de3b82d8207e';
    $pane = new stdClass();
    $pane->pid = 'new-84802079-bf56-47b7-948e-52f837fc56d3';
    $pane->panel = 'contentmainright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Upcoming',
      'body' => '<?php
  $block = module_invoke(\'views\', \'block_view\', \'event_calendar-block_2\');
  print render($block[\'content\']);
?>',
      'format' => 'php_code',
      'substitute' => TRUE,
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
    $pane->uuid = '84802079-bf56-47b7-948e-52f837fc56d3';
    $display->content['new-84802079-bf56-47b7-948e-52f837fc56d3'] = $pane;
    $display->panels['contentmainright'][1] = 'new-84802079-bf56-47b7-948e-52f837fc56d3';
    $pane = new stdClass();
    $pane->pid = 'new-4adc6af0-8886-432f-ab9c-613260ccf751';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Shortcuts',
      'title' => '',
      'body' => '<div class="grey-container shortcut-wrapper">
  <a href="/warzone/events/wargaming-events/calendar" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-calendar" aria-hidden="true"></span>
    </span>
    <span class="text">Calendar</span>
  </a>
  <a href="/warzone/events/wargaming-events" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-list-alt" aria-hidden="true"></span>
    </span>
    <span class="text">List</span>
  </a>
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
    $pane->uuid = '4adc6af0-8886-432f-ab9c-613260ccf751';
    $display->content['new-4adc6af0-8886-432f-ab9c-613260ccf751'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-4adc6af0-8886-432f-ab9c-613260ccf751';
    $pane = new stdClass();
    $pane->pid = 'new-2d56af53-17c8-4b45-aaad-18cccb40fbaa';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Wars and Rumors of Wars</h1>
<h2>The iToysoldiers list of upcoming tabletop wargaming events</h2>
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
    $pane->uuid = '2d56af53-17c8-4b45-aaad-18cccb40fbaa';
    $display->content['new-2d56af53-17c8-4b45-aaad-18cccb40fbaa'] = $pane;
    $display->panels['header'][0] = 'new-2d56af53-17c8-4b45-aaad-18cccb40fbaa';
    $pane = new stdClass();
    $pane->pid = 'new-287b4211-4cc8-4b6e-9e1e-7b3c9fab518b';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Sidebar Description',
      'title' => 'Upcoming Events',
      'body' => '<p>Here you\'ll find a list of all the miniature wargaming events that have been submitted to iToysoldiers. &nbsp;They run the gamut between open gaming to leagues to massive battles to tournaments and everything in between.&nbsp;</p>
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
    $pane->uuid = '287b4211-4cc8-4b6e-9e1e-7b3c9fab518b';
    $display->content['new-287b4211-4cc8-4b6e-9e1e-7b3c9fab518b'] = $pane;
    $display->panels['sidebar'][0] = 'new-287b4211-4cc8-4b6e-9e1e-7b3c9fab518b';
    $pane = new stdClass();
    $pane->pid = 'new-36b0b8b3-6340-4769-89f4-6304e954e2b8';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'login_and_new_user_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36b0b8b3-6340-4769-89f4-6304e954e2b8';
    $display->content['new-36b0b8b3-6340-4769-89f4-6304e954e2b8'] = $pane;
    $display->panels['sidebar'][1] = 'new-36b0b8b3-6340-4769-89f4-6304e954e2b8';
    $pane = new stdClass();
    $pane->pid = 'new-2917068d-a6ed-4f7c-92f6-725e223d6624';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'dfp-its1_left_sidebar';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2917068d-a6ed-4f7c-92f6-725e223d6624';
    $display->content['new-2917068d-a6ed-4f7c-92f6-725e223d6624'] = $pane;
    $display->panels['sidebar'][2] = 'new-2917068d-a6ed-4f7c-92f6-725e223d6624';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2d56af53-17c8-4b45-aaad-18cccb40fbaa';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_main_page'] = $page;

  return $pages;

}
