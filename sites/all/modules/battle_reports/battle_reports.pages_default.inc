<?php
/**
 * @file
 * battle_reports.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function battle_reports_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Battles',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Game Reference [field_game_reference])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_game_reference-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'game_results' => 'game_results',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Battles',
    'panels_breadcrumbs_paths' => 'battle-reports',
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
  $display->uuid = '217586d2-a5bd-48ae-a3be-7dfa95e8dfeb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f05b68ff-07f9-4c18-8b82-4a17a7eb82fd';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_3';
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
    $pane->uuid = 'f05b68ff-07f9-4c18-8b82-4a17a7eb82fd';
    $display->content['new-f05b68ff-07f9-4c18-8b82-4a17a7eb82fd'] = $pane;
    $display->panels['contentmain'][0] = 'new-f05b68ff-07f9-4c18-8b82-4a17a7eb82fd';
    $pane = new stdClass();
    $pane->pid = 'new-05d7ee43-ddc6-4d8d-94dc-44efd67839a8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_2';
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
    $pane->uuid = '05d7ee43-ddc6-4d8d-94dc-44efd67839a8';
    $display->content['new-05d7ee43-ddc6-4d8d-94dc-44efd67839a8'] = $pane;
    $display->panels['contentmain'][1] = 'new-05d7ee43-ddc6-4d8d-94dc-44efd67839a8';
    $pane = new stdClass();
    $pane->pid = 'new-a1d00138-5fb5-4666-b032-fe9e0151259f';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'game_results' => 'game_results',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
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
    $pane->uuid = 'a1d00138-5fb5-4666-b032-fe9e0151259f';
    $display->content['new-a1d00138-5fb5-4666-b032-fe9e0151259f'] = $pane;
    $display->panels['contentmain'][2] = 'new-a1d00138-5fb5-4666-b032-fe9e0151259f';
    $pane = new stdClass();
    $pane->pid = 'new-73e1a128-1f07-4167-8e7a-98d1aaee5d20';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_1';
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
    $pane->uuid = '73e1a128-1f07-4167-8e7a-98d1aaee5d20';
    $display->content['new-73e1a128-1f07-4167-8e7a-98d1aaee5d20'] = $pane;
    $display->panels['contentmain'][3] = 'new-73e1a128-1f07-4167-8e7a-98d1aaee5d20';
    $pane = new stdClass();
    $pane->pid = 'new-af97c993-441a-487c-965e-ee1957f6afcb';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grey-container',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'af97c993-441a-487c-965e-ee1957f6afcb';
    $display->content['new-af97c993-441a-487c-965e-ee1957f6afcb'] = $pane;
    $display->panels['contentmain'][4] = 'new-af97c993-441a-487c-965e-ee1957f6afcb';
    $pane = new stdClass();
    $pane->pid = 'new-66c6fc72-b8af-4562-b577-bfb5fef5797d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid,%node_2:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '66c6fc72-b8af-4562-b577-bfb5fef5797d';
    $display->content['new-66c6fc72-b8af-4562-b577-bfb5fef5797d'] = $pane;
    $display->panels['contentmain'][5] = 'new-66c6fc72-b8af-4562-b577-bfb5fef5797d';
    $pane = new stdClass();
    $pane->pid = 'new-cd64ad6a-57c1-4e1c-a230-d1e639309219';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_5';
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
    $pane->uuid = 'cd64ad6a-57c1-4e1c-a230-d1e639309219';
    $display->content['new-cd64ad6a-57c1-4e1c-a230-d1e639309219'] = $pane;
    $display->panels['contentmain'][6] = 'new-cd64ad6a-57c1-4e1c-a230-d1e639309219';
    $pane = new stdClass();
    $pane->pid = 'new-554f288c-0adb-47bb-9ab7-cffb00d64320';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_8';
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
    $pane->uuid = '554f288c-0adb-47bb-9ab7-cffb00d64320';
    $display->content['new-554f288c-0adb-47bb-9ab7-cffb00d64320'] = $pane;
    $display->panels['contentmain'][7] = 'new-554f288c-0adb-47bb-9ab7-cffb00d64320';
    $pane = new stdClass();
    $pane->pid = 'new-384d04c9-d5fc-4d91-b162-b28e54d0f949';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '384d04c9-d5fc-4d91-b162-b28e54d0f949';
    $display->content['new-384d04c9-d5fc-4d91-b162-b28e54d0f949'] = $pane;
    $display->panels['contentmain'][8] = 'new-384d04c9-d5fc-4d91-b162-b28e54d0f949';
    $pane = new stdClass();
    $pane->pid = 'new-0677d508-cecb-49f1-8709-3603fa174d29';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a name="add-comment"></a>',
      'format' => 'pure_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '0677d508-cecb-49f1-8709-3603fa174d29';
    $display->content['new-0677d508-cecb-49f1-8709-3603fa174d29'] = $pane;
    $display->panels['contentmain'][9] = 'new-0677d508-cecb-49f1-8709-3603fa174d29';
    $pane = new stdClass();
    $pane->pid = 'new-a741b098-a1bd-47e2-849f-2f69e3ca4e36';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'a741b098-a1bd-47e2-849f-2f69e3ca4e36';
    $display->content['new-a741b098-a1bd-47e2-849f-2f69e3ca4e36'] = $pane;
    $display->panels['contentmain'][10] = 'new-a741b098-a1bd-47e2-849f-2f69e3ca4e36';
    $pane = new stdClass();
    $pane->pid = 'new-670ac20a-d6d6-462e-b983-c9ae8945a441';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="seperator"></div>',
      'format' => 'pure_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '670ac20a-d6d6-462e-b983-c9ae8945a441';
    $display->content['new-670ac20a-d6d6-462e-b983-c9ae8945a441'] = $pane;
    $display->panels['contentmain'][11] = 'new-670ac20a-d6d6-462e-b983-c9ae8945a441';
    $pane = new stdClass();
    $pane->pid = 'new-891a3dd9-7064-4f86-8884-e22d43bb491c';
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
    $pane->uuid = '891a3dd9-7064-4f86-8884-e22d43bb491c';
    $display->content['new-891a3dd9-7064-4f86-8884-e22d43bb491c'] = $pane;
    $display->panels['sidebar'][0] = 'new-891a3dd9-7064-4f86-8884-e22d43bb491c';
    $pane = new stdClass();
    $pane->pid = 'new-acebbcae-47eb-49b7-81a7-7f7a59f451a1';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'dfp-sidebar1';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'center-block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acebbcae-47eb-49b7-81a7-7f7a59f451a1';
    $display->content['new-acebbcae-47eb-49b7-81a7-7f7a59f451a1'] = $pane;
    $display->panels['sidebar'][1] = 'new-acebbcae-47eb-49b7-81a7-7f7a59f451a1';
    $pane = new stdClass();
    $pane->pid = 'new-557e0c59-34b3-4a39-bab5-1607acba1a04';
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
      'override_title' => 0,
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
    $pane->uuid = '557e0c59-34b3-4a39-bab5-1607acba1a04';
    $display->content['new-557e0c59-34b3-4a39-bab5-1607acba1a04'] = $pane;
    $display->panels['sidebar'][2] = 'new-557e0c59-34b3-4a39-bab5-1607acba1a04';
    $pane = new stdClass();
    $pane->pid = 'new-479cf48b-167d-4ed6-aa74-69bd4c21781b';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '479cf48b-167d-4ed6-aa74-69bd4c21781b';
    $display->content['new-479cf48b-167d-4ed6-aa74-69bd4c21781b'] = $pane;
    $display->panels['sidebar'][3] = 'new-479cf48b-167d-4ed6-aa74-69bd4c21781b';
    $pane = new stdClass();
    $pane->pid = 'new-fd61c00c-027f-4c5b-ac41-ea29e0100c23';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node_2:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fd61c00c-027f-4c5b-ac41-ea29e0100c23';
    $display->content['new-fd61c00c-027f-4c5b-ac41-ea29e0100c23'] = $pane;
    $display->panels['sidebar'][4] = 'new-fd61c00c-027f-4c5b-ac41-ea29e0100c23';
    $pane = new stdClass();
    $pane->pid = 'new-197fa37b-f7a8-4144-a950-aa4ece26c6c4';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid,%node_2:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '197fa37b-f7a8-4144-a950-aa4ece26c6c4';
    $display->content['new-197fa37b-f7a8-4144-a950-aa4ece26c6c4'] = $pane;
    $display->panels['sidebar'][5] = 'new-197fa37b-f7a8-4144-a950-aa4ece26c6c4';
    $pane = new stdClass();
    $pane->pid = 'new-d075b713-4336-4509-aaab-5daa0fc946b6';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_your_army_tid' => '%node:field-your-army:tid,%node_2:field-your-army:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd075b713-4336-4509-aaab-5daa0fc946b6';
    $display->content['new-d075b713-4336-4509-aaab-5daa0fc946b6'] = $pane;
    $display->panels['sidebar'][6] = 'new-d075b713-4336-4509-aaab-5daa0fc946b6';
    $pane = new stdClass();
    $pane->pid = 'new-8fc81dd6-db97-47ad-b6bc-61f08ae71e40';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'messages_lists_for_nodes-panel_pane_1';
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
    $pane->uuid = '8fc81dd6-db97-47ad-b6bc-61f08ae71e40';
    $display->content['new-8fc81dd6-db97-47ad-b6bc-61f08ae71e40'] = $pane;
    $display->panels['sidebar'][7] = 'new-8fc81dd6-db97-47ad-b6bc-61f08ae71e40';
    $pane = new stdClass();
    $pane->pid = 'new-ea5d60c9-95d3-4ed3-ab95-e5c3cae8d056';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'dfp-battles_sidebar2';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'ea5d60c9-95d3-4ed3-ab95-e5c3cae8d056';
    $display->content['new-ea5d60c9-95d3-4ed3-ab95-e5c3cae8d056'] = $pane;
    $display->panels['sidebar'][8] = 'new-ea5d60c9-95d3-4ed3-ab95-e5c3cae8d056';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Game System Results',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = '';
  $display->uuid = 'afa4d42b-a674-4a74-ac4d-4bef79baba78';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_game_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_redirection',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'code' => '301',
        '404_if_empty' => 0,
        'page_restrictions' => '0',
        'pages' => '',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0';
    $display->content['new-b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0'] = $pane;
    $display->panels['contentmain'][0] = 'new-b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function battle_reports_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'battles_main_page';
  $page->task = 'page';
  $page->admin_title = 'Battles Main Page';
  $page->admin_description = '';
  $page->path = 'battle-reports';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Battles',
    'name' => 'main-menu',
    'weight' => '15',
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
  $handler->name = 'page_battles_main_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'battles_main_page';
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
          'value' => 'Battle Reports on iToysoldiers',
        ),
        'description' => array(
          'value' => 'All the table top miniature war game battle reports on iToysoldiers. We\'ve got reports for all of your favorite games including Warmachine, Hordes, Warhammer 40K, WFB, Infinity the game, Helldorado and more.',
        ),
        'abstract' => array(
          'value' => 'A list and relevant stats for battle reports on iToysoldiers',
        ),
        'keywords' => array(
          'value' => 'battle reports, table top war gaming, miniature war gaming battle reports',
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
        'og:type' => array(
          'value' => 'website',
        ),
        'og:determiner' => array(
          'value' => 'auto',
        ),
        'og:description' => array(
          'value' => 'Stats and lists of table top miniature war game battle results',
        ),
        'og:image' => array(
          'value' => 'http://itoysoldiers.com/sites/default/files/default_images/itslogo.jpg',
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
  $display->title = 'Battles';
  $display->uuid = '4e887355-8530-4653-bca8-e3e6217c3bf5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-844ca8ef-45eb-47d7-aad3-76f101e0de62';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_lists-panel_pane_1';
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
    $pane->uuid = '844ca8ef-45eb-47d7-aad3-76f101e0de62';
    $display->content['new-844ca8ef-45eb-47d7-aad3-76f101e0de62'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-844ca8ef-45eb-47d7-aad3-76f101e0de62';
    $pane = new stdClass();
    $pane->pid = 'new-50ae70be-b4a9-4ddd-af8d-7643c3361878';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_stats_and_charts-panel_pane_5';
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
    $pane->uuid = '50ae70be-b4a9-4ddd-af8d-7643c3361878';
    $display->content['new-50ae70be-b4a9-4ddd-af8d-7643c3361878'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-50ae70be-b4a9-4ddd-af8d-7643c3361878';
    $pane = new stdClass();
    $pane->pid = 'new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_stats_and_charts-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
    $display->content['new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f'] = $pane;
    $display->panels['contentmainright'][0] = 'new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
    $pane = new stdClass();
    $pane->pid = 'new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_stats_and_charts-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
    $display->content['new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077'] = $pane;
    $display->panels['contentmainright'][1] = 'new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
    $pane = new stdClass();
    $pane->pid = 'new-a653366a-97d7-444c-be86-e2bb79546f71';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="jumbotron clearfix">
  <h1>Battle Reports</h1>
  <h2>Wars and rumors of wars</h2>
</div>

',
      'format' => 'php_code',
      'substitute' => TRUE,
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
    $pane->uuid = 'a653366a-97d7-444c-be86-e2bb79546f71';
    $display->content['new-a653366a-97d7-444c-be86-e2bb79546f71'] = $pane;
    $display->panels['header'][0] = 'new-a653366a-97d7-444c-be86-e2bb79546f71';
    $pane = new stdClass();
    $pane->pid = 'new-f17ed422-b0b3-4bfe-b737-46a3637da36e';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Stat Panels',
      'title' => '',
      'body' => '<?php print views_embed_view("battles_all_stats_and_charts" , "panel_pane_1"); ?>
<?php print views_embed_view("battles_all_stats_and_charts" , "panel_pane_2"); ?>
<?php print views_embed_view("battles_all_stats_and_charts" , "panel_pane_3"); ?>
<?php print views_embed_view("battles_all_stats_and_charts" , "panel_pane_4"); ?>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f17ed422-b0b3-4bfe-b737-46a3637da36e';
    $display->content['new-f17ed422-b0b3-4bfe-b737-46a3637da36e'] = $pane;
    $display->panels['header'][1] = 'new-f17ed422-b0b3-4bfe-b737-46a3637da36e';
    $pane = new stdClass();
    $pane->pid = 'new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Battle Reports',
      'body' => '<p>Battle reports on iToysoldiers drive the stats and rankings of players and armies across all sorts of your favorite table top miniature war games. Record your battles, gather intelligence on your opponents, scope out the battlefields, and claim glory and renown through the exploits of your armies.</p>
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
    $pane->uuid = '5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
    $display->content['new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7'] = $pane;
    $display->panels['sidebar'][0] = 'new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
    $pane = new stdClass();
    $pane->pid = 'new-0443c10f-d952-49a8-9380-1c12c1ebd151';
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
      'override_title' => 0,
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
    $pane->uuid = '0443c10f-d952-49a8-9380-1c12c1ebd151';
    $display->content['new-0443c10f-d952-49a8-9380-1c12c1ebd151'] = $pane;
    $display->panels['sidebar'][1] = 'new-0443c10f-d952-49a8-9380-1c12c1ebd151';
    $pane = new stdClass();
    $pane->pid = 'new-22fc9460-9056-494a-9b17-569d196f23ca';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Report Battle Button',
      'title' => '',
      'body' => '<div class="grey-container">
<a href="/node/add/game-results" class="btn btn-primary btn-lg btn-block">Report a Battle</a>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '22fc9460-9056-494a-9b17-569d196f23ca';
    $display->content['new-22fc9460-9056-494a-9b17-569d196f23ca'] = $pane;
    $display->panels['sidebar'][2] = 'new-22fc9460-9056-494a-9b17-569d196f23ca';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['battles_main_page'] = $page;

  return $pages;

}
