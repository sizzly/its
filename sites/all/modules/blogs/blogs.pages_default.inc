<?php
/**
 * @file
 * blogs.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function blogs_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Blog Entry',
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
        'label' => 'Body',
        'hidden_field' => 0,
      ),
      'field_blog_army' => array(
        'override' => 0,
        'label' => 'Tags',
        'hidden_field' => 0,
      ),
      'field_rate_content' => array(
        'override' => 0,
        'label' => 'Rate Content',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'field_points_per_army' => array(
        'override' => 1,
        'label' => 'Points',
        'hidden_field' => '1',
      ),
      'field_site_event' => array(
        'override' => 1,
        'label' => 'List Crit',
        'hidden_field' => '1',
      ),
      'field_your_army' => array(
        'override' => 1,
        'label' => 'Army',
        'hidden_field' => '1',
      ),
      'field_opponent_s_army' => array(
        'override' => 1,
        'label' => 'Designed to defeat',
        'hidden_field' => '1',
      ),
      'field_list_crit_tags' => array(
        'override' => 1,
        'label' => 'List Crit Tags',
        'hidden_field' => '1',
      ),
      'field_batteresult_commander' => array(
        'override' => 1,
        'label' => 'Commander',
        'hidden_field' => '1',
      ),
      'field_listcrit_component_units' => array(
        'override' => 1,
        'label' => 'Component Units',
        'hidden_field' => '1',
      ),
      'field_allied_detatchment' => array(
        'override' => 1,
        'label' => 'Allied Detatchment',
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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit_form_mutator_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function blogs_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gazetteer_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Gazetteer Landing Page';
  $page->admin_description = '';
  $page->path = 'gazetteer/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Gazetteer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Gazetteer',
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
  $handler->name = 'page_gazetteer_landing_page__panel_context_caf88edd-4546-4f0d-b437-d6b4cc4f2f52';
  $handler->task = 'page';
  $handler->subtask = 'gazetteer_landing_page';
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
    'name' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Gazetteer',
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
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
  $display->uuid = '0a3c6fbe-cb58-4cf3-b372-b426899be541';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d72a366-426b-4874-9849-d12ba52cff89';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_4';
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
    $pane->uuid = '9d72a366-426b-4874-9849-d12ba52cff89';
    $display->content['new-9d72a366-426b-4874-9849-d12ba52cff89'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-9d72a366-426b-4874-9849-d12ba52cff89';
    $pane = new stdClass();
    $pane->pid = 'new-d5b99858-2ef4-4dd7-b71d-361b9a708f67';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_3';
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
    $pane->uuid = 'd5b99858-2ef4-4dd7-b71d-361b9a708f67';
    $display->content['new-d5b99858-2ef4-4dd7-b71d-361b9a708f67'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-d5b99858-2ef4-4dd7-b71d-361b9a708f67';
    $pane = new stdClass();
    $pane->pid = 'new-679f309c-4c8f-4620-b34a-f8e5bf641494';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_5';
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
    $pane->uuid = '679f309c-4c8f-4620-b34a-f8e5bf641494';
    $display->content['new-679f309c-4c8f-4620-b34a-f8e5bf641494'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-679f309c-4c8f-4620-b34a-f8e5bf641494';
    $pane = new stdClass();
    $pane->pid = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Gazetteer</h1>
<h2> player blogs, galleries, and discussions</h2>
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
    $pane->uuid = 'aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
    $display->content['new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc'] = $pane;
    $display->panels['header'][0] = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
    $pane = new stdClass();
    $pane->pid = 'new-d03117a9-5b8c-44be-97e3-d5c0e9f68093';
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
      <a class="navbar-brand" href="#">Gazatteer</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/blog">Blogs</a></li>
        <li><a href="/galleries">Galleries</a></li>
        <li><a href="/forum">Discussions</a></li>

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
    $pane->uuid = 'd03117a9-5b8c-44be-97e3-d5c0e9f68093';
    $display->content['new-d03117a9-5b8c-44be-97e3-d5c0e9f68093'] = $pane;
    $display->panels['header'][1] = 'new-d03117a9-5b8c-44be-97e3-d5c0e9f68093';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gazetteer_landing_page'] = $page;

  return $pages;

}
