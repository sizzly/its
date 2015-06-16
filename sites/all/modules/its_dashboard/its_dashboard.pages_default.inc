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
  $page->path = 'dashboard';
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
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => '',
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
  $handler->name = 'page_dashboard_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
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
  $handler->name = 'page_dashboard_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Dashboard V2',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = '41595ecd-0246-4dc7-abc4-a4c7b6fccb36';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d14be0a4-59c1-4c84-8f07-35308acc6fcf';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd14be0a4-59c1-4c84-8f07-35308acc6fcf';
    $display->content['new-d14be0a4-59c1-4c84-8f07-35308acc6fcf'] = $pane;
    $display->panels['contentmain'][0] = 'new-d14be0a4-59c1-4c84-8f07-35308acc6fcf';
    $pane = new stdClass();
    $pane->pid = 'new-1e6a6762-9af4-407f-9189-d7326bddb546';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_armies-panel_pane_1';
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
    $pane->uuid = '1e6a6762-9af4-407f-9189-d7326bddb546';
    $display->content['new-1e6a6762-9af4-407f-9189-d7326bddb546'] = $pane;
    $display->panels['contentmain'][1] = 'new-1e6a6762-9af4-407f-9189-d7326bddb546';
    $pane = new stdClass();
    $pane->pid = 'new-9d1036ad-3416-4c52-b3a7-382e30a03562';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9d1036ad-3416-4c52-b3a7-382e30a03562';
    $display->content['new-9d1036ad-3416-4c52-b3a7-382e30a03562'] = $pane;
    $display->panels['contentmain'][2] = 'new-9d1036ad-3416-4c52-b3a7-382e30a03562';
    $pane = new stdClass();
    $pane->pid = 'new-6ce150c0-bbbe-4b75-beca-ae99967bf172';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6ce150c0-bbbe-4b75-beca-ae99967bf172';
    $display->content['new-6ce150c0-bbbe-4b75-beca-ae99967bf172'] = $pane;
    $display->panels['contentmain'][3] = 'new-6ce150c0-bbbe-4b75-beca-ae99967bf172';
    $pane = new stdClass();
    $pane->pid = 'new-f0f3a478-a5b3-455f-b9dd-769600769c11';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'message_feeds-panel_pane_3';
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
    $pane->uuid = 'f0f3a478-a5b3-455f-b9dd-769600769c11';
    $display->content['new-f0f3a478-a5b3-455f-b9dd-769600769c11'] = $pane;
    $display->panels['contentmain'][4] = 'new-f0f3a478-a5b3-455f-b9dd-769600769c11';
    $pane = new stdClass();
    $pane->pid = 'new-3ab8be3d-b5a6-412e-a0a9-3808d78e0118';
    $pane->panel = 'sidebar';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_user_1',
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
    $pane->uuid = '3ab8be3d-b5a6-412e-a0a9-3808d78e0118';
    $display->content['new-3ab8be3d-b5a6-412e-a0a9-3808d78e0118'] = $pane;
    $display->panels['sidebar'][0] = 'new-3ab8be3d-b5a6-412e-a0a9-3808d78e0118';
    $pane = new stdClass();
    $pane->pid = 'new-e21e228a-59b9-4f55-b048-3eeb9ac55f5f';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-quick-actions';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = 'e21e228a-59b9-4f55-b048-3eeb9ac55f5f';
    $display->content['new-e21e228a-59b9-4f55-b048-3eeb9ac55f5f'] = $pane;
    $display->panels['sidebar'][1] = 'new-e21e228a-59b9-4f55-b048-3eeb9ac55f5f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_all_content_stats';
  $page->task = 'page';
  $page->admin_title = 'Dashboard: All: Content Stats';
  $page->admin_description = '';
  $page->path = 'dashboard/content-stats';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Content Stats',
    'name' => 'user-menu',
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
  $handler->name = 'page_dashboard_all_content_stats__panel_context_043e22ec-3827-4249-943c-82de6cb2e1d8';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_all_content_stats';
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
  $display->title = 'Content Statistics';
  $display->uuid = '4e46b0bf-5017-450c-a44a-3601ad29564a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f603cc5e-158f-42eb-948b-8d97017926d7';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Stat Tab Panel',
      'title' => '',
      'body' => '<div role="tabpanel">

  <!-- Nav tabs -->
  <ul class="nav nav-tabs" role="tablist">
    <li role="presentation" class="active"><a href="#today" aria-controls="today" role="tab" data-toggle="tab">Today</a></li>
    <li role="presentation"><a href="#week" aria-controls="week" role="tab" data-toggle="tab">Week</a></li>
    <li role="presentation"><a href="#month" aria-controls="month" role="tab" data-toggle="tab">Month</a></li>
    <li role="presentation"><a href="#year" aria-controls="year" role="tab" data-toggle="tab">Year</a></li>
    <li role="presentation"><a href="#alltime" aria-controls="alltime" role="tab" data-toggle="tab">All Time</a></li>
  </ul>

  <!-- Tab panes -->
  <div class="tab-content">
    <div role="tabpanel" class="tab-pane active" id="today"><?php print views_embed_view("dashboard_all_content_stats" , "panel_pane_5"); ?></div>
    <div role="tabpanel" class="tab-pane" id="week"><?php print views_embed_view("dashboard_all_content_stats" , "panel_pane_4"); ?></div>
    <div role="tabpanel" class="tab-pane" id="month"><?php print views_embed_view("dashboard_all_content_stats" , "panel_pane_3"); ?></div>
    <div role="tabpanel" class="tab-pane" id="year"><?php print views_embed_view("dashboard_all_content_stats" , "panel_pane_6"); ?></div>
    <div role="tabpanel" class="tab-pane" id="alltime"><?php print views_embed_view("dashboard_all_content_stats" , "panel_pane_2"); ?></div>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f603cc5e-158f-42eb-948b-8d97017926d7';
    $display->content['new-f603cc5e-158f-42eb-948b-8d97017926d7'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-f603cc5e-158f-42eb-948b-8d97017926d7';
    $pane = new stdClass();
    $pane->pid = 'new-f488af8f-9256-494c-a9a5-56e43113d74a';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_all_content_stats-panel_pane_1';
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
    $pane->uuid = 'f488af8f-9256-494c-a9a5-56e43113d74a';
    $display->content['new-f488af8f-9256-494c-a9a5-56e43113d74a'] = $pane;
    $display->panels['sidebar'][0] = 'new-f488af8f-9256-494c-a9a5-56e43113d74a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_all_content_stats'] = $page;

  return $pages;

}
