<?php
/**
 * @file
 * page_manager_handlers.group_view__clubs.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'group_view__clubs';
$handler->task = 'group_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Clubs',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'clubs',
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
$display->title = '%group:title';
$display->uuid = '967baed3-9825-48ea-88ee-90992876daea';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9070b9ef-2458-4ffd-a246-9bcce028b1f9';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'groups_all_page_layout-panel_pane_2';
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
  $pane->uuid = '9070b9ef-2458-4ffd-a246-9bcce028b1f9';
  $display->content['new-9070b9ef-2458-4ffd-a246-9bcce028b1f9'] = $pane;
  $display->panels['contentmainbottom'][0] = 'new-9070b9ef-2458-4ffd-a246-9bcce028b1f9';
  $pane = new stdClass();
  $pane->pid = 'new-f7130b6b-899f-4782-af8e-3f436b6de3b7';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
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
    'admin_title' => 'Anonymous Tools',
    'title' => '',
    'body' => '<p>Log in or register to join this club</p>',
    'format' => 'pure_html',
    'substitute' => 1,
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f7130b6b-899f-4782-af8e-3f436b6de3b7';
  $display->content['new-f7130b6b-899f-4782-af8e-3f436b6de3b7'] = $pane;
  $display->panels['contentmainbottom'][1] = 'new-f7130b6b-899f-4782-af8e-3f436b6de3b7';
  $pane = new stdClass();
  $pane->pid = 'new-ffbdb29f-b3f3-49d9-9999-08e6e32e69ce';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'groups_all_page_layout-panel_pane_6';
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
  $pane->uuid = 'ffbdb29f-b3f3-49d9-9999-08e6e32e69ce';
  $display->content['new-ffbdb29f-b3f3-49d9-9999-08e6e32e69ce'] = $pane;
  $display->panels['contentmainbottom'][2] = 'new-ffbdb29f-b3f3-49d9-9999-08e6e32e69ce';
  $pane = new stdClass();
  $pane->pid = 'new-3e1e6717-011c-4ca7-8f61-3b3a6ec0ac2c';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'groups_all_forums-panel_pane_1';
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
  $pane->uuid = '3e1e6717-011c-4ca7-8f61-3b3a6ec0ac2c';
  $display->content['new-3e1e6717-011c-4ca7-8f61-3b3a6ec0ac2c'] = $pane;
  $display->panels['contentmainbottom'][3] = 'new-3e1e6717-011c-4ca7-8f61-3b3a6ec0ac2c';
  $pane = new stdClass();
  $pane->pid = 'new-4034dfb0-c50b-4dff-a23a-12e22920b96d';
  $pane->panel = 'contentmainleft';
  $pane->type = 'views_panes';
  $pane->subtype = 'groups_all_page_layout-panel_pane_1';
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
  $pane->uuid = '4034dfb0-c50b-4dff-a23a-12e22920b96d';
  $display->content['new-4034dfb0-c50b-4dff-a23a-12e22920b96d'] = $pane;
  $display->panels['contentmainleft'][0] = 'new-4034dfb0-c50b-4dff-a23a-12e22920b96d';
  $pane = new stdClass();
  $pane->pid = 'new-d69a1d3c-15d1-456c-a1f6-5ed5a5f5d8ee';
  $pane->panel = 'contentmainleft';
  $pane->type = 'views_panes';
  $pane->subtype = 'groups_all_page_layout-panel_pane_5';
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
  $pane->uuid = 'd69a1d3c-15d1-456c-a1f6-5ed5a5f5d8ee';
  $display->content['new-d69a1d3c-15d1-456c-a1f6-5ed5a5f5d8ee'] = $pane;
  $display->panels['contentmainleft'][1] = 'new-d69a1d3c-15d1-456c-a1f6-5ed5a5f5d8ee';
  $pane = new stdClass();
  $pane->pid = 'new-483b6a5c-08f5-449f-8e8c-b02f1578935a';
  $pane->panel = 'contentmainright';
  $pane->type = 'views_panes';
  $pane->subtype = 'groups_all_page_layout-panel_pane_3';
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
  $pane->uuid = '483b6a5c-08f5-449f-8e8c-b02f1578935a';
  $display->content['new-483b6a5c-08f5-449f-8e8c-b02f1578935a'] = $pane;
  $display->panels['contentmainright'][0] = 'new-483b6a5c-08f5-449f-8e8c-b02f1578935a';
  $pane = new stdClass();
  $pane->pid = 'new-94d519f6-2b3b-43a8-b834-81d5c6c2e68a';
  $pane->panel = 'contentmainright';
  $pane->type = 'views_panes';
  $pane->subtype = 'groups_all_page_layout-panel_pane_4';
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
  $pane->uuid = '94d519f6-2b3b-43a8-b834-81d5c6c2e68a';
  $display->content['new-94d519f6-2b3b-43a8-b834-81d5c6c2e68a'] = $pane;
  $display->panels['contentmainright'][1] = 'new-94d519f6-2b3b-43a8-b834-81d5c6c2e68a';
  $pane = new stdClass();
  $pane->pid = 'new-c1981e14-a61e-486e-ad9e-f04a9d6ea20e';
  $pane->panel = 'contentmainright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Distinction place holder',
    'title' => '',
    'body' => '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">0</h2>
  <h5>distinction</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-flash fa-3" aria-hidden="true"></span>
  </div>
</div>',
    'format' => 'pure_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c1981e14-a61e-486e-ad9e-f04a9d6ea20e';
  $display->content['new-c1981e14-a61e-486e-ad9e-f04a9d6ea20e'] = $pane;
  $display->panels['contentmainright'][2] = 'new-c1981e14-a61e-486e-ad9e-f04a9d6ea20e';
  $pane = new stdClass();
  $pane->pid = 'new-15c2c046-02b9-4e6a-a591-49c80d2789b4';
  $pane->panel = 'contentmaintop';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Shortcuts',
    'title' => '',
    'body' => '<div class="grey-container shortcut-wrapper">
  <a href="#about" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-info-sign" aria-hidden="true"></span>
    </span>
    <span class="text">About</span>
  </a>

  <a href="#campaign-badges" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-screenshot" aria-hidden="true"></span>
    </span>
    <span class="text">News</span>
  </a>

  <a href="#forum" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
    </span>
    <span class="text">Forum</span>
  </a>
</div>',
    'format' => 'pure_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '15c2c046-02b9-4e6a-a591-49c80d2789b4';
  $display->content['new-15c2c046-02b9-4e6a-a591-49c80d2789b4'] = $pane;
  $display->panels['contentmaintop'][0] = 'new-15c2c046-02b9-4e6a-a591-49c80d2789b4';
  $pane = new stdClass();
  $pane->pid = 'new-62cf5962-3897-4ad6-8c07-a3356abf1de7';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'groups_all_page_layout-panel_pane_1';
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
  $pane->uuid = '62cf5962-3897-4ad6-8c07-a3356abf1de7';
  $display->content['new-62cf5962-3897-4ad6-8c07-a3356abf1de7'] = $pane;
  $display->panels['sidebar'][0] = 'new-62cf5962-3897-4ad6-8c07-a3356abf1de7';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.groups_all_page_layout' => 'views_view.groups_all_page_layout',
  'views_view.groups_all_forums' => 'views_view.groups_all_forums',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
