<?php
/**
 * @file
 * core.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function core_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'advert_announcement_block';
  $mini->category = 'Advert';
  $mini->admin_title = 'Advert: Announcement Block';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '293cfd20-880a-4477-bec6-d9305f328c99';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'advert_announcement_block';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c00fb1be-a20c-4a49-b489-4ba2b31f1cdc';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '        <!-- /254567099/its_announcement -->
        <div id=\'div-gpt-ad-1500913228612-1\'>
            <script>
                googletag.cmd.push(function () {
                    googletag.display(\'div-gpt-ad-1500913228612-1\');
                });
            </script>
        </div>',
    'format' => 'php_code',
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
  $pane->uuid = 'c00fb1be-a20c-4a49-b489-4ba2b31f1cdc';
  $display->content['new-c00fb1be-a20c-4a49-b489-4ba2b31f1cdc'] = $pane;
  $display->panels['contentmain'][0] = 'new-c00fb1be-a20c-4a49-b489-4ba2b31f1cdc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c00fb1be-a20c-4a49-b489-4ba2b31f1cdc';
  $mini->display = $display;
  $export['advert_announcement_block'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'advert_right_sidebar_slot_1';
  $mini->category = 'Advert';
  $mini->admin_title = 'Advert: Right Sidebar Slot 1';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '3027bcb9-07af-4bc6-b815-5f9d440f4d16';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'advert_right_sidebar_slot_1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f8753415-3713-4dda-b173-5c522c50ede9';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '        <!-- /254567099/sidebar_top -->
        <div id=\'div-gpt-ad-1500913228612-3\' class="text-center">
            <script>
                googletag.cmd.push(function () {
                    googletag.display(\'div-gpt-ad-1500913228612-3\');
                });
            </script>
        </div>',
    'format' => 'php_code',
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
  $pane->uuid = 'f8753415-3713-4dda-b173-5c522c50ede9';
  $display->content['new-f8753415-3713-4dda-b173-5c522c50ede9'] = $pane;
  $display->panels['contentmain'][0] = 'new-f8753415-3713-4dda-b173-5c522c50ede9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f8753415-3713-4dda-b173-5c522c50ede9';
  $mini->display = $display;
  $export['advert_right_sidebar_slot_1'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'author_block';
  $mini->category = 'Node';
  $mini->admin_title = 'Author Block';
  $mini->admin_description = 'Displays the author block for nodes with either the authenticated user version or the Anonymous user version.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = 'Player Info';
  $display->uuid = '94f664b1-58bf-44d3-b4c6-eb1a59327f6b';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'author_block';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c5a0a36f-f231-417c-8c59-684139309013';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_all_node_layout-panel_pane_4';
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
  $pane->uuid = 'c5a0a36f-f231-417c-8c59-684139309013';
  $display->content['new-c5a0a36f-f231-417c-8c59-684139309013'] = $pane;
  $display->panels['contentmain'][0] = 'new-c5a0a36f-f231-417c-8c59-684139309013';
  $pane = new stdClass();
  $pane->pid = 'new-86bade5b-09bb-47e8-964d-57e0dd731edb';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_all_node_layout-panel_pane_7';
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
  $pane->uuid = '86bade5b-09bb-47e8-964d-57e0dd731edb';
  $display->content['new-86bade5b-09bb-47e8-964d-57e0dd731edb'] = $pane;
  $display->panels['contentmain'][1] = 'new-86bade5b-09bb-47e8-964d-57e0dd731edb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c5a0a36f-f231-417c-8c59-684139309013';
  $mini->display = $display;
  $export['author_block'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'login_and_new_user_block';
  $mini->category = '';
  $mini->admin_title = 'Login and New User Block';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '7da05f0b-e0f0-4d4c-8654-89e6fe85bf1b';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'login_and_new_user_block';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-883e5385-1373-4efd-b6f4-b719a2eaf71a';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h4>Not a member of iToysoldiers?</h4>

<p><a href="/joinnow">Learn More</a> | <a href="/user/register">Register</a></p>

<p>You\'ll be gaining glory and renown in no time!</p>
',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'well well-sm',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '883e5385-1373-4efd-b6f4-b719a2eaf71a';
  $display->content['new-883e5385-1373-4efd-b6f4-b719a2eaf71a'] = $pane;
  $display->panels['contentmain'][0] = 'new-883e5385-1373-4efd-b6f4-b719a2eaf71a';
  $pane = new stdClass();
  $pane->pid = 'new-d8fb7b6a-9387-4736-a84c-1f5b9b27facf';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd8fb7b6a-9387-4736-a84c-1f5b9b27facf';
  $display->content['new-d8fb7b6a-9387-4736-a84c-1f5b9b27facf'] = $pane;
  $display->panels['contentmain'][1] = 'new-d8fb7b6a-9387-4736-a84c-1f5b9b27facf';
  $pane = new stdClass();
  $pane->pid = 'new-03b70c5c-aa84-4ff8-83d1-d4df566a6ab2';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Login',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '03b70c5c-aa84-4ff8-83d1-d4df566a6ab2';
  $display->content['new-03b70c5c-aa84-4ff8-83d1-d4df566a6ab2'] = $pane;
  $display->panels['contentmain'][2] = 'new-03b70c5c-aa84-4ff8-83d1-d4df566a6ab2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-03b70c5c-aa84-4ff8-83d1-d4df566a6ab2';
  $mini->display = $display;
  $export['login_and_new_user_block'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'right_sidebar_slot_2';
  $mini->category = 'Advert';
  $mini->admin_title = 'Advert: Right Sidebar Slot 2';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'b6fe6fae-d08b-41ad-b9f2-d909425aac64';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'right_sidebar_slot_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2a2b17e9-3ab7-4a39-aabe-8fda1507fadc';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Advert Code',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '        <!-- /254567099/sidebar_slot_2 -->
        <div id=\'div-gpt-ad-1500913228612-2\' class="text-center">
            <script>
                googletag.cmd.push(function () {
                    googletag.display(\'div-gpt-ad-1500913228612-2\');
                });
            </script>
        </div>',
    'format' => 'php_code',
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
  $pane->uuid = '2a2b17e9-3ab7-4a39-aabe-8fda1507fadc';
  $display->content['new-2a2b17e9-3ab7-4a39-aabe-8fda1507fadc'] = $pane;
  $display->panels['contentmain'][0] = 'new-2a2b17e9-3ab7-4a39-aabe-8fda1507fadc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2a2b17e9-3ab7-4a39-aabe-8fda1507fadc';
  $mini->display = $display;
  $export['right_sidebar_slot_2'] = $mini;

  return $export;
}
