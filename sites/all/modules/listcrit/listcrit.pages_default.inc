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
    'panels_breadcrumbs_titles' => 'Order of Battle
ListCrit',
    'panels_breadcrumbs_paths' => 'order-of-battle
order-of-battle/listcrit',
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
    $pane->pid = 'new-2283d6be-adb9-46c2-9ce6-5b022937b90b';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_3';
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
    $pane->uuid = '2283d6be-adb9-46c2-9ce6-5b022937b90b';
    $display->content['new-2283d6be-adb9-46c2-9ce6-5b022937b90b'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-2283d6be-adb9-46c2-9ce6-5b022937b90b';
    $pane = new stdClass();
    $pane->pid = 'new-760550aa-4af8-4acc-8f45-b3f05a0e4828';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '760550aa-4af8-4acc-8f45-b3f05a0e4828';
    $display->content['new-760550aa-4af8-4acc-8f45-b3f05a0e4828'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-760550aa-4af8-4acc-8f45-b3f05a0e4828';
    $pane = new stdClass();
    $pane->pid = 'new-043cb46c-4687-4ddb-8c91-c810103190d5';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_2';
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
    $pane->uuid = '043cb46c-4687-4ddb-8c91-c810103190d5';
    $display->content['new-043cb46c-4687-4ddb-8c91-c810103190d5'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-043cb46c-4687-4ddb-8c91-c810103190d5';
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
    $pane->pid = 'new-e1565f82-59d8-42ec-b23a-83dd0d742d76';
    $pane->panel = 'contentmainright';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e1565f82-59d8-42ec-b23a-83dd0d742d76';
    $display->content['new-e1565f82-59d8-42ec-b23a-83dd0d742d76'] = $pane;
    $display->panels['contentmainright'][1] = 'new-e1565f82-59d8-42ec-b23a-83dd0d742d76';
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
    $pane->pid = 'new-7a41320a-488f-4905-98ef-eadc9f8f9641';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_4';
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
    $pane->uuid = '7a41320a-488f-4905-98ef-eadc9f8f9641';
    $display->content['new-7a41320a-488f-4905-98ef-eadc9f8f9641'] = $pane;
    $display->panels['footer'][1] = 'new-7a41320a-488f-4905-98ef-eadc9f8f9641';
    $pane = new stdClass();
    $pane->pid = 'new-93e963a5-5f04-4ee4-b967-09363968f701';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_1';
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
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '93e963a5-5f04-4ee4-b967-09363968f701';
    $display->content['new-93e963a5-5f04-4ee4-b967-09363968f701'] = $pane;
    $display->panels['footer'][2] = 'new-93e963a5-5f04-4ee4-b967-09363968f701';
    $pane = new stdClass();
    $pane->pid = 'new-5373d93c-0175-440a-a125-4e7471029cc9';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'posts_update_no_battle';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
              1 => 3,
              2 => 9,
              3 => 8,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5373d93c-0175-440a-a125-4e7471029cc9';
    $display->content['new-5373d93c-0175-440a-a125-4e7471029cc9'] = $pane;
    $display->panels['footer'][3] = 'new-5373d93c-0175-440a-a125-4e7471029cc9';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5e81a2df-045a-40e7-b5b3-eeb78a4eb5d4';
    $display->content['new-5e81a2df-045a-40e7-b5b3-eeb78a4eb5d4'] = $pane;
    $display->panels['footer'][4] = 'new-5e81a2df-045a-40e7-b5b3-eeb78a4eb5d4';
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
    'panels_breadcrumbs_titles' => 'Order of Battle
ListCrit
',
    'panels_breadcrumbs_paths' => 'order-of-battle
order-of-battle/listcrit
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
  $page->path = 'order-of-battle/listcrit';
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
    'panels_breadcrumbs_state' => 0,
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa7869fc-d01d-4ff2-a99b-789064dcb865';
    $display->content['new-aa7869fc-d01d-4ff2-a99b-789064dcb865'] = $pane;
    $display->panels['contentmainright'][0] = 'new-aa7869fc-d01d-4ff2-a99b-789064dcb865';
    $pane = new stdClass();
    $pane->pid = 'new-03951300-c2a8-4920-a1c5-244055830127';
    $pane->panel = 'contentmaintop';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '03951300-c2a8-4920-a1c5-244055830127';
    $display->content['new-03951300-c2a8-4920-a1c5-244055830127'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-03951300-c2a8-4920-a1c5-244055830127';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['list_crit_main_page'] = $page;

  return $pages;

}
