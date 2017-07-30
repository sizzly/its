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
  $handler->name = 'node_edit__form_mutator_3e377b1c-3b52-4fb3-abad-80173cd19053';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'List Crit - Hide Obsolete Stuff',
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
        'label' => 'List and Commentary',
        'hidden_field' => 0,
      ),
      'field_your_army' => array(
        'override' => 0,
        'label' => 'Army',
        'hidden_field' => 0,
      ),
      'field_points_per_army' => array(
        'override' => 0,
        'label' => 'Points',
        'hidden_field' => 0,
      ),
      'field_opponent_s_army' => array(
        'override' => 1,
        'label' => 'Designed to defeat',
        'hidden_field' => '1',
      ),
      'field_batteresult_commander' => array(
        'override' => 0,
        'label' => 'Commander',
        'hidden_field' => 0,
      ),
      'field_rate_content' => array(
        'override' => 0,
        'label' => 'Rate List',
        'hidden_field' => 0,
      ),
      'field_camp' => array(
        'override' => 0,
        'label' => 'Camp',
        'hidden_field' => 0,
      ),
      'field_tactical_focus' => array(
        'override' => 0,
        'label' => 'Tactical Focus',
        'hidden_field' => 0,
      ),
      'field_doctrine' => array(
        'override' => 1,
        'label' => 'Doctrine',
        'hidden_field' => '1',
      ),
      'field_primary_role' => array(
        'override' => 1,
        'label' => 'Primary Role',
        'hidden_field' => '1',
      ),
      'field_aux' => array(
        'override' => 1,
        'label' => 'Auxillary',
        'hidden_field' => '1',
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'field_listcrit_component_units' => array(
        'override' => 0,
        'label' => 'Component Units',
        'hidden_field' => 0,
      ),
      'field_radioactivity' => array(
        'override' => 0,
        'label' => 'Radioactivity',
        'hidden_field' => 0,
      ),
      'field_short_description' => array(
        'override' => 1,
        'label' => 'Short Description',
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
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'listcrit' => 'listcrit',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit__form_mutator_3e377b1c-3b52-4fb3-abad-80173cd19053'] = $handler;

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
    'panels_breadcrumbs_titles' => 'Gaming
ListCrit',
    'panels_breadcrumbs_paths' => 'gaming
gaming/listcrit',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = '%node:title';
  $display->uuid = '209d1984-f266-4fc6-af37-d387d83175b3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__list_crit';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6c53d282-8151-4705-919c-0378d093dc6e';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_rate_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = '6c53d282-8151-4705-919c-0378d093dc6e';
  $display->content['new-6c53d282-8151-4705-919c-0378d093dc6e'] = $pane;
  $display->panels['contentmain'][0] = 'new-6c53d282-8151-4705-919c-0378d093dc6e';
  $pane = new stdClass();
  $pane->pid = 'new-a927d6bd-d062-4c15-bf2f-c7d804f38260';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a927d6bd-d062-4c15-bf2f-c7d804f38260';
  $display->content['new-a927d6bd-d062-4c15-bf2f-c7d804f38260'] = $pane;
  $display->panels['contentmain'][1] = 'new-a927d6bd-d062-4c15-bf2f-c7d804f38260';
  $pane = new stdClass();
  $pane->pid = 'new-8c78aed6-c271-4dc8-b0f7-9336ec884d12';
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
  $pane->uuid = '8c78aed6-c271-4dc8-b0f7-9336ec884d12';
  $display->content['new-8c78aed6-c271-4dc8-b0f7-9336ec884d12'] = $pane;
  $display->panels['contentmain'][2] = 'new-8c78aed6-c271-4dc8-b0f7-9336ec884d12';
  $pane = new stdClass();
  $pane->pid = 'new-760550aa-4af8-4acc-8f45-b3f05a0e4828';
  $pane->panel = 'footer';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'List and Tactics',
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
  $pane->uuid = '760550aa-4af8-4acc-8f45-b3f05a0e4828';
  $display->content['new-760550aa-4af8-4acc-8f45-b3f05a0e4828'] = $pane;
  $display->panels['footer'][0] = 'new-760550aa-4af8-4acc-8f45-b3f05a0e4828';
  $pane = new stdClass();
  $pane->pid = 'new-7a41320a-488f-4905-98ef-eadc9f8f9641';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7a41320a-488f-4905-98ef-eadc9f8f9641';
  $display->content['new-7a41320a-488f-4905-98ef-eadc9f8f9641'] = $pane;
  $display->panels['footer'][1] = 'new-7a41320a-488f-4905-98ef-eadc9f8f9641';
  $pane = new stdClass();
  $pane->pid = 'new-75f89721-038f-428e-ace3-e3801f87cdc5';
  $pane->panel = 'footer';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = '75f89721-038f-428e-ace3-e3801f87cdc5';
  $display->content['new-75f89721-038f-428e-ace3-e3801f87cdc5'] = $pane;
  $display->panels['footer'][2] = 'new-75f89721-038f-428e-ace3-e3801f87cdc5';
  $pane = new stdClass();
  $pane->pid = 'new-5e81a2df-045a-40e7-b5b3-eeb78a4eb5d4';
  $pane->panel = 'footer';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5e81a2df-045a-40e7-b5b3-eeb78a4eb5d4';
  $display->content['new-5e81a2df-045a-40e7-b5b3-eeb78a4eb5d4'] = $pane;
  $display->panels['footer'][3] = 'new-5e81a2df-045a-40e7-b5b3-eeb78a4eb5d4';
  $pane = new stdClass();
  $pane->pid = 'new-58da19c2-93cc-4f03-a688-b09c28b12f43';
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
  $pane->uuid = '58da19c2-93cc-4f03-a688-b09c28b12f43';
  $display->content['new-58da19c2-93cc-4f03-a688-b09c28b12f43'] = $pane;
  $display->panels['header'][0] = 'new-58da19c2-93cc-4f03-a688-b09c28b12f43';
  $pane = new stdClass();
  $pane->pid = 'new-2283d6be-adb9-46c2-9ce6-5b022937b90b';
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
  $pane->uuid = '2283d6be-adb9-46c2-9ce6-5b022937b90b';
  $display->content['new-2283d6be-adb9-46c2-9ce6-5b022937b90b'] = $pane;
  $display->panels['header'][1] = 'new-2283d6be-adb9-46c2-9ce6-5b022937b90b';
  $pane = new stdClass();
  $pane->pid = 'new-db26f124-e580-4ac1-82b8-d0db64392945';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'listcrit_all_page_layout-panel_pane_1';
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
  $pane->uuid = 'db26f124-e580-4ac1-82b8-d0db64392945';
  $display->content['new-db26f124-e580-4ac1-82b8-d0db64392945'] = $pane;
  $display->panels['sidebar'][0] = 'new-db26f124-e580-4ac1-82b8-d0db64392945';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__list_crit'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__listcrit_meta';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
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
    'panels_breadcrumbs_titles' => 'ListCrit
',
    'panels_breadcrumbs_paths' => 'listcrit
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__listcrit_meta';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '309a8b90-6616-44cc-9a61-19fe0908651e';
  $display->content['new-309a8b90-6616-44cc-9a61-19fe0908651e'] = $pane;
  $display->panels['contentmain'][0] = 'new-309a8b90-6616-44cc-9a61-19fe0908651e';
  $pane = new stdClass();
  $pane->pid = 'new-5764a19e-2d30-4a4e-a944-cde5596acddd';
  $pane->panel = 'contentmain';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
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
  $pane->uuid = '5764a19e-2d30-4a4e-a944-cde5596acddd';
  $display->content['new-5764a19e-2d30-4a4e-a944-cde5596acddd'] = $pane;
  $display->panels['contentmain'][1] = 'new-5764a19e-2d30-4a4e-a944-cde5596acddd';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fedde95a-d3aa-4571-8d5c-6eb0bfdae1b6';
  $display->content['new-fedde95a-d3aa-4571-8d5c-6eb0bfdae1b6'] = $pane;
  $display->panels['contentmain'][2] = 'new-fedde95a-d3aa-4571-8d5c-6eb0bfdae1b6';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e6037fb8-62a2-4602-ae00-0bda7d30bc19';
  $display->content['new-e6037fb8-62a2-4602-ae00-0bda7d30bc19'] = $pane;
  $display->panels['contentmain'][3] = 'new-e6037fb8-62a2-4602-ae00-0bda7d30bc19';
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
  $page->path = 'gaming/listcrit/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'main-menu',
    'weight' => '-100',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Army Lists',
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
  $handler->name = 'page_list_crit_main_page__panel_context_0def2057-f3c0-420a-bc92-0f1f04d2a921';
  $handler->task = 'page';
  $handler->subtask = 'list_crit_main_page';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gaming
',
    'panels_breadcrumbs_paths' => 'gaming
',
    'panels_breadcrumbs_home' => 1,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'ListCrit - Peer reviewed army lists',
        ),
        'description' => array(
          'value' => 'ListCrit on iToysoldiers is the perfect place to find peer reviewed and assessed army lists for all of your favorite miniature wargames. Conveniently categorized by meta data and army, you can find great lists to use with your army or review what opposing commanders are using with their armies.',
        ),
        'keywords' => array(
          'value' => 'army lists, netlists, rate army lists',
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
  $display->title = 'List Crit';
  $display->uuid = '7d1a3309-eb58-45c7-acee-fd8265ff2c7d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_list_crit_main_page__panel_context_0def2057-f3c0-420a-bc92-0f1f04d2a921';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aa7869fc-d01d-4ff2-a99b-789064dcb865';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'listcrit_meta_page_layout-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'style' => 'bootstrap_panel',
    'settings' => array(
      'use_title' => 1,
      'use_footer' => 0,
      'panel_body' => 1,
      'footer_content' => '',
      'context_class' => 'panel-default',
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aa7869fc-d01d-4ff2-a99b-789064dcb865';
  $display->content['new-aa7869fc-d01d-4ff2-a99b-789064dcb865'] = $pane;
  $display->panels['contentmain'][0] = 'new-aa7869fc-d01d-4ff2-a99b-789064dcb865';
  $pane = new stdClass();
  $pane->pid = 'new-72cac0a3-e12a-400d-b1fe-2bff9c411950';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'listcrit_main_page_timeline-panel_pane_2';
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
  $pane->uuid = '72cac0a3-e12a-400d-b1fe-2bff9c411950';
  $display->content['new-72cac0a3-e12a-400d-b1fe-2bff9c411950'] = $pane;
  $display->panels['contentmain'][1] = 'new-72cac0a3-e12a-400d-b1fe-2bff9c411950';
  $pane = new stdClass();
  $pane->pid = 'new-7cf8d596-b12e-4045-b97d-85c9342434c4';
  $pane->panel = 'footer';
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
  $display->panels['footer'][0] = 'new-7cf8d596-b12e-4045-b97d-85c9342434c4';
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
    'body' => '
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
  $pane->pid = 'new-03951300-c2a8-4920-a1c5-244055830127';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Write Up',
    'title' => 'Are You Hard Enough?',
    'body' => 'ListCrit on iToysoldiers is the perfect place to find peer reviewed and assessed army lists for all of your favorite miniature wargames. Conveniently categorized by meta data and army, you can find great lists to use with your army or review what opposing commanders are using with their armies.',
    'format' => 'filtered_html',
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
  $pane->uuid = '03951300-c2a8-4920-a1c5-244055830127';
  $display->content['new-03951300-c2a8-4920-a1c5-244055830127'] = $pane;
  $display->panels['sidebar'][0] = 'new-03951300-c2a8-4920-a1c5-244055830127';
  $pane = new stdClass();
  $pane->pid = 'new-c09efee2-c6d7-4819-9fea-691b76f940e9';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'listcrit_main_page_timeline-panel_pane_1';
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
  $pane->uuid = 'c09efee2-c6d7-4819-9fea-691b76f940e9';
  $display->content['new-c09efee2-c6d7-4819-9fea-691b76f940e9'] = $pane;
  $display->panels['sidebar'][1] = 'new-c09efee2-c6d7-4819-9fea-691b76f940e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['list_crit_main_page'] = $page;

  return $pages;

}
