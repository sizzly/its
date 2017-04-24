<?php
/**
 * @file
 * its_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function its_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard/main';
  $page->access = array(
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
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Dashboard',
    'name' => 'main-menu',
    'weight' => '-100',
    'parent' => array(
      'type' => 'none',
      'title' => 'Dashboard',
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
  $handler->name = 'page_dashboard_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Dashboard V3',
    'no_blocks' => 1,
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
  $display->title = 'Dashboard';
  $display->uuid = '1be04af6-09a3-4130-a233-e0e639f38fef';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9259219c-74a0-44d7-9d72-58eb51736b3e';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Dashboard Tools',
    'title' => 'Tools',
    'body' => '<p>
  <div class="btn-group">
    <a href="/node/add/game-results" class="btn btn-default">Report a Battle</a>
    <a href="/node/add/gallery" class="btn btn-default">Create a Gallery</a>
    <a href="/node/add/blog" class="btn btn-default">Create a Blog Post</a>
    <button type="button" class="btn btn-default" data-toggle="collapse" data-target="#calltobattle">Call to Battle</button>
    <button type="button" class="btn btn-default" data-toggle="collapse" data-target="#chronicle">Chronicle</button>
  <a href="/dashboard/manage-chronicle" class="btn btn-default">Manage Chronicle</a>
  </div>
</p>

<div id="chronicle" class="collapse">
    <div class="panel panel-default">
      <div class="panel-heading">
        <span class="pull-right">
          <span class="glyphicon glyphicon-question-sign" data-toggle="popover" title="Chronicle" data-content="Chronicle your army\'s deeds. This will also generate an item on your feed."></span>
          </span>
        <h3 class="panel-title">Chronicle</h3>
      </div>
      <div class="panel-body">
<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'army_event\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
      </div>
    </div>
</div>

<div id="calltobattle" class="collapse">
    <div class="panel panel-default">
      <div class="panel-heading">
        <span class="pull-right">
          <span class="glyphicon glyphicon-question-sign" data-toggle="popover" title="Call To Battle" data-content="Request the desire to slay toy soldiers."></span>
          </span>
        <h3 class="panel-title">Call To Battle</h3>
      </div>
      <div class="panel-body">
<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'call_to_battle\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
      </div>
    </div>
</div>',
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
      'context_class' => 'panel-primary',
    ),
    'style' => 'bootstrap_panel',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9259219c-74a0-44d7-9d72-58eb51736b3e';
  $display->content['new-9259219c-74a0-44d7-9d72-58eb51736b3e'] = $pane;
  $display->panels['contentmain'][0] = 'new-9259219c-74a0-44d7-9d72-58eb51736b3e';
  $pane = new stdClass();
  $pane->pid = 'new-1eb58671-edc2-4dcd-9b05-edcd23e34093';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'master_v2_challenges-panel_pane_2';
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
      'context_class' => 'panel-warning',
    ),
    'style' => 'bootstrap_panel',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1eb58671-edc2-4dcd-9b05-edcd23e34093';
  $display->content['new-1eb58671-edc2-4dcd-9b05-edcd23e34093'] = $pane;
  $display->panels['contentmain'][1] = 'new-1eb58671-edc2-4dcd-9b05-edcd23e34093';
  $pane = new stdClass();
  $pane->pid = 'new-1b7ba114-eb2b-454e-8fb0-85c22629fe2c';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Feeds and Quick Battle',
    'title' => '',
    'body' => '<div class="row">
  <div class="col-sm-6">
    <div class="panel panel-default">
      <div class="panel-heading">
        <span class="pull-right">
          <span class="glyphicon glyphicon-question-sign" data-toggle="popover" title="Quick Battles" data-content="You must enter at least one army on your profile to use this form.  Do not use this form to submit league or tournament battles."></span>
          </span>
        <h3 class="panel-title">Quick Battle</h3>
      </div>
      <div class="panel-body">
<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'quick_battle\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
      </div>
    </div>
  </div>
  <div class="col-sm-6">
    <div class="panel panel-default">
      <div class="panel-heading">
        <h3 class="panel-title">Feed</h3>
      </div>
      <div class="panel-body">
        <?php print views_embed_view("message_feeds" , "panel_pane_3"); ?> 
      </div>
    </div>
  </div>
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1b7ba114-eb2b-454e-8fb0-85c22629fe2c';
  $display->content['new-1b7ba114-eb2b-454e-8fb0-85c22629fe2c'] = $pane;
  $display->panels['contentmain'][2] = 'new-1b7ba114-eb2b-454e-8fb0-85c22629fe2c';
  $pane = new stdClass();
  $pane->pid = 'new-a289e8a3-ee6e-4e55-9185-50379b666a94';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'unacknowledged-panel_pane_1';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a289e8a3-ee6e-4e55-9185-50379b666a94';
  $display->content['new-a289e8a3-ee6e-4e55-9185-50379b666a94'] = $pane;
  $display->panels['contentmain'][3] = 'new-a289e8a3-ee6e-4e55-9185-50379b666a94';
  $pane = new stdClass();
  $pane->pid = 'new-2aecc907-8fc1-4e4a-ad2d-73a6857f1ee3';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comment Feeds',
    'title' => '',
    'body' => '<div class="row">
  <div class="col-sm-6">
    <div class="panel panel-default">
      <div class="panel-heading">
        <span class="pull-right">
          <span class="glyphicon glyphicon-question-sign" data-toggle="popover" title="Comments" data-content="Behold! Recent comments to your posts."></span>
          </span>
        <h3 class="panel-title">Comments</h3>
      </div>
      <div class="panel-body">
        <?php print views_embed_view("dashboard_comment_feed" , "panel_pane_1"); ?> 
      </div>
    </div>
  </div>
  <div class="col-sm-6">
    <div class="panel panel-default">
      <div class="panel-heading">
        <span class="pull-right">
          <span class="glyphicon glyphicon-question-sign" data-toggle="popover" data-placement="left" title="Comments" data-content="Recent replies to your comments."></span>
          </span>
        <h3 class="panel-title">Replies</h3>
      </div>
      <div class="panel-body">
        <?php print views_embed_view("dashboard_comment_feed" , "panel_pane_2"); ?> 
      </div>
    </div>
  </div>
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2aecc907-8fc1-4e4a-ad2d-73a6857f1ee3';
  $display->content['new-2aecc907-8fc1-4e4a-ad2d-73a6857f1ee3'] = $pane;
  $display->panels['contentmain'][4] = 'new-2aecc907-8fc1-4e4a-ad2d-73a6857f1ee3';
  $pane = new stdClass();
  $pane->pid = 'new-560dfc71-1055-40f3-b8bb-c2b3270f9c9d';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'missing_meta-panel_pane_1';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '560dfc71-1055-40f3-b8bb-c2b3270f9c9d';
  $display->content['new-560dfc71-1055-40f3-b8bb-c2b3270f9c9d'] = $pane;
  $display->panels['contentmain'][5] = 'new-560dfc71-1055-40f3-b8bb-c2b3270f9c9d';
  $pane = new stdClass();
  $pane->pid = 'new-f04a961c-40e6-4db5-a463-5dffdb541b5a';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_managed_leagues-panel_pane_1';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'f04a961c-40e6-4db5-a463-5dffdb541b5a';
  $display->content['new-f04a961c-40e6-4db5-a463-5dffdb541b5a'] = $pane;
  $display->panels['contentmain'][6] = 'new-f04a961c-40e6-4db5-a463-5dffdb541b5a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard__panel_context_1e5823c0-f5ce-496d-b174-a9e20d5b091d';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->title = 'Dashboard';
  $display->uuid = 'ef0fe0e7-b666-46f4-ab0a-235dc982594f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard__panel_context_1e5823c0-f5ce-496d-b174-a9e20d5b091d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f190b5fc-4db0-4c9d-94ea-c9287b1884fa';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_all_profile_complete-panel_pane_1';
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
  $pane->uuid = 'f190b5fc-4db0-4c9d-94ea-c9287b1884fa';
  $display->content['new-f190b5fc-4db0-4c9d-94ea-c9287b1884fa'] = $pane;
  $display->panels['contentmain'][0] = 'new-f190b5fc-4db0-4c9d-94ea-c9287b1884fa';
  $pane = new stdClass();
  $pane->pid = 'new-8143f3e3-dd64-4de2-8ecb-39e088185c65';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'war_zone_all_player_dashboard-panel_pane_1';
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
  $pane->uuid = '8143f3e3-dd64-4de2-8ecb-39e088185c65';
  $display->content['new-8143f3e3-dd64-4de2-8ecb-39e088185c65'] = $pane;
  $display->panels['contentmain'][1] = 'new-8143f3e3-dd64-4de2-8ecb-39e088185c65';
  $pane = new stdClass();
  $pane->pid = 'new-74ac3d09-3b0c-48bd-9910-86aa893ea0ea';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_managed_leagues-panel_pane_1';
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
  $pane->uuid = '74ac3d09-3b0c-48bd-9910-86aa893ea0ea';
  $display->content['new-74ac3d09-3b0c-48bd-9910-86aa893ea0ea'] = $pane;
  $display->panels['contentmain'][2] = 'new-74ac3d09-3b0c-48bd-9910-86aa893ea0ea';
  $pane = new stdClass();
  $pane->pid = 'new-24ac1027-a2e1-455f-acb7-8bdb3370d72b';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_group_content-panel_pane_1';
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
  $pane->uuid = '24ac1027-a2e1-455f-acb7-8bdb3370d72b';
  $display->content['new-24ac1027-a2e1-455f-acb7-8bdb3370d72b'] = $pane;
  $display->panels['contentmain'][3] = 'new-24ac1027-a2e1-455f-acb7-8bdb3370d72b';
  $pane = new stdClass();
  $pane->pid = 'new-33e9a872-1af4-4eda-95a2-928f1f248289';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'missing_meta-panel_pane_1';
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
  $pane->uuid = '33e9a872-1af4-4eda-95a2-928f1f248289';
  $display->content['new-33e9a872-1af4-4eda-95a2-928f1f248289'] = $pane;
  $display->panels['contentmain'][4] = 'new-33e9a872-1af4-4eda-95a2-928f1f248289';
  $pane = new stdClass();
  $pane->pid = 'new-7cdfeeef-221d-4a0e-9cc8-9facab6a8e79';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'master_v2_challenges-panel_pane_2';
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
  $pane->uuid = '7cdfeeef-221d-4a0e-9cc8-9facab6a8e79';
  $display->content['new-7cdfeeef-221d-4a0e-9cc8-9facab6a8e79'] = $pane;
  $display->panels['contentmain'][5] = 'new-7cdfeeef-221d-4a0e-9cc8-9facab6a8e79';
  $pane = new stdClass();
  $pane->pid = 'new-9e3251fd-ca0d-468d-91df-e291feca00a1';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_all_following_content-panel_pane_1';
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
  $pane->uuid = '9e3251fd-ca0d-468d-91df-e291feca00a1';
  $display->content['new-9e3251fd-ca0d-468d-91df-e291feca00a1'] = $pane;
  $display->panels['contentmain'][6] = 'new-9e3251fd-ca0d-468d-91df-e291feca00a1';
  $pane = new stdClass();
  $pane->pid = 'new-5cd58f19-2821-4d28-86f2-260058019eef';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'unacknowledged-panel_pane_1';
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
  $pane->uuid = '5cd58f19-2821-4d28-86f2-260058019eef';
  $display->content['new-5cd58f19-2821-4d28-86f2-260058019eef'] = $pane;
  $display->panels['contentmain'][7] = 'new-5cd58f19-2821-4d28-86f2-260058019eef';
  $pane = new stdClass();
  $pane->pid = 'new-5362db0c-5bc3-42c9-902e-6d491059bd35';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_all_modelling_projects-panel_pane_1';
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
  $pane->uuid = '5362db0c-5bc3-42c9-902e-6d491059bd35';
  $display->content['new-5362db0c-5bc3-42c9-902e-6d491059bd35'] = $pane;
  $display->panels['contentmain'][8] = 'new-5362db0c-5bc3-42c9-902e-6d491059bd35';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  return $pages;

}
