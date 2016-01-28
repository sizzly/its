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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '44bc328d-be02-441e-a39f-286c2e836be5';
    $display->content['new-44bc328d-be02-441e-a39f-286c2e836be5'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-44bc328d-be02-441e-a39f-286c2e836be5';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3862ea0f-3273-45db-8a8b-4e9eeab80ccb';
    $display->content['new-3862ea0f-3273-45db-8a8b-4e9eeab80ccb'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-3862ea0f-3273-45db-8a8b-4e9eeab80ccb';
    $pane = new stdClass();
    $pane->pid = 'new-60837b5b-424e-46f2-81e3-7e2e26d2e102';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'custom';
    $pane->subtype = 'posts_update_no_battle';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '60837b5b-424e-46f2-81e3-7e2e26d2e102';
    $display->content['new-60837b5b-424e-46f2-81e3-7e2e26d2e102'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-60837b5b-424e-46f2-81e3-7e2e26d2e102';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '04c10d3f-f08a-46c9-95bf-59b550253acb';
    $display->content['new-04c10d3f-f08a-46c9-95bf-59b550253acb'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-04c10d3f-f08a-46c9-95bf-59b550253acb';
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
  $page->path = 'munitions/modeling-projects';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Modeling Projects',
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
          'value' => 'Modeling Projects',
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
    $pane->pid = 'new-a6bbc8dd-a67b-4431-88ec-dc44050bee1e';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nav Bar',
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
      <a class="navbar-brand" href="#">Modeling Projects</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/munitions/modeling-projects/list">All Projects</a></li>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6bbc8dd-a67b-4431-88ec-dc44050bee1e';
    $display->content['new-a6bbc8dd-a67b-4431-88ec-dc44050bee1e'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-a6bbc8dd-a67b-4431-88ec-dc44050bee1e';
    $pane = new stdClass();
    $pane->pid = 'new-2f0de72e-4107-4db8-986d-c8dd1899f3c4';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2f0de72e-4107-4db8-986d-c8dd1899f3c4';
    $display->content['new-2f0de72e-4107-4db8-986d-c8dd1899f3c4'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-2f0de72e-4107-4db8-986d-c8dd1899f3c4';
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
