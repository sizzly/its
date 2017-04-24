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

  return $export;
}
