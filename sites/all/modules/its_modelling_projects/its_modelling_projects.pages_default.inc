<?php
/**
 * @file
 * its_modelling_projects.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_modelling_projects_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_5e790d76-0be2-46d4-8aa7-cd1b08e08e94';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'title' => 'Modeling Projects',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'models' => 'models',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Munitions
Modeling Projects',
    'panels_breadcrumbs_paths' => 'munitions
munitions/modeling-projects',
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
  $display->title = '';
  $display->uuid = '72bcc2f4-7b57-40d0-b76c-235fd024d44d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dce37391-fbab-4186-b887-bb2baa56f15d';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'models_all_page_layout-panel_pane_3';
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
    $pane->uuid = 'dce37391-fbab-4186-b887-bb2baa56f15d';
    $display->content['new-dce37391-fbab-4186-b887-bb2baa56f15d'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-dce37391-fbab-4186-b887-bb2baa56f15d';
    $pane = new stdClass();
    $pane->pid = 'new-9306dd48-ec00-4f53-a559-ea836ed15ba1';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_all_image_field_displays-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'id' => '%node:nid',
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
    $pane->uuid = '9306dd48-ec00-4f53-a559-ea836ed15ba1';
    $display->content['new-9306dd48-ec00-4f53-a559-ea836ed15ba1'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-9306dd48-ec00-4f53-a559-ea836ed15ba1';
    $pane = new stdClass();
    $pane->pid = 'new-44bc328d-be02-441e-a39f-286c2e836be5';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '44bc328d-be02-441e-a39f-286c2e836be5';
    $display->content['new-44bc328d-be02-441e-a39f-286c2e836be5'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-44bc328d-be02-441e-a39f-286c2e836be5';
    $pane = new stdClass();
    $pane->pid = 'new-3862ea0f-3273-45db-8a8b-4e9eeab80ccb';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3862ea0f-3273-45db-8a8b-4e9eeab80ccb';
    $display->content['new-3862ea0f-3273-45db-8a8b-4e9eeab80ccb'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-3862ea0f-3273-45db-8a8b-4e9eeab80ccb';
    $pane = new stdClass();
    $pane->pid = 'new-60837b5b-424e-46f2-81e3-7e2e26d2e102';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'custom';
    $pane->subtype = 'posts_update_no_battle';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '60837b5b-424e-46f2-81e3-7e2e26d2e102';
    $display->content['new-60837b5b-424e-46f2-81e3-7e2e26d2e102'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-60837b5b-424e-46f2-81e3-7e2e26d2e102';
    $pane = new stdClass();
    $pane->pid = 'new-04c10d3f-f08a-46c9-95bf-59b550253acb';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_1';
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
    $pane->uuid = '04c10d3f-f08a-46c9-95bf-59b550253acb';
    $display->content['new-04c10d3f-f08a-46c9-95bf-59b550253acb'] = $pane;
    $display->panels['contentmainbottom'][5] = 'new-04c10d3f-f08a-46c9-95bf-59b550253acb';
    $pane = new stdClass();
    $pane->pid = 'new-e8d533ef-5336-405c-adb2-75d22f03a3c2';
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
    $pane->uuid = 'e8d533ef-5336-405c-adb2-75d22f03a3c2';
    $display->content['new-e8d533ef-5336-405c-adb2-75d22f03a3c2'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-e8d533ef-5336-405c-adb2-75d22f03a3c2';
    $pane = new stdClass();
    $pane->pid = 'new-0da49028-27e0-47bb-ad1e-3e1cfb6eead4';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'models_all_page_layout-panel_pane_1';
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
    $pane->uuid = '0da49028-27e0-47bb-ad1e-3e1cfb6eead4';
    $display->content['new-0da49028-27e0-47bb-ad1e-3e1cfb6eead4'] = $pane;
    $display->panels['contentmainright'][0] = 'new-0da49028-27e0-47bb-ad1e-3e1cfb6eead4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e8d533ef-5336-405c-adb2-75d22f03a3c2';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_5e790d76-0be2-46d4-8aa7-cd1b08e08e94'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function its_modelling_projects_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'modeling_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Modeling Landing Page';
  $page->admin_description = '';
  $page->path = 'munitions/modeling-projects/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'main-menu',
    'weight' => '-50',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Modeling Projects',
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
  $handler->name = 'page_modeling_landing_page__panel_context_0e4d11d2-d2e7-44f5-ac86-36a190e110df';
  $handler->task = 'page';
  $handler->subtask = 'modeling_landing_page';
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
    'name' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Modeling Projects | iToysoldiers',
        ),
        'description' => array(
          'value' => 'Track your modeling progress on iToysoldiers.  No matter what game you play you can post your project pictures, status and keep track of your progress and model collection.',
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
  $display->title = 'Modeling Projects';
  $display->uuid = '9ceec79d-c8a9-4f93-bb0f-0e0bb2771a81';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c98a5239-4a43-48cc-9168-569766b76439';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'models',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c98a5239-4a43-48cc-9168-569766b76439';
    $display->content['new-c98a5239-4a43-48cc-9168-569766b76439'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-c98a5239-4a43-48cc-9168-569766b76439';
    $pane = new stdClass();
    $pane->pid = 'new-7ed3acb8-1780-42e9-a00b-fe51663fee4c';
    $pane->panel = 'contentmainleft';
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
      'admin_title' => 'Copy: Anonymous',
      'title' => 'Track Your Hobby Progress',
      'body' => '<p>Modeling Projects at iToysoldiers let you keep track of and share your hobby progress and model collections. &nbsp;How it works:</p>
<p>* Submit a collection of models</p>
<p>* Mark the collection started</p>
<p>* Post updates and photos as you go</p>
<p>* Mark the collection completed</p>
<p>* Bask in the glory of your army</p>
<p class="text-center"><a href="/user/register" class="btn btn-primary">Get Started with Modeling Projects Now</a></p>
<div class="well well-sm">
<p>Oh! And we also have a <a href="/widgets">“current project” widget</a> for your blog.&nbsp;</p>
<p>Here’s an example with my information for you to envy.</p>
        <div class="text-center">
            <button type="button" class="btn btn-primary" data-toggle="modal" data-target="#myModal">
                Example Widget
            </button>
        </div>
</div>
         <!-- Modal -->
        <div class="modal fade" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel">
            <div class="modal-dialog modal-sm" role="document">
                <div class="modal-content">
                    <div class="modal-header">
                        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                        <h4 class="modal-title" id="myModalLabel">Example</h4>
                    </div>
                    <div class="modal-body">
                        <!--insert Widget Code Here -->
                        <script type="text/javascript">
                            widgetContext = {"url": "\\/widget\\/current-project\\/16?width=100%\\u0026height=450", "width": "100%", "height": "450", "widgetid": "web_widget_iframe_3975b96452893d309931aec92087cae8", "scrolling": "auto"};
                        </script>
                        <script id="web_widget_iframe_3975b96452893d309931aec92087cae8" src="/sites/all/modules/web_widgets/iframe/web_widgets_iframe.js"></script>

                    </div>
                    <div class="modal-footer">
                      <a href="/widgets" class="btn btn-primary">All Widgets</a>
                    </div>
                </div>
            </div>
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
    $pane->uuid = '7ed3acb8-1780-42e9-a00b-fe51663fee4c';
    $display->content['new-7ed3acb8-1780-42e9-a00b-fe51663fee4c'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-7ed3acb8-1780-42e9-a00b-fe51663fee4c';
    $pane = new stdClass();
    $pane->pid = 'new-d69e3e9f-1b0d-43ea-9d73-e7cee87722e2';
    $pane->panel = 'contentmainleft';
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
      'admin_title' => 'Copy : Authenticated',
      'title' => 'Track Your Hobby Progress',
      'body' => '<p>Modeling Projects at iToysoldiers let you keep track of and share your hobby progress and model collections. &nbsp;How it works:</p>
<p>* Submit a collection of models</p>
<p>* Mark the collection started</p>
<p>* Post updates and photos as you go</p>
<p>* Mark the collection completed</p>
<p>* Bask in the glory of your army</p>
<p class="text-center"><a href="/node/add/models" class="btn btn-primary">Get Started with Modeling Projects Now</a></p>
<div class="well well-sm">
<p>Oh! And we also have a <a href="/widgets">“current project” widget</a> for your blog.&nbsp;</p>
<p>Here’s an example with my information for you to envy.</p>
        <div class="text-center">
            <button type="button" class="btn btn-primary" data-toggle="modal" data-target="#myModal">
                Example Widget
            </button>
        </div>
</div>
        <!-- Modal -->
        <div class="modal fade" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel">
            <div class="modal-dialog modal-sm" role="document">
                <div class="modal-content">
                    <div class="modal-header">
                        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                        <h4 class="modal-title" id="myModalLabel">Example</h4>
                    </div>
                    <div class="modal-body">
                        <!--insert Widget Code Here -->
                        <script type="text/javascript">
                            widgetContext = {"url": "\\/widget\\/current-project\\/16?width=100%\\u0026height=450", "width": "100%", "height": "450", "widgetid": "web_widget_iframe_3975b96452893d309931aec92087cae8", "scrolling": "auto"};
                        </script>
                        <script id="web_widget_iframe_3975b96452893d309931aec92087cae8" src="/sites/all/modules/web_widgets/iframe/web_widgets_iframe.js"></script>

                    </div>
                    <div class="modal-footer">
                      <a href="/widgets" class="btn btn-primary">All Widgets</a>
                    </div>
                </div>
            </div>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd69e3e9f-1b0d-43ea-9d73-e7cee87722e2';
    $display->content['new-d69e3e9f-1b0d-43ea-9d73-e7cee87722e2'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-d69e3e9f-1b0d-43ea-9d73-e7cee87722e2';
    $pane = new stdClass();
    $pane->pid = 'new-58de779b-4364-43e8-b8ec-13eafaeb6c17';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Stats Summary',
      'title' => 'Stat Summary',
      'body' => '<div class="list-group">
    <div class="list-group-item">
        <div class="media">
            <div class="media-left pull-left">
                <div class="activity-icon small">
                    <i class="fa fa-cogs"></i>
                </div>
            </div>
            <div class="media-body">
                <strong class="font-14">Modeling Projects</strong>
                <div class="text-muted"><span class="badge"><?php print views_embed_view("modeling_all_stats", "panel_pane_1"); ?></span></div>
            </div>
        </div>
    </div>
    <div class="list-group-item">
        <div class="media">
            <div class="media-left pull-left">
                <div class="activity-icon small">
                    <i class="fa fa-plus-square"></i>
                </div>
            </div>
            <div class="media-body">
                <strong class="font-14">Aquired Models</strong>
                <div class="text-muted"><span class="badge"><?php print views_embed_view("modeling_all_stats", "panel_pane_2"); ?></span></div>
            </div>
        </div>
    </div>
    <div class="list-group-item">
        <div class="media">
            <div class="media-left pull-left">
                <div class="activity-icon small">
                    <i class="fa fa-paint-brush"></i>
                </div>
            </div>
            <div class="media-body">
                <strong class="font-14">Models Completed</strong>
                <div class="text-muted"><span class="badge"><?php print views_embed_view("modeling_all_stats", "panel_pane_3"); ?></span></div>
            </div>
        </div>
    </div>
    <div class="list-group-item">
        <div class="media">
            <div class="media-left pull-left">
                <div class="activity-icon small">
                    <i class="fa fa-bookmark"></i>
                </div>
            </div>
            <div class="media-body">
                <strong class="font-14">Factions</strong>
                <div class="text-muted"><span class="badge"><?php print views_embed_view("modeling_all_stats", "panel_pane_4"); ?></span></div>
            </div>
        </div>
    </div>
    <div class="list-group-item">
        <div class="media">
            <div class="media-left pull-left">
                <div class="activity-icon small">
                    <i class="fa fa-trophy"></i>
                </div>
            </div>
            <div class="media-body">
                <strong class="font-14"><?php print views_embed_view("modeling_all_stats", "panel_pane_8"); ?></strong>
                <div class="text-muted">Most Completed Models</div>
            </div>
        </div>
    </div>
</div>
<div class="text-center">
    <a href="/munitions/modeling-projects/stats" class="btn btn-default" data-dismiss="modal">All Stats</a>
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
    $pane->uuid = '58de779b-4364-43e8-b8ec-13eafaeb6c17';
    $display->content['new-58de779b-4364-43e8-b8ec-13eafaeb6c17'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-58de779b-4364-43e8-b8ec-13eafaeb6c17';
    $pane = new stdClass();
    $pane->pid = 'new-796056c9-8cb0-40fc-be14-86cd43f93ef8';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'models_all_lists-panel_pane_1';
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
    $pane->uuid = '796056c9-8cb0-40fc-be14-86cd43f93ef8';
    $display->content['new-796056c9-8cb0-40fc-be14-86cd43f93ef8'] = $pane;
    $display->panels['contentmainright'][0] = 'new-796056c9-8cb0-40fc-be14-86cd43f93ef8';
    $pane = new stdClass();
    $pane->pid = 'new-eedc46ba-9e94-426b-9198-73359790748e';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'models_all_lists-panel_pane_2';
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
    $pane->uuid = 'eedc46ba-9e94-426b-9198-73359790748e';
    $display->content['new-eedc46ba-9e94-426b-9198-73359790748e'] = $pane;
    $display->panels['contentmainright'][1] = 'new-eedc46ba-9e94-426b-9198-73359790748e';
    $pane = new stdClass();
    $pane->pid = 'new-c1ce1a88-e34c-4f55-9a09-e46489b73381';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>What are  you working on?</h2>
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
    $pane->uuid = 'c1ce1a88-e34c-4f55-9a09-e46489b73381';
    $display->content['new-c1ce1a88-e34c-4f55-9a09-e46489b73381'] = $pane;
    $display->panels['header'][0] = 'new-c1ce1a88-e34c-4f55-9a09-e46489b73381';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c1ce1a88-e34c-4f55-9a09-e46489b73381';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['modeling_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'modeling_project_stats';
  $page->task = 'page';
  $page->admin_title = 'Modeling Project Stats';
  $page->admin_description = '';
  $page->path = '/munitions/modeling-projects/stats';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Stats',
    'name' => 'navigation',
    'weight' => '50',
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
  $handler->name = 'page_modeling_project_stats__panel';
  $handler->task = 'page';
  $handler->subtask = 'modeling_project_stats';
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
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Modeling Project Stats';
  $display->uuid = '6cbcfc38-ab33-422b-a82a-995c25c6506f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9b3ff1f-c049-49d4-904f-cb341bce49a5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'modeling_all_stats-panel_pane_6';
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
    $pane->uuid = 'b9b3ff1f-c049-49d4-904f-cb341bce49a5';
    $display->content['new-b9b3ff1f-c049-49d4-904f-cb341bce49a5'] = $pane;
    $display->panels['contentmain'][0] = 'new-b9b3ff1f-c049-49d4-904f-cb341bce49a5';
    $pane = new stdClass();
    $pane->pid = 'new-30234b15-d46a-457d-8ff0-6f4cb47b7300';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'modeling_all_stats-panel_pane_7';
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
    $pane->uuid = '30234b15-d46a-457d-8ff0-6f4cb47b7300';
    $display->content['new-30234b15-d46a-457d-8ff0-6f4cb47b7300'] = $pane;
    $display->panels['contentmain'][1] = 'new-30234b15-d46a-457d-8ff0-6f4cb47b7300';
    $pane = new stdClass();
    $pane->pid = 'new-ece60edf-a9d6-4432-b3e9-190dcf8c3461';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Top Row',
      'title' => '',
      'body' => '<div class="row">
    <div class="padding-md">
        <div class="row">
            <div class="col-sm-6 col-md-3">
                <a href="/munitions/modeling-projects/list">
                    <div class="panel-stat3 bg-danger">
                        <h2 class="m-top-none" id="userCount"><?php print views_embed_view("modeling_all_stats", "panel_pane_1"); ?></h2>
                        <h5>Projects</h5>
                        <div class="stat-icon">
                            <i class="fa fa-cogs fa-3x"></i>
                        </div>
                    </div>
                </a>
            </div><!-- /.col -->
            <div class="col-sm-6 col-md-3">

                <div class="panel-stat3 bg-info">
                    <h2 class="m-top-none"><?php print views_embed_view("modeling_all_stats", "panel_pane_2"); ?></h2>
                    <h5>Models Aquired</h5>
                    <div class="stat-icon">
                        <i class="fa fa-plus-square fa-3x"></i>
                    </div>
                </div>

            </div><!-- /.col -->
            <div class="col-sm-6 col-md-3">

                <div class="panel-stat3 bg-success">
                    <h2 class="m-top-none"><?php print views_embed_view("modeling_all_stats", "panel_pane_3"); ?></h2>
                    <h5>Models Completed</h5>
                    <div class="stat-icon">
                        <i class="fa fa-paint-brush fa-3x"></i>
                    </div>
                </div>

            </div><!-- /.col -->
            <div class="col-sm-6 col-md-3">

                <div class="panel-stat3 bg-warning">
                    <h2 class="m-top-none"><?php print views_embed_view("modeling_all_stats", "panel_pane_4"); ?></h2>
                    <h5>Factions</h5>
                    <div class="stat-icon">
                        <i class="fa fa-bookmark fa-3x"></i>
                    </div>
                </div>
            </div><!-- /.col -->
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ece60edf-a9d6-4432-b3e9-190dcf8c3461';
    $display->content['new-ece60edf-a9d6-4432-b3e9-190dcf8c3461'] = $pane;
    $display->panels['header'][0] = 'new-ece60edf-a9d6-4432-b3e9-190dcf8c3461';
    $pane = new stdClass();
    $pane->pid = 'new-a23cd977-6590-4d1c-85e1-32f37b6d65cc';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'modeling_all_stats-panel_pane_5';
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
    $pane->uuid = 'a23cd977-6590-4d1c-85e1-32f37b6d65cc';
    $display->content['new-a23cd977-6590-4d1c-85e1-32f37b6d65cc'] = $pane;
    $display->panels['sidebar'][0] = 'new-a23cd977-6590-4d1c-85e1-32f37b6d65cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['modeling_project_stats'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'munitions_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Munitions Landing Page';
  $page->admin_description = '';
  $page->path = 'munitions';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Munitions',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Munitions',
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
  $handler->name = 'page_munitions_landing_page__panel_context_62e05e8a-d2b4-4b69-b233-9759c509e0df';
  $handler->task = 'page';
  $handler->subtask = 'munitions_landing_page';
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
    'name' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Munitions',
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
  $display->title = '';
  $display->uuid = 'ab5299ca-a6b4-47ed-adac-64b19e5cd86c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16b663b4-1cf2-4059-8d67-f55b03e7b449';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_6';
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
    $pane->uuid = '16b663b4-1cf2-4059-8d67-f55b03e7b449';
    $display->content['new-16b663b4-1cf2-4059-8d67-f55b03e7b449'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-16b663b4-1cf2-4059-8d67-f55b03e7b449';
    $pane = new stdClass();
    $pane->pid = 'new-c4eaf961-4391-4181-b0e3-162efedb6b17';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_7';
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
    $pane->uuid = 'c4eaf961-4391-4181-b0e3-162efedb6b17';
    $display->content['new-c4eaf961-4391-4181-b0e3-162efedb6b17'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-c4eaf961-4391-4181-b0e3-162efedb6b17';
    $pane = new stdClass();
    $pane->pid = 'new-c40470f2-0336-4ff3-acba-6bad6adba576';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Munitions</h1>
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
    $pane->uuid = 'c40470f2-0336-4ff3-acba-6bad6adba576';
    $display->content['new-c40470f2-0336-4ff3-acba-6bad6adba576'] = $pane;
    $display->panels['header'][0] = 'new-c40470f2-0336-4ff3-acba-6bad6adba576';
    $pane = new stdClass();
    $pane->pid = 'new-f8eb177e-3b12-4930-a72e-e9ebeeffe444';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nav',
      'title' => '',
      'body' => '<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">Munitions</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/munitions/modeling-projects">Modeling Projects</a></li>
        <li><a href="/munitions/gaming-stores">Game Stores</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
      'format' => 'pure_html',
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
    $pane->uuid = 'f8eb177e-3b12-4930-a72e-e9ebeeffe444';
    $display->content['new-f8eb177e-3b12-4930-a72e-e9ebeeffe444'] = $pane;
    $display->panels['header'][1] = 'new-f8eb177e-3b12-4930-a72e-e9ebeeffe444';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['munitions_landing_page'] = $page;

  return $pages;

}
